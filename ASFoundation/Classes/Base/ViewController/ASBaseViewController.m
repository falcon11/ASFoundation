//
//  BaseViewController.m
//  ASFoundation
//
//  Created by Ashoka on 2020/6/23.
//

#import "ASBaseViewController.h"
#import <ReactiveObjC/ReactiveObjC.h>

@interface ASBaseViewController ()

@end

@implementation ASBaseViewController

- (instancetype)initWithViewModel:(BaseViewModel *)viewModel {
    self = [super init];
    if (self) {
        self.viewModel = viewModel;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)bindViewModel {
    RAC(self, title) = RACObserve(self, viewModel.title);
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
