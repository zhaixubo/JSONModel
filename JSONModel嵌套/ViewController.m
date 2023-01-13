//
//  ViewController.m
//  JSONModel嵌套
//
//  Created by 翟旭博 on 2022/10/8.
//

#import "ViewController.h"
#import "Manager.h"
#import "TestModel.h"
@interface ViewController ()
@property (nonatomic, copy) StoriesModel *stories;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self test];
}

- (void) test {
    
    [[Manager sharedManage] NetWorkWithData:^(TestModel * _Nonnull mainViewModel) {
        NSLog(@"请求成功");
        self->_stories = mainViewModel.stories[0];
        NSLog(@"%@",self->_stories.title);
        //NSLog(@"%@",mainViewModel.stories[0]);
        
    } error:^(NSError * _Nonnull error) {
        NSLog(@"请求失败");
    }];
}
@end
