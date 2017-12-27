//
//  WhatChatCell.h
//  TestIM
//
//  Created by Evan Peng on 2017/12/26.
//  Copyright © 2017年 Evan Peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WhatChatCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *Avatar;
@property (weak, nonatomic) IBOutlet UILabel *Name;
@property (weak, nonatomic) IBOutlet UILabel *desc;

@end
