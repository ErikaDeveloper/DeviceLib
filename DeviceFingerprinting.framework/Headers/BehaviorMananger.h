//
//  BehaviorMananger.h
//  ClientTest
//
//  Created by 徐冶 on 2018/8/3.
//  Copyright © 2018年 徐冶. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BehaviorMananger : NSObject

//+ (instancetype)sharedBehaviorMananger;
+ (void)actionEvent:(NSString *)event withType:(NSString *)eventType withTag:(NSString *)tag;
@end
