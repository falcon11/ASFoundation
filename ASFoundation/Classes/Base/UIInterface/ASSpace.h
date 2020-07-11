//
//  ASSpace.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ASSpaceProtocol <NSObject>

@property (class, nonatomic, readonly) CGFloat xxl;
@property (class, nonatomic, readonly) CGFloat xl;
@property (class, nonatomic, readonly) CGFloat l;
@property (class, nonatomic, readonly) CGFloat m;
@property (class, nonatomic, readonly) CGFloat s;
@property (class, nonatomic, readonly) CGFloat xs;

@end

/**
 常用间距规范
 */
@interface ASSpace : NSObject<ASSpaceProtocol>

@property (class, nonatomic, readonly) CGFloat xxl;
@property (class, nonatomic, readonly) CGFloat xl;
@property (class, nonatomic, readonly) CGFloat l;
@property (class, nonatomic, readonly) CGFloat m;
@property (class, nonatomic, readonly) CGFloat s;
@property (class, nonatomic, readonly) CGFloat xs;

@end

NS_ASSUME_NONNULL_END
