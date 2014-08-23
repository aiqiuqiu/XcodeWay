/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAlert.h"

@class NSSound, NSString;

@interface IDESoundAlert : IDEAlert
{
    NSString *_soundPath;
    NSSound *_sound;
}

+ (void)_addSoundsFromPath:(id)arg1 to:(id)arg2;
+ (void)initialize;
+ (id)systemSoundPaths;
- (int)alertPropertyListVersion;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(id)arg4;
@property(retain) NSString *soundPath; // @synthesize soundPath=_soundPath;
- (id)systemSoundPaths;

@end
