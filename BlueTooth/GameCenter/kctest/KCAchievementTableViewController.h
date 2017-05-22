//
//  KCAchievementTableViewController.h
//  kctest
//
//  Created by  liuyugang Cui on 16/5/1.
//  Copyright (c) 2016年 cmjstudio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KCAchievementTableViewController : UITableViewController
@property (strong,nonatomic) NSArray *achievements;//成就
@property (strong,nonatomic) NSArray *achievementDescriptions;//成就描述
@property (strong,nonatomic) NSMutableDictionary *achievementImages;//成就图片
@end
