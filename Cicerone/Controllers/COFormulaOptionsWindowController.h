//
//  COFormulaOptionsWindowController.h
//  Cicerone
//
//  Created by Marek Hrusovsky on 21/08/14.
//	Copyright (c) 2014 Bruno Philipe. All rights reserved.
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.	If not, see <http://www.gnu.org/licenses/>.
//

#import <Cocoa/Cocoa.h>
@class COFormula;

typedef void (^InstalWithOptionsBlock_t)(NSArray *options);

@interface COFormulaOptionsWindowController : NSWindowController

@property (nonatomic, copy) InstalWithOptionsBlock_t installWithOptionsBlock;

+ (COFormulaOptionsWindowController *)runFormula:(COFormula *)formula
                                 withCompletionBlock:(InstalWithOptionsBlock_t)completionBlock;

@end
