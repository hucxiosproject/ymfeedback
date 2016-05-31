//
//  README.h
//  ymfeedback
//
//  Created by Vocinno Mac Mini 1 on 15/9/25.
//  Copyright (c) 2015年 VocinnoMacMini. All rights reserved.
//

#ifndef ymfeedback_README_h
#define ymfeedback_README_h

//1:+(void)initYmStatistic:(NSString*)appkey;

//2:+(void)initYmVersion:(NSString *)version;

//get version
//
//NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
//[MobClick setAppVersion:version];

//3:

// iOS9中ATS配置
//由于iOS9引入了App Transport Security (ATS)特性，要求App访问的网络使用HTTPS协议，如果不做特殊设置，
//http请求会失败，所以需要开发者在工程中增加设置以便可以发送http请求，如下：
//< key>NSAppTransportSecurity< /key>
//< dict>
//< key>NSAllowsArbitraryLoads< /key>
//< /dict>





#endif
