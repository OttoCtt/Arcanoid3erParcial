// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Dementor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDementor() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ADementor_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ADementor();
	ARCANOID_API UClass* Z_Construct_UClass_APublisher();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ADementor::StaticRegisterNativesADementor()
	{
	}
	UClass* Z_Construct_UClass_ADementor_NoRegister()
	{
		return ADementor::StaticClass();
	}
	struct Z_Construct_UClass_ADementor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADementor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublisher,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADementor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dementor.h" },
		{ "ModuleRelativePath", "Dementor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADementor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADementor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADementor_Statics::ClassParams = {
		&ADementor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADementor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADementor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADementor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADementor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADementor, 519662322);
	template<> ARCANOID_API UClass* StaticClass<ADementor>()
	{
		return ADementor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADementor(Z_Construct_UClass_ADementor, &ADementor::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ADementor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADementor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
