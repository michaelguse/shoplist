//
//  Item.h
//  ShopList
//
//  Created by Michael Guse on 6/3/13.
//  Copyright (c) 2013 Optimize Consulting. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Item : NSManagedObject

@property NSString *text;
@property NSDate *completedAt;
@property Boolean completed;

@end
