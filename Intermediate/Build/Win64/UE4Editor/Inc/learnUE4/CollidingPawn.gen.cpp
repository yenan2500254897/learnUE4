// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "learnUE4/CollidingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawn() {}
// Cross Module References
	LEARNUE4_API UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	LEARNUE4_API UClass* Z_Construct_UClass_ACollidingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_learnUE4();
// End Cross Module References
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
	}
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACollidingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollidingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_learnUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CollidingPawn.h" },
		{ "ModuleRelativePath", "CollidingPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollidingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollidingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollidingPawn_Statics::ClassParams = {
		&ACollidingPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollidingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollidingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollidingPawn, 1130462042);
	template<> LEARNUE4_API UClass* StaticClass<ACollidingPawn>()
	{
		return ACollidingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollidingPawn(Z_Construct_UClass_ACollidingPawn, &ACollidingPawn::StaticClass, TEXT("/Script/learnUE4"), TEXT("ACollidingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
