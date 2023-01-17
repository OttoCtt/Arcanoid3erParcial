// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACapsula;
#ifdef ARCANOID_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define ARCANOID_InventoryComponent_generated_h

#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_SPARSE_DATA
#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_11_PROLOG
#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_RPC_WRAPPERS \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_INCLASS \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoidel_Source_Arcanoid_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
