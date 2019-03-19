//
//  MDHorizontalPageFlowlayout.h
//  HorizontanPageView
//
//  Created by CJW on 16/10/20.
//  Copyright © 2016年 Datong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDHorizontalPageFlowlayout : UICollectionViewLayout

/** 列间距 */
@property (nonatomic, assign) CGFloat columnSpacing;
/** 行间距 */
@property (nonatomic, assign) CGFloat rowSpacing;
/** collectionView的内边距 */
@property (nonatomic, assign) UIEdgeInsets edgeInsets;

/** 多少行 */
@property (nonatomic, assign) NSInteger rowCount;
/** 每行展示多少个item */
@property (nonatomic, assign) NSInteger itemCountPerRow;

#pragma mark - 构造方法
+ (instancetype)MDHorizontalPageFlowlayoutWithRowCount:(NSInteger)rowCount itemCountPerRow:(NSInteger)itemCountPerRow;
+ (instancetype)MDHorizontalPageFlowlayoutWithRowCount:(NSInteger)rowCount itemCountPerRow:(NSInteger)itemCountPerRow columnSpacing:(CGFloat)columnSpacing rowSpacing:(CGFloat)rowSpacing edgeInsets:(UIEdgeInsets)edgeInsets;
- (instancetype)initWithRowCount:(NSInteger)rowCount itemCountPerRow:(NSInteger)itemCountPerRow;
- (instancetype)initWithRowCount:(NSInteger)rowCount itemCountPerRow:(NSInteger)itemCountPerRow columnSpacing:(CGFloat)columnSpacing rowSpacing:(CGFloat)rowSpacing edgeInsets:(UIEdgeInsets)edgeInsets;

@end
