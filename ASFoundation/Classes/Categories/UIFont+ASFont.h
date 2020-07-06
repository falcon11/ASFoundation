//
//  UIFont+ASFont.h
//  ASFoundation
//
//  Created by Ashoka on 2020/7/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (ASFont)

//  [UIScreen mainScreen].scale == 2: fontSize; == 3 fontSize * 1.5;
+ (UIFont *)as_systemFontOfSize:(CGFloat)fontSize;

//  [UIScreen mainScreen].scale == 2: fontSize; == 3 fontSize * 1.5;
+ (UIFont *)as_boldSystemFontOfSize:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END
