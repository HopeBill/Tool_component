//
//  IDFVTools.h
//  OneKeyBrother
//
//  Created by Bill on 26/4/2019.
//  Copyright © 2019 Bill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface IDFVTools : NSObject
+ (void)save:(NSString *)service data:(id)data;

+ (id)load:(NSString *)service;

+ (void)delete:(NSString *)service;

+ (NSString *)getIDFV;
@end

NS_ASSUME_NONNULL_END
