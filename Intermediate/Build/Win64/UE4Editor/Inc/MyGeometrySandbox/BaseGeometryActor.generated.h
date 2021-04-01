// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FGeometryData;
#ifdef MYGEOMETRYSANDBOX_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define MYGEOMETRYSANDBOX_BaseGeometryActor_generated_h

#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	MYGEOMETRYSANDBOX_API static class UScriptStruct* StaticStruct();


template<> MYGEOMETRYSANDBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_10_DELEGATE \
struct _Script_MyGeometrySandbox_eventOnColorChanged_Parms \
{ \
	FLinearColor Color; \
	FString Name; \
}; \
static inline void FOnColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnColorChanged, FLinearColor const& Color, const FString& Name) \
{ \
	_Script_MyGeometrySandbox_eventOnColorChanged_Parms Parms; \
	Parms.Color=Color; \
	Parms.Name=Name; \
	OnColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA
#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeometryData);


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeometryData);


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyGeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGeometryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public:


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor)


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(ABaseGeometryActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(ABaseGeometryActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseGeometryActor, Health); } \
	FORCEINLINE static uint32 __PPO__isDead() { return STRUCT_OFFSET(ABaseGeometryActor, isDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(ABaseGeometryActor, HasWeapon); }


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_41_PROLOG
#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_PRIVATE_PROPERTY_OFFSET \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_SPARSE_DATA \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_INCLASS_NO_PURE_DECLS \
	MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGEOMETRYSANDBOX_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyGeometrySandbox_Source_MyGeometrySandbox_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> MYGEOMETRYSANDBOX_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
