//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RestDetailPanelView.h"

#import "CSCommentViewDelegate.h"

@class NSObject<RDCommentPanelViewDelegate>, NSString;

@interface RDCommentPanelView : RestDetailPanelView <CSCommentViewDelegate>
{
    NSObject<RDCommentPanelViewDelegate> *delegate;
}

@property NSObject<RDCommentPanelViewDelegate> *delegate; // @synthesize delegate;
- (float)calCommentWidth;
- (void)commentViewReply:(id)arg1;
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

