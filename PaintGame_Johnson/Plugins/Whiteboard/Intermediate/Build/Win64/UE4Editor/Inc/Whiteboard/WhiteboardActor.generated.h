// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef WHITEBOARD_WhiteboardActor_generated_h
#error "WhiteboardActor.generated.h already included, missing '#pragma once' in WhiteboardActor.h"
#endif
#define WHITEBOARD_WhiteboardActor_generated_h

#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawOnWhiteboard) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_LocationToDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawOnWhiteboard(Z_Param_LocationToDraw); \
		P_NATIVE_END; \
	}


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawOnWhiteboard) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_LocationToDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawOnWhiteboard(Z_Param_LocationToDraw); \
		P_NATIVE_END; \
	}


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWhiteboardActor(); \
	friend WHITEBOARD_API class UClass* Z_Construct_UClass_AWhiteboardActor(); \
public: \
	DECLARE_CLASS(AWhiteboardActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Whiteboard"), NO_API) \
	DECLARE_SERIALIZER(AWhiteboardActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWhiteboardActor(); \
	friend WHITEBOARD_API class UClass* Z_Construct_UClass_AWhiteboardActor(); \
public: \
	DECLARE_CLASS(AWhiteboardActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Whiteboard"), NO_API) \
	DECLARE_SERIALIZER(AWhiteboardActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWhiteboardActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWhiteboardActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWhiteboardActor(AWhiteboardActor&&); \
	NO_API AWhiteboardActor(const AWhiteboardActor&); \
public:


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWhiteboardActor(AWhiteboardActor&&); \
	NO_API AWhiteboardActor(const AWhiteboardActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWhiteboardActor)


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_PRIVATE_PROPERTY_OFFSET
#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_9_PROLOG
#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_RPC_WRAPPERS \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_INCLASS \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_PRIVATE_PROPERTY_OFFSET \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_INCLASS_NO_PURE_DECLS \
	PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PaintGame_Johnson_Plugins_Whiteboard_Source_Whiteboard_Public_WhiteboardActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
