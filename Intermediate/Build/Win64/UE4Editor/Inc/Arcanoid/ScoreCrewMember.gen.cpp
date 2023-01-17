// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ScoreCrewMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCrewMember() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AScoreCrewMember_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AScoreCrewMember();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AScoreCrewMember::StaticRegisterNativesAScoreCrewMember()
	{
	}
	UClass* Z_Construct_UClass_AScoreCrewMember_NoRegister()
	{
		return AScoreCrewMember::StaticClass();
	}
	struct Z_Construct_UClass_AScoreCrewMember_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoreCrewMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCrewMember_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScoreCrewMember.h" },
		{ "ModuleRelativePath", "ScoreCrewMember.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreCrewMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoreCrewMember, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_ScoreText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreCrewMember.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoreCrewMember, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_ScoreText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreCrewMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCrewMember_Statics::NewProp_ScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoreCrewMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreCrewMember>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoreCrewMember_Statics::ClassParams = {
		&AScoreCrewMember::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScoreCrewMember_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCrewMember_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScoreCrewMember_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCrewMember_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoreCrewMember()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoreCrewMember_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoreCrewMember, 2566449503);
	template<> ARCANOID_API UClass* StaticClass<AScoreCrewMember>()
	{
		return AScoreCrewMember::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoreCrewMember(Z_Construct_UClass_AScoreCrewMember, &AScoreCrewMember::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AScoreCrewMember"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreCrewMember);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
