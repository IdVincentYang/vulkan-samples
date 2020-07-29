#include <stdint.h>

#if 0
/Users/yangws/Downloads/VulkanSamples/API-Samples/android/../texel_buffer/texel_buffer.vert
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 71

                              Capability Shader
                              Capability SampledBuffer
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 35 59 61
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 8  "r"
                              Name 12  "texels"
                              Name 22  "g"
                              Name 28  "b"
                              Name 35  "outColor"
                              Name 45  "vertices"
                              Name 57  "gl_PerVertex"
                              MemberName 57(gl_PerVertex) 0  "gl_Position"
                              MemberName 57(gl_PerVertex) 1  "gl_PointSize"
                              MemberName 57(gl_PerVertex) 2  "gl_ClipDistance"
                              Name 59  ""
                              Name 61  "gl_VertexIndex"
                              Decorate 12(texels) DescriptorSet 0
                              Decorate 12(texels) Binding 0
                              Decorate 35(outColor) Location 0
                              MemberDecorate 57(gl_PerVertex) 0 BuiltIn Position
                              MemberDecorate 57(gl_PerVertex) 1 BuiltIn PointSize
                              MemberDecorate 57(gl_PerVertex) 2 BuiltIn ClipDistance
                              Decorate 57(gl_PerVertex) Block
                              Decorate 61(gl_VertexIndex) BuiltIn VertexIndex
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypePointer Private 6(float)
            8(r):      7(ptr) Variable Private
               9:             TypeImage 6(float) Buffer sampled format:Unknown
              10:             TypeSampledImage 9
              11:             TypePointer UniformConstant 10
      12(texels):     11(ptr) Variable UniformConstant
              14:             TypeInt 32 1
              15:     14(int) Constant 0
              17:             TypeVector 6(float) 4
              19:             TypeInt 32 0
              20:     19(int) Constant 0
           22(g):      7(ptr) Variable Private
              24:     14(int) Constant 1
           28(b):      7(ptr) Variable Private
              30:     14(int) Constant 2
              34:             TypePointer Output 17(fvec4)
    35(outColor):     34(ptr) Variable Output
              39:    6(float) Constant 1065353216
              41:             TypeVector 6(float) 2
              42:     19(int) Constant 3
              43:             TypeArray 41(fvec2) 42
              44:             TypePointer Private 43
    45(vertices):     44(ptr) Variable Private
              46:    6(float) Constant 3212836864
              47:   41(fvec2) ConstantComposite 46 46
              48:             TypePointer Private 41(fvec2)
              50:   41(fvec2) ConstantComposite 39 46
              52:    6(float) Constant 0
              53:   41(fvec2) ConstantComposite 52 39
              55:     19(int) Constant 1
              56:             TypeArray 6(float) 55
57(gl_PerVertex):             TypeStruct 17(fvec4) 6(float) 56
              58:             TypePointer Output 57(gl_PerVertex)
              59:     58(ptr) Variable Output
              60:             TypePointer Input 14(int)
61(gl_VertexIndex):     60(ptr) Variable Input
              63:     14(int) Constant 3
         4(main):           2 Function None 3
               5:             Label
              13:          10 Load 12(texels)
              16:           9 Image 13
              18:   17(fvec4) ImageFetch 16 15
              21:    6(float) CompositeExtract 18 0
                              Store 8(r) 21
              23:          10 Load 12(texels)
              25:           9 Image 23
              26:   17(fvec4) ImageFetch 25 24
              27:    6(float) CompositeExtract 26 0
                              Store 22(g) 27
              29:          10 Load 12(texels)
              31:           9 Image 29
              32:   17(fvec4) ImageFetch 31 30
              33:    6(float) CompositeExtract 32 0
                              Store 28(b) 33
              36:    6(float) Load 8(r)
              37:    6(float) Load 22(g)
              38:    6(float) Load 28(b)
              40:   17(fvec4) CompositeConstruct 36 37 38 39
                              Store 35(outColor) 40
              49:     48(ptr) AccessChain 45(vertices) 15
                              Store 49 47
              51:     48(ptr) AccessChain 45(vertices) 24
                              Store 51 50
              54:     48(ptr) AccessChain 45(vertices) 30
                              Store 54 53
              62:     14(int) Load 61(gl_VertexIndex)
              64:     14(int) SMod 62 63
              65:     48(ptr) AccessChain 45(vertices) 64
              66:   41(fvec2) Load 65
              67:    6(float) CompositeExtract 66 0
              68:    6(float) CompositeExtract 66 1
              69:   17(fvec4) CompositeConstruct 67 68 52 39
              70:     34(ptr) AccessChain 59 15
                              Store 70 69
                              Return
                              FunctionEnd
