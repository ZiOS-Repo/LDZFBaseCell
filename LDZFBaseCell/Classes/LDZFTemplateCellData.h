

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDZFTemplateCellData : NSObject
/// 重用标识符
@property(nonatomic, copy) NSString *reuseIdentifier;

/// 数据
@property(nonatomic, strong) id data;

/// cell高度
@property(nonatomic, assign) CGFloat cellHeight;

/// cell宽度
@property(nonatomic, assign) CGFloat cellWidth;

/// cell类型
@property(nonatomic, assign) NSInteger cellType;

@end

NS_ASSUME_NONNULL_END
