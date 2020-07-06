//
//  UIFont+ASFont.m
//  ASFoundation
//
//  Created by Ashoka on 2020/7/6.
//

#import "UIFont+ASFont.h"

@implementation UIFont (ASFont)

+ (CGFloat)as_scaledFontSize:(CGFloat)fontSize {
    return fontSize * [UIScreen mainScreen].scale / 2;
}

+ (UIFont *)as_systemFontOfSize:(CGFloat)fontSize {
    return [UIFont systemFontOfSize:[self as_scaledFontSize:fontSize]];
}

+ (UIFont *)as_boldSystemFontOfSize:(CGFloat)fontSize {
    return [UIFont boldSystemFontOfSize:[self as_scaledFontSize:fontSize]];
}

@end
