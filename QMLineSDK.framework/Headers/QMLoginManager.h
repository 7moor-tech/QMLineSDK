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
//是否是坐席
@property (nonatomic, assign) BOOL isKFClaim;
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
//是否是排队状态
@property (nonatomic, assign) BOOL isQueueStatus;

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


