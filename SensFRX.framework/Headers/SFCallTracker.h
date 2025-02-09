//
//  SFCallTracker.h
//  SensFRX
//
//  Created by Ashish Chidhava on 17/11/23.
//

#import <CallKit/CallKit.h>

@interface SFCallTracker : NSObject

@property (nonatomic, strong) NSUUID *currentCallUUID;

@end
