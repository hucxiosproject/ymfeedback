//
//  ymstatistic.m
//  ymfeedback
//
//  Created by Vocinno Mac Mini 1 on 15/9/25.
//  Copyright (c) 2015年 VocinnoMacMini. All rights reserved.
//

#import "ymstatistic.h"
#import "MobClick.h"

@implementation ymstatistic

+(void)initYmStatistic:(NSString*)appkey{
    //友盟统计reportPolicy属性 ：REALTIME,实时发送(只在测试模式下有效)     BATCH,启动发送
    [MobClick startWithAppkey:appkey reportPolicy:BATCH  channelId:nil];
}

//NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
+(void)initYmVersion:(NSString *)version{
    [MobClick setAppVersion:version];
}

//page statistic
+(void)ymPageAppear:(NSString *)pageName{
     [MobClick beginLogPageView:pageName];
}
+(void)ymPageDisAppear:(NSString *)pageName{
     [MobClick endLogPageView:pageName];
    
}

+(void)ymEvent:(NSString*)eventid{
    [MobClick event:eventid];
}
+(void)ymEvent:(NSString*)eventid attributes:(NSDictionary *)attributes{
    [MobClick event:eventid attributes:(NSDictionary *)attributes];
}


@end
