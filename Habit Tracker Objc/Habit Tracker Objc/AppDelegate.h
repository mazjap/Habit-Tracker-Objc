//
//  AppDelegate.h
//  Habit Tracker Objc
//
//  Created by Jordan Christensen on 3/22/20.
//  Copyright © 2020 Mazjap Co. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

