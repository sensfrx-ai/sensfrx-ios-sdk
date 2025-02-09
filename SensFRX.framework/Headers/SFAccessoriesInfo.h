//
//  SFAccessoriesInfo.h
//  SensFRX
//
//  Created by Ashish Chidhava on 25/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFAccessoriesInfo : NSObject

// Are any accessories attached or not
+ (BOOL)isAnyAccessoriesAttached;

// Are headphone attached or not
+ (BOOL)isHeadphonesAttached;

// Get the number of attached accessories
+ (NSInteger)numberAttachedAccessories;

// Get the name of attached accessory/accessories (seperated by , comma's)
+ (nullable NSString *)nameAttachedAccessories;

@end

NS_ASSUME_NONNULL_END
