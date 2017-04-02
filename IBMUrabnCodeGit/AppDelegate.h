//
//  AppDelegate.h
//  IBMUrabnCodeGit
//
//  Created by United TCS on 4/2/17.
//  Copyright © 2017 United TCS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

