//
//  ASSpace.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ASSpaceProtocol <NSObject>

@property (nonatomic, readonly) CGFloat xxl;
@property (nonatomic, readonly) CGFloat xl;
@property (nonatomic, readonly) CGFloat l;
@property (nonatomic, readonly) CGFloat m;
@property (nonatomic, readonly) CGFloat s;
@property (nonatomic, readonly) CGFloat xs;

@end

/**
 常用间距规范
 */
@interface ASSpace : NSObject<ASSpaceProtocol>

@property (nonatomic, readonly) CGFloat xxl;
@property (nonatomic, readonly) CGFloat xl;
@property (nonatomic, readonly) CGFloat l;
@property (nonatomic, readonly) CGFloat m;
@property (nonatomic, readonly) CGFloat s;
@property (nonatomic, readonly) CGFloat xs;

@end

NS_ASSUME_NONNULL_END
