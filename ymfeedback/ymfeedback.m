//
//  ymfeedback.m
//  ymfeedback
//
//  Created by Vocinno Mac Mini 1 on 15/9/15.
//  Copyright (c) 2015年 VocinnoMacMini. All rights reserved.
//

#import "ymfeedback.h"
#import "UMFeedback.h"

//@"5425495dfd98c594860045ed"
@implementation ymfeedback

+(void)registerAppKey:(NSString *)appKey{
     [UMFeedback setAppkey:appKey];
}
+(void)updateUserInfo:(NSDictionary *)dic callback:(void (^)(NSError *error))callback{
    
    [[UMFeedback sharedInstance] updateUserInfo:dic
                                    completion:^(NSError *error) {
                                        callback(error);
                                    }];
    
  
}
 
+(void)feedBack:(NSDictionary *)dic callback:(void (^)(NSError *error))callback{
    [[UMFeedback sharedInstance] post:dic completion:^(NSError *error) {
        callback(error);
    }];
}

@end
