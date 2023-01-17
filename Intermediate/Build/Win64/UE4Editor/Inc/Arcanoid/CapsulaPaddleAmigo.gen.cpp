// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaPaddleAmigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaPaddleAmigo() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPaddleAmigo_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPaddleAmigo();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaPaddleAmigo::StaticRegisterNativesACapsulaPaddleAmigo()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaPaddleAmigo_NoRegister()
	{
		return ACapsulaPaddleAmigo::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaPaddleAmigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaPaddleAmigo.h" },
		{ "ModuleRelativePath", "CapsulaPaddleAmigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaPaddleAmigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::ClassParams = {
		&ACapsulaPaddleAmigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaPaddleAmigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaPaddleAmigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaPaddleAmigo, 3115880201);
	template<> ARCANOID_API UClass* StaticClass<ACapsulaPaddleAmigo>()
	{
		return ACapsulaPaddleAmigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaPaddleAmigo(Z_Construct_UClass_ACapsulaPaddleAmigo, &ACapsulaPaddleAmigo::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaPaddleAmigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaPaddleAmigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
