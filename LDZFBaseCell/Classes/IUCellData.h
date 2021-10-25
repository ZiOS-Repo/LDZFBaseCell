//
//  IUCellData.h
//  IU_CustomViews
//
//  Created by zhuyuhui on 2021/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IUCellData : NSObject
/**
 *  Cell's reused identifier.
 */
@property (nonatomic, copy) NSString       *cellReuseIdentifier;

/**
 *  Data,.
 */
@property (nonatomic, strong) id            data;

/**
 *  Cell's height, only used for UITableView's cell.
 */
@property (nonatomic)         CGFloat       cellHeight;

/**
 *  Cell's width, only used for UITableView's cell.
 */
@property (nonatomic)         CGFloat       cellWidth;

/**
 *  Cell's type (The same cell, but maybe have different types).
 */
@property (nonatomic)         NSInteger     cellType;

@end

NS_ASSUME_NONNULL_END
