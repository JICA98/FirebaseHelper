// Copyright Name: Jica, Year of Intended Publishing 2020.
#include "FirebaseAuth.h"

#include "FirebaseHelperBPLibrary.h"


UFirebaseAuth::UFirebaseAuth(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}


void UFirebaseAuth::OnAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                         FAuthOperationComplete ResultCallback)
{
    FFirebaseAuthResult Result = FFirebaseAuthResult();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if (Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> AuthObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, AuthObject);
        if (AuthObject->HasField("idToken"))
        {
            Result.IdToken = AuthObject->GetStringField("idToken");
            UFirebaseHelperBPLibrary::AuthToken=Result.IdToken;
        }
        if (AuthObject->HasField("refreshToken"))
        {
            Result.RefreshToken = AuthObject->GetStringField("refreshToken");
        }
        if (AuthObject->HasField("expiresIn"))
        {
            Result.ExpiresIn = AuthObject->GetStringField("expiresIn");
        }
        if (AuthObject->HasField("token_type"))
        {
            Result.TokenType = AuthObject->GetStringField("token_type");
        }
        if (AuthObject->HasField("user_id"))
        {
            Result.UserId = AuthObject->GetStringField("user_id");
        }
        if (AuthObject->HasField("project_id"))
        {
            Result.ProjectId = AuthObject->GetStringField("project_id");
        }
        if (AuthObject->HasField("localId"))
        {
            Result.LocalId = AuthObject->GetStringField("localId");
        }
        if (AuthObject->HasField("email"))
        {
            Result.Email = AuthObject->GetStringField("email");
        }
        if (AuthObject->HasField("registered"))
        {
            Result.Registered = AuthObject->GetBoolField("registered");
        }
        if (AuthObject->HasField("passwordHash"))
        {
            Result.PasswordHash = AuthObject->GetStringField("passwordHash");
        }
        if (AuthObject->HasField("providerUserInfo"))
        {
            for (TSharedPtr<FJsonValue> Provider : AuthObject->GetArrayField("providerUserInfo"))
            {
                Result.ProviderUserInfo.Add(FProviderUserInfo(Provider->AsObject()->GetStringField("providerId"),
                                                              Provider->AsObject()->GetStringField("federatedId")));
            }
        }
    }
    else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        const FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    }
}


void UFirebaseAuth::ExchangeCustomToken(const FString& CustomToken, FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signInWithCustomToken?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("token", CustomToken);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseAuth::ExchangeRefreshToken(const FString& RefreshToken, FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "token?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    HttpRequest->SetContentAsString(TEXT("grant_type=refresh_token&refresh_token="+RefreshToken));
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseAuth::SignUpWithEmailAndPassword(const FString& Email, const FString& Password,
                                               FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signUp?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("email", Email);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::SignInWithEmailAndPassword(const FString& Email, const FString& Password,
                                               FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signInWithPassword?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("email", Email);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::SignInAnonymously(FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signUp?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::OnOAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                          FOAuthOperationComplete ResultCallback)
{
    FFirebaseOAuthResult Result = FFirebaseOAuthResult();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if (Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> OAuthObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, OAuthObject);
        if (OAuthObject->HasField("federatedId"))
        {
            Result.FederatedId = OAuthObject->GetStringField("federatedId");
        }
        if (OAuthObject->HasField("providerId"))
        {
            Result.ProviderId = OAuthObject->GetStringField("providerId");
        }
        if (OAuthObject->HasField("localId"))
        {
            Result.LocalId = OAuthObject->GetStringField("localId");
        }
        if (OAuthObject->HasField("emailVerified"))
        {
            Result.EmailVerified = OAuthObject->GetBoolField("emailVerified");
        }
        if (OAuthObject->HasField("email"))
        {
            Result.UserInfo.Email = OAuthObject->GetStringField("email");
        }
        if (OAuthObject->HasField("oauthIdToken"))
        {
            Result.OauthIdToken = OAuthObject->GetStringField("oauthIdToken");
        }
        if (OAuthObject->HasField("oauthAccessToken"))
        {
            Result.OauthAccessToken = OAuthObject->GetStringField("oauthAccessToken");
        }
        if (OAuthObject->HasField("oauthTokenSecret"))
        {
            Result.OauthTokenSecret = OAuthObject->GetStringField("oauthTokenSecret");
        }
        if (OAuthObject->HasField("rawUserInfo"))
        {
            Result.UserInfo.RawUserInfo = OAuthObject->GetStringField("rawUserInfo");
        }
        if (OAuthObject->HasField("firstName"))
        {
            Result.UserInfo.FirstName = OAuthObject->GetStringField("firstName");
        }
        if (OAuthObject->HasField("lastName"))
        {
            Result.UserInfo.LastName = OAuthObject->GetStringField("lastName");
        }
        if (OAuthObject->HasField("fullName"))
        {
            Result.UserInfo.LastName = OAuthObject->GetStringField("fullName");
        }
        if (OAuthObject->HasField("displayName"))
        {
            Result.UserInfo.DisplayName = OAuthObject->GetStringField("displayName");
        }
        if (OAuthObject->HasField("photoUrl"))
        {
            Result.UserInfo.PhotoUrl = OAuthObject->GetStringField("photoUrl");
        }
        if (OAuthObject->HasField("idToken"))
        {
            Result.IdToken = OAuthObject->GetStringField("idToken");
            UFirebaseHelperBPLibrary::AuthToken = Result.IdToken;
        }
        if (OAuthObject->HasField("refreshToken"))
        {
            Result.RefreshToken = OAuthObject->GetStringField("refreshToken");
        }
        if (OAuthObject->HasField("expiresIn"))
        {
            Result.ExpiresIn = OAuthObject->GetStringField("expiresIn");
        }
        if (OAuthObject->HasField("needConfirmation"))
        {
            Result.NeedConfirmation = OAuthObject->GetBoolField("needConfirmation");
        }
    }
    else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        const FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    }
}


void UFirebaseAuth::SignInWithOAuthCredential(FOAuthOperationComplete OAuthResultCallback, const FString& IdToken,
                                              const FString& RequestUri, const EFirebaseAuthIdp Provider)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signInWithIdp?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());

    Content->SetBoolField("returnSecureToken", true);
    Content->SetBoolField("returnIdpCredential", true);


    Content->SetStringField("postBody", "id_token=" + IdToken + "&providerId=[" + UFirebaseHelperBPLibrary::ProviderURL[Provider] + "]");
    Content->SetStringField("requestUri", RequestUri);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnOAuthResultReceived, OAuthResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::OnFetchProviderReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                            FFetchProviderComplete ResultCallback)
{
    FProviderInfo Result = FProviderInfo();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if (Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> AuthObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, AuthObject);
        if (AuthObject->HasField("allProviders"))
        {
            for (TSharedPtr<FJsonValue> JsonValue : AuthObject->GetArrayField("allProviders"))
            {
                Result.ProviderList.Add(JsonValue->AsString());
            }
        }
        if (AuthObject->HasField("registered"))
        {
            Result.Registered = AuthObject->GetBoolField("registered");
        }
    }
    else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        const FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    }
}

