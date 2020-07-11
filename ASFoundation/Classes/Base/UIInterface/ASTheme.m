//
//  ASTheme.m
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import "ASTheme.h"
#import <JKCategories/JKCategories.h>

@implementation ASTheme

- (instancetype)initWithConfig:(NSDictionary *)config
{
    self = [super init];
    if (self) {
        for (NSString *key in config) {
            if (![self respondsToSelector:NSSelectorFromString(key)]) {
                continue;
            }
            UIColor *color = [UIColor jk_colorWithHexString:config[key]];
            [self setValue:color forKey:key];
        }
    }
    return self;
}

@end
