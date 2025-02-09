//
//  SFLocationEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 04/01/23.
//

#import <SFEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFLocationEvent : SFEvent

@property (nonatomic, readwrite, nullable) NSString *screenName;
@property (nonatomic, readwrite, nullable) NSString *latitude;
@property (nonatomic, readwrite, nullable) NSString *longitude;
@property (nonatomic, readwrite, nullable) NSString *city;
@property (nonatomic, readwrite, nullable) NSString *state;
@property (nonatomic, readwrite, nullable) NSString *country;
@property (nonatomic, readwrite, nullable) NSString *pin;
@property (nonatomic, readwrite, nullable) NSString *address;

@end

NS_ASSUME_NONNULL_END
