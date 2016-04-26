//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_ViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UPOMP_KaNetDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView, UPOMP_KaNet;

@interface UPOMP_CardListViewController : UPOMP_ViewController <UITableViewDataSource, UITableViewDelegate, UPOMP_KaNetDelegate>
{
    UITableView *myTabelView;
    UIButton *backButton;
    NSMutableArray *allArray;
    UPOMP_KaNet *net;
    _Bool isQP;
}

@property _Bool isQP; // @synthesize isQP;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)back:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)netFinish:(id)arg1;
- (_Bool)checkXML:(id)arg1;
- (_Bool)xmlDetailed:(id)arg1 root:(struct _UPOMP_TBXMLElement *)arg2;
- (void)netError:(id)arg1;
- (void)netWork;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
