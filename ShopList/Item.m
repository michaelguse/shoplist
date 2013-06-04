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
@dynamic completed;


- (BOOL)isCompleted {
    return self.completed;
}

- (void)setCompleted:(Boolean)completed {
    self.completedAt = completed ? [NSDate date] : nil;
}

@end
