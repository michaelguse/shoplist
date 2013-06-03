//
//  AppDelegate.h
//  ShopList
//
//  Created by Michael Guse on 6/3/13.
//  Copyright (c) 2013 Optimize Consulting. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ShopListIncrementalStore.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
