// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef ARCANOID_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ARCANOID_Ball_generated_h

#define Arcanoidel_Source_Arcanoid_Ball_h_13_SPARSE_DATA
#define Arcanoidel_Source_Arcanoid_Ball_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arcanoidel_Source_Arcanoid_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Arcanoidel_Source_Arcanoid_Ball_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arcanoidel_Source_Arcanoid_Ball_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define Arcanoidel_Source_Arcanoid_Ball_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define Arcanoidel_Source_Arcanoid_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define Arcanoidel_Source_Arcanoid_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define Arcanoidel_Source_Arcanoid_Ball_h_10_PROLOG
#define Arcanoidel_Source_Arcanoid_Ball_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_Ball_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Ball_h_13_RPC_WRAPPERS \
	Arcanoidel_Source_Arcanoid_Ball_h_13_INCLASS \
	Arcanoidel_Source_Arcanoid_Ball_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_Ball_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_Ball_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_Ball_h_13_INCLASS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoidel_Source_Arcanoid_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
