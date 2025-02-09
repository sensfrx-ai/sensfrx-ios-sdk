//
//  SFAllEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 27/12/22.
//

#pragma clang system_header

#import <Foundation/Foundation.h>
#import "SFModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SFAllEvent : SFModel

@property (nonatomic, strong, readonly, nullable) NSArray *events;
+ (nullable instancetype)monitorWithEvents:(nullable NSArray *)events;

@end

NS_ASSUME_NONNULL_END
