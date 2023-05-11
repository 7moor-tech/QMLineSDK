//
//  QMAgent.h
//  QMLineSDK
//
//  Created by haochongfeng on 2018/10/23.
//  Copyright © 2018年 haochongfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 当前客服状态
 */
typedef enum: NSInteger {
    QMKFStatusRobot = 1, // 机器人
    QMKFStatusClaim, // 会话被领取
    QMKFStatusOffline, // 坐席离线
    QMKFStatusFinish, // 会话被结束
    QMKFStatusVip, // vip专属坐席
    QMKFStatusQueue //排队中
}QMKFStatus;

#pragma mark -- 坐席信息 --
@interface QMAgent : NSObject

/**
 坐席(客服)id
 */
@property (nonatomic, copy) NSString *robotId;
/**
 坐席(客服)工号
 */
@property (nonatomic, copy) NSString *exten;
/**
 坐席(客服)名称
 */
@property (nonatomic, copy) NSString *name;
/**
 坐席(客服)头像
 */
@property (nonatomic, copy) NSString *icon_url;
/**
 坐席(客服)类型
 */
@property (nonatomic, copy) NSString *type;
/**
 坐席状态
 */
@property (nonatomic, assign) QMKFStatus KFStatus;
/**
 排队人数
 */
@property (nonatomic, assign) NSInteger number;

@end
