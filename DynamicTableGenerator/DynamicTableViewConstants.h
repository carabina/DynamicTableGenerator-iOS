//
//  DynamicTableViewConstants.h
//  DynamicTableGenerator
//
//  Created by tpb on 11/17/14.
//  Copyright (c) 2014 Theodore Brown. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef DynamicTableGenerator_DynamicTableViewConstants_h
#define DynamicTableGenerator_DynamicTableViewConstants_h


#endif

//extern NSString * const DTVCCellType_DateCell;
//extern NSString * const DTVCCellType_SliderCell;
//extern NSString * const DTVCCellType_ButtonCell;
//extern NSString * const DTVCCellType_ActionCell;
//extern NSString * const DTVCCellType_TextCell;
//extern NSString * const DTVCCellType_NumberCell;
//extern NSString * const DTVCCellType_SwitchCell;
//extern NSString * const DTVCCellType_SegmentCell;
extern NSString * const DTVCCellIdentifier_DateCell;
extern NSString * const DTVCCellIdentifier_SliderCell;
extern NSString * const DTVCCellIdentifier_ButtonCell;
extern NSString * const DTVCCellIdentifier_ActionCell;
extern NSString * const DTVCCellIdentifier_TextCell;
extern NSString * const DTVCCellIdentifier_NumberCell;
extern NSString * const DTVCCellIdentifier_SwitchCell;
extern NSString * const DTVCCellIdentifier_SegmentCell;


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

typedef NS_ENUM(NSInteger, DTVCCellType)
{
     DTVCCellType_DateCell = 1,
     DTVCCellType_SliderCell,
     DTVCCellType_ButtonCell,
     DTVCCellType_ActionCell,
     DTVCCellType_TextCell,
     DTVCCellType_NumberCell,
     DTVCCellType_SwitchCell,
     DTVCCellType_SegmentCell
};

typedef NS_ENUM(NSInteger, DTVCInputType_SwitchCell)
{
DTVCInputType_SwitchCell_Bool = 1,
};

typedef NS_ENUM(NSInteger, DTVCInputType_SliderCell)
{
    DTVCInputType_SliderCell_Float = 1,
    DTVCInputType_SliderCell_Integer
};

typedef NS_ENUM(NSInteger, DTVCInputType_NumberCell)
{
    DTVCInputType_NumberCell_Integer = 1,
    DTVCInputType_NumberCell_Decimal
};
typedef NS_ENUM(NSInteger, DTVCInputType_TextCell)
{
    DTVCInputType_TextCell_Alphabet = 1,
    DTVCInputType_TextCell_Ascii,
    DTVCInputType_TextCell_URL,
    DTVCInputType_TextCell_Email,
    DTVCInputType_TextCell_Phone
};
typedef NS_ENUM(NSInteger, DTVCInputType_DateCell)
{
    DTVCInputType_DateCell_Date = 1,
    DTVCInputType_DateCell_DateTime,
    DTVCInputType_DateCell_Time
};
typedef NS_ENUM(NSInteger, DTVCInputType_SegmentCell)
{
    DTVCInputType_SegmentCell_Object = 1,
};
typedef NS_ENUM(NSInteger, DTVCInputType_ButtonCell)
{
    DTVCInputType_ButtonCell_Array = 1,
};