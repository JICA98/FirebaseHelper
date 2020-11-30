// Copyright Name: Jica, Year of Intended Publishing 2020.
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Templates/SharedPointer.h"
#include "FirebaseAuth.generated.h"

UENUM(BlueprintType)
enum EFirebaseAuthIdp { Apple, AppleGameCenter, Facebook, GitHub, Google, GooglePlayGames, LinkedIn, Microsoft, Twitter, Yahoo};

USTRUCT(BlueprintType)
struct FAuthError
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString ErrorMessage;
	UPROPERTY(BlueprintReadOnly)
	int32 ErrorCode;
	
};

USTRUCT(BlueprintType)
struct FProviderUserInfo
{
	GENERATED_BODY()
public:
	FProviderUserInfo(const FString ProvId,const FString FedId)
	{
		ProviderId = ProvId;
		FederatedId = FedId;
	}
	FProviderUserInfo()
	{
		
	}
	UPROPERTY(BlueprintReadOnly)
	FString ProviderId;
	UPROPERTY(BlueprintReadOnly)
	FString FederatedId;
};

USTRUCT(BlueprintType)
struct FFirebaseAuthResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful=false;
	UPROPERTY(BlueprintReadOnly)
	FString	ExpiresIn="";		//The number of seconds in which the ID token expires.
	UPROPERTY(BlueprintReadOnly)
	FString TokenType="";		//The type of the refresh token, always "Bearer".
	UPROPERTY(BlueprintReadOnly)
	FString RefreshToken="";		//The Firebase Auth refresh token provided in the request or a new refresh token.
	UPROPERTY(BlueprintReadOnly)
	FString IdToken="";		//A Firebase Auth ID token.
	UPROPERTY(BlueprintReadOnly)	
	FString UserId="";		//The uid corresponding to the provided ID token.
	UPROPERTY(BlueprintReadOnly)
	FString ProjectId="";
	UPROPERTY(BlueprintReadOnly)
	FString LocalId="";
	UPROPERTY(BlueprintReadOnly)
	FString Email="";
	UPROPERTY(BlueprintReadOnly)
	bool Registered=false;
	UPROPERTY(BlueprintReadOnly)
	FString PasswordHash="";
	UPROPERTY(BlueprintReadOnly)
	TArray<FProviderUserInfo> ProviderUserInfo={};
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

USTRUCT(BlueprintType)
struct FUserInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString RawUserInfo;			//The stringified JSON response containing all the IdP data corresponding to the provided OAuth credential.
	UPROPERTY(BlueprintReadOnly)
	FString FirstName;				//The first name for the account.
	UPROPERTY(BlueprintReadOnly)
	FString LastName;				//The last name for the account.
	UPROPERTY(BlueprintReadOnly)
	FString FullName;				//The full name for the account.
	UPROPERTY(BlueprintReadOnly)
	FString DisplayName;			//The display name for the account.
	UPROPERTY(BlueprintReadOnly)
	FString PhotoUrl;				//The photo Url for the account.
	UPROPERTY(BlueprintReadOnly)
	FString Email;					//The email of the account.
};

USTRUCT(BlueprintType)
struct FFirebaseOAuthResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful;
	UPROPERTY(BlueprintReadOnly)
	FString FederatedId;				//The unique ID identifies the IdP account.
	UPROPERTY(BlueprintReadOnly)
	FString ProviderId;					//The linked provider ID (e.g. "google.com" for the Google provider).
	UPROPERTY(BlueprintReadOnly)
	FString LocalId;					//The uid of the authenticated user.
	UPROPERTY(BlueprintReadOnly)
	bool EmailVerified;				//	Whether the sign-in email is verified.
	UPROPERTY(BlueprintReadOnly)
	FString OauthIdToken;				//	The OIDC id token if available.
	UPROPERTY(BlueprintReadOnly)
	FString OauthAccessToken;			//	The OAuth access token if available.
	UPROPERTY(BlueprintReadOnly)
	FString OauthTokenSecret;			//	The OAuth 1.0 token secret if available.
	UPROPERTY(BlueprintReadOnly)
	FString IdToken;					//A Firebase Auth ID token for the authenticated user.
	UPROPERTY(BlueprintReadOnly)
	FString RefreshToken;				//A Firebase Auth refresh token for the authenticated user.
	UPROPERTY(BlueprintReadOnly)
	FString ExpiresIn;					//The number of seconds in which the ID token expires.
	UPROPERTY(BlueprintReadOnly)
	bool NeedConfirmation;			//Whether another account with the same credential already exists. The user will need to sign in to the original account and then link the current credential to it.
	UPROPERTY(BlueprintReadOnly)
	FUserInfo UserInfo;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