void UFirebaseAuth::FetchProvidersForEmail(const FString& Email, FFetchProviderComplete ResultCallback,
                                           const FString& ContinueUri)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:createAuthUri?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("identifier", Email);
    Content->SetStringField("continueUri", ContinueUri);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnFetchProviderReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseAuth::OnPasswordResetSentComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                                FSendPasswordResetComplete ResultCallback)
{
    FEmailPasswordResult Result = FEmailPasswordResult();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if (Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> AuthObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, AuthObject);
        if (AuthObject->HasField("email"))
        {
            Result.Email = AuthObject->GetStringField("email");
        }
    }
    else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        const FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    }
}

void UFirebaseAuth::SendPasswordResetEmail(const FString& Email, FSendPasswordResetComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:sendOobCode?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("email", Email);
    Content->SetStringField("requestType", "PASSWORD_RESET");

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnPasswordResetSentComplete, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::VerifyPasswordResetCode(const FString& Code, FSendPasswordResetComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:resetPassword?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("oobCode", Code);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnPasswordResetSentComplete, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::ConfirmPasswordReset(const FString& Code, const FString& NewPassword,
                                         FSendPasswordResetComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:resetPassword?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("oobCode", Code);
    Content->SetStringField("newPassword", NewPassword);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnPasswordResetSentComplete, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseAuth::ChangeEmail(const FString& IdToken, const FString& Email, FAuthOperationComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);
    Content->SetStringField("email", Email);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::ChangePassword(const FString& IdToken, const FString& Password,
                                   FAuthOperationComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::UpdateProfile(const FString& IdToken, const FString& DisplayName, const FString& PhotoUrl,
                                  FAuthOperationComplete ResultCallback, TArray<FString> ListOfAttributesToDelete)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);
    Content->SetStringField("displayName", DisplayName);
    Content->SetStringField("photoUrl", PhotoUrl);
    if (ListOfAttributesToDelete.Num() != 0)
    {
        TArray<TSharedPtr<FJsonValue>> Values = {};
        for (FString Attribute : ListOfAttributesToDelete)
        {
            Values.Add(MakeShareable(new FJsonValueString(Attribute)));
        }
        Content->SetArrayField("deleteAttribute", Values);
    }
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::LinkWithEmailPassword(const FString& IdToken, const FString& Email, const FString& Password,
                                          FAuthOperationComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);
    Content->SetStringField("email", Email);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::LinkWithOAuthCredential(FOAuthOperationComplete OAuthResultCallback, const FString& IdToken,
                                            const FString& ProviderAccessToken, const FString& RequestUri,
                                            const EFirebaseAuthIdp Provider)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:signInWithIdp?key=" + UFirebaseHelperBPLibrary::UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());

    Content->SetBoolField("returnSecureToken", true);
    Content->SetBoolField("returnIdpCredential", true);


    Content->SetStringField(
        "postBody", "id_token=" + ProviderAccessToken + "&providerId=[" + UFirebaseHelperBPLibrary::ProviderURL[Provider] + "]");
    Content->SetStringField("requestUri", RequestUri);
    Content->SetStringField("idToken", IdToken);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnOAuthResultReceived, OAuthResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::UnlinkProvider(FAuthOperationComplete ResultCallback, const FString& IdToken,
                                   const TArray<FString> ListOfProviders)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("idToken", IdToken);

    TArray<TSharedPtr<FJsonValue>> ProvidersToDelete = {};
    for (FString Prov : ListOfProviders)
    {
        ProvidersToDelete.Add(MakeShareable(new FJsonValueString(Prov)));
    }

    Content->SetArrayField("deleteProvider", ProvidersToDelete);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseAuth::SendEmailVerification(const FString& IdToken, FSendPasswordResetComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:sendOobCode?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);
    Content->SetStringField("requestType", "VERIFY_EMAIL");

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnPasswordResetSentComplete, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::ConfirmEmailVerification(const FString& Code, FAuthOperationComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:update?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("oobCode", Code);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnAuthResultReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::OnEventComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                    FEventComplete ResultCallback)
{
    FEventResult Result = FEventResult();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if (!Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        const FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    };
}


void UFirebaseAuth::DeleteAccountFirebaseAuth(const FString& IdToken, FEventComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:delete?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnEventComplete, ResultCallback);
    HttpRequest->ProcessRequest();
}

void UFirebaseAuth::OnUserDataReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
                                       FUsersDataComplete ResultCallback)
{
    FUserArray Result = FUserArray();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    FString ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(Response->GetResponseCode())
        + " \nDescription " + Response->GetContentAsString();
    UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    if (Result.WasSuccessful)
    {
        TArray<FUsersDataContent> UsersArray = {};
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, JsonObject);

        if (JsonObject->HasField("users"))
        {
            for (const TSharedPtr<FJsonValue> JsonValue : JsonObject->GetArrayField("users"))
            {
                const TSharedPtr<FJsonObject> UserObject = JsonValue->AsObject();
                FUsersDataContent UserData = FUsersDataContent();
                if (UserObject->HasField("email"))
                {
                    UserData.Email = UserObject->GetStringField("email");
                }
                if (UserObject->HasField("localId"))
                {
                    UserData.LocalId = UserObject->GetStringField("localId");
                }
                if (UserObject->HasField("emailVerified"))
                {
                    UserData.EmailVerified = UserObject->GetBoolField("emailVerified");
                }
                if (UserObject->HasField("displayName"))
                {
                    UserData.UserInfo.DisplayName = UserObject->GetStringField("displayName");
                }
                if (UserObject->HasField("providerUserInfo"))
                {
                    for (const TSharedPtr<FJsonValue> Provider : UserObject->GetArrayField("providerUserInfo"))
                    {
                        UserData.ProviderUserInfo.Add(FProviderUserInfo(
                            Provider->AsObject()->GetStringField("providerId"),
                            Provider->AsObject()->GetStringField("federatedId")));
                    }
                }
                if (UserObject->HasField("photoUrl"))
                {
                    UserData.UserInfo.PhotoUrl = UserObject->GetStringField("photoUrl");
                }
                if (UserObject->HasField("passwordHash"))
                {
                    UserData.PasswordHash = UserObject->GetStringField("passwordHash");
                }
                if (UserObject->HasField("passwordUpdatedAt"))
                {
                    UserData.PasswordUpdatedAt = UserObject->GetNumberField("passwordUpdatedAt");
                }
                if (UserObject->HasField("validSince"))
                {
                    UserData.ValidSince = UserObject->GetStringField("validSince");
                }
                if (UserObject->HasField("disabled"))
                {
                    UserData.Disabled = UserObject->GetBoolField("disabled");
                }
                if (UserObject->HasField("lastLoginAt"))
                {
                    UserData.LastLoginAt = UserObject->GetStringField("lastLoginAt");
                }
                if (UserObject->HasField("createdAt"))
                {
                    UserData.CreatedAt = UserObject->GetStringField("createdAt");
                }
                if (UserObject->HasField("customAuth"))
                {
                    UserData.CustomAuth = UserObject->GetBoolField("customAuth");
                }
                UsersArray.Add(UserData);
            }
            Result.UserData = UsersArray;
        }
    }
    else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }

        ResultString = "Auth Result Unsuccessful with code " + FString::FromInt(Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if (ResultCallback.ExecuteIfBound(Result))
    {
    };
}


void UFirebaseAuth::GetUserData(const FString& IdToken, FUsersDataComplete ResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = UFirebaseHelperBPLibrary::AuthEndPoint + "accounts:lookup?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());


    Content->SetStringField("idToken", IdToken);

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseAuth::OnUserDataReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}
