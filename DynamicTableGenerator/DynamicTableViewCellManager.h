//
//  MutableTableViewCellManager.h
//  TableViewDataCells
//
//  Created by Theodore Brown on 8/9/14.
//  Copyright (c) 2014 Theodore Brown. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DynamicTableViewConstants.h"
#import "TableViewNavigationBar.h"

//extern NSString * const DTVCCellType_DateCell;
//extern NSString * const DTVCCellType_SliderCell;
//extern NSString * const DTVCCellType_ButtonCell;
//extern NSString * const DTVCCellType_ActionCell;
//extern NSString * const DTVCCellType_TextCell;
//extern NSString * const DTVCCellType_NumberCell;
//extern NSString * const DTVCCellType_SwitchCell;
//extern NSString * const DTVCCellType_SegmentCell;


/**
 DTV_CellManager manages a table view and its dynamically generated content.
 
 Content can be created from a standard NSObject, or from a CoreData ManagedObject
 
 The object must be passed to DynamicTableViewCellManager first, parsed, and used to init this VC.
 
 */

@interface DynamicTableViewCellManager : NSObject


@property (nonatomic, strong) NSMutableDictionary *resultDict; //not used now

@property (nonatomic, strong) UITableView *tableView; // an instance of DTVC

@property (nonatomic, strong) NSArray *sectionHeaderArray;
@property (nonatomic, strong) NSDictionary *sectionDescription;

@property (nonatomic, strong) TableViewNavigationBar *  keyPad;
@property (nonatomic, strong) UIView *  keyPadView;

@property (nonatomic, strong) NSIndexPath *currentSelection;

- (id) initWithDelegate:(id) delegate andOffset:(NSInteger) newtagOffset andtableView:(UITableView*) newTableView andCellInputs:(NSArray*) cellInputArray;
- (id) initWithTagCode:(NSString*) tagString andOffset:(NSInteger) newtagOffset andtableView:(UITableView*) newTableView andCellInputs:(NSArray*) cellInputArray;
- (id) initWithTagCode:(NSString*) tagString andOffset:(NSInteger) newtagOffset andtableView:(UITableView*) newTableView withAcessoryKeys:(UIView*) acessoryKeyBoard andCellInputs:(NSArray*) cellInputArray;

- (UITableViewCell*)  getCellatIndexPath:(NSIndexPath *)indexPath andDelegate:(id) delegateToAssign;
- (NSInteger) rowsInSection:(NSInteger) section;




- (void) saveAllChanges;

@end
