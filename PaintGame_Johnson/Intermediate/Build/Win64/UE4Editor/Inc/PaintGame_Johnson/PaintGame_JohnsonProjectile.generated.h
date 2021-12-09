// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PAINTGAME_JOHNSON_PaintGame_JohnsonProjectile_generated_h
#error "PaintGame_JohnsonProjectile.generated.h already included, missing '#pragma once' in PaintGame_JohnsonProjectile.h"
#endif
#define PAINTGAME_JOHNSON_PaintGame_JohnsonProjectile_generated_h

#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaintGame_JohnsonProjectile(); \
	friend PAINTGAME_JOHNSON_API class UClass* Z_Construct_UClass_APaintGame_JohnsonProjectile(); \
public: \
	DECLARE_CLASS(APaintGame_JohnsonProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintGame_Johnson"), NO_API) \
	DECLARE_SERIALIZER(APaintGame_JohnsonProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPaintGame_JohnsonProjectile(); \
	friend PAINTGAME_JOHNSON_API class UClass* Z_Construct_UClass_APaintGame_JohnsonProjectile(); \
public: \
	DECLARE_CLASS(APaintGame_JohnsonProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintGame_Johnson"), NO_API) \
	DECLARE_SERIALIZER(APaintGame_JohnsonProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaintGame_JohnsonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaintGame_JohnsonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintGame_JohnsonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintGame_JohnsonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintGame_JohnsonProjectile(APaintGame_JohnsonProjectile&&); \
	NO_API APaintGame_JohnsonProjectile(const APaintGame_JohnsonProjectile&); \
public:


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintGame_JohnsonProjectile(APaintGame_JohnsonProjectile&&); \
	NO_API APaintGame_JohnsonProjectile(const APaintGame_JohnsonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintGame_JohnsonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintGame_JohnsonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaintGame_JohnsonProjectile)


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APaintGame_JohnsonProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APaintGame_JohnsonProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__SphereMesh() { return STRUCT_OFFSET(APaintGame_JohnsonProjectile, SphereMesh); }


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_10_PROLOG
#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_RPC_WRAPPERS \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_INCLASS \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_INCLASS_NO_PURE_DECLS \
	PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PaintGame_Johnson_Source_PaintGame_Johnson_PaintGame_JohnsonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
