//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RestDetailPanelView.h"

#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSObject<RDHlHintPanelViewDelegate>, NSString;

@interface RDHlHintPanelView : RestDetailPanelView <UIActionSheetDelegate>
{
    NSObject<RDHlHintPanelViewDelegate> *_delegate;
    NSMutableArray *_spTelList;
}

@property(retain, nonatomic) NSMutableArray *spTelList; // @synthesize spTelList=_spTelList;
@property NSObject<RDHlHintPanelViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (float)calLabelWidth;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)newSpTelList:(id)arg1;
- (float)labelHeightWithTxt:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doRefreshPanel;
- (void)doDealloc;
- (void)doIni;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

