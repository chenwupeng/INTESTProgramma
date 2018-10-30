//
//  AppDelegate.h
//  INTESTProgramma
//
//  Created by intest-cwp on 2018/10/30.
//  Copyright © 2018年 intest-cwp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

