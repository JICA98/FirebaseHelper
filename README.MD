<!--Copyright Name: Jica, Year of Intended Publishing 2020. -->
#### **Firebase Plugin for Unreal Engine (Blueprintable)**

A simple REST based Plugin for the Firebase API.

* Cloud Firestore
* Realtime Database
* Firebase Auth

#### **Installaton**

1. Clone this Respository inside the Plugins folder of your project.
2. Restart the UE4 to see if the plugin is detected.
3. Paste your google-services.json file inside Content/StreamedAssets directory.
4. Open Project Settings in UE4, under Packaging section add StreamedAssets as a Non-Asset Directory to Cook.

#### **Getting Started**

UE4 Version : Currently Tested Only with UE4 25.4

Call SetupFirebase() which will automatically configure your project 
settings using the google services file.

##### Currently Supported

* All Operations Under Firebase Realtime Database. (Listener Yet to Implement)
* All Operations Under Firebase Auth are Supported.
* All Operations Under Cloud Firestore are Supported. (Listener and OrderBy Left)

More Updates on the way.

**Fixes for Common Errors**
* Please enable indexing to use features such as OrderBy and Filtering.
* Please configure StreamAssets directory for the google-services.json to be copied into the build directory.
* Call SetupFirebase() function before you call any other function.
* Ensure that your gooogle-services.json file contains API_KEY which is necessary for making API calls. 

