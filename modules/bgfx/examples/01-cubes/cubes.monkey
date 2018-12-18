
Import mojo.app
Import bgfx
Import tools

'  Function ClearBitArray:Void( numbers:Int[], bit:Int )
'  	numbers[ (bit Shr 5) ] &= ~(1 Shl (bit & 31))
'  End
'  
'  Function SetBitArray:Void( numbers:Int[], bit:Int )
'  	numbers[ (bit Shr 5) ] |= 1 Shl (bit & 31)
'  End
'  
'  Function ToggleBitArray:Void( numbers:Int[], bit:Int )
'  	numbers[ (bit Shr 5) ] ~= 1 Shl (bit & 31)
'  End
'  
'  Function IsBitArray:Bool( numbers:Int[], bit:Int )
'  	Return ( ( numbers[ (bit Shr 5) ] Shr (bit & 31) ) & 1 ) = 1
'  End
'  
'  Function SetBitArray:Void( numbers:Int[], bit:Int, value:Int )
'  
'  	Local index:Int = bit Shr 5
'  	Local number:Int = numbers[ index ]
'  
'  	bit &= 31
'  
'  	numbers[ index ] = number ~ ( (-value ~ number) & (1 Shl bit) )
'  End

Class PosColorVertex

	Field m_x:Float
	Field m_y:Float
	Field m_z:Float
	Field m_abgr:Int

	Method New( m_x:Float, m_y:Float, m_z:Float, m_abgr:Int )
		Self.m_x = m_x
		Self.m_y = m_y
		Self.m_z = m_z
		Self.m_abgr = m_abgr
	End

	Global ms_decl:BgfxVertexDecl = New BgfxVertexDecl()

	Function Init:Void()
		bgfxVertexDeclBegin( ms_decl )
		bgfxVertexDeclAdd( ms_decl, BGFX_ATTRIB_POSITION, 3, BGFX_ATTRIB_TYPE_FLOAT )
		bgfxVertexDeclAdd( ms_decl, BGFX_ATTRIB_COLOR0, 4, BGFX_ATTRIB_TYPE_UINT8, True )
		bgfxVertexDeclEnd( ms_decl )
	End
End

Global s_cubeVertices:PosColorVertex[] = [
	New PosColorVertex( -1.0,  1.0,  1.0, $ff000000 ),
	New PosColorVertex(  1.0,  1.0,  1.0, $ff0000ff ),
	New PosColorVertex( -1.0, -1.0,  1.0, $ff00ff00 ),
	New PosColorVertex(  1.0, -1.0,  1.0, $ff00ffff ),
	New PosColorVertex( -1.0,  1.0, -1.0, $ffff0000 ),
	New PosColorVertex(  1.0,  1.0, -1.0, $ffff00ff ),
	New PosColorVertex( -1.0, -1.0, -1.0, $ffffff00 ),
	New PosColorVertex(  1.0, -1.0, -1.0, $ffffffff ) ]

Global s_cubeTriList:Int[] = [
	0, 1, 2, ' 0
	1, 3, 2,
	4, 6, 5, ' 2
	5, 6, 7,
	0, 2, 4, ' 4
	4, 2, 6,
	1, 5, 3, ' 6
	5, 7, 3,
	0, 4, 1, ' 8
	4, 5, 1,
	2, 3, 6, ' 10
	6, 3, 7]

Global s_cubeTriStrip:Int[] = [
	0, 1, 2,
	3,
	7,
	1,
	5,
	0,
	4,
	2,
	6,
	7,
	4,
	5]

Global s_cubeLineList:Int[] = [
	0, 1,
	0, 2,
	0, 4,
	1, 3,
	1, 5,
	2, 3,
	2, 6,
	3, 7,
	4, 5,
	4, 6,
	5, 7,
	6, 7]

Global s_cubePoints:Int[] = [
	0, 1, 2, 3, 4, 5, 6, 7]

Class MojoGame Extends App

	Field m_width:Int = 1280
	Field m_height:Int = 720

	Field debug:Int = BGFX_DEBUG_NONE
