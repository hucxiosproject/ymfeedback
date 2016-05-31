//
//  ymfeedback.h
//  ymfeedback
//
//  Created by Vocinno Mac Mini 1 on 15/9/15.
//  Copyright (c) 2015年 VocinnoMacMini. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ymfeedback : NSObject{
}
+(void)registerAppKey:(NSString *)appKey;

+(void)updateUserInfo:(NSDictionary *)dic callback:(void (^)(NSError *error))callback;
+(void)feedBack:(NSDictionary *)dic callback:(void (^)(NSError *error))callback;
@end
