//
//  PuzzleController.h
//  Puzzle
//
//  Created by Andrea Barbon on 19/04/12.
//  Copyright (c) 2012 Università degli studi di Padova. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "AppDelegate.h"

@interface PuzzleController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>

@property (nonatomic, retain) NSArray *pieces;
@property (nonatomic, retain) UIPopoverController *popover;


@end
