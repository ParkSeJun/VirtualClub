//
// C:\VirtualClub\Intermediate\Build\Win64\VirtualClub\Development\Engine\SkeletalMeshComponent.ispc.generated.dummy_avx2.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FTransform__
#define __ISPC_STRUCT_FTransform__
struct FTransform {
    struct FVector4 Rotation;
    struct FVector4 Translation;
    struct FVector4 Scale3D;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void FillComponentSpaceTransforms(struct FTransform * ComponentSpaceData, const struct FTransform * LocalTransformsData, const uint16_t * FillComponentSpaceTransformsRequiredBones, const uint8_t * ParentBones, const int32_t ParentBoneSize, const int32_t ParentIndexOffset, const int32_t NumBones);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
