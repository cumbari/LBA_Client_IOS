//
//  CDTimerView.h
//  App42PushTest
//
//  Created by Rajeev Ranjan on 15/03/16.
//  Copyright © 2016 Rajeev Ranjan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDTimerView : UIView
{
    int secondsLeft;
}

@property(nonatomic) int secondsLeft;

-(void)startCDTimer;
-(void)invalidateCDTimer;

@end
