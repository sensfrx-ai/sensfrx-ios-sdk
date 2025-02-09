//
//  SFScreenEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 27/12/22.
//

#import <Foundation/Foundation.h>
#import <SFEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFScreenEvent : SFEvent

@property (nonatomic, readwrite, nullable) NSString *screenName;
@property (nonatomic, readwrite, nullable) NSString *screenState;

@end

NS_ASSUME_NONNULL_END
