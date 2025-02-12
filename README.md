# Sensfrx iOS SDK

## Overview
The Sensfrx iOS SDK helps protect iOS applications from fraud and misuse. By integrating this SDK, apps can detect and mitigate threats such as emulators, ATO, GPS spoofing, fake accounts.
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
pod 'Sensfrx', '~> 1.0.1'
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

### Event Monitoring

#### Application Events
Tracking application lifecycle events is crucial for monitoring app usage patterns and detecting anomalies. Sensfrx provides built-in methods to track these events.
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


#### Login Event
The Login Event is critical for tracking and protecting user logins. By monitoring login attempts and associated behaviors, Sensfrx can detect abnormal patterns that may indicate fraud, such as multiple failed login attempts, IP location changes, and device fingerprint mismatches.

Benefits of Tracking Login Events:

- Account Takeover (ATO) Detection: Identifies fraudulent login attempts and potential account takeovers.
- Fraud Prevention: Detects patterns indicative of credential stuffing, password spraying, or other automated attack techniques.
- Risk Analysis: Provides actionable insights into login behaviors and risks, improving security measures.
  
```swift
    let loginData: [String: Any] = [
        "email": email,
        "password": password,
      // Send these below property along with your login request
        "package": Bundle.main.bundleIdentifier!,
        "request_token": Sensfrx.getRequestTokenForLogin(latitude, longitude),
        "d_f": Sensfrx.getDeviceFingerprints(latitude, longitude)
    ]
    Sensfrx.trackLoginEvent(loginData)
```

