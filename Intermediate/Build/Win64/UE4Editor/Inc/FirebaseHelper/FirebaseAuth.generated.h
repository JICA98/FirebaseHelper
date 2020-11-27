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
#ifdef FIREBASEHELPER_FirebaseAuth_generated_h
#error "FirebaseAuth.generated.h already included, missing '#pragma once' in FirebaseAuth.h"
#endif
#define FIREBASEHELPER_FirebaseAuth_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FEventResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmailPasswordResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FEmailPasswordResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FProviderInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserArray_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUserArray>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUsersDataContent_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUsersDataContent>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseOAuthResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FUserInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseAuthResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderUserInfo_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FProviderUserInfo>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuthError_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FAuthError>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_224_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_223_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_222_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_221_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_220_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_219_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execExchangeCustomToken);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execExchangeCustomToken);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseAuth(); \
	friend struct Z_Construct_UClass_UFirebaseAuth_Statics; \
public: \
	DECLARE_CLASS(UFirebaseAuth, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseAuth)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseAuth(); \
	friend struct Z_Construct_UClass_UFirebaseAuth_Statics; \
public: \
	DECLARE_CLASS(UFirebaseAuth, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseAuth)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseAuth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseAuth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseAuth); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseAuth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseAuth(UFirebaseAuth&&); \
	NO_API UFirebaseAuth(const UFirebaseAuth&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseAuth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseAuth(UFirebaseAuth&&); \
	NO_API UFirebaseAuth(const UFirebaseAuth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseAuth); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseAuth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseAuth)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_227_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h_230_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FirebaseAuth."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class UFirebaseAuth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseAuth_h


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
