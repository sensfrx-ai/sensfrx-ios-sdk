//
//  SFDeviceFingerprints.h
//  SensFRX
//
//  Created by Ashish Chidhava on 25/11/22.
//

#import <Foundation/Foundation.h>
//#import "SFDeviceFingerprints.h"
//#import "SFAccessoriesInfo.h"
//

NS_ASSUME_NONNULL_BEGIN


@interface SFDeviceFingerprints : NSObject

+ (nonnull instancetype)deviceFingerprints;

/* Device Information */


@property (nonatomic, readonly) BOOL isNightShiftEnabled;;

@property (nonatomic, readonly) BOOL isDarkModeEnabled;

@property (nonatomic, readonly) BOOL getCurrentBrightness;

@property (nonatomic, readonly) BOOL isLowPowerModeEnabled;

@property (nonatomic, readonly) CGFloat getSystemFontSize;

@property (nonatomic, readonly) BOOL isSilentModeEnabled;

@property (nonatomic, readonly) BOOL isJailbroken;

// Device Type
@property (nonatomic, readonly, nullable) NSString *isSimulator;

// System Uptime (dd hh mm)
@property (nonatomic, readonly, nullable) NSString *systemsUptime;

// Model of Device
@property (nonatomic, readonly, nullable) NSString *deviceModel;

// Device Name
@property (nonatomic, readonly, nullable) NSString *deviceName;

// System Name
@property (nonatomic, readonly, nullable) NSString *systemName;

// System Version
@property (nonatomic, readonly, nullable) NSString *systemsVersion;

// System Device Type
@property (nonatomic, readonly, nullable) NSString *systemDeviceTypeNotFormatted;

// System Device Type
@property (nonatomic, readonly, nullable) NSString *systemDeviceTypeFormatted;

// Get the Screen Width - X
@property (nonatomic, readonly) NSInteger screenWidth;

// Get the Screen Height - Y
@property (nonatomic, readonly) NSInteger screenHeight;

// Get the Screen Brightness
@property (nonatomic, readonly) float screenBrightness;

// Get the Device Volume
@property (nonatomic, readonly) float deviceVolume;

// Multitasking enabled or not
@property (nonatomic, readonly) NSString* multitaskingEnabled;

// Proximity sensor enabled or not
@property (nonatomic, readonly) NSString* proximitySensorEnabled;

// Step-Counting Available or not
@property (nonatomic, readonly) BOOL stepCountingAvailable;

// Floor Counting Available or not
@property (nonatomic, readonly) BOOL floorCountingAvailable;

// Get the Number of processors
@property (nonatomic, readonly) NSInteger numberProcessors;

// Get the Number of Active Processors
@property (nonatomic, readonly) NSInteger numberActiveProcessors;

// Get the Processor Usage Information
@property (nonatomic, readonly, nullable) NSArray *processorsUsage;

// Are any accessories attached or not
@property (nonatomic, readonly) BOOL accessoriesAttached;

// Are headphone attached or not
@property (nonatomic, readonly) BOOL headphonesAttached;

// Get the number of attached accessories
@property (nonatomic, readonly) NSInteger numberAttachedAccessories;

// Name of attached accessory/accessories (seperated by , comma's)
@property (nonatomic, readonly, nullable) NSString *nameAttachedAccessories;

// Device Orientation
@property (nonatomic, readonly) NSString *didRotateFromInterfaceOrientation;


/* Application Information */

@property (nonatomic, readonly, nullable) NSString *permissionList;

// Application Name
@property (nonatomic, readonly, nullable) NSString *applicationName;

// Application Bundle Id
@property (nonatomic, readonly, nullable) NSString *applicationBundle;

// Application Version
@property (nonatomic, readonly, nullable) NSString *applicationVersion;

// Application Install Date
@property (nonatomic, readonly, nullable) NSDate *installDate;

// Application Update Date
@property (nonatomic, readonly, nullable) NSDate *updateDate;

