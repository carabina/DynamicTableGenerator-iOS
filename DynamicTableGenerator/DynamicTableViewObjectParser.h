//
//  MutableTableViewSetupHelper.h
//  TableViewDataCells
//
//  Created by Theodore Brown on 8/10/14.
//  Copyright (c) 2014 Theodore Brown. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ActionSheetOptionCellInput.h"

#import "SwitchOptionCellInput.h"
#import "SliderOptionCellInput.h"
#import "DateOptionCellInput.h"
#import "TextOptionCellInput.h"
#import "SegmentOptionCellInput.h"
#import "NumberOptionCellInput.h"


//extern NSString * const DTVCInputType_SwitchCell_Bool;
//
//extern NSString * const DTVCInputType_SliderCell_Float;
//extern NSString * const DTVCInputType_SliderCell_Integer;
//
//extern NSString * const DTVCInputType_NumberCell_Integer;
//extern NSString * const DTVCInputType_NumberCell_Decimal;
//
//extern NSString * const DTVCInputType_TextCell_Alphaet;
//extern NSString * const DTVCInputType_TextCell_Ascii;
//extern NSString * const DTVCInputType_TextCell_URL;
//extern NSString * const DTVCInputType_TextCell_Email;
//extern NSString * const DTVCInputType_TextCell_Phone;
//
//extern NSString * const DTVCInputType_DateCell_Date;
//extern NSString * const DTVCInputType_DateCell_DateTime;
//extern NSString * const DTVCInputType_DateCell_Time;
//
//extern NSString * const DTVCInputType_SegmentCell_Object;
//
//extern NSString * const DTVCInputType_ButtonCell_Array;

@interface DynamicTableViewObjectParser : NSObject



@property (weak, nonatomic) IBOutlet UIButton *saveUserButton;

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSDictionary *UserInfoDict;
@property (nonatomic, retain) NSArray *UserInfoArray;
@property (nonatomic, retain) NSArray *cellsArray;

//@property (nonatomic, retain) UserInfo *NewUserInfo;
//@property (nonatomic, retain) FishTank *NewFishTank;

@property (nonatomic, retain) NSManagedObject *NewFormClass;
@property (strong, nonatomic) id mutableFormObject; // this is the object that is managed and updated



@property  NSInteger titletag;

- (id) initWithObject:(id)newFormObject;
- (id) initWithManagedObject:(id)newFormObject;
- (id) initWithDict:(id)newFormObject;

//-(IBAction)saveUser:(id)sender;
//- (void)setFormClass:(id)newFormClass;
//
//-(UIToolbar *)createInputAccessoryViewWithTags:(NSInteger) allTag;
@end

