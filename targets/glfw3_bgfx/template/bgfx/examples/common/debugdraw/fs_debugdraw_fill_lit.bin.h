static const uint8_t fs_debugdraw_fill_lit_glsl[510] =
{
	0x46, 0x53, 0x48, 0x05, 0x0f, 0xc8, 0x56, 0x5f, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH...V_...u_par
	0x61, 0x6d, 0x73, 0x02, 0x04, 0x00, 0x00, 0x04, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, // ams..........var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // ying highp vec3 
	0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // v_world;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x34, //  vec4 u_params[4
	0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, // ];.void main ().
	0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, // {.  highp vec3 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_1;.  tmpva
	0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, 0x76, 0x5f, 0x77, 0x6f, 0x72, // r_1 = dFdx(v_wor
	0x6c, 0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ld);.  highp vec
	0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 3 tmpvar_2;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x79, 0x28, 0x76, 0x5f, // pvar_2 = dFdy(v_
	0x77, 0x6f, 0x72, 0x6c, 0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, // world);.  medium
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, // p vec4 tmpvar_3;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_3.xyz 
	0x3d, 0x20, 0x28, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, // = (mix (u_params
	0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // [2].xyz, u_param
	0x73, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, // s[1].xyz, (.    
	0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, // (dot (normalize(
	0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // (.      (tmpvar_
	0x31, 0x2e, 0x79, 0x7a, 0x78, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // 1.yzx * tmpvar_2
	0x2e, 0x7a, 0x78, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x0a, 0x20, 0x20, // .zxy).     - .  
	0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x78, //     (tmpvar_1.zx
	0x79, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x7a, 0x78, // y * tmpvar_2.yzx
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x29, 0x2c, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, // ).    )), u_para
	0x6d, 0x73, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, // ms[0].xyz) * 0.5
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x75, // ).   + 0.5)) * u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, // _params[3].xyz);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, // .  tmpvar_3.w = 
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x33, 0x5d, 0x2e, 0x77, 0x3b, 0x0a, 0x20, // u_params[3].w;. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // tmpvar_3;.}...
};
static const uint8_t fs_debugdraw_fill_lit_spv[1489] =
{
	0x46, 0x53, 0x48, 0x05, 0x0f, 0xc8, 0x56, 0x5f, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH...V_...u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0xb0, 0x05, 0x00, 0x00, 0x03, 0x02, 0x23, // ams............#
	0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xda, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, // .GLSL.std.450...
	0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0x79, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, // .y...|..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, // n........H...$Gl
	0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // obal.....H......
	0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, // .u_params.......
	0x00, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, // .J...........y..
	0x00, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x7c, 0x00, 0x00, // .v_view......|..
	0x00, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00, 0x05, 0x00, 0x06, 0x00, 0x87, 0x00, 0x00, // .v_world........
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, // .bgfx_FragData0.
	0x00, 0x47, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .G...G..........
	0x00, 0x48, 0x00, 0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .H...H.......#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x48, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....G...H......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...J..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...y..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .G...|..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x87, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G..............
	0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, // .........!......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x17, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x15, 0x00, 0x04, 0x00, 0x45, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....E... ......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x45, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .+...E...F......
	0x00, 0x1c, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, // .....G.......F..
	0x00, 0x1e, 0x00, 0x03, 0x00, 0x48, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .....H...G... ..
	0x00, 0x49, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .I.......H...;..
	0x00, 0x49, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, // .I...J..........
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .K... .......+..
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .K...L....... ..
	0x00, 0x4d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .M...........+..
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .K...S.......+..
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .K...T.......+..
	0x00, 0x06, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x2b, 0x00, 0x04, // .....V......?+..
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .K...d.......+..
	0x00, 0x45, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .E...o....... ..
	0x00, 0x70, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .p........... ..
	0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .x...........;..
	0x00, 0x78, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .x...y.......;..
	0x00, 0x78, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .x...|....... ..
	0x00, 0x86, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .............;..
	0x00, 0x86, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, // .............6..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .........=......
	0x00, 0x7d, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .}...|..........
	0x00, 0xa8, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .....}..........
	0x00, 0xaa, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, // .....}..........
	0x00, 0xab, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0xac, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, // .........D......
	0x00, 0xab, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, // .....E.......A..
	0x00, 0x4d, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, // .M.......J...L..
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, // .L...=..........
	0x00, 0xb2, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, // .....O..........
	0x00, 0xb3, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x94, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, // ................
	0x00, 0xad, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, // ................
	0x00, 0xb7, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, // .........V......
	0x00, 0x06, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, // .............V..
	0x00, 0x50, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, // .P..............
	0x00, 0xb8, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4d, 0x00, 0x00, // .........A...M..
	0x00, 0xba, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, // .....J...L...S..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, // .=..............
	0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, // .O..............
	0x00, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x41, 0x00, 0x06, 0x00, 0x4d, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, // .A...M.......J..
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, // .L...T...=......
	0x00, 0xbe, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, // .........O......
	0x00, 0xbf, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0xd9, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, // ................
	0x00, 0xbf, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4d, 0x00, 0x00, // .........A...M..
	0x00, 0xc1, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, // .....J...L...d..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, // .=..............
	0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, // .O..............
	0x00, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, // ................
	0x00, 0xc3, 0x00, 0x00, 0x00, 0x41, 0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, // .....A...p......
	0x00, 0x4a, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, // .J...L...d...o..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, // .=..............
	0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, // .Q..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, // .....Q..........
	0x00, 0xc4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, // .........Q......
	0x00, 0xcd, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, // .............P..
	0x00, 0x14, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, // ................
	0x00, 0xcd, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x87, 0x00, 0x00, // .........>......
	0x00, 0xce, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, // .........8.....@
	0x00,                                                                                           // .
};
static const uint8_t fs_debugdraw_fill_lit_dx9[402] =
{
	0x46, 0x53, 0x48, 0x05, 0x0f, 0xc8, 0x56, 0x5f, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH...V_...u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x74, 0x01, 0x00, 0x00, 0x00, 0x03, 0xff, // ams......t......
	0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, // ... .CTAB....S..
	0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .L...0..........
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // .<.......u_param
	0x73, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // s...............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, // hader Compiler 1
	0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x04, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, // 0.1..Q..........
	0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, // ?...............
	0x02, 0x05, 0x00, 0x01, 0x80, 0x00, 0x00, 0x07, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, // ................
	0x80, 0x00, 0x00, 0xc9, 0x91, 0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, // ................
	0x80, 0x5b, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xd2, 0x90, 0x05, 0x00, 0x00, // .[..............
	0x03, 0x02, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xd2, 0x80, 0x00, 0x00, 0xc9, 0x80, 0x02, 0x00, 0xe4, // ................
	0x81, 0x24, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x08, 0x00, 0x00, // .$..............
	0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0xa0, 0x04, 0x00, 0x00, // ................
	0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x02, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x0e, 0x80, 0x01, 0x00, 0x90, 0x81, 0x01, 0x00, 0x90, 0xa0, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x02, 0x00, 0xe4, // ................
	0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, // ................
	0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x80, 0x03, 0x00, 0xff, 0xa0, 0xff, 0xff, 0x00, // ................
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t fs_debugdraw_fill_lit_dx11[721] =
{
	0x46, 0x53, 0x48, 0x05, 0x0f, 0xc8, 0x56, 0x5f, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH...V_...u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0xb0, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, // ams..........DXB
	0x43, 0x59, 0x1c, 0xf9, 0xc6, 0x41, 0xb7, 0xae, 0xfd, 0xa5, 0xa5, 0x0c, 0x28, 0x25, 0x0d, 0x24, // CY...A......(%.$
	0x29, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // )............,..
	0x00, 0x9c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, // .........ISGNh..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........P......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, // .SV_POSITION.TEX
	0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, // COORD....OSGN,..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, // .SV_TARGET...SHD
	0x52, 0xd8, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, // R....@...v...Y..
	0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, // .F. .........b..
	0x03, 0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .r.......e.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .....h.......6..
	0x06, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x14, 0x10, 0x80, 0x41, 0x00, 0x00, // .r...........A..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .........r......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, // .F...........r..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x26, 0x19, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // .....&.......8..
	0x07, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .r.......F......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, // .F.......2...r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x09, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x96, 0x04, 0x10, // .....&..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....F...A......
	0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .............F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, // .....F.......D..
	0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .........:......
	0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, // .8...r..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....F..........
	0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .F. .........2..
	0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@.....?.@.....
	0x3f, 0x00, 0x00, 0x00, 0x0a, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x89, 0x20, // ?.............. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x89, 0x20, 0x80, 0x41, 0x00, 0x00, // ........... .A..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, // .........2...r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....F. ........
	0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .8...r ......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .....F. ........
	0x00, 0x36, 0x00, 0x00, 0x06, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, // .6.... ......:. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x40, // .........>.....@
	0x00,                                                                                           // .
};
static const uint8_t fs_debugdraw_fill_lit_mtl[862] =
{
	0x46, 0x53, 0x48, 0x05, 0x0f, 0xc8, 0x56, 0x5f, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH...V_...u_par
	0x61, 0x6d, 0x73, 0x02, 0x04, 0x00, 0x00, 0x04, 0x00, 0x40, 0x03, 0x00, 0x00, 0x75, 0x73, 0x69, // ams......@...usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, //   float3 v_world
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ;.};.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // {.  float4 gl_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // agColor;.};.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // Uniform {.  floa
	0x74, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, // t4 u_params[4];.
	0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // };.fragment xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, // xlatMtlMain (xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, // tMtlShaderInput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, // _mtl_i [[stage_i
	0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, // n]], constant xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, // rm& _mtl_u [[buf
	0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, // fer(0)]]).{.  xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // t _mtl_o;.  floa
	0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, // t3 tmpvar_1 = 0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x66, // .  tmpvar_1 = df
	0x64, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, // dx(_mtl_i.v_worl
	0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, // d);.  float3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // var_2 = 0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x64, 0x66, 0x64, 0x79, 0x28, 0x2d, 0x5f, 0x6d, // var_2 = dfdy(-_m
	0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x29, 0x3b, 0x0a, 0x20, // tl_i.v_world);. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, //  float4 tmpvar_3
	0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, //  = 0;.  tmpvar_3
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x5f, 0x6d, 0x74, // .xyz = (mix (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x32, 0x5d, 0x2e, // l_u.u_params[2].
	0x78, 0x79, 0x7a, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, // xyz, _mtl_u.u_pa
	0x72, 0x61, 0x6d, 0x73, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x28, 0x0a, 0x20, // rams[1].xyz, (. 
	0x20, 0x20, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, //    (dot (normali
	0x7a, 0x65, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // ze((.      (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x7a, 0x78, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ar_1.yzx * tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x78, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, // r_2.zxy).     - 
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // .      (tmpvar_1
	0x2e, 0x7a, 0x78, 0x79, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, // .zxy * tmpvar_2.
	0x79, 0x7a, 0x78, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x29, 0x2c, 0x20, 0x5f, 0x6d, 0x74, // yzx).    )), _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x30, 0x5d, 0x2e, // l_u.u_params[0].
	0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2b, // xyz) * 0.5).   +
	0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, //  0.5)) * _mtl_u.
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, // u_params[3].xyz)
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_3.w =
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, //  _mtl_u.u_params
	0x5b, 0x33, 0x5d, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, // [3].w;.  _mtl_o.
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, // gl_FragColor = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // mpvar_3;.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // n _mtl_o;.}...
};
extern const uint8_t* fs_debugdraw_fill_lit_pssl;
extern const uint32_t fs_debugdraw_fill_lit_pssl_size;
