//
//  GenericTableViewController.h
//  MapShop
//
//  Created by Mike Bevz on 07/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/CoreData/CoreData.h>
#import "Region.h"
#import "City.h"
#import "Area.h"
#import "Shop.h"
#import "SPoint.h"
#import "EGORefreshTableHeaderView.h"

@interface GenericTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RKObjectLoaderDelegate, EGORefreshTableHeaderDelegate> {
	UITableView* _tableView;
	NSMutableArray *_items;
	RKManagedObject* currentItem;
	RKManagedObject* parentItem;
	NSNumber* parentId;
	NSString* entityName;
	UINavigationController *navigationController;
    NSString *syncingEntity;
    BOOL syncNow;
    EGORefreshTableHeaderView *_refreshHeaderView;
    BOOL _reloading;
}

@property (nonatomic, retain) RKManagedObject* currentItem;
@property (nonatomic, retain) RKManagedObject* parentItem;
@property (nonatomic, retain) NSNumber* parentId;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) NSString* entityName;
@property (nonatomic) BOOL _reloading;


- (void) loadObjectsFromDataStore;
- (void) loadData;
- (void) addNewItem;
- (void) setOptions;
- (void) syncData;
//- (void) createNewRegions;
//- (void) createNewCities;

- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;

@end
