// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ScoreEnergy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreEnergy() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AScoreEnergy_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AScoreEnergy();
	ARCANOID_API UClass* Z_Construct_UClass_AScoreCrewMember();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AScoreEnergy::StaticRegisterNativesAScoreEnergy()
	{
	}
	UClass* Z_Construct_UClass_AScoreEnergy_NoRegister()
	{
		return AScoreEnergy::StaticClass();
	}
	struct Z_Construct_UClass_AScoreEnergy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoreEnergy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScoreCrewMember,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreEnergy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScoreEnergy.h" },
		{ "ModuleRelativePath", "ScoreEnergy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoreEnergy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreEnergy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoreEnergy_Statics::ClassParams = {
		&AScoreEnergy::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AScoreEnergy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreEnergy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoreEnergy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoreEnergy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoreEnergy, 456296352);
	template<> ARCANOID_API UClass* StaticClass<AScoreEnergy>()
	{
		return AScoreEnergy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoreEnergy(Z_Construct_UClass_AScoreEnergy, &AScoreEnergy::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AScoreEnergy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreEnergy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
