//
//  SFEvent.h
//  SensFRX
//
//
//  Created by Ashish Chidhava on 26/12/22.
//


#pragma clang system_header

#import <Foundation/Foundation.h>
#import "SFModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface SFEvent : SFModel
@property (nonatomic, copy, readwrite, nullable) NSString *eventName;
@property (nonatomic, copy, readonly, nonnull) NSDate *timestamp;
@property (nonatomic, copy, readonly, nonnull) NSString *eventType;
@property (nonatomic, readonly, nonnull) NSString *uId;
 
+ (nullable instancetype)eventWithName:(nullable NSString *)eventName;

@end

NS_ASSUME_NONNULL_END
