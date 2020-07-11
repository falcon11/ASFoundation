//
//  ASFont.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ASFontProtocol <NSObject>

@property (class, nonatomic, readonly) CGFloat largeTitleFontSize;
@property (class, nonatomic, readonly) CGFloat title1FontSize;
@property (class, nonatomic, readonly) CGFloat title2FontSize;
@property (class, nonatomic, readonly) CGFloat title3FontSize;
@property (class, nonatomic, readonly) CGFloat headlineFontSize;
@property (class, nonatomic, readonly) CGFloat bodyFontSize;
@property (class, nonatomic, readonly) CGFloat calloutFontSize;
@property (class, nonatomic, readonly) CGFloat subheadlineFontSize;
@property (class, nonatomic, readonly) CGFloat footnoteFontSize;
@property (class, nonatomic, readonly) CGFloat caption1FontSize;
@property (class, nonatomic, readonly) CGFloat caption2FontSize;

@end

/**
 常用字体大小规范
 */
@interface ASFont : NSObject

// 34pt
@property (class, nonatomic, readonly) CGFloat largeTitleFontSize;
// 28pt
@property (class, nonatomic, readonly) CGFloat title1FontSize;
// 22pt
@property (class, nonatomic, readonly) CGFloat title2FontSize;
// 20pt
@property (class, nonatomic, readonly) CGFloat title3FontSize;
// 17pt
@property (class, nonatomic, readonly) CGFloat headlineFontSize;
// 17pt
@property (class, nonatomic, readonly) CGFloat bodyFontSize;
// 16pt
@property (class, nonatomic, readonly) CGFloat calloutFontSize;
// 15pt
@property (class, nonatomic, readonly) CGFloat subheadlineFontSize;
// 13pt
@property (class, nonatomic, readonly) CGFloat footnoteFontSize;
// 12pt
@property (class, nonatomic, readonly) CGFloat caption1FontSize;
// 11pt
@property (class, nonatomic, readonly) CGFloat caption2FontSize;

@end

NS_ASSUME_NONNULL_END
