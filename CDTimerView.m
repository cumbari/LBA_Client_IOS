//
//  CDTimerView.m
//  App42PushTest
//
//  Created by Rajeev Ranjan on 15/03/16.
//  Copyright © 2016 Rajeev Ranjan. All rights reserved.
//

#import "CDTimerView.h"

@interface CDTimerView ()
{
    UIImageView *cdTimerBgView;
    UILabel *countDownTimer;
    int days,hours, minutes, seconds;
    NSTimer *timer;
}

@end

@implementation CDTimerView

@synthesize secondsLeft;

-(void)startCDTimer
{
    [self createCountDownTimer];
    //[self performSelector:@selector(scheduleTimer) withObject:nil afterDelay:0.5f];
    [self scheduleTimer];
}


-(void)createCountDownTimer
{
    /**
     * Creating Timer Bg
     */
    NSString *imagePath = [[NSBundle mainBundle] pathForResource:@"Inactive_button" ofType:@"png"];
    cdTimerBgView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:imagePath]];
    cdTimerBgView.center = CGPointMake(self.frame.size.width/2, self.frame.size.height/2);
    
    /**
     * Creating Timer label
     */
    countDownTimer = [[UILabel alloc] initWithFrame:cdTimerBgView.frame];
    countDownTimer.backgroundColor = [UIColor clearColor];
    countDownTimer.textAlignment = NSTextAlignmentCenter;
    countDownTimer.textColor = [UIColor whiteColor];
    countDownTimer.font = [UIFont fontWithName:@"DBLCDTempBlack" size:24];
    countDownTimer.center = CGPointMake(cdTimerBgView.frame.size.width/2, cdTimerBgView.frame.size.height/2);
    [self addSubview:cdTimerBgView];
    [cdTimerBgView addSubview:countDownTimer];
}

-(void)scheduleTimer{
    hours = minutes = seconds = 0;
    if([timer isValid]) {
        timer = nil;
    }
    [self updateTimer:nil];
    timer = [NSTimer scheduledTimerWithTimeInterval:1.0f target:self selector:@selector(updateTimer:) userInfo:nil repeats:YES];
}

-(void)invalidateCDTimer
{
    if (timer) {
        [timer invalidate];
        timer = nil;
    }
}


-(void)updateTimer:(NSTimer *)theTimer {
    if(secondsLeft > 0 ) {
        secondsLeft -- ;
        hours = secondsLeft / 3600;
        days = hours/24;
        hours = hours%24;
        minutes = (secondsLeft % 3600) / 60;
        seconds = (secondsLeft %3600) % 60;
        countDownTimer.text = [NSString stringWithFormat:@"%02d : %02d : %02d : %02d",days, hours, minutes, seconds];
    } 
}

@end
