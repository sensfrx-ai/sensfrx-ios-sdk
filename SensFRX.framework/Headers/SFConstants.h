//
//  SFConstants.h
//  SensFRX
//
//  Created by Ashish Chidhava on 30/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFConstants : NSObject

extern NSString *const SFSandboxUrl;
+ (void)setSandboxMode:(BOOL)sandboxMode;
+ (BOOL)getSandboxMode;

extern NSString *const SFBaseUrl;
extern NSString *const SFDevelopmentBaseUrl;
extern NSString *const SFToken;
extern NSString *const SFUserEvent;
extern NSString *const SFTransactionEvent;



@end

NS_ASSUME_NONNULL_END
