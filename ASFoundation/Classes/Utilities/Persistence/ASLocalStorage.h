//
//  ASLocalStorage.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// like localStorage in web
@interface ASLocalStorage : NSObject

+ (NSString *)as_stringForKey:(NSString *)defaultName;

+ (NSArray *)as_arrayForKey:(NSString *)defaultName;

+ (NSDictionary *)as_dictionaryForKey:(NSString *)defaultName;

+ (NSData *)as_dataForKey:(NSString *)defaultName;

+ (NSArray *)as_stringArrayForKey:(NSString *)defaultName;

+ (NSInteger)as_integerForKey:(NSString *)defaultName;

+ (float)as_floatForKey:(NSString *)defaultName;

+ (double)as_doubleForKey:(NSString *)defaultName;

+ (BOOL)as_boolForKey:(NSString *)defaultName;

+ (NSURL *)as_URLForKey:(NSString *)defaultName;

#pragma mark - WRITE FOR STANDARD

+ (void)as_setObject:(id)value forKey:(NSString *)defaultName;

#pragma mark - READ ARCHIVE FOR STANDARD

+ (id)as_arcObjectForKey:(NSString *)defaultName;

#pragma mark - WRITE ARCHIVE FOR STANDARD

+ (void)as_setArcObject:(id)value forKey:(NSString *)defaultName;

@end

NS_ASSUME_NONNULL_END
