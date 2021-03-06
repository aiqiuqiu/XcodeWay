//
//  FTGSimulatorFolderNavigator.m
//  XcodeWay
//
//  Created by Khoa Pham on 8/23/14.
//  Copyright (c) 2014 Fantageek. All rights reserved.
//

#import "FTGSimulatorFolderNavigator.h"

@implementation FTGSimulatorFolderNavigator

- (void)navigate
{
    NSString *applicationSupportDirectoryPath = [[FTGEnvironmentManager sharedManager] applicationSupportDirectoryPath];
    NSString *iPhoneSimulatorDirectoryPath = [applicationSupportDirectoryPath stringByAppendingPathComponent:@"iPhone Simulator"];

    NSURL *URL = [NSURL fileURLWithPath:iPhoneSimulatorDirectoryPath isDirectory:YES];
    [[NSWorkspace sharedWorkspace] openURL:URL];
}

@end
