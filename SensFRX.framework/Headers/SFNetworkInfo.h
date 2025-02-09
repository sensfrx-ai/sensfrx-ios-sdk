//
//  SFNetworkInfo.h
//  SensFRX
//
//  Created by Ashish Chidhava on 30/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFNetworkInfo : NSObject

// Network Information

// Get Current IP Address
+ (nullable NSString *)currentIPAddress;

// Get Cell IP Address
+ (nullable NSString *)cellIPAddress;

// Get Cell IPv6 Address
+ (nullable NSString *)cellIPv6Address;

// Get Cell Netmask Address
+ (nullable NSString *)cellNetmaskAddress;

// Get Cell Broadcast Address
+ (nullable NSString *)cellBroadcastAddress;

// Get WiFi IP Address
+ (nullable NSString *)wiFiIPAddress;

// Get WiFi Netmask Address
+ (nullable NSString *)wiFiNetmaskAddress;

// Get WiFi Broadcast Address
+ (nullable NSString *)wiFiBroadcastAddress;

// Connected to WiFi?
+ (BOOL)connectedToWiFi;

// Connected to Cellular Network?
+ (BOOL)connectedToCellNetwork;

// Get Data usage in Bytes
+ (long)getDataUsage;

// Get Status of VPN Connected/Not Connected
+ (BOOL)isVPNOn;


@end

NS_ASSUME_NONNULL_END
