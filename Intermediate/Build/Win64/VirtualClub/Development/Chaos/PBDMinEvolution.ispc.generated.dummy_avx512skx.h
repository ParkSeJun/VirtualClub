//
// C:\VirtualClub\Intermediate\Build\Win64\VirtualClub\Development\Chaos\PBDMinEvolution.ispc.generated.dummy_avx512skx.h
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

#ifndef __ISPC_STRUCT_FPBDRigidArrays__
#define __ISPC_STRUCT_FPBDRigidArrays__
struct FPBDRigidArrays {
    int32_t NumParticles;
    int8_t * ObjectState;
    struct FVector * X;
    struct FVector * P;
    struct FVector4 * R;
    struct FVector4 * Q;
    struct FVector * V;
    struct FVector * PreV;
    struct FVector * W;
    struct FVector * PreW;
    struct FVector * CenterOfMass;
    struct FVector4 * RotationOfMass;
    float * InvM;
    struct FMatrix * InvI;
    struct FVector * F;
    struct FVector * T;
    struct FVector * LinearImpulse;
    struct FVector * AngularImpulse;
    int8_t * Disabled;
    int8_t * GravityEnabled;
    float * LinearEtherDrag;
    float * AngularEtherDrag;
    int8_t * HasBounds;
    struct FAABB * LocalBounds;
    struct FAABB * WorldBounds;
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FMatrix__
#define __ISPC_STRUCT_FMatrix__
struct FMatrix {
    float M[16];
};
#endif

#ifndef __ISPC_STRUCT_FAABB__
#define __ISPC_STRUCT_FAABB__
struct FAABB {
    struct FVector Min;
    struct FVector Max;
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

#ifndef __ISPC_STRUCT_FSimulationSpace__
#define __ISPC_STRUCT_FSimulationSpace__
struct FSimulationSpace {
    struct FTransform Transform;
    struct FVector LinearAcceleration;
    struct FVector AngularAcceleration;
    struct FVector LinearVelocity;
    struct FVector AngularVelocity;
};
#endif

#ifndef __ISPC_STRUCT_FSimulationSpaceSettings__
#define __ISPC_STRUCT_FSimulationSpaceSettings__
struct FSimulationSpaceSettings {
    float MasterAlpha;
    float LinearAccelerationAlpha;
    float CoriolisAlpha;
    float CentrifugalAlpha;
    float EulerAlpha;
    float AngularAccelerationAlpha;
    float LinearVelocityAlpha;
    float AngularVelocityAlpha;
    float ExternalLinearEtherDrag;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void MinEvolutionIntegrate(float Dt, struct FPBDRigidArrays &Rigids, struct FSimulationSpace &SimulationSpace, struct FSimulationSpaceSettings &SimulationSpaceSettings, const struct FVector &Gravity, const float BoundsExtension, const float CullDistance);
    extern int32_t SizeofFAABB();
    extern int32_t SizeofFPBDRigidArrays();
    extern int32_t SizeofFSimulationSpace();
    extern int32_t SizeofFSimulationSpaceSettings();
    extern int32_t SizeofFTransform();
    extern int32_t ValueOfEObjectStateTypeDynamic();
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
