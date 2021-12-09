// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PaintGame_JohnsonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintGame_JohnsonHUD() {}
// Cross Module References
	PAINTGAME_JOHNSON_API UClass* Z_Construct_UClass_APaintGame_JohnsonHUD_NoRegister();
	PAINTGAME_JOHNSON_API UClass* Z_Construct_UClass_APaintGame_JohnsonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PaintGame_Johnson();
// End Cross Module References
	void APaintGame_JohnsonHUD::StaticRegisterNativesAPaintGame_JohnsonHUD()
	{
	}
	UClass* Z_Construct_UClass_APaintGame_JohnsonHUD_NoRegister()
	{
		return APaintGame_JohnsonHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintGame_JohnsonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_PaintGame_Johnson,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "PaintGame_JohnsonHUD.h" },
				{ "ModuleRelativePath", "PaintGame_JohnsonHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintGame_JohnsonHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintGame_JohnsonHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintGame_JohnsonHUD, 3938146579);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintGame_JohnsonHUD(Z_Construct_UClass_APaintGame_JohnsonHUD, &APaintGame_JohnsonHUD::StaticClass, TEXT("/Script/PaintGame_Johnson"), TEXT("APaintGame_JohnsonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintGame_JohnsonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
