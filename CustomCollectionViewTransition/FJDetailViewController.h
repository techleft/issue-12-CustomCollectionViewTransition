//
//  FJDetailViewController.h
//  CustomCollectionViewTransition
//
//  Created by Engin Kurutepe on 01/05/14.
//  Copyright (c) 2014 Fifteen Jugglers Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FJDetailViewController : UICollectionViewController

@property (nonatomic, strong) id<UICollectionViewDataSource> dataSource;

@end
