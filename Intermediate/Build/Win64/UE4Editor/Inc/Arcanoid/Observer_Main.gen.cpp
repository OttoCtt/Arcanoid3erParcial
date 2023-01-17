// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Observer_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver_Main() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AObserver_Main_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AObserver_Main();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AObserver_Main::StaticRegisterNativesAObserver_Main()
	{
	}
	UClass* Z_Construct_UClass_AObserver_Main_NoRegister()
	{
		return AObserver_Main::StaticClass();
	}
	struct Z_Construct_UClass_AObserver_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserver_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserver_Main_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Observer_Main.h" },
		{ "ModuleRelativePath", "Observer_Main.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserver_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserver_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserver_Main_Statics::ClassParams = {
		&AObserver_Main::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObserver_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserver_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserver_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserver_Main, 4275016765);
	template<> ARCANOID_API UClass* StaticClass<AObserver_Main>()
	{
		return AObserver_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserver_Main(Z_Construct_UClass_AObserver_Main, &AObserver_Main::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AObserver_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserver_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