'  	Field debug:Int = BGFX_DEBUG_TEXT

	Field sCubeVerticesBuffer:DataBuffer
	Field sCubeTriListBuffer:DataBuffer
	Field sCubeTriStripBuffer:DataBuffer
	Field sCubeLineListBuffer:DataBuffer
	Field sCubePointsBuffer:DataBuffer

	Field m_vbh:BgfxVertexBufferHandle
	Field m_ibh:BgfxIndexBufferHandle[4]
	Field m_program:BgfxProgramHandle

	Field time:Float

	Field at:Float[]  = [ 0.0, 0.0,   0.0 ]
	Field eye:Float[] = [ 0.0, 0.0, -35.0 ]

	Field bgfxCaps:BgfxCaps = New BgfxCaps()

	Field view:Float[16]
	Field proj:Float[16]
	Field mtx:Float[16]

	Field state:Int[2]

	Method MakeDataBuffers:Void()

		Local address:Int
		Local length:Int

		' s_cubeVertices to sCubeVerticesBuffer

		address = 0
		length = s_cubeVertices.Length()

		sCubeVerticesBuffer = New DataBuffer( length * 16 )
		For Local i:Int = 0 Until length
			sCubeVerticesBuffer.PokeFloat( address, s_cubeVertices[i].m_x ); address += 4
			sCubeVerticesBuffer.PokeFloat( address, s_cubeVertices[i].m_y ); address += 4
			sCubeVerticesBuffer.PokeFloat( address, s_cubeVertices[i].m_z ); address += 4
			sCubeVerticesBuffer.PokeInt( address, s_cubeVertices[i].m_abgr ); address += 4
		Next

		' s_cubeTriList to sCubeTriListBuffer

		address = 0
		length = s_cubeTriList.Length()

		sCubeTriListBuffer = New DataBuffer( length * 2 )
		For Local i:Int = 0 Until length
			sCubeTriListBuffer.PokeShort( address, s_cubeTriList[i] ); address += 2
		Next

		' s_cubeTriStrip to sCubeTriStripBuffer

		address = 0
		length = s_cubeTriStrip.Length()

		sCubeTriStripBuffer = New DataBuffer( length * 2 )
		For Local i:Int = 0 Until length
			sCubeTriStripBuffer.PokeShort( address, s_cubeTriStrip[i] ); address += 2
		Next

		' s_cubeLineList to sCubeLineListBuffer

		address = 0
		length = s_cubeLineList.Length()

		sCubeLineListBuffer = New DataBuffer( length * 2 )
		For Local i:Int = 0 Until length
			sCubeLineListBuffer.PokeShort( address, s_cubeLineList[i] ); address += 2
		Next

		' s_cubePoints to sCubePointsBuffer

		address = 0
		length = s_cubePoints.Length()

		sCubePointsBuffer = New DataBuffer( length * 2 )
		For Local i:Int = 0 Until length
			sCubePointsBuffer.PokeShort( address, s_cubePoints[i] ); address += 2
		Next
	End

	Method OnCreate:Int()

		SetUpdateRate(60)

		MakeDataBuffers()

		' Enable debug text.
		bgfxSetDebug(debug)

		' Set view 0 clear state.
		bgfxSetViewClear(0, BGFX_CLEAR_COLOR|BGFX_CLEAR_DEPTH, $303030ff, 1.0, 0)

		' Create vertex stream declaration.
		PosColorVertex.Init()

		' Create static vertex buffer.
		m_vbh = bgfxUtilsCreateVertexBuffer( bgfxUtilsMakeRef( sCubeVerticesBuffer ), PosColorVertex.ms_decl )

		' Create static index buffer for triangle strip rendering.
		' Static data can be passed with bgfx::makeRef
		m_ibh[0] = bgfxUtilsCreateIndexBuffer( bgfxUtilsMakeRef( sCubeTriStripBuffer ) )

		' Create static index buffer for triangle list rendering. 
		' Static data can be passed with bgfx::makeRef
		m_ibh[1] = bgfxUtilsCreateIndexBuffer( bgfxUtilsMakeRef( sCubeTriListBuffer ) )

		' Create static index buffer for triangle list rendering. 
		' Static data can be passed with bgfx::makeRef
		m_ibh[2] = bgfxUtilsCreateIndexBuffer( bgfxUtilsMakeRef( sCubeLineListBuffer ) )

		' Create static index buffer for triangle list rendering. 
		' Static data can be passed with bgfx::makeRef
		m_ibh[3] = bgfxUtilsCreateIndexBuffer( bgfxUtilsMakeRef( sCubePointsBuffer ) )

		' Create program from shaders.
		m_program = bgfxUtilsLoadProgram("vs_cubes", "fs_cubes");

		bxMtxLookAt( view, eye, at )

		bgfxGetCaps( bgfxCaps )
		bxMtxProj( proj, 60.0, Float(m_width)/Float(m_height), 0.1, 100.0, bgfxCaps.GetHomogeneousDepth() )
		bgfxSetViewTransform( 0, view, proj )

		Print "bgfxGetRendererName()=" + bgfxGetRendererName( bgfxGetRendererType() )

		Print "view="
		PrintMatrix(view)
		Print "proj="
		PrintMatrix(proj)


		Local xx:Int = 1
		Local yy:Int = 1
				bxMtxRotateXY(mtx, xx * 0.21, yy * 0.37)
				mtx[12] = -15.0 + xx * 3.0
				mtx[13] = -15.0 + yy * 3.0
				mtx[14] = 0.0
		Print "mtx="
		PrintMatrix(mtx)


		Return 0
	End

	Method PrintMatrix:Void(m:Float[])
		For Local i:Int = 0 Until 16 Step 4
			Print m[i + 0] + ", " + m[i + 1] + ", " + m[i + 2] + ", " + m[i + 3] + ", "
		Next
	End

	Method OnUpdate:Int()
		time += 0.1
		Return 0
	End

	Method OnRender:Int()

		bxMtxLookAt( view, eye, at )

		bgfxGetCaps( bgfxCaps )
		bxMtxProj( proj, 60.0, Float(m_width)/Float(m_height), 0.1, 100.0, bgfxCaps.GetHomogeneousDepth() )
		bgfxSetViewTransform( 0, view, proj )

		' Set view 0 default viewport.
		bgfxSetViewRect(0, 0, 0, m_width, m_height)

		' This dummy draw call is here to make sure that view 0 is cleared
		' if no other draw calls are submitted to view 0.
		bgfxTouch(0)

		' Submit 11x11 cubes.
		For Local yy:Int = 0 Until 11
			For Local xx:Int = 0 Until 11

				bxMtxRotateXY(mtx, time + xx * 0.21, time + yy * 0.37)
