//
//  ItemsViewController.h
//  ShopList
//
//  Created by Michael Guse on 6/3/13.
//  Copyright (c) 2013 Optimize Consulting. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ItemsViewController : UITableViewController <UITextFieldDelegate>

@property NSManagedObjectContext *managedObjectContext;
// @property NSMutableArray *fetchedResultsObjects;
@property IBOutlet UITextField *itemTextField;

@end
