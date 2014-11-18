//
//  ButtonOptionCellInput.h
//  TableViewDataCells
//
//  Created by Theodore Brown on 8/9/14.
//  Copyright (c) 2014 Theodore Brown. All rights reserved.
//

#import "BaseOptionCellInput.h"

//#import "CellWithButton.h"

@interface ButtonOptionCellInput : BaseOptionCellInput
-(id) initDateInputForObject:(id) managedObject forReturnKey:(NSString*)newReturnKey withTitle:(NSString*) cellTitle  inSection:(NSString*) newSectionHeader;
-(id) initDateInputForObject:(id) managedObject forReturnKey:(NSString*)newReturnKey withDefault:(NSDate*) defaultDate withTitle:(NSString*) cellTitle  inSection:(NSString*) newSectionHeader;

@end
