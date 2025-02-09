//
//  SFAppInfo.h
//  SensFRX
//
//  Created by Ashish Chidhava on 28/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFAppInfo : NSObject

// Application Information

+ (NSString *)getAppPermissions;

// Application Name
+ (nullable NSString *)applicationName;

// Application Bundle Id
+ (nullable NSString *)applicationBundle;

// Application Version
+ (nullable NSString *)applicationVersion;

// Application Install Date
+ (nullable NSDate *)installDate;

// Application Update Date
+ (nullable NSDate *)updateDate;

// Application CPU Usage
+ (float)cpuUsage;

// Country
+ (nullable NSString *)country;

// Language
+ (nullable NSString *)language;

// TimeZone
+ (nullable NSString *)timeZone;

+ (float) getDefaultTimeZoneOffsetInHours;

// Currency Symbol
+ (nullable NSString *)currency;


@end

NS_ASSUME_NONNULL_END

