// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WhiteboardActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteboardActor() {}
// Cross Module References
	WHITEBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
	WHITEBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Whiteboard();
	WHITEBOARD_API UFunction* Z_Construct_UFunction_AWhiteboardActor_DrawOnWhiteboard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWhiteboardActor::StaticRegisterNativesAWhiteboardActor()
	{
		UClass* Class = AWhiteboardActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawOnWhiteboard", (Native)&AWhiteboardActor::execDrawOnWhiteboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWhiteboardActor_DrawOnWhiteboard()
	{
		struct WhiteboardActor_eventDrawOnWhiteboard_Parms
		{
			FVector2D LocationToDraw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationToDraw = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationToDraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WhiteboardActor_eventDrawOnWhiteboard_Parms, LocationToDraw), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationToDraw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Method to Draw On Whiteboard using Location To Draw (Vector2D from RenderTarget)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, "DrawOnWhiteboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(WhiteboardActor_eventDrawOnWhiteboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister()
	{
		return AWhiteboardActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AWhiteboardActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Whiteboard,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWhiteboardActor_DrawOnWhiteboard, "DrawOnWhiteboard" }, // 716617439
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WhiteboardActor.h" },
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drawSize_MetaData[] = {
				{ "Category", "WhiteboardActor" },
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Stores Draw Size" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_drawSize = { UE4CodeGen_Private::EPropertyClass::Float, "drawSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWhiteboardActor, drawSize), METADATA_PARAMS(NewProp_drawSize_MetaData, ARRAY_COUNT(NewProp_drawSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderTarget_MetaData[] = {
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Stores Render Target" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_renderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "renderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteboardActor, renderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_renderTarget_MetaData, ARRAY_COUNT(NewProp_renderTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whiteboardMarker_MI_MetaData[] = {
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Stores Whiteboard Marker Material Instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_whiteboardMarker_MI = { UE4CodeGen_Private::EPropertyClass::Object, "whiteboardMarker_MI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteboardActor, whiteboardMarker_MI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_whiteboardMarker_MI_MetaData, ARRAY_COUNT(NewProp_whiteboardMarker_MI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_markerMat_MetaData[] = {
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Stores Marker Material" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_markerMat = { UE4CodeGen_Private::EPropertyClass::Object, "markerMat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWhiteboardActor, markerMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_markerMat_MetaData, ARRAY_COUNT(NewProp_markerMat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_whiteboard_mesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WhiteboardActor.h" },
				{ "ToolTip", "Stores Whiteboard Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_whiteboard_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "whiteboard_mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWhiteboardActor, whiteboard_mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_whiteboard_mesh_MetaData, ARRAY_COUNT(NewProp_whiteboard_mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_drawSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_renderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_whiteboardMarker_MI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_markerMat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_whiteboard_mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWhiteboardActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWhiteboardActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWhiteboardActor, 4101473610);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWhiteboardActor(Z_Construct_UClass_AWhiteboardActor, &AWhiteboardActor::StaticClass, TEXT("/Script/Whiteboard"), TEXT("AWhiteboardActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteboardActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
