//
//  DingTalkRedEnvelop.h
//  TestTweak
//
//  Created by lingyohunl on 2016/12/8.
//  Copyright © 2016年 yohunl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DingTalkRedEnvelop : NSObject
+ (instancetype)sharedInstance;
+ (NSMutableArray *)disposeConversation:(id )converdation;
@end
