//
//  ASFont.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ASFontProtocol <NSObject>

@property (nonatomic, readonly) CGFloat largeTitleFontSize;
@property (nonatomic, readonly) CGFloat title1FontSize;
@property (nonatomic, readonly) CGFloat title2FontSize;
@property (nonatomic, readonly) CGFloat title3FontSize;
@property (nonatomic, readonly) CGFloat headlineFontSize;
@property (nonatomic, readonly) CGFloat bodyFontSize;
@property (nonatomic, readonly) CGFloat calloutFontSize;
@property (nonatomic, readonly) CGFloat subheadlineFontSize;
@property (nonatomic, readonly) CGFloat footnoteFontSize;
@property (nonatomic, readonly) CGFloat caption1FontSize;
@property (nonatomic, readonly) CGFloat caption2FontSize;

@end

/**
 常用字体大小规范
 */
@interface ASFont : NSObject

// 34pt
@property (nonatomic, readonly) CGFloat largeTitleFontSize;
// 28pt
@property (nonatomic, readonly) CGFloat title1FontSize;
// 22pt
@property (nonatomic, readonly) CGFloat title2FontSize;
// 20pt
@property (nonatomic, readonly) CGFloat title3FontSize;
// 17pt
@property (nonatomic, readonly) CGFloat headlineFontSize;
// 17pt
@property (nonatomic, readonly) CGFloat bodyFontSize;
// 16pt
@property (nonatomic, readonly) CGFloat calloutFontSize;
// 15pt
@property (nonatomic, readonly) CGFloat subheadlineFontSize;
// 13pt
@property (nonatomic, readonly) CGFloat footnoteFontSize;
// 12pt
@property (nonatomic, readonly) CGFloat caption1FontSize;
// 11pt
@property (nonatomic, readonly) CGFloat caption2FontSize;

@end

NS_ASSUME_NONNULL_END