'  				bxMtxRotateXY(mtx, xx * 0.21, yy * 0.37)
				mtx[12] = -15.0 + xx * 3.0
				mtx[13] = -15.0 + yy * 3.0
				mtx[14] = 0.0

				' Set model matrix for rendering.
				bgfxSetTransform(mtx)

				' Set vertex and index buffer.
				bgfxSetVertexBuffer(0, m_vbh)
				bgfxSetIndexBuffer(m_ibh[0])

'  	bgfx_set_state( 0
'  				| BGFX_STATE_WRITE_R
'  				| BGFX_STATE_WRITE_G
'  				| BGFX_STATE_WRITE_B
'  				| BGFX_STATE_WRITE_A
'  				| BGFX_STATE_WRITE_Z
'  				| BGFX_STATE_DEPTH_TEST_LESS
'  				| BGFX_STATE_CULL_CW
'  				| BGFX_STATE_MSAA
'  				| BGFX_STATE_PT_TRISTRIP, _rgba );

'  #define BGFX_STATE_WRITE_R                 UINT64_C(0x0000000000000001) //!< Enable R write.
'  #define BGFX_STATE_WRITE_G                 UINT64_C(0x0000000000000002) //!< Enable G write.
'  #define BGFX_STATE_WRITE_B                 UINT64_C(0x0000000000000004) //!< Enable B write.
'  #define BGFX_STATE_WRITE_A                 UINT64_C(0x0000000000000008) //!< Enable alpha write.
'  #define BGFX_STATE_WRITE_Z                 UINT64_C(0x00000040 00000000) //!< Enable depth write.
'  
'  #define BGFX_STATE_DEPTH_TEST_LESS         UINT64_C(0x00000000 00000010) //!< Enable depth test, less.
'  #define BGFX_STATE_CULL_CW                 UINT64_C(0x00000010 00000000) //!< Cull clockwise triangles.
'  #define BGFX_STATE_MSAA                    UINT64_C(0x01000000 00000000) //!< Enable MSAA rasterization.
'  #define BGFX_STATE_PT_TRISTRIP             UINT64_C(0x00010000 00000000) //!< Tristrip.

				bgfxUtilsClear64Bit(state)
				bgfxUtilsSet64Bit(state, BGFX_STATE_WRITE_R)
				bgfxUtilsSet64Bit(state, BGFX_STATE_WRITE_G)
				bgfxUtilsSet64Bit(state, BGFX_STATE_WRITE_B)
				bgfxUtilsSet64Bit(state, BGFX_STATE_WRITE_A)
				bgfxUtilsSet64Bit(state, BGFX_STATE_WRITE_Z)
				bgfxUtilsSet64Bit(state, BGFX_STATE_DEPTH_TEST_LESS)
				bgfxUtilsSet64Bit(state, BGFX_STATE_CULL_CW)
				bgfxUtilsSet64Bit(state, BGFX_STATE_MSAA)
				bgfxUtilsSet64Bit(state, BGFX_STATE_PT_TRISTRIP)

				' Set render states.
				bgfxSetState(state)

				' Submit primitive for rendering to view 0.
				bgfxSubmit(0, m_program)
			Next
		Next

		' Use debug font to print information about this example.
'  		bgfxDbgTextClear(0, False)
'  '  		bgfxDbgTextImage(Max(width/2/8, 20)-20, Max(height/2/16, 6)-6, 40, 12, _sLogo, 160)
'  '  		bgfxDbgTextImageDB(Max(width/2/8, 20)-20, Max(height/2/16, 6)-6, 40, 12, sLogoBuffer, 160)
'  		bgfxDbgTextPrintf(0, 1, $4f, "bgfx/examples/25-c99")
'  		bgfxDbgTextPrintf(0, 2, $6f, "Description: Initialization and debug text with C99 API.")

		' Advance to next frame. Rendering thread will be kicked to
		' process submitted rendering primitives.
'  		bgfxFrame(False)

		Return 0
	End

End

Function Main:Int()
	New MojoGame()
	Return 0
End
