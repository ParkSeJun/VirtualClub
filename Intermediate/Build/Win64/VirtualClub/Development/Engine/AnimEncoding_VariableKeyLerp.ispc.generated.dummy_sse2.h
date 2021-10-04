//
// D:\KPU\VirtualClub\Intermediate\Build\Win64\VirtualClub\Development\Engine\AnimEncoding_VariableKeyLerp.ispc.generated.dummy_sse2.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

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
    float V[4];
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

#ifndef __ISPC_STRUCT_BoneTrackPair__
#define __ISPC_STRUCT_BoneTrackPair__
struct BoneTrackPair {
    int32_t AtomIndex;
    int32_t TrackIndex;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void GetVariableKeyLerpPoseRotations(struct FTransform * Atoms, const struct BoneTrackPair * DesiredPairs, const int32_t * CompressedTrackOffsets, const uint8_t * CompressedByteStream, const int32_t CompressedNumberOfFrames, const float RelativePos, const uint8_t InterpolationType, const int32_t FORMAT, const int32_t PairCount);
    extern void GetVariableKeyLerpPoseScales(struct FTransform * Atoms, const struct BoneTrackPair * DesiredPairs, const int32_t * CompressedScaleOffsets, const int32_t StripSize, const uint8_t * CompressedByteStream, const int32_t CompressedNumberOfFrames, const float RelativePos, const uint8_t InterpolationType, const int32_t FORMAT, const int32_t PairCount);
    extern void GetVariableKeyLerpPoseTranslations(struct FTransform * Atoms, const struct BoneTrackPair * DesiredPairs, const int32_t * CompressedTrackOffsets, const uint8_t * CompressedByteStream, const int32_t CompressedNumberOfFrames, const float RelativePos, const uint8_t InterpolationType, const int32_t FORMAT, const int32_t PairCount);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
