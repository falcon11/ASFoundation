//
//  UIView+ASView.h
//  MallCore
//
//  Created by ashoka on 2020/7/12.
//  Copyright © 2020 ztf58. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ASView)

- (void)setGradientBackgroundColorWithColors:(NSArray<UIColor *> *)colors startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

@end

NS_ASSUME_NONNULL_END