#endif

static const uint32_t texel_buffer_vert[468] = {
    0x07230203, 0x00010000, 0x00080007, 0x00000047,
    0x00000000, 0x00020011, 0x00000001, 0x00020011,
    0x0000002e, 0x0006000b, 0x00000001, 0x4c534c47,
    0x6474732e, 0x3035342e, 0x00000000, 0x0003000e,
    0x00000000, 0x00000001, 0x0008000f, 0x00000000,
    0x00000004, 0x6e69616d, 0x00000000, 0x00000023,
    0x0000003b, 0x0000003d, 0x00030003, 0x00000002,
    0x00000190, 0x00090004, 0x415f4c47, 0x735f4252,
    0x72617065, 0x5f657461, 0x64616873, 0x6f5f7265,
    0x63656a62, 0x00007374, 0x00090004, 0x415f4c47,
    0x735f4252, 0x69646168, 0x6c5f676e, 0x75676e61,
    0x5f656761, 0x70303234, 0x006b6361, 0x00040005,
    0x00000004, 0x6e69616d, 0x00000000, 0x00030005,
    0x00000008, 0x00000072, 0x00040005, 0x0000000c,
    0x65786574, 0x0000736c, 0x00030005, 0x00000016,
    0x00000067, 0x00030005, 0x0000001c, 0x00000062,
    0x00050005, 0x00000023, 0x4374756f, 0x726f6c6f,
    0x00000000, 0x00050005, 0x0000002d, 0x74726576,
    0x73656369, 0x00000000, 0x00060005, 0x00000039,
    0x505f6c67, 0x65567265, 0x78657472, 0x00000000,
    0x00060006, 0x00000039, 0x00000000, 0x505f6c67,
    0x7469736f, 0x006e6f69, 0x00070006, 0x00000039,
    0x00000001, 0x505f6c67, 0x746e696f, 0x657a6953,
    0x00000000, 0x00070006, 0x00000039, 0x00000002,
    0x435f6c67, 0x4470696c, 0x61747369, 0x0065636e,
    0x00030005, 0x0000003b, 0x00000000, 0x00060005,
    0x0000003d, 0x565f6c67, 0x65747265, 0x646e4978,
    0x00007865, 0x00040047, 0x0000000c, 0x00000022,
    0x00000000, 0x00040047, 0x0000000c, 0x00000021,
    0x00000000, 0x00040047, 0x00000023, 0x0000001e,
    0x00000000, 0x00050048, 0x00000039, 0x00000000,
    0x0000000b, 0x00000000, 0x00050048, 0x00000039,
    0x00000001, 0x0000000b, 0x00000001, 0x00050048,
    0x00000039, 0x00000002, 0x0000000b, 0x00000003,
    0x00030047, 0x00000039, 0x00000002, 0x00040047,
    0x0000003d, 0x0000000b, 0x0000002a, 0x00020013,
    0x00000002, 0x00030021, 0x00000003, 0x00000002,
    0x00030016, 0x00000006, 0x00000020, 0x00040020,
    0x00000007, 0x00000006, 0x00000006, 0x0004003b,
    0x00000007, 0x00000008, 0x00000006, 0x00090019,
    0x00000009, 0x00000006, 0x00000005, 0x00000000,
    0x00000000, 0x00000000, 0x00000001, 0x00000000,
    0x0003001b, 0x0000000a, 0x00000009, 0x00040020,
    0x0000000b, 0x00000000, 0x0000000a, 0x0004003b,
    0x0000000b, 0x0000000c, 0x00000000, 0x00040015,
    0x0000000e, 0x00000020, 0x00000001, 0x0004002b,
    0x0000000e, 0x0000000f, 0x00000000, 0x00040017,
    0x00000011, 0x00000006, 0x00000004, 0x00040015,
    0x00000013, 0x00000020, 0x00000000, 0x0004002b,
    0x00000013, 0x00000014, 0x00000000, 0x0004003b,
    0x00000007, 0x00000016, 0x00000006, 0x0004002b,
    0x0000000e, 0x00000018, 0x00000001, 0x0004003b,
    0x00000007, 0x0000001c, 0x00000006, 0x0004002b,
    0x0000000e, 0x0000001e, 0x00000002, 0x00040020,
    0x00000022, 0x00000003, 0x00000011, 0x0004003b,
    0x00000022, 0x00000023, 0x00000003, 0x0004002b,
    0x00000006, 0x00000027, 0x3f800000, 0x00040017,
    0x00000029, 0x00000006, 0x00000002, 0x0004002b,
    0x00000013, 0x0000002a, 0x00000003, 0x0004001c,
    0x0000002b, 0x00000029, 0x0000002a, 0x00040020,
    0x0000002c, 0x00000006, 0x0000002b, 0x0004003b,
    0x0000002c, 0x0000002d, 0x00000006, 0x0004002b,
    0x00000006, 0x0000002e, 0xbf800000, 0x0005002c,
    0x00000029, 0x0000002f, 0x0000002e, 0x0000002e,
    0x00040020, 0x00000030, 0x00000006, 0x00000029,
    0x0005002c, 0x00000029, 0x00000032, 0x00000027,
    0x0000002e, 0x0004002b, 0x00000006, 0x00000034,
    0x00000000, 0x0005002c, 0x00000029, 0x00000035,
    0x00000034, 0x00000027, 0x0004002b, 0x00000013,
    0x00000037, 0x00000001, 0x0004001c, 0x00000038,
    0x00000006, 0x00000037, 0x0005001e, 0x00000039,
    0x00000011, 0x00000006, 0x00000038, 0x00040020,
    0x0000003a, 0x00000003, 0x00000039, 0x0004003b,
    0x0000003a, 0x0000003b, 0x00000003, 0x00040020,
    0x0000003c, 0x00000001, 0x0000000e, 0x0004003b,
    0x0000003c, 0x0000003d, 0x00000001, 0x0004002b,
    0x0000000e, 0x0000003f, 0x00000003, 0x00050036,
    0x00000002, 0x00000004, 0x00000000, 0x00000003,
    0x000200f8, 0x00000005, 0x0004003d, 0x0000000a,
    0x0000000d, 0x0000000c, 0x00040064, 0x00000009,
    0x00000010, 0x0000000d, 0x0005005f, 0x00000011,
    0x00000012, 0x00000010, 0x0000000f, 0x00050051,
    0x00000006, 0x00000015, 0x00000012, 0x00000000,
    0x0003003e, 0x00000008, 0x00000015, 0x0004003d,
    0x0000000a, 0x00000017, 0x0000000c, 0x00040064,
    0x00000009, 0x00000019, 0x00000017, 0x0005005f,
    0x00000011, 0x0000001a, 0x00000019, 0x00000018,
    0x00050051, 0x00000006, 0x0000001b, 0x0000001a,
    0x00000000, 0x0003003e, 0x00000016, 0x0000001b,
    0x0004003d, 0x0000000a, 0x0000001d, 0x0000000c,
    0x00040064, 0x00000009, 0x0000001f, 0x0000001d,
    0x0005005f, 0x00000011, 0x00000020, 0x0000001f,
    0x0000001e, 0x00050051, 0x00000006, 0x00000021,
    0x00000020, 0x00000000, 0x0003003e, 0x0000001c,
    0x00000021, 0x0004003d, 0x00000006, 0x00000024,
    0x00000008, 0x0004003d, 0x00000006, 0x00000025,
    0x00000016, 0x0004003d, 0x00000006, 0x00000026,
    0x0000001c, 0x00070050, 0x00000011, 0x00000028,
    0x00000024, 0x00000025, 0x00000026, 0x00000027,
    0x0003003e, 0x00000023, 0x00000028, 0x00050041,
    0x00000030, 0x00000031, 0x0000002d, 0x0000000f,
    0x0003003e, 0x00000031, 0x0000002f, 0x00050041,
    0x00000030, 0x00000033, 0x0000002d, 0x00000018,
    0x0003003e, 0x00000033, 0x00000032, 0x00050041,
    0x00000030, 0x00000036, 0x0000002d, 0x0000001e,
    0x0003003e, 0x00000036, 0x00000035, 0x0004003d,
    0x0000000e, 0x0000003e, 0x0000003d, 0x0005008b,
    0x0000000e, 0x00000040, 0x0000003e, 0x0000003f,
    0x00050041, 0x00000030, 0x00000041, 0x0000002d,
    0x00000040, 0x0004003d, 0x00000029, 0x00000042,
    0x00000041, 0x00050051, 0x00000006, 0x00000043,
    0x00000042, 0x00000000, 0x00050051, 0x00000006,
    0x00000044, 0x00000042, 0x00000001, 0x00070050,
    0x00000011, 0x00000045, 0x00000043, 0x00000044,
    0x00000034, 0x00000027, 0x00050041, 0x00000022,
    0x00000046, 0x0000003b, 0x0000000f, 0x0003003e,
    0x00000046, 0x00000045, 0x000100fd, 0x00010038,
};
