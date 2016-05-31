//
//  ymstatistic.h
//  ymfeedback
//
//  Created by Vocinno Mac Mini 1 on 15/9/25.
//  Copyright (c) 2015年 VocinnoMacMini. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ymstatistic : NSObject{
}

+(void)initYmStatistic:(NSString*)appkey;
+(void)initYmVersion:(NSString *)version;

//page statistic
+(void)ymPageAppear:(NSString *)pageName;
+(void)ymPageDisAppear:(NSString *)pageName;


//计数事件
+(void)ymEvent:(NSString*)eventid;
+(void)ymEvent:(NSString*)eventid attributes:(NSDictionary *)attributes;
@end
