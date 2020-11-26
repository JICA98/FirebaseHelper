// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserArray;
struct FEventResult;
struct FEmailPasswordResult;
struct FProviderInfo;
struct FFirebaseOAuthResult;
struct FFirebaseAuthResult;
struct FRealtimeReadOptions;
struct FRealtimeWriteOptions;
#ifdef FIREBASEHELPER_FirebaseHelperBPLibrary_generated_h
#error "FirebaseHelperBPLibrary.generated.h already included, missing '#pragma once' in FirebaseHelperBPLibrary.h"
#endif
#define FIREBASEHELPER_FirebaseHelperBPLibrary_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FEventResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmailPasswordResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FEmailPasswordResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FProviderInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserArray_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUserArray>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUsersDataContent_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUsersDataContent>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseOAuthResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUserInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseAuthResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderUserInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FProviderUserInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuthError_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FAuthError>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_227_DELEGATE \
struct _Script_FirebaseHelper_eventUsersDataComplete_Parms \
{ \
	FUserArray UserDataArray; \
}; \
static inline void FUsersDataComplete_DelegateWrapper(const FScriptDelegate& UsersDataComplete, FUserArray UserDataArray) \
{ \
	_Script_FirebaseHelper_eventUsersDataComplete_Parms Parms; \
	Parms.UserDataArray=UserDataArray; \
	UsersDataComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_226_DELEGATE \
struct _Script_FirebaseHelper_eventEventComplete_Parms \
{ \
	FEventResult EvenComplete; \
}; \
static inline void FEventComplete_DelegateWrapper(const FScriptDelegate& EventComplete, FEventResult EvenComplete) \
{ \
	_Script_FirebaseHelper_eventEventComplete_Parms Parms; \
	Parms.EvenComplete=EvenComplete; \
	EventComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_225_DELEGATE \
struct _Script_FirebaseHelper_eventSendPasswordResetComplete_Parms \
{ \
	FEmailPasswordResult ResetSentComplete; \
}; \
static inline void FSendPasswordResetComplete_DelegateWrapper(const FScriptDelegate& SendPasswordResetComplete, FEmailPasswordResult ResetSentComplete) \
{ \
	_Script_FirebaseHelper_eventSendPasswordResetComplete_Parms Parms; \
	Parms.ResetSentComplete=ResetSentComplete; \
	SendPasswordResetComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_224_DELEGATE \
struct _Script_FirebaseHelper_eventFetchProviderComplete_Parms \
{ \
	FProviderInfo FetchComplete; \
}; \
static inline void FFetchProviderComplete_DelegateWrapper(const FScriptDelegate& FetchProviderComplete, FProviderInfo FetchComplete) \
{ \
	_Script_FirebaseHelper_eventFetchProviderComplete_Parms Parms; \
	Parms.FetchComplete=FetchComplete; \
	FetchProviderComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_223_DELEGATE \
struct _Script_FirebaseHelper_eventOAuthOperationComplete_Parms \
{ \
	FFirebaseOAuthResult OAuthComplete; \
}; \
static inline void FOAuthOperationComplete_DelegateWrapper(const FScriptDelegate& OAuthOperationComplete, FFirebaseOAuthResult OAuthComplete) \
{ \
	_Script_FirebaseHelper_eventOAuthOperationComplete_Parms Parms; \
	Parms.OAuthComplete=OAuthComplete; \
	OAuthOperationComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_222_DELEGATE \
struct _Script_FirebaseHelper_eventAuthOperationComplete_Parms \
{ \
	FFirebaseAuthResult AuthComplete; \
}; \
static inline void FAuthOperationComplete_DelegateWrapper(const FScriptDelegate& AuthOperationComplete, FFirebaseAuthResult AuthComplete) \
{ \
	_Script_FirebaseHelper_eventAuthOperationComplete_Parms Parms; \
	Parms.AuthComplete=AuthComplete; \
	AuthOperationComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execDeleteAccountFirebaseAuth); \
	DECLARE_FUNCTION(execConfirmEmailVerification); \
	DECLARE_FUNCTION(execSendEmailVerification); \
	DECLARE_FUNCTION(execUnlinkProvider); \
	DECLARE_FUNCTION(execLinkWithOAuthCredential); \
	DECLARE_FUNCTION(execLinkWithEmailPassword); \
	DECLARE_FUNCTION(execUpdateProfile); \
	DECLARE_FUNCTION(execChangePassword); \
	DECLARE_FUNCTION(execChangeEmail); \
	DECLARE_FUNCTION(execConfirmPasswordReset); \
	DECLARE_FUNCTION(execVerifyPasswordResetCode); \
	DECLARE_FUNCTION(execSendPasswordResetEmail); \
	DECLARE_FUNCTION(execFetchProvidersForEmail); \
	DECLARE_FUNCTION(execSignInWithOAuthCredential); \
	DECLARE_FUNCTION(execSignInAnonymously); \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword); \
	DECLARE_FUNCTION(execSignUpWithEmailAndPassword); \
	DECLARE_FUNCTION(execExchangeRefreshToken); \
	DECLARE_FUNCTION(execExchangeCustomToken); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete); \
	DECLARE_FUNCTION(execSetupFirebase);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execDeleteAccountFirebaseAuth); \
	DECLARE_FUNCTION(execConfirmEmailVerification); \
	DECLARE_FUNCTION(execSendEmailVerification); \
	DECLARE_FUNCTION(execUnlinkProvider); \
	DECLARE_FUNCTION(execLinkWithOAuthCredential); \
	DECLARE_FUNCTION(execLinkWithEmailPassword); \
	DECLARE_FUNCTION(execUpdateProfile); \
	DECLARE_FUNCTION(execChangePassword); \
	DECLARE_FUNCTION(execChangeEmail); \
	DECLARE_FUNCTION(execConfirmPasswordReset); \
	DECLARE_FUNCTION(execVerifyPasswordResetCode); \
	DECLARE_FUNCTION(execSendPasswordResetEmail); \
	DECLARE_FUNCTION(execFetchProvidersForEmail); \
	DECLARE_FUNCTION(execSignInWithOAuthCredential); \
	DECLARE_FUNCTION(execSignInAnonymously); \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword); \
	DECLARE_FUNCTION(execSignUpWithEmailAndPassword); \
	DECLARE_FUNCTION(execExchangeRefreshToken); \
	DECLARE_FUNCTION(execExchangeCustomToken); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete); \
	DECLARE_FUNCTION(execSetupFirebase);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseHelperBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseHelperBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseHelperBPLibrary(UFirebaseHelperBPLibrary&&); \
	NO_API UFirebaseHelperBPLibrary(const UFirebaseHelperBPLibrary&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseHelperBPLibrary(UFirebaseHelperBPLibrary&&); \
	NO_API UFirebaseHelperBPLibrary(const UFirebaseHelperBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseHelperBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_228_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_231_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FirebaseHelperBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class UFirebaseHelperBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h


#define FOREACH_ENUM_EFIREBASEAUTHIDP(op) \
	op(Apple) \
	op(AppleGameCenter) \
	op(Facebook) \
	op(GitHub) \
	op(Google) \
	op(GooglePlayGames) \
	op(LinkedIn) \
	op(Microsoft) \
	op(Twitter) \
	op(Yahoo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
