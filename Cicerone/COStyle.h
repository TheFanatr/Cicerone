//
//  COStyle.m
//  Cicerone
//
//  Created by Marek Hrusovsky on 25/08/15.
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

@interface COStyle : NSObject

+ (NSFont *)defaultFixedWidthFont;

//Toolbar style
+ (NSToolbarSizeMode)toolbarSize;
+ (NSImage *)toolbarImageForInstall;
+ (NSImage *)toolbarImageForUninstall;
+ (NSImage *)toolbarImageForTap;
+ (NSImage *)toolbarImageForUntap;
+ (NSImage *)toolbarImageForUpdate;
+ (NSImage *)toolbarImageForUpgrade;
+ (NSImage *)toolbarImageForMoreInformation;

//More info popover
+ (NSColor *)popoverTitleColor;
+ (NSColor *)popoverTextViewColor;

//Sidebar
+ (NSColor *)sidebarDividerColor;

+ (NSImage *)installedSidebarIconImage;
+ (NSImage *)outdatedSidebarIconImage;
+ (NSImage *)allFormulaeSidebarIconImage;
+ (NSImage *)leavesSidebarIconImage;
+ (NSImage *)repositoriesSidebarIconImage;
+ (NSImage *)doctorSidebarIconImage;
+ (NSImage *)updateSidebarIconImage;

@end
