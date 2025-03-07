//
//  QMLoginManager.h
//  QMLineSDK
//
//  Created by haochongfeng on 2019/2/25.
//  Copyright © 2019年 haochongfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    QMDBTypeAccessId = 0, // 根据accessId查询
    QMDBTypeUserId,
    QMDBTypePeerId, // 获取历史数据，开开启会话才可使用.要按此查请手动调用传入参数方法
    QMDBTypeAccessIdAndUserId
} QMDBType;

@interface QMLoginManager : NSObject
//是否是日程管理
@property (nonatomic, assign) BOOL isSchedule;
//坐席状态
@property (nonatomic, assign) NSInteger KFStatus;
//是否发送失败
@property (nonatomic, assign) BOOL isNetworkError;
@property (nonatomic, assign) BOOL isManual;

@property (nonatomic, copy) NSString *peerId;

@property (nonatomic, copy) NSString *scheduleId;

@property (nonatomic, copy) NSString *processId;

@property (nonatomic, copy) NSString *entranceId;

@property (nonatomic, copy) NSString *processTo;

@property (nonatomic, strong) NSDictionary *parameters;
//声音按钮是否显示
@property (nonatomic, assign) BOOL isShowVoiceBtn;
//表情按钮是否显示
@property (nonatomic, assign) BOOL isShowFaceBtn;
//图片按钮是否显示
@property (nonatomic, assign) BOOL isShowPictureBtn;
//拍照按钮是否显示
@property (nonatomic, assign) BOOL isShowCameraBtn;
//文件按钮是否显示
@property (nonatomic, assign) BOOL isShowFileBtn;
//常见问题按钮是否显示
@property (nonatomic, assign) BOOL isShowQuestionBtn;
//评价是否显示
@property (nonatomic, assign) BOOL isShowEvaluateBtn;
//视频是否显示
@property (nonatomic, assign) BOOL isShowVideoBtn;
//推联配置
@property (nonatomic, strong) NSDictionary *pushContactInfo;
//1启用按钮 0禁用推联按钮
@property (nonatomic, assign) NSInteger enable_copy;
@property (nonatomic, assign) NSInteger enable_scan;
//会话 id
@property (nonatomic, copy) NSString *chatId;
//是否开启切换机器人
@property (nonatomic, assign) BOOL isOpenSwitchRobot;
//切换机器人提示
@property (nonatomic, copy) NSString *switchRobotTip;
//机器人列表
@property (nonatomic, strong) NSArray *robotList;
//机器人id
@property (nonatomic, copy) NSString *robotId;

//是否开启客户级别白名单
@property (nonatomic, assign) BOOL isUploadWhite;
//白名单类型
@property (nonatomic, copy) NSString *uploadWhiteList;
//全局黑名单类型
@property (nonatomic, copy) NSString *globalUploadBlackList;
//机器人图片按钮是否显示
@property (nonatomic, assign) BOOL isShowPictureByRobotBtn;
//机器人拍照按钮是否显示
@property (nonatomic, assign) BOOL isShowCameraByRobotBtn;
//机器人文件按钮是否显示
@property (nonatomic, assign) BOOL isShowFileByRobotBtn;
//机器人常见问题按钮是否显示
@property (nonatomic, assign) BOOL isShowQuestionByRobotBtn;

//是否开启评价回合制
@property (nonatomic, assign) BOOL isEvaluateRound;
//评价回合制数
@property (nonatomic, assign) long evaluateRound;
//当前回合数
@property (nonatomic, assign)long currentEvaluateRound;

//是否是人工
@property (nonatomic, assign) BOOL isRobot;
//是否评价过
@property (nonatomic, assign) BOOL isEvaluate;
/**
 单例

 @return 实例化
 */
+ (instancetype)shared;

/**
 会话是否存在

 @param sid sid
 @param completion 成功
 @param failure 失败
 */
- (void)isExistChat: (NSString *)sid completion: (void(^)(void))completion failure: (void(^)(void))failure;

@end


