//
//  SFBatteryInfo.h
//  SensFRX
//
//  Created by Ashish Chidhava on 28/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFBatteryInfo : NSObject

// Battery Information

// Plugged In
+ (BOOL)pluggedIn;

// Battery Level
+ (float)batteryLevel;

// Charging?
+ (BOOL)charging;

// Fully Charged?
+ (BOOL)fullyCharged;

@end

NS_ASSUME_NONNULL_END