// Application CPU Usage
@property (nonatomic, readonly) float applicationCPUUsage;

/* Universal Unique Identifiers */

// CFUUID
@property (nonatomic, readonly, nullable) NSString *cfuuid;


/* Localization Information */

// Country
@property (nonatomic, readonly, nullable) NSString *country;

// Language
@property (nonatomic, readonly, nullable) NSString *language;

// TimeZone
@property (nonatomic, readonly, nullable) NSString *timeZone;

// Default TimeZone Offset In Hours
@property (nonatomic, readonly) float getDefaultTimeZoneOffsetInHours;

// Currency Symbol
@property (nonatomic, readonly, nullable) NSString *currency;

/* Disk Information */

// Total Disk Space
@property (nonatomic, readonly, nullable) NSString *diskSpace;

// Total Free Disk Space (Percentage)
@property (nonatomic, readonly, nullable) NSString *freeDiskSpace;

// Total Used Disk Space (Percentage)
@property (nonatomic, readonly, nullable) NSString *usedDiskSpace;


/* Memory Information */

// Total Memory
@property (nonatomic, readonly) double totalMemory;

// Free Memory (Raw)
@property (nonatomic, readonly) double freeMemoryinRaw;

// Free Memory (Percent)
@property (nonatomic, readonly) double freeMemoryinPercent;

// Used Memory (Raw)
@property (nonatomic, readonly) double usedMemoryinRaw;

// Used Memory (Percent)
@property (nonatomic, readonly) double usedMemoryinPercent;

// Active Memory (Raw)
@property (nonatomic, readonly) double activeMemoryinRaw;

// Active Memory (Percent)
@property (nonatomic, readonly) double activeMemoryinPercent;

// Inactive Memory (Raw)
@property (nonatomic, readonly) double inactiveMemoryinRaw;

// Inactive Memory (Percent)
@property (nonatomic, readonly) double inactiveMemoryinPercent;

// Wired Memory (Raw)
@property (nonatomic, readonly) double wiredMemoryinRaw;

// Wired Memory (Percent)
@property (nonatomic, readonly) double wiredMemoryinPercent;

// Purgable Memory (Raw)
@property (nonatomic, readonly) double purgableMemoryinRaw;

// Purgable Memory (Percent)
@property (nonatomic, readonly) double purgableMemoryinPercent;


/* Battery Information */

// Plugged In?
@property (nonatomic, readonly) BOOL pluggedIn;

// Battery Level
@property (nonatomic, readonly) float batteryLevel;

// Charging?
@property (nonatomic, readonly) BOOL charging;

// Fully Charged?
@property (nonatomic, readonly) BOOL fullyCharged;


/* Network Information */

// Get Current IP Address
@property (nonatomic, readonly, nullable) NSString *currentIPAddress;

// Get Current IPv6 Address
@property (nonatomic, readonly, nullable) NSString *cellIPv6Address;

// Get Cell IP Address
@property (nonatomic, readonly, nullable) NSString *cellIPAddress;

// Get Cell Netmask Address
@property (nonatomic, readonly, nullable) NSString *cellNetmaskAddress;

// Get Cell Broadcast Address
@property (nonatomic, readonly, nullable) NSString *cellBroadcastAddress;

// Get WiFi IP Address
@property (nonatomic, readonly, nullable) NSString *wiFiIPAddress;

// Get WiFi Netmask Address
@property (nonatomic, readonly, nullable) NSString *wiFiNetmaskAddress;

// Get WiFi Broadcast Address
@property (nonatomic, readonly, nullable) NSString *wiFiBroadcastAddress;

// Connected to WiFi?
@property (nonatomic, readonly) BOOL connectedToWiFi;

// Connected to Cellular Network?
@property (nonatomic, readonly) BOOL connectedToCellNetwork;

// Data usage
@property (nonatomic, readonly) long getDataUsage;

// Connected to VPN
@property (nonatomic, readonly) BOOL isVPNOn;


@end

NS_ASSUME_NONNULL_END
