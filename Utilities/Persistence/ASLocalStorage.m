//
//  ASLocalStorage.m
//  ASFoundation
//
//  Created by ashoka on 2020/7/8.
//

#import "ASLocalStorage.h"

@implementation ASLocalStorage

+ (NSString *)as_stringForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringForKey:defaultName];
}

+ (NSArray *)as_arrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] arrayForKey:defaultName];
}

+ (NSDictionary *)as_dictionaryForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dictionaryForKey:defaultName];
}

+ (NSData *)as_dataForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dataForKey:defaultName];
}

+ (NSArray *)as_stringArrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringArrayForKey:defaultName];
}

+ (NSInteger)as_integerForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] integerForKey:defaultName];
}

+ (float)as_floatForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] floatForKey:defaultName];
}

+ (double)as_doubleForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] doubleForKey:defaultName];
}

+ (BOOL)as_boolForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] boolForKey:defaultName];
}

+ (NSURL *)as_URLForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] URLForKey:defaultName];
}

#pragma mark - WRITE FOR STANDARD

+ (void)as_setObject:(id)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:defaultName];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

#pragma mark - READ ARCHIVE FOR STANDARD

+ (id)as_arcObjectForKey:(NSString *)defaultName {
    return [NSKeyedUnarchiver unarchiveObjectWithData:[[NSUserDefaults standardUserDefaults] objectForKey:defaultName]];
}

#pragma mark - WRITE ARCHIVE FOR STANDARD

+ (void)as_setArcObject:(id)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setObject:[NSKeyedArchiver archivedDataWithRootObject:value] forKey:defaultName];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
