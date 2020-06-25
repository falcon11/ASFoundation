//
//  UIDevice+ASHardware.m
//  ASFoundation
//
//  Created by Ashoka on 2020/6/26.
//

#import "UIDevice+ASHardware.h"

@implementation UIDevice (ASHardware)

+ (NSString *)as_deviceID {
    return [UIDevice currentDevice].identifierForVendor.UUIDString;
}

@end
