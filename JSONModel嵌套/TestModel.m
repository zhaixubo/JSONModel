//
//  TestModel.m
//  JSONModel嵌套
//
//  Created by 翟旭博 on 2022/10/8.
//

#import "TestModel.h"

@implementation StoriesModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}
@end

@implementation Top_StoriesModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}
@end

@implementation TestModel
+ (BOOL)propertyIsOptional:(NSString *)propertyName {
    return YES;
}

@end


