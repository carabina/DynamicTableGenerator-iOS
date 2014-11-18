//
//  NumberOptionCellInput.h
//  TableViewDataCells
//
//  Created by Theodore Brown on 8/10/14.
//  Copyright (c) 2014 Theodore Brown. All rights reserved.
//

#import "BaseOptionCellInput.h"
//#import "TableCellWithNumber.h"
@interface NumberOptionCellInput : BaseOptionCellInput

-(id) initNumberInputForObject:(id) managedObject forReturnKey:(NSString*)newReturnKey withTitle:(NSString*) cellTitle withDefault:(NSNumber*) defaultNumber  inSection:(NSString*) newSectionHeader;


@end
