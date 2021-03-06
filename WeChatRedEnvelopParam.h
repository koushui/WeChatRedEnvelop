//
//  WeChatRedEnvelopParam.h
//  WeChatRedEnvelop
//
//  Created by 杨志超 on 2017/1/22.
//  Copyright © 2017年 swiftyper. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeChatRedEnvelopParam : NSObject

+ (instancetype)sharedInstance;

- (NSDictionary *)toParams;

/** 为了防止手动抢跟自己抢冲突，需要这个参数做标记 */
@property (assign, nonatomic) BOOL autoReceiveRedEnvelop;
@property (assign, nonatomic) BOOL redEnvelopSwitchOn;
@property (assign, nonatomic) BOOL redEnvelopInChatRoomFromOther;
@property (assign, nonatomic) BOOL redEnvelopInChatRoomFromMe;

@property (strong, nonatomic) NSString *msgType;
@property (strong, nonatomic) NSString *sendId;
@property (strong, nonatomic) NSString *channelId;
@property (strong, nonatomic) NSString *nickName;
@property (strong, nonatomic) NSString *headImg;
@property (strong, nonatomic) NSString *nativeUrl;
@property (strong, nonatomic) NSString *sessionUserName;
@property (strong, nonatomic) NSString *timingIdentifier;

@end
