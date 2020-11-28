#pragma once

#include "FirebaseHelperBPLibrary.h"
#include "FirestoreValue.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Templates/SharedPointer.h"
#include "CloudFirestore.generated.h"

UENUM(BlueprintType)
enum EValueType {BooleanValue,IntegerValue,DoubleValue,TimestampValue,
        StringValue,BytesValue,ReferenceValue,GeoPointValue,ArrayValue,MapValue  };

USTRUCT(BlueprintType)
struct FDocumentSnapshot        //A Firestore document.        Must not exceed 1 MiB - 4 bytes.
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ResourceName ;    //The resource name of the document, for example projects/{project_id}/databases/{database_id}/documents/{document_path}.
    /*
    Map (key: string, value: object (Value))
    The map's fields.
    The map keys represent field names. Field names matching the regular expression __.*__ are reserved. Reserved field names are forbidden except in certain documented contexts. The map keys, represented as UTF-8, must not exceed 1,500 bytes and cannot be empty.
    An object containing a list of "key": value pairs. Example: { "name": "wrench", "mass": "1.3kg", "count": "3" }.
     */
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FJsonValueB> Fields;
    /*
    Output only. The time at which the document was created.
    This value increases monotonically when a document is deleted then recreated. It can also be compared to values from other documents and the readTime of a query.
    A timestamp in RFC3339 UTC "Zulu" format, with nanosecond resolution and up to nine fractional digits. Examples: "2014-10-02T15:01:23Z" and "2014-10-02T15:01:23.045123456Z".
     */
    UPROPERTY(BlueprintReadOnly)
    FString CreateTime ;
    /*
    Output only. The time at which the document was last changed.
    This value is initially set to the createTime then increases monotonically with each change to the document. It can also be compared to values from other documents and the readTime of a query.
    A timestamp in RFC3339 UTC "Zulu" format, with nanosecond resolution and up to nine fractional digits. Examples: "2014-10-02T15:01:23Z" and "2014-10-02T15:01:23.045123456Z".
     */
    UPROPERTY(BlueprintReadOnly)
    FString UpdateTime ;
};

USTRUCT(BlueprintType)
struct FMultipleDocuments
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FDocumentSnapshot> DocumentSnapshots;
};


USTRUCT(BlueprintType)
struct FErrorData
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Message;
    UPROPERTY(BlueprintReadOnly)
    int32 Code;
    UPROPERTY(BlueprintReadOnly)
    FString Status; 
};

// A Basic Firestore Object
USTRUCT(BlueprintType)
struct FFireString
{
    GENERATED_BODY()
public:
    FString Object;
    FFireString()
    {
        Object = "";
    }
    FFireString(FString Object)
    {
        FFireString().Object = Object;
    }
    
};


DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGetDocumentResult, FDocumentSnapshot, DocumentSnapshot, bool, WasSuccessfull, FErrorData, ErrorData);
DECLARE_DYNAMIC_DELEGATE_FourParams(FBatchDocumentsFetch, FMultipleDocuments, FoundDocuments, FString,
    MissingDocuments, bool, WasSuccessfull, FErrorData, ErrorData );


UCLASS(BlueprintType)
class UCloudFirestore : public UBlueprintFunctionLibrary    
{
    GENERATED_UCLASS_BODY()
public:
    /*
    * HTTP CALLBACK METHODS
    */
    static void OnDocumentReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FGetDocumentResult ResultCallback);

    static void OnBatchDocumentsFetch(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FBatchDocumentsFetch ResultCallback);

    /*
    * CloudFirestore Helper Methods
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetData as Map", Keywords = "Cloud Firestore Document Path" ), Category = "CloudFirestore")
    static FString SetDataAsMapFirestore(FString FirestoreString, FString Key);
    
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "StringArray to DocumentPath", Keywords = "Cloud Firestore Document Path" ), Category = "CloudFirestore")
    static FString StringArrayToDocumentPath(TArray<FString> DocumentPath);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GeoPointMap to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromGeoPointMap(const TMap<FString, FLatLng> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "GeoPointArray to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromGeoPointArray(const FString Key, const TArray<FLatLng> Array);

    
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Integer Map to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromInteger(const TMap<FString,  int32> Map);
    
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float Map to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromNumber(const TMap<FString,  float> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Map to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromString(const TMap<FString,  FString> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Map to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromBool(const TMap<FString,  bool> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Array to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFieldFromBoolArray(const FString Key, const TArray<bool> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Array to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFieldFromStringArray(const FString Key, const TArray<FString> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float Array to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFieldFromNumberArray(const FString Key, const TArray<float> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Integer Array to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFieldFromIntegerArray(const FString Key, const TArray<int32> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Combine JsonString to FirestoreString", Keywords = "Firebase Helper"), Category = "CloudFirestoreHelper")
    static FFireString FirestoreStringFromJsonString(const TArray<FString> Children);

    /*
    * CloudFirestore Core Methods
    */

    //Gets a single document.
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Document (String Path)", Keywords = "Cloud Firestore Document", AutoCreateRefTerm="FieldsToReturn" ), Category = "CloudFirestore")
    static void GetDocumentFirestoreString(FString DocumentPath, FGetDocumentResult ResultCallback,TArray<FString> FieldsToReturn);
    
    /*
    Gets multiple documents. Documents returned by this method are not guaranteed to be returned in the same order that they were requested.
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Multiple Documents (Multiple Paths)", Keywords = "Cloud Firestore Document", AutoCreateRefTerm="FieldsToReturn" ), Category = "CloudFirestore")
    static void GetMultipleDocumentsDifferent(TArray<FString> DocumentPaths, FBatchDocumentsFetch ResultCallback,TArray<FString> FieldsToReturn);

    //Creates a new Firestore document.
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Create Document Firestore", Keywords = "Cloud Firestore Document", AutoCreateRefTerm="FieldsToReturn" ), Category = "CloudFirestore")
    static void CreateDocument(FFireString FirestoreData, FString CollectionPath, FGetDocumentResult ResultCallback, TArray<FString> FieldsToReturn,FString OptionalDocumentId="");
   
};


