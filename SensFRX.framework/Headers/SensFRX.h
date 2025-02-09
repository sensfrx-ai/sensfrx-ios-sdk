//
//  SensFRX.h
//  SensFRX
//
//  Created by Ashish Chidhava on 23/12/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SFCallTracker.h"

NS_ASSUME_NONNULL_BEGIN



@interface SensFRX : NSObject

@property (nonatomic, copy) NSString * _Nonnull secretKey;
@property (nonatomic, copy, readonly) NSString * _Nonnull applicationLanguages;
@property (strong, nonatomic) SFCallTracker *callTracker;

+ (instancetype _Nonnull)configure:(NSString * _Nonnull)secretKey sandboxMode:(BOOL)sandboxMode;

+ (NSMutableDictionary*)logDeviceInformation;
+ (NSString*)token;
+ (NSString*)getRequestTokenForLogin:(double)latitude longitude:(double)longitude;
+ (void)setUId:(NSString * _Nonnull)uId;
+ (NSString*)getUId;
+ (BOOL)isReady;
+ (NSString*)getDeviceFingerprints:(double)latitude longitude:(double)longitude;


typedef void (^CompletionHandler)(NSString *result);
+ (void)getDeviceFingerprints:(double)latitude
                    longitude:(double)longitude
            completionHandler:(CompletionHandler)completionHandler;

+ (nullable UIApplication *)sharedUIApplication;
+ (void)trackCallEvent:(NSString *)state;
+ (void)trackAppEvent:(NSString *)state;
+ (void)trackScreenEvent:(NSString *)screenName screenState:(NSString *)screenState;
+ (void)trackClickEvent:(NSString *)screenName screenOrientation:(UIInterfaceOrientation)orientation view:(UIView*)view touch:(UITouch*)touch;
+ (void)trackLocationEvent:(NSString *)screenName latitude:(double)latitude longitude:(double)longitude;
+ (void)trackTransactionEvent:(NSMutableDictionary *)transactionData;


@end

NS_ASSUME_NONNULL_END
