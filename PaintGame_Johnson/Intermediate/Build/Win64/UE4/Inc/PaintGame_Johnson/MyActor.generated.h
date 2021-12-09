// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINTGAME_JOHNSON_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define PAINTGAME_JOHNSON_MyActor_generated_h

#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_RPC_WRAPPERS
#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend PAINTGAME_JOHNSON_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintGame_Johnson"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend PAINTGAME_JOHNSON_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintGame_Johnson"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AMyActor, mesh); }


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_10_PROLOG
#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_RPC_WRAPPERS \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_INCLASS \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_INCLASS_NO_PURE_DECLS \
	PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PaintGame_Johnson_Source_PaintGame_Johnson_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