USTRUCT(BlueprintType)
struct FUsersDataContent
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString LocalId="";
	UPROPERTY(BlueprintReadOnly)
	FString Email="";
	UPROPERTY(BlueprintReadOnly)
	FString PasswordHash="";
	UPROPERTY(BlueprintReadOnly)
	TArray<FProviderUserInfo> ProviderUserInfo={};
	UPROPERTY(BlueprintReadOnly)
	bool EmailVerified;				//	Whether the sign-in email is verified.
	UPROPERTY(BlueprintReadOnly)
	FUserInfo UserInfo;
	UPROPERTY(BlueprintReadOnly)
	float PasswordUpdatedAt;
	UPROPERTY(BlueprintReadOnly)
	FString ValidSince="";
	UPROPERTY(BlueprintReadOnly)
	bool Disabled=false;
	UPROPERTY(BlueprintReadOnly)
	FString LastLoginAt="";
	UPROPERTY(BlueprintReadOnly)
	FString CreatedAt="";
	UPROPERTY(BlueprintReadOnly)
	bool CustomAuth=false;
};

USTRUCT(BlueprintType)
struct FUserArray
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	TArray<FUsersDataContent> UserData;
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful=false;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

USTRUCT(BlueprintType)
struct FProviderInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	TArray<FString> ProviderList;
	UPROPERTY(BlueprintReadOnly)
	bool Registered;
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

USTRUCT(BlueprintType)
struct FEmailPasswordResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString Email;
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

USTRUCT(BlueprintType)
struct FEventResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};





DECLARE_DYNAMIC_DELEGATE_OneParam(FAuthOperationComplete, FFirebaseAuthResult, AuthComplete);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOAuthOperationComplete, FFirebaseOAuthResult, OAuthComplete);
DECLARE_DYNAMIC_DELEGATE_OneParam(FFetchProviderComplete, FProviderInfo, FetchComplete);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSendPasswordResetComplete, FEmailPasswordResult, ResetSentComplete);
DECLARE_DYNAMIC_DELEGATE_OneParam(FEventComplete, FEventResult, EvenComplete);
DECLARE_DYNAMIC_DELEGATE_OneParam(FUsersDataComplete, FUserArray, UserDataArray);


UCLASS()
class UFirebaseAuth : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

