// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ScoreBricks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreBricks() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AScoreBricks_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AScoreBricks();
	ARCANOID_API UClass* Z_Construct_UClass_AScoreCrewMember();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AScoreBricks::StaticRegisterNativesAScoreBricks()
	{
	}
	UClass* Z_Construct_UClass_AScoreBricks_NoRegister()
	{
		return AScoreBricks::StaticClass();
	}
	struct Z_Construct_UClass_AScoreBricks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoreBricks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScoreCrewMember,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreBricks_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScoreBricks.h" },
		{ "ModuleRelativePath", "ScoreBricks.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoreBricks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreBricks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoreBricks_Statics::ClassParams = {
		&AScoreBricks::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AScoreBricks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreBricks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoreBricks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoreBricks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoreBricks, 3463400194);
	template<> ARCANOID_API UClass* StaticClass<AScoreBricks>()
	{
		return AScoreBricks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoreBricks(Z_Construct_UClass_AScoreBricks, &AScoreBricks::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AScoreBricks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreBricks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
