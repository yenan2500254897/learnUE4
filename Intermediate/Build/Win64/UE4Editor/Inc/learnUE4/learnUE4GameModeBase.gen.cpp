// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnUE4/learnUE4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelearnUE4GameModeBase() {}
// Cross Module References
	LEARNUE4_API UClass* Z_Construct_UClass_AlearnUE4GameModeBase_NoRegister();
	LEARNUE4_API UClass* Z_Construct_UClass_AlearnUE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_learnUE4();
// End Cross Module References
	void AlearnUE4GameModeBase::StaticRegisterNativesAlearnUE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AlearnUE4GameModeBase_NoRegister()
	{
		return AlearnUE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AlearnUE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AlearnUE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_learnUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlearnUE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "learnUE4GameModeBase.h" },
		{ "ModuleRelativePath", "learnUE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlearnUE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlearnUE4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AlearnUE4GameModeBase_Statics::ClassParams = {
		&AlearnUE4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AlearnUE4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AlearnUE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AlearnUE4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AlearnUE4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AlearnUE4GameModeBase, 1912014865);
	template<> LEARNUE4_API UClass* StaticClass<AlearnUE4GameModeBase>()
	{
		return AlearnUE4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AlearnUE4GameModeBase(Z_Construct_UClass_AlearnUE4GameModeBase, &AlearnUE4GameModeBase::StaticClass, TEXT("/Script/learnUE4"), TEXT("AlearnUE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlearnUE4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
