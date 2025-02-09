//
//  SFTrackCallEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 20/11/23.
//

#import <Foundation/Foundation.h>
#import <SFEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFCallEvent : SFEvent
@property (nonatomic, readwrite, nullable) NSString *callState;


@end

NS_ASSUME_NONNULL_END
