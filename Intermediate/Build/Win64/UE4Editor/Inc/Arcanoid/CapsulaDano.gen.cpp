// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaDano.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaDano() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaDano_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaDano();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaDano::StaticRegisterNativesACapsulaDano()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaDano_NoRegister()
	{
		return ACapsulaDano::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaDano_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaDano_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaDano_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaDano.h" },
		{ "ModuleRelativePath", "CapsulaDano.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaDano_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaDano>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaDano_Statics::ClassParams = {
		&ACapsulaDano::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaDano_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaDano_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaDano()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaDano_Statics::ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(ACapsulaDano, 570879615);
=======
	IMPLEMENT_CLASS(ACapsulaDano, 262600331);
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	template<> ARCANOID_API UClass* StaticClass<ACapsulaDano>()
	{
		return ACapsulaDano::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaDano(Z_Construct_UClass_ACapsulaDano, &ACapsulaDano::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaDano"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaDano);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
