//
//  ASLocalization.h
//  AFNetworking
//
//  Created by Ashoka on 2020/7/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ASLocalization : NSObject

// 使用时继承该类，并重写bundle
+ (NSBundle *)bundle;

+ (NSString *)localizedStringForKey:(NSString *)key;

+ (NSString *)localizedStringForKey:(NSString *)key value:(nullable NSString *)value;

+ (NSString *)localizedStringForKey:(NSString *)key value:(nullable NSString *)value table:(nullable NSString *)table;

@end

NS_ASSUME_NONNULL_END
