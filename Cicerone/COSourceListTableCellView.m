//
//  COSourceListTableCellView.m
//  Cicerone
//
//  Created by Alexander Yan on 2024-05-29.
//  Copyright © 2024 oaVa-o. All rights reserved.
//

#import "COSourceListTableCellView.h"

@implementation COSourceListTableCellView

- (void)setLoading:(BOOL)loading
{
    _loading = loading;
    
    if (loading) {
        [self.loadingIndicator startAnimation:self];
    } else {
        [self.loadingIndicator stopAnimation:self];
    }
}

@end
