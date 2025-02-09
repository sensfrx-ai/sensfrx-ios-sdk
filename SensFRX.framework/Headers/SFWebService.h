//
//  SFWebService.h
//  SensFRX
//
//  Created by Ashish Chidhava on 28/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFWebService : NSObject

+(void)callApi:(NSString*)apiEndPoint jsonRequest:(NSJSONSerialization *)requestData httpMethod:(NSString *)method withBlock:(void(^)(NSData *, NSError*))block ;

@end

NS_ASSUME_NONNULL_END
