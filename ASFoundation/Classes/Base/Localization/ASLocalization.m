//
//  ASLocalization.m
//  AFNetworking
//
//  Created by Ashoka on 2020/7/10.
//

#import "ASLocalization.h"

@implementation ASLocalization

+ (NSBundle *)bundle {
    static NSBundle *bundle = nil;
    if (!bundle) {
        bundle = [NSBundle mainBundle];
    }
    return bundle;;
}

+ (NSString *)localizedStringForKey:(NSString *)key {
    return [self localizedStringForKey:key value:nil];
}

+ (NSString *)localizedStringForKey:(NSString *)key value:(nullable NSString *)value {
    return [self localizedStringForKey:key value:value table:nil];
}

+ (NSString *)localizedStringForKey:(NSString *)key value:(nullable NSString *)value table:(nullable NSString *)table {
    return [[self bundle] localizedStringForKey:key value:value table:table];
}

@end
