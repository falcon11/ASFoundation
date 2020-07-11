//
//  UIView+ASView.m
//  MallCore
//
//  Created by ashoka on 2020/7/12.
//  Copyright © 2020 ztf58. All rights reserved.
//

#import "UIView+ASView.h"
#import "UIColor+ASColor.h"

@implementation UIView (ASView)

- (void)setGradientBackgroundColorWithColors:(NSArray<UIColor *> *)colors startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint {
    [self setBackgroundColor:[UIColor gradientWithSize:self.bounds.size colors:colors startPoint:startPoint endPoint:endPoint]];
}

@end
