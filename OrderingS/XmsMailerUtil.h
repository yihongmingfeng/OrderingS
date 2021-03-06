//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"

@class NSString;

@interface XmsMailerUtil : NSObject <MFMailComposeViewControllerDelegate>
{
}

+ (_Bool)canMailInApp;
+ (id)sharedMailer;
- (void)doRecoverStatusBar;
- (void)recoverStatusBar;
- (void)showMFMailComposeVcWithText:(id)arg1 mailTitle:(id)arg2;
- (void)alertWithTitle:(id)arg1 msg:(id)arg2 tag:(int)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)mailOthers:(id)arg1;
- (void)mailOrderState:(id)arg1;
- (void)mailWap:(id)arg1;
- (void)mailTakeoutInfo:(id)arg1;
- (void)mailRestRecomInfo:(id)arg1;
- (void)mailRestInfo:(id)arg1;
- (void)mailSoftwareInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

