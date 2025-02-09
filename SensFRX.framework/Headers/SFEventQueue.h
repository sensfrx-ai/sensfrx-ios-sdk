//
//  SFEventQueue.h
//  SensFRX
//
//  Created by Ashish Chidhava on 26/12/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFEventQueue : NSObject
+ (NSArray *)storedQueue;
+ (void)persistQueue:(NSArray *)queue;
+ (void)clearQueue;


@end

NS_ASSUME_NONNULL_END
