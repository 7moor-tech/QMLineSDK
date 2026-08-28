//
//  QMEvaluation.h
//  QMLineSDK
//
//  Created by lishuijiao on 2018/11/22.
//  Copyright © 2018年 haochongfeng. All rights reserved.
//

#import <Foundation/Foundation.h>
@class QMEvaluats;

@interface QMEvaluation : NSObject

@property (nonatomic, copy) NSString * title;

@property (nonatomic, copy) NSString * thank;

@property (nonatomic, copy) NSArray<QMEvaluats *> * evaluats;

@property (nonatomic, copy) NSString * timeout;
//星级初始值
@property (nonatomic, assign) NSInteger starInitValue;
//展示类型  text 文本  star  星级
@property (nonatomic, copy) NSString *csrDetailType;
//满意度评价文案
@property (nonatomic, copy) NSString *satisfyComment;
///满意度评价超时是否开启
@property (nonatomic, assign) BOOL CSRAging;
///访客是否开启满意度权限
@property (nonatomic, assign) BOOL CSRCustomerPush;
///访客离开是否弹出满意度评价权限
@property (nonatomic, assign) BOOL CSRCustomerLeavePush;
//人工评价回合数开关
@property (nonatomic, assign)BOOL AppraiseTurnLimit;
//人工评价回合数设置
@property (nonatomic, assign)long AppraiseTurnLimitNum;

@end

@interface QMEvaluats : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString * value;

@property (nonatomic, copy) NSArray * reason;
/// 标签是否必填
@property (nonatomic, copy) NSString * labelRequired;
/// 标签描述是否必填
@property (nonatomic, copy) NSString * proposalRequired;
/// 备注和标签是否至少填写一个（xbot专用，0/1/不存在三态）
@property (nonatomic, copy) NSString * commentRequired;

/// xbot机器人评价默认选中
@property (nonatomic, assign) BOOL defaultSelected;

/// 评价默认选择（人工评价）
@property (nonatomic, assign) BOOL isDefaultSelected;
@end