public:

    /*
	 * FIREBASE AUTH FUNCTIONS
	 */

	static void OnAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FAuthOperationComplete ResultCallback);

	static void OnOAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOAuthOperationComplete ResultCallback);

	static void OnFetchProviderReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FFetchProviderComplete ResultCallback);

	static void OnPasswordResetSentComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FSendPasswordResetComplete ResultCallback);

	static void OnEventComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FEventComplete ResultCallback);

	static void OnUserDataReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FUsersDataComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange custom token for an ID and refresh token", Keywords = "FirebaseAuth CustomToken"), Category = "FirebaseAuth")
    static void ExchangeCustomToken(const FString& CustomToken, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange a refresh token for an ID token", Keywords = "Refresh Firebase ID"), Category = "FirebaseAuth")
    static void ExchangeRefreshToken(const FString& RefreshToken, FAuthOperationComplete AuthResultCallback);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign up with Email & Password", Keywords = "Create Account Firebase"), Category = "FirebaseAuth")
    static void SignUpWithEmailAndPassword(const FString& Email,const FString& Password, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign in with Email & Password", Keywords = "Login Firebase Auth"), Category = "FirebaseAuth")
    static void SignInWithEmailAndPassword(const FString& Email,const FString& Password, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign in anonymously",  Keywords = "Anonymously Firebase Auth"), Category = "FirebaseAuth")
    static void SignInAnonymously(FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign in with OAuth Credential", Keywords = "OAuth Firebase Auth"), Category = "FirebaseAuth")
    static void SignInWithOAuthCredential(FOAuthOperationComplete OAuthResultCallback,const FString& IdToken="",const FString& RequestUri="http://localhost",const EFirebaseAuthIdp Provider=Google);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Fetch providers for Email", Keywords = "Providers for Email Firebase Auth"), Category = "FirebaseAuth")
    static void FetchProvidersForEmail(const FString& Email, FFetchProviderComplete ResultCallback, const FString& ContinueUri="http://localhost:8080/app");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send password reset Email", Keywords = "Send password reset email"), Category = "FirebaseAuth")
    static void SendPasswordResetEmail(const FString& Email, FSendPasswordResetComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Verify password reset Code", Keywords = "Verify password reset code"), Category = "FirebaseAuth")
    static void VerifyPasswordResetCode(const FString& Code, FSendPasswordResetComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Confirm Password Reset", Keywords = "Confirm password reset"), Category = "FirebaseAuth")
	static void ConfirmPasswordReset(const FString& Code,const FString& NewPassword, FSendPasswordResetComplete ResultCallback);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Change Email FirebaseAuth", Keywords = "Change email"), Category = "FirebaseAuth")
    static void ChangeEmail(const FString& IdToken,const FString& Email, FAuthOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Change password FirebaseAuth", Keywords = "Change password"), Category = "FirebaseAuth")
    static void ChangePassword(const FString& IdToken,const FString& Password, FAuthOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Update profile FirebaseAuth", Keywords = "Update profile"), Category = "FirebaseAuth")
    static void UpdateProfile(const FString& IdToken,const FString& DisplayName,const FString& PhotoUrl, FAuthOperationComplete ResultCallback, TArray<FString> ListOfAttributesToDelete);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Link with Email/Password", Keywords = "Link with email/password"), Category = "FirebaseAuth")
    static void LinkWithEmailPassword(const FString& IdToken,const FString& Email,const FString& Password, FAuthOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Link with OAuth credential", Keywords = "Link with OAuth credential"), Category = "FirebaseAuth")
    static void LinkWithOAuthCredential(FOAuthOperationComplete OAuthResultCallback,const FString& IdToken="",const FString& ProviderAccessToken="",const FString& RequestUri="http://localhost",const EFirebaseAuthIdp Provider=Google);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unlink provider FirebaseAuth", Keywords = "Unlink provider"), Category = "FirebaseAuth")
    static void UnlinkProvider(FAuthOperationComplete ResultCallback,const FString& IdToken,const TArray<FString> ListOfProviders);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send email verification FirebaseAuth", Keywords = "Send email verification"), Category = "FirebaseAuth")
    static void SendEmailVerification(const FString& IdToken, FSendPasswordResetComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Confirm email verification FirebaseAuth", Keywords = "Send email verification"), Category = "FirebaseAuth")
    static void ConfirmEmailVerification(const FString& Code, FAuthOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CDelete Account FirebaseAuth", Keywords = "Send email verification"), Category = "FirebaseAuth")
    static void DeleteAccountFirebaseAuth(const FString& IdToken, FEventComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get User Data", Keywords = "Send email verification"), Category = "FirebaseAuth")
    static void GetUserData(const FString& IdToken, FUsersDataComplete ResultCallback);

    
};
