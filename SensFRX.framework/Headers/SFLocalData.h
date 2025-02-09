//
//  SFLocalData.m
//  SensFRX
//
//  Created by Ashish Chidhava on 09/01/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFLocalData : NSObject
@property (atomic, copy, readwrite)NSString* uId;
@property (atomic, copy, readwrite)NSString* token;
@property (atomic, copy, readwrite) NSString *callState;

+(void)setUid:(NSString*)uId;
+(NSString*)getUid;

+(void)setToken:(NSString*)token;
+(NSString*)getToken;

+(void)setSecretKey:(NSString*)key;
+(NSString*)getSecretKey;


+ (void)setCallState:(NSString *)callState;
+ (NSString *)getCallState;


@end

NS_ASSUME_NONNULL_END
