//
//  TestModel.h
//  JSONModel嵌套
//
//  Created by 翟旭博 on 2022/10/8.
//

//声明网络请求中的要接收数据的两个协议
@protocol StoriesModel
@end

@protocol Top_StoriesModel
@end

#import "JSONModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface StoriesModel : JSONModel
@property (nonatomic, copy) NSString* image_hue;
@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* url;
@property (nonatomic, copy) NSString* hint;
@property (nonatomic, copy) NSString* ga_prefix;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString* type;
@property (nonatomic, copy) NSString* id;

@end

@interface Top_StoriesModel : JSONModel
@property (nonatomic, copy) NSString* image_hue;
@property (nonatomic, copy) NSString* hint;
@property (nonatomic, copy) NSString* url;
@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* ga_prefix;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString* type;
@property (nonatomic, copy) NSString* id;

@end

@interface TestModel : JSONModel

@property (nonatomic, copy) NSString *date;
@property (nonatomic, copy) NSArray<StoriesModel> *stories;
@property (nonatomic, copy) NSArray<Top_StoriesModel> *top_stories;

@end

NS_ASSUME_NONNULL_END
