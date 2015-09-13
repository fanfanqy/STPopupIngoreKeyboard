//
//  UIViewController+STPopupController.h
//  Sth4Me
//
//  Created by Kevin Lin on 13/9/15.
//  Copyright (c) 2015 Sth4Me. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STPopupController;

@interface UIViewController (STPopupController)

@property (nonatomic, assign) CGSize contentSizeInPopup;
@property (nonatomic, assign) CGSize landscapeContentSizeInPopup;
@property (nonatomic, weak, readonly) STPopupController *popupController;

@end