//
//  QMTableTextAttachment.h
//  QMLineSDK
//
//  Created by wt on 2025/8/1.
//  Copyright © 2025 haochongfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface QMTableTextAttachment : NSTextAttachment

@property (nonatomic, strong) NSArray<NSArray<id> *> *tableData;
@property (nonatomic, assign) CGFloat maxWidth;
@property (nonatomic, assign) CGRect rect;
@property (nonatomic, strong) NSArray *columnWidths;
@property (nonatomic, strong) NSArray *rowHeights;
@property (nonatomic, assign) NSInteger tableIndex;
@property (nonatomic, copy) NSString *plainTextRepresentation; // 表格的纯文本表示

// 计算表格
- (CGRect)calculateTableRect;

+ (NSArray<NSArray<id> *> *)parseHTMLTable:(NSString *)htmlString;

+ (NSString *)generatePlainTextRepresentation:(NSArray<NSArray<NSString *> *> *)dataSource;

@end

NS_ASSUME_NONNULL_END
