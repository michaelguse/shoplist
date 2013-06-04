//
//  Item.m
//  ShopList
//
//  Created by Michael Guse on 6/3/13.
//  Copyright (c) 2013 Optimize Consulting. All rights reserved.
//

#import "Item.h"

@implementation Item

@dynamic text;
@dynamic completedAt;

- (BOOL)isCompleted {
    return self.completedAt != nil;
}

- (void)setCompleted:(BOOL)completed {
    self.completedAt = completed ? [NSDate date] : nil;
}

@end
