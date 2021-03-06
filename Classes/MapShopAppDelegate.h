//
//  MapShopAppDelegate.h
//  MapShop
//
//  Created by Mike Bevz on 17/01/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>
#import <RestKit/CoreData/CoreData.h>
#import <RestKit/ObjectMapping/RKDynamicRouter.h>
#import <RestKit/ObjectMapping/RKRailsRouter.h>
#import "CrashReportSender.h"

@interface MapShopAppDelegate : NSObject <UIApplicationDelegate, CrashReportSenderDelegate> {
	UIWindow* window;
	UINavigationController *navigationController;
    UIApplication *_application;
}

@property (nonatomic, retain) UIWindow* window;
@property (nonatomic, retain) UINavigationController *navigationController;



@end

