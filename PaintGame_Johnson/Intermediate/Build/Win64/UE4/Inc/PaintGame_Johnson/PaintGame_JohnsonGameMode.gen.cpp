// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PaintGame_JohnsonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintGame_JohnsonGameMode() {}
// Cross Module References
	PAINTGAME_JOHNSON_API UClass* Z_Construct_UClass_APaintGame_JohnsonGameMode_NoRegister();
	PAINTGAME_JOHNSON_API UClass* Z_Construct_UClass_APaintGame_JohnsonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PaintGame_Johnson();
// End Cross Module References
	void APaintGame_JohnsonGameMode::StaticRegisterNativesAPaintGame_JohnsonGameMode()
	{
	}
	UClass* Z_Construct_UClass_APaintGame_JohnsonGameMode_NoRegister()
	{
		return APaintGame_JohnsonGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintGame_JohnsonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PaintGame_Johnson,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PaintGame_JohnsonGameMode.h" },
				{ "ModuleRelativePath", "PaintGame_JohnsonGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintGame_JohnsonGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintGame_JohnsonGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintGame_JohnsonGameMode, 1677494744);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintGame_JohnsonGameMode(Z_Construct_UClass_APaintGame_JohnsonGameMode, &APaintGame_JohnsonGameMode::StaticClass, TEXT("/Script/PaintGame_Johnson"), TEXT("APaintGame_JohnsonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintGame_JohnsonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
