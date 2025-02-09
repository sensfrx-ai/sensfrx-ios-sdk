//
//  UIViewController+SFSCreenEvent.h
//  SensFRX
//
//  Created by Ashish Chidhava on 30/01/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (SFScreenEvent)

+ (void)ca_swizzleViewDidAppear;

- (void)ca_viewDidAppear:(BOOL)animated;
- (NSString *)ca_viewIdentifier;
- (NSString *)ca_normalizedClassName;

@end

NS_ASSUME_NONNULL_END
