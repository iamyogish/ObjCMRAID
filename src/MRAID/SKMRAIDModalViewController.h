//
//  SKMRAIDModalViewController.h
//  MRAID
//
//  Created by Jay Tucker on 9/20/13.
//  Copyright (c) 2013 Nexage, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SKMRAIDModalViewController;
@class SKMRAIDOrientationProperties;

@protocol SKMRAIDModalViewControllerDelegate <NSObject>

- (void)mraidModalViewControllerDidRotate:(SKMRAIDModalViewController *)modalViewController;
- (void)mraidModalViewControllerDidRecieveTap:(SKMRAIDModalViewController *)modalViewController;

@end

@interface SKMRAIDModalViewController : UIViewController

@property (nonatomic, weak) id<SKMRAIDModalViewControllerDelegate> delegate;

- (void)setTapObserver;
- (void)removeTapObserver;
- (id)initWithOrientationProperties:(SKMRAIDOrientationProperties *)orientationProperties;
- (void)forceToOrientation:(SKMRAIDOrientationProperties *)orientationProperties;

@end
