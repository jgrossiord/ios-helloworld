//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Julien Grossiord on 11/06/13.
//  Copyright (c) 2013 Julien Grossiord. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (copy, nonatomic) NSString *userName;

@end
