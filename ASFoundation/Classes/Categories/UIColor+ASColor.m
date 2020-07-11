//
//  UIColor+ASColor.m
//  MallCore
//
//  Created by ashoka on 2020/7/12.
//  Copyright © 2020 ztf58. All rights reserved.
//

#import "UIColor+ASColor.h"

@implementation UIColor (ASColor)

+ (UIColor *)gradientWithSize:(CGSize)size colors:(NSArray<UIColor *> *)colors startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint {
    UIGraphicsBeginImageContextWithOptions(size, NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGColorSpaceRef colorspace = CGColorSpaceCreateDeviceRGB();
    NSMutableArray *CGColors = [NSMutableArray new];
    for (UIColor *color in colors) {
        [CGColors addObject:(id)(color.CGColor)];
    }
    CGGradientRef gradient = CGGradientCreateWithColors(colorspace, (__bridge CFArrayRef)CGColors, NULL);
    CGContextDrawLinearGradient(context, gradient, CGPointMake(startPoint.x * size.width, startPoint.y * size.height), CGPointMake(endPoint.x * size.width, endPoint.y * size.height), kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation);
    
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    
    CGGradientRelease(gradient);
    CGColorSpaceRelease(colorspace);
    UIGraphicsEndImageContext();
    
    return [UIColor colorWithPatternImage:image];
}

@end
