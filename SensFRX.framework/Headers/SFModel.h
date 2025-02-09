//
//  SFModel.h
//  SensFRX
//
//  Created by Ashish Chidhava on 26/12/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFModel : NSObject<NSSecureCoding>


- (nullable id)JSONPayload;
- (nullable NSData *)JSONData;
- (nullable NSString *)JSONString;
+ (NSDateFormatter *)timestampDateFormatter;

@end

NS_ASSUME_NONNULL_END