Fore more details checkout the demo application or connect with our [support team](https://sensfrx.ai).


### Registration Event Tracking
The Registration Event helps track new user registrations. This is essential for preventing fraudulent account creation, such as fake registrations or bot-driven sign-ups. By tracking registration behaviors, Sensfrx can detect suspicious activities like repeated sign-ups from the same IP address, unusual device fingerprints, or unverified user information.

Benefits of Tracking Registration Events:
- Fake Registration Detection: Identifies automated or bot-driven sign-ups that don't match typical user behavior.
- Fraud Prevention: Prevents fake account creation by detecting patterns such as multiple sign-ups with the same email or device fingerprint.
- Risk Analysis: Provides insights into registration behaviors, helping to prevent fraud and improve account security from the start.

```swift
    let registrationData: [String: Any] = [
        "name": name,
        "email": email,
        "phone": mobile,
        "password": password,

        // Send these below property along with your login request
        "package": Bundle.main.bundleIdentifier ?? "",
        "request_token": Sensfrx.getRequestTokenForLogin(latitude: latitude, longitude: longitude),
        "d_f": Sensfrx.getDeviceFingerprints(latitude: latitude, longitude: longitude)
    ]
    Sensfrx.trackRegistrationEvent(registrationData)

}
```

Fore more details checkout the demo application or connect with our [support team](https://sensfrx.ai).

### Transaction Event Tracking
The Transaction Event provides insights into user purchases and financial transactions. By monitoring transaction data, Sensfrx can help detect suspicious activities like payment fraud, stolen credit cards, and transaction manipulation, ensuring secure and reliable financial interactions.

Benefits of Tracking Transaction Events:
- Payment Fraud Detection: Identifies abnormal transaction patterns such as high-value transactions, unusual payment methods, or frequent payment failures.
- Risk Management: Helps businesses assess transaction risks and detect compromised accounts or fraudulent payment methods.
- Transaction Integrity: Ensures that only legitimate purchases are processed, protecting both users and merchants from fraud.


```swift

    var jsonObject: [String: Any] = [
        "transaction_id": "TXN123456",
        "transaction_type": "purchase",
        "email": "dummy@example.com",
        "first_name": "John",
        "last_name": "Doe",
        "username": "john_doe123",
        "payment_mode": "Credit Card",
        "payment_provider": "Visa",
        "card_fullname": "John Doe",
        "card_bin": "411111",
        "card_expire": "12/2026",
        "card_last": "1234",
        "cvv": "999",
        "phone_no": "9998887777",
        "transaction_amount": "1500",
        "transaction_currency": "INR",
        "shipping_cost": "50",
        "shipping_country": "India",
        "shipping_state": "Maharashtra",
        "shipping_city": "Mumbai",
        "shipping_zip": "400001",
        "shipping_phone": "9998887777",
        "shipping_fullname": "John Doe",
        "shipping_method": "Express",
        "billing_country": "India",
        "billing_state": "Maharashtra",
        "billing_city": "Mumbai",
        "billing_zip": "400001",
        "billing_phone": "9998887777",
        "merchant_name": "Gadget World",
        "merchant_category": "Electronics",
        "merchant_id": "M123456",
        "merchant_country": "India",
        "ev": "attempt_succeeded",
        "card_type": "Visa",
        "tax_amount": "100",
        "discount_amount": "50",
        "invoice_id": "INV98765",
        "d_f": "device_fingerprint_abc123",
        "request_token": "token_xyz789",
        "user_id": "user_987654"
    ]

    let itemsArray: [[String: Any]] = [
        [
            "item_id": "101",
            "item_name": "Wireless Headphones",
            "item_category": "Electronics",
            "item_quantity": "1",
            "item_price": "1200",
            "item_url": "https://example.com/item101"
        ],
        [
            "item_id": "102",
            "item_name": "USB-C Charger",
            "item_category": "Accessories",
            "item_quantity": "1",
            "item_price": "300",
            "item_url": "https://example.com/item102"
        ]
    ]

    jsonObject["items"] = itemsArray

    // Track the transaction event
    Sensfrx.trackTransactionEvent(jsonObject)

```

### Transaction Success/Failure Handling
After initiating the payment process with your payment SDK, you can track whether the transaction was successful or failed by utilizing Sensfrx.trackTransactionEvent in your onPaymentSuccess and onPaymentError methods. This helps in tracking the transaction's outcome and improves fraud detection.


```swift

// Called when payment is successful
func onPaymentSuccess() {
    var jsonObject: [String: Any] = [
        "ev": "transaction_succeeded"
    ]

    // Send the complete transaction details with updated flag
    Sensfrx.trackTransactionEvent(jsonObject)
}

// Called when payment fails
func onPaymentError(errorCode: Int, errorMessage: String) {
    var jsonObject: [String: Any] = [
        "ev": "transaction_failed"
    ]

    // Send the complete transaction details with updated flag
    Sensfrx.trackTransactionEvent(jsonObject)
}

```


#### Screen Change Events
Tracking screen transitions allows you to monitor how users navigate through your app, helping you understand their behavior and detect potential fraud. Sensfrx automatically tracks screen changes and provides valuable insights into user journeys, such as how many screens a user visits and how long they stay on each.
Capture screen transitions:

- User Behavior Analysis: Understanding user navigation patterns allows us to identify normal and abnormal behavior, improving user experience and fraud detection.
- Fraud Detection: Unusual screen change patterns, such as rapid or unexpected transitions, could indicate suspicious activity or attempts to bypass security.
For screen change event monitoring use the following method:

```swift
Sensfrx.trackScreenEvent("screen name")
```

#### Click Events
Monitor user interactions with the app by tracking button clicks or any other view clicks. Click events help us read the behavioral data of users, providing insights into how users interact with different elements of your app. To track user clicks, use the following method:

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


### Request Token
To fetch the request token for login, use the following method:

```swift
Sensfrx.getLoginRequestToken(latitude: latitude, longitude: longitude)
```
If user location access is not available, set latitude and longitude values to `0.0` to indicate the default location.


## Sample Projects
For sample projects demonstrating SDK integration, visit the [Sensfrx GitHub repository](https://github.com/your-repository).

## Error Handling
To ensure smooth SDK integration, consider the following common issues:

- **Network Issues:** Ensure the app has internet access and is not blocked by firewalls.
- **Invalid Keys:** Verify the correct secret key.


## Support and Resources
For support or assistance, please contact our support team at [info@sensfrx.ai](mailto:info@sensfrx.ai). Additional resources and tutorials are available on our [developer portal](https://docs.Sensfrx.ai).

---

© 2025 Sensfrx. All rights reserved.
