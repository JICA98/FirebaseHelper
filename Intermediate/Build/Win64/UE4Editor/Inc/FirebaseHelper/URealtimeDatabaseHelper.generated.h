// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirebaseData;
 
struct FRealtimeValue;
 struct FRealtimeValue;
#ifdef FIREBASEHELPER_URealtimeDatabaseHelper_generated_h
#error "URealtimeDatabaseHelper.generated.h already included, missing '#pragma once' in URealtimeDatabaseHelper.h"
#endif
#define FIREBASEHELPER_URealtimeDatabaseHelper_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeWriteOptions>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeReadOptions>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseData_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseData>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_8_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeValue_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeValue>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_82_DELEGATE \
struct _Script_FirebaseHelper_eventOperationComplete_Parms \
{ \
	FFirebaseData ResultCallback; \
}; \
static inline void FOperationComplete_DelegateWrapper(const FScriptDelegate& OperationComplete, FFirebaseData ResultCallback) \
{ \
	_Script_FirebaseHelper_eventOperationComplete_Parms Parms; \
	Parms.ResultCallback=ResultCallback; \
	OperationComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeParentChildJson); \
	DECLARE_FUNCTION(execJsonStringFromJsonString); \
	DECLARE_FUNCTION(execJsonFieldFromNumberArray); \
	DECLARE_FUNCTION(execJsonFieldFromStringArray); \
	DECLARE_FUNCTION(execJsonFieldFromBoolArray); \
	DECLARE_FUNCTION(execJsonStringFromBool); \
	DECLARE_FUNCTION(execJsonStringFromString); \
	DECLARE_FUNCTION(execJsonStringFromNumber); \
	DECLARE_FUNCTION(execAsRealtimeObject); \
	DECLARE_FUNCTION(execAsRealtimeArray); \
	DECLARE_FUNCTION(execAsRealtimeBool); \
	DECLARE_FUNCTION(execAsRealtimeString); \
	DECLARE_FUNCTION(execAsRealtimeNumber);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeParentChildJson); \
	DECLARE_FUNCTION(execJsonStringFromJsonString); \
	DECLARE_FUNCTION(execJsonFieldFromNumberArray); \
	DECLARE_FUNCTION(execJsonFieldFromStringArray); \
	DECLARE_FUNCTION(execJsonFieldFromBoolArray); \
	DECLARE_FUNCTION(execJsonStringFromBool); \
	DECLARE_FUNCTION(execJsonStringFromString); \
	DECLARE_FUNCTION(execJsonStringFromNumber); \
	DECLARE_FUNCTION(execAsRealtimeObject); \
	DECLARE_FUNCTION(execAsRealtimeArray); \
	DECLARE_FUNCTION(execAsRealtimeBool); \
	DECLARE_FUNCTION(execAsRealtimeString); \
	DECLARE_FUNCTION(execAsRealtimeNumber);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeDatabaseHelper(); \
	friend struct Z_Construct_UClass_URealtimeDatabaseHelper_Statics; \
public: \
	DECLARE_CLASS(URealtimeDatabaseHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(URealtimeDatabaseHelper)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_INCLASS \
private: \
	static void StaticRegisterNativesURealtimeDatabaseHelper(); \
	friend struct Z_Construct_UClass_URealtimeDatabaseHelper_Statics; \
public: \
	DECLARE_CLASS(URealtimeDatabaseHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(URealtimeDatabaseHelper)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeDatabaseHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeDatabaseHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeDatabaseHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeDatabaseHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtimeDatabaseHelper(URealtimeDatabaseHelper&&); \
	NO_API URealtimeDatabaseHelper(const URealtimeDatabaseHelper&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeDatabaseHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtimeDatabaseHelper(URealtimeDatabaseHelper&&); \
	NO_API URealtimeDatabaseHelper(const URealtimeDatabaseHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeDatabaseHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeDatabaseHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeDatabaseHelper)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_84_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h_88_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RealtimeDatabaseHelper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class URealtimeDatabaseHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_URealtimeDatabaseHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
