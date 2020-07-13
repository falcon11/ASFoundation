//
//  BaseViewController.h
//  ASFoundation
//
//  Created by Ashoka on 2020/6/23.
//

#import <UIKit/UIKit.h>
#import <QMUIKit/QMUIKit.h>
#import "BaseViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface ASBaseViewController : QMUICommonViewController

// MVVM 时使用
@property (strong, nonatomic) BaseViewModel *viewModel;

- (instancetype)initWithViewModel:(BaseViewModel *)viewModel;

// 需要在适当时调 bindViewModel，做下绑定
- (void)bindViewModel;

@end

NS_ASSUME_NONNULL_END
