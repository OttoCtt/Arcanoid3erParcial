// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/FacadeScoreBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeScoreBoard() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AFacadeScoreBoard_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AFacadeScoreBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AFacadeScoreBoard::StaticRegisterNativesAFacadeScoreBoard()
	{
	}
	UClass* Z_Construct_UClass_AFacadeScoreBoard_NoRegister()
	{
		return AFacadeScoreBoard::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeScoreBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeScoreBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeScoreBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeScoreBoard.h" },
		{ "ModuleRelativePath", "FacadeScoreBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks_MetaData[] = {
		{ "Comment", "//The Tasks to execute\n" },
		{ "ModuleRelativePath", "FacadeScoreBoard.h" },
		{ "ToolTip", "The Tasks to execute" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFacadeScoreBoard, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacadeScoreBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacadeScoreBoard_Statics::NewProp_Tasks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeScoreBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeScoreBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeScoreBoard_Statics::ClassParams = {
		&AFacadeScoreBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFacadeScoreBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeScoreBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeScoreBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeScoreBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeScoreBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeScoreBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeScoreBoard, 4145337563);
	template<> ARCANOID_API UClass* StaticClass<AFacadeScoreBoard>()
	{
		return AFacadeScoreBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeScoreBoard(Z_Construct_UClass_AFacadeScoreBoard, &AFacadeScoreBoard::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AFacadeScoreBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeScoreBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
