//
//  DetailViewController.h
//  privateShare
//
//  Created by bird on 2018/4/17.
//  Copyright © 2018年 bird. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "privateShare+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

