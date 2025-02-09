//
//  SFAppEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 26/12/22.
//

#import <Foundation/Foundation.h>
#import <SFEvent.h>
NS_ASSUME_NONNULL_BEGIN

@interface SFAppEvent : SFEvent

@property (nonatomic, readwrite, nullable) NSString *appState;

@end

NS_ASSUME_NONNULL_END

