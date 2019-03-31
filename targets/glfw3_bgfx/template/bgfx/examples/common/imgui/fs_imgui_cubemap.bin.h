static const uint8_t fs_imgui_cubemap_glsl[363] =
{
	0x46, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x02, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x02, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, // ...s_texColor...
	0x00, 0x01, 0x00, 0x33, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, // ...3...varying h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, // ighp vec3 v_norm
	0x61, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, // al;.uniform high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, // p vec4 u_imageLo
	0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // dEnabled;.unifor
	0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, // m lowp samplerCu
	0x62, 0x65, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, // be s_texColor;.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lowp vec4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, // _1;.  tmpvar_1.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // yz = textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // Lod    (s_texCol
	0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, // or, v_normal, u_
	0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, // imageLodEnabled.
	0x78, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // x).xyz;.  tmpvar
	0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x30, // _1.w = (0.2 + (0
	0x2e, 0x38, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, // .8 * u_imageLodE
	0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // nabled.y));.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _FragColor = tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // var_1;.}...
};
static const uint8_t fs_imgui_cubemap_spv[1446] =
{
	0x46, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x7c, 0x05, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, // ..|.....#.......
	0x08, 0x00, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, // ..........GLSL.s
	0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, // td.450..........
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x6c, 0x00, // ..main....c...l.
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x09, 0x00, // ..main..........
	0x00, 0x00, 0x42, 0x67, 0x66, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, // ..BgfxSamplerCub
	0x65, 0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x5f, // e.............m_
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x09, 0x00, // sampler.........
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // ......m_texture.
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x20, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ...... ...s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x22, 0x00, 0x00, 0x00, 0x73, 0x5f, // olor......"...s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, // texColorSampler.
	0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x25, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ......%...s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, // olorTexture.....
	0x04, 0x00, 0x44, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, // ..D...$Global...
	0x08, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, // ..D.......u_imag
	0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x00, 0x00, 0x00, 0x05, 0x00, // eLodEnabled.....
	0x03, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x63, 0x00, // ..F...........c.
	0x00, 0x00, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_normal......
	0x06, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // ..l...bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x22, 0x00, // ata0..G...%...".
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x21, 0x00, // ......G...%...!.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, // ......H...D.....
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x44, 0x00, // ..#.......G...D.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x46, 0x00, 0x00, 0x00, 0x22, 0x00, // ......G...F...".
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x63, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...c.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...l.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, // .......... .....
	0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, // ................
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x09, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x06, 0x00, // ..;....... .....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, // .. ...!.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x06, 0x00, // ..;...!...".....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, // .. ...$.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, // ..;...$...%.....
	0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, // ......(... .....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, // ..+...(...-.....
	0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x31, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......1.........
	0x03, 0x00, 0x44, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x45, 0x00, // ..D....... ...E.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x45, 0x00, // ......D...;...E.
	0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x4c, 0x00, // ..F...........L.
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, // .. .......+...L.
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4e, 0x00, // ..M....... ...N.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, // ..........+.....
	0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, // ..T.....L>+.....
	0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, // ..U.....L?+...L.
	0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x62, 0x00, // ..V....... ...b.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x62, 0x00, // ..........;...b.
	0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x6b, 0x00, // ..c....... ...k.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x6b, 0x00, // ..........;...k.
	0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, // ..l.......6.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, // ................
	0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, // ......=.......#.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x26, 0x00, // .."...=.......&.
	0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x50, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x27, 0x00, // ..%...P.......'.
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x20, 0x00, // ..#...&...>... .
	0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x64, 0x00, // ..'...=.......d.
	0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x88, 0x00, // ..c...=.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa9, 0x00, // .. ...Q.........
	0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x08, 0x00, // ..........Q.....
	0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x41, 0x00, // ..............A.
	0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x2d, 0x00, // ..N.......F...-.
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x8b, 0x00, // ..M...=.........
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x31, 0x00, 0x00, 0x00, 0xa3, 0x00, // ......V...1.....
	0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x58, 0x00, 0x07, 0x00, 0x0e, 0x00, // ..........X.....
	0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x02, 0x00, // ..........d.....
	0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x8e, 0x00, // ......A...N.....
	0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..F...-...V...=.
	0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x85, 0x00, // ................
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x8f, 0x00, // ..........U.....
	0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x54, 0x00, // ..............T.
	0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x94, 0x00, // ......Q.........
	0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, // ..........Q.....
	0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x94, 0x00, // ..P.............
	0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x3e, 0x00, // ..............>.
	0x03, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, // ..l...........8.
	0x01, 0x00, 0x00, 0x00, 0x10, 0x00,                                                             // ......
};
static const uint8_t fs_imgui_cubemap_dx9[384] =
{
	0x46, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH....e...s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, // Color0......u_im
	0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x01, 0x00, // ageLodEnabled...
	0x00, 0x01, 0x00, 0x48, 0x01, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, // ...H...........C
	0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x02, // TAB.............
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x44, // ...............D
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, // ...........P....
	0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, // ...`...........t
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // r...............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, // ...u_imageLodEna
	0x62, 0x6c, 0x65, 0x64, 0x00, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, // bled............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......ps_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0xcd, //  10.1..Q........
	0xcc, 0x4c, 0x3f, 0xcd, 0xcc, 0x4c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, // .L?..L>.........
	0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, // ................
	0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x5f, // ..............._
	0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x01, // ................
	0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x08, 0x08, 0x80, 0x00, // .....U..........
	0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x55, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00, // .U.......U......
};
static const uint8_t fs_imgui_cubemap_dx11[443] =
{
	0x46, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x02, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x00, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, // ...s_texColor0..
	0x00, 0x01, 0x00, 0x80, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x3a, 0x0c, 0x3f, 0xee, 0x22, // .......DXBC:.?."
	0x31, 0x60, 0x3f, 0x80, 0x4a, 0x2e, 0x3f, 0xcb, 0x18, 0x1c, 0x94, 0x01, 0x00, 0x00, 0x00, 0x80, // 1`?.J.?.........
	0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xb4, // .......,........
	0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, // ...ISGNL........
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, // ...8............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, // ...........D....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, // ................
	0x07, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4e, // ...SV_POSITION.N
	0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, // ORMAL..OSGN,....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....... ........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, // ...............S
	0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xc4, // V_TARGET...SHDR.
	0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, // ...@...1...Y...F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, // . .........Z....
	0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, // `......X0...p...
	0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, // ...UU..b...r....
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, // ...e.... ......h
	0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......H........
	0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, // ...F.......F~...
	0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, 0x00, // ....`........ ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, // .......6...r ...
	0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x82, // ...F.......2....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  ........ ......
	0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f, 0x01, 0x40, 0x00, 0x00, 0xcd, // ....@....L?.@...
	0xcc, 0x4c, 0x3e, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,                               // .L>>.......
};
static const uint8_t fs_imgui_cubemap_mtl[747] =
{
	0x46, 0x53, 0x48, 0x05, 0xe3, 0xc2, 0x5c, 0x65, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x02, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0xc4, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, // ......using name
	0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, // space metal;.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // uct xlatMtlShade
	0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // rInput {.  float
	0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, // 3 v_normal;.};.s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // truct xlatMtlSha
	0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // derOutput {.  fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, // oat4 gl_FragColo
	0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // r;.};.struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, // m {.  float4 u_i
	0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, 0x0a, // mageLodEnabled;.
	0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // };.fragment xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, // xlatMtlMain (xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, // tMtlShaderInput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, // _mtl_i [[stage_i
	0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, // n]], constant xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, // rm& _mtl_u [[buf
	0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, // fer(0)]].  ,   t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x63, 0x75, 0x62, 0x65, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, // exturecube<float
	0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, // > s_texColor [[t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, // exture(0)]], sam
	0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, // pler _mtlsmp_s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // exColor [[sample
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, // r(0)]]).{.  xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // _mtl_o;.  float4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, //  tmpvar_1 = 0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, //  tmpvar_1.xyz = 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, // s_texColor.sampl
	0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // e(_mtlsmp_s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x29, 0x28, 0x5f, // olor, (float3)(_
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, // mtl_i.v_normal),
	0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, //  level(_mtl_u.u_
	0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, // imageLodEnabled.
	0x78, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // x)).xyz;.  tmpva
	0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, 0x2b, 0x20, 0x28, // r_1.w = (0.2 + (
	0x30, 0x2e, 0x38, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x69, // 0.8 * _mtl_u.u_i
	0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x79, // mageLodEnabled.y
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, // ));.  _mtl_o.gl_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // FragColor = tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, // ar_1;.  return _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // mtl_o;.}...
};
extern const uint8_t* fs_imgui_cubemap_pssl;
extern const uint32_t fs_imgui_cubemap_pssl_size;