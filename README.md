# Sensfrx iOS SDK

## Overview
The Sensfrx iOS SDK helps protect iOS applications from fraud and misuse. By integrating this SDK, apps can detect and mitigate threats such as emulators, botnets, GPS spoofing, automated bots, fake accounts, install fraud, and hijacked devices. 

The SDK is compatible with both Swift and Objective-C applications and provides real-time user tracking and risk assessment via the Sensfrx dashboard.

## Prerequisites
- Xcode 12.0+
- iOS 11.0+
- Sensfrx portal account credentials
- Understanding of where to initialize and start the SDK in the app launch flow

## Installation

There are two ways to install the Sensfrx iOS SDK:

### 1. Using CocoaPods
Add the following line to your `Podfile`:

```ruby
pod 'Sensfrx', '~> 1.0.0'
```

Then, run the following command in your project directory:

```sh
pod install
```

### 2. Manual Integration
- Download the SDK package from the Sensfrx website or GitHub.
- Drag and drop the SDK files into your Xcode project.

## Configuration
To configure the SDK, add the following code to your `AppDelegate`:

```swift
import Sensfrx

func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
    Sensfrx.configure(apiKey: "YOUR_API_KEY")
    return true
}
```

## Usage

### Request Token
To fetch the request token for login, use the following method:

```swift
Sensfrx.getLoginRequestToken(latitude: latitude, longitude: longitude)
```

If user location access is not available, set latitude and longitude values to `0.0` to indicate the default location.

### Event Monitoring

#### 1. Application Events
To track application lifecycle events, use the following code in `AppDelegate`:

```swift
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
    Sensfrx.trackAppEvent("open")
    return true
}

func applicationDidBecomeActive(_ application: UIApplication) {
    Sensfrx.trackAppEvent("active")
}

func applicationWillResignActive(_ application: UIApplication) {
    Sensfrx.trackAppEvent("inactive")
}

func applicationDidEnterBackground(_ application: UIApplication) {
    Sensfrx.trackAppEvent("background")
}

func applicationWillEnterForeground(_ application: UIApplication) {
    Sensfrx.trackAppEvent("foreground")
}

func applicationWillTerminate(_ application: UIApplication) {
    Sensfrx.trackAppEvent("terminate")
}
```

#### 2. Screen Change Events
The SDK automatically tracks screen changes. If events are not generated, use the following method:

```swift
Sensfrx.trackScreenEvent("screen name")
```

#### 3. Click Events
To track user clicks, use the following method:

```swift
Sensfrx.trackClickEvent(screenName: "Home", screenOrientation: UIApplication.shared.statusBarOrientation, view: self.view, touch: touch)
```

Example:

```swift
override func viewDidLoad() {
    super.viewDidLoad()
    
    let touch = UITouch()
    Sensfrx.trackClickEvent(screenName: "Home", screenOrientation: UIApplication.shared.statusBarOrientation, view: self.view, touch: touch)
}
```

## Sample Projects
For sample projects demonstrating SDK integration, visit the [Sensfrx GitHub repository](https://github.com/your-repository).

## Support and Resources
For support or assistance, please contact our support team at [info@sensfrx.ai](mailto:info@sensfrx.ai). Additional resources and tutorials are available on our [developer portal](https://docs.Sensfrx.ai).

---

© 2025 Sensfrx. All rights reserved.
