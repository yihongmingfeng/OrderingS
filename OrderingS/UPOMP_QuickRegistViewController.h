//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_ViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UPOMP_KaNetDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UITableViewCell, UPOMP_KaNet, UPOMP_MoreRegistViewController, UPOMP_PasswordCellViewController;

@interface UPOMP_QuickRegistViewController : UPOMP_ViewController <UITableViewDataSource, UITableViewDelegate, UPOMP_KaNetDelegate>
{
    UITableView *myTabelView;
    NSMutableArray *cellArray;
    UITableViewCell *infoTopCell;
    UIImageView *infoTopBG;
    UITableViewCell *infoCell;
    UIImageView *infoBG;
    UIImageView *infoLeftBG;
    UILabel *infoText;
    UIImageView *infoIcon;
    UITableViewCell *infoBottomCell;
    UIImageView *infoBottomBG;
    UITableViewCell *userNameCell;
    UIButton *userNameBG;
    UILabel *userNameText;
    UILabel *userNameValue;
    UITableViewCell *checkinfoTopCell;
    UIImageView *checkinfoTopBG;
    UITableViewCell *checkinfoCell;
    UIImageView *checkinfoBG;
    UILabel *checkinfoText;
    UITableViewCell *readCell;
    UIButton *readButton;
    UILabel *readText;
    UILabel *hasReadText;
    UIImageView *arrow;
    UIButton *checkRead;
    UITableViewCell *checkinfoBottomCell;
    UIImageView *checkinfoBottomBG;
    UITableViewCell *finishCell;
    UIButton *finishButton;
    UIButton *escButton;
    _Bool hasCheck;
    UPOMP_PasswordCellViewController *password;
    UPOMP_KaNet *net;
    _Bool hasRead;
    UPOMP_MoreRegistViewController *moreRegist;
}

- (void)selectACT:(int)arg1;
- (void)escAct:(id)arg1;
- (void)check:(id)arg1;
- (void)netCancel;
- (void)read:(id)arg1;
- (void)prevCell;
- (void)nextCell;
- (void)checkCellArray:(int)arg1;
- (void)finish:(id)arg1;
- (void)netFinish:(id)arg1;
- (_Bool)checkXML:(id)arg1;
- (void)netError:(id)arg1;
- (void)netWork;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

