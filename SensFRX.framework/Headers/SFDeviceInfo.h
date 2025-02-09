//
//  SFDeviceInfo.h
//  SensFRX
//
//  Created by Ashish Chidhava on 25/11/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFDeviceInfo : NSObject
/**
 System/ Device and Processor Information
 */

+ (BOOL)isNightShiftEnabled;

+ (BOOL)isDarkModeEnabled;

+ (CGFloat)getCurrentBrightness;

+ (BOOL)isLowPowerModeEnabled;

+ (CGFloat) getSystemFontSize;

+ (BOOL)isSilentModeEnabled;

+ (BOOL)isJailbroken;

// CFUUID - Random Unique Identifier that changes every time
+ (nullable NSString *)isSimulator;

// CFUUID - Random Unique Identifier that changes every time
+ (nullable NSString *)cfuuid;

// System Uptime (dd hh mm)
+ (nullable NSString *)systemUptime;

// Model of Device
+ (nullable NSString *)deviceModel;

// Device Name
+ (nullable NSString *)deviceName;

// System Name
+ (nullable NSString *)systemName;

// System Version
+ (nullable NSString *)systemVersion;


// Get the Screen Width - X
+ (NSInteger)screenWidth;

// Get the Screen Height - Y
+ (NSInteger)screenHeight;

// Get the Screen Brightness
+ (float)screenBrightness;

// Get the Device Volume
+ (float)deviceVolume;

// Check for Multitasking enabled or not
+ (NSString*)multitaskingEnabled;

// Check for Proximity sensor enabled or not
+ (NSString*)proximitySensorEnabled;

// Check for Step-Counting Available or not
+ (BOOL)stepCountingAvailable;

// Check for Distance Available or not
+ (BOOL)distanceAvailable;

// Check for Floor Counting Available or not
+ (BOOL)floorCountingAvailable;

// Get the Number of processors
+ (NSInteger)numberProcessors;

// Get the Number of Active Processors
+ (NSInteger)numberActiveProcessors;

// Get the Processor Usage Information (i.e. ["0.2216801", "0.1009614"])
+ (NSArray *)processorsUsage;

// Get Device Orientation
+(NSString*)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation;


// Disk Information

// Total Disk Space
+ (nullable NSString *)diskSpace;

// Total Free Disk Space
+ (nullable NSString *)freeDiskSpace;

// Total Used Disk Space
+ (nullable NSString *)usedDiskSpace;


// Memory Information

// Get Total Memory
+ (double)getTotalMemory;

// Free Memory
+ (double)getFreeMemory:(BOOL)inPercent;

// Get Used Memory
+ (double)getUsedMemory:(BOOL)inPercent;

// Get Active Memory
+ (double)getActiveMemory:(BOOL)inPercent;

// Get Inactive Memory
+ (double)getInactiveMemory:(BOOL)inPercent;

// Get Wired Memory
+ (double)getWiredMemory:(BOOL)inPercent;

// Get Purgable Memory
+ (double)getPurgableMemory:(BOOL)inPercent;


@end

NS_ASSUME_NONNULL_END
