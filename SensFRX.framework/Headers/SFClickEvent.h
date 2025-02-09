//
//  SFClickEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 30/01/23.
//

#import <SFEvent.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface SFClickEvent : SFEvent

@property (nonatomic, readwrite, nullable) NSString *screenName;
@property (nonatomic, readwrite, nullable) NSString *orientation;
@property (nonatomic, readwrite, nullable) NSString *display_x;
@property (nonatomic, readwrite, nullable) NSString *display_y;
@property (nonatomic, readwrite, nullable) NSString *gyroscope_x;
@property (nonatomic, readwrite, nullable) NSString *gyroscope_y;
@property (nonatomic, readwrite, nullable) NSString *gyroscope_z;

@end

NS_ASSUME_NONNULL_END
