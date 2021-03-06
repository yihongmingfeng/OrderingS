//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpView.h"

#import "TOChatServiceUIAugmentedDelegate.h"
#import "TORestListCellViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSObject<VoiceMsgPanelDelegate>, NSString, NSTimer, UITableView;

@interface VoiceMsgPanel : BaseHttpView <UITableViewDelegate, UITableViewDataSource, TORestListCellViewDelegate, TOChatServiceUIAugmentedDelegate>
{
    _Bool _isConversationViewNormal;
    _Bool _shouldNotRevertToNormalAfterTapEnd;
    NSObject<VoiceMsgPanelDelegate> *_delegate;
    UITableView *_ctrlMsgTableView;
    NSTimer *_timerXfHeartBeat;
    double _maxAllowedHeight;
    double _bestFitWidth;
    double _bestFitHeight;
    double _heightToCutOut;
    struct CGPoint _swipeStartPoint;
}

@property double heightToCutOut; // @synthesize heightToCutOut=_heightToCutOut;
@property double bestFitHeight; // @synthesize bestFitHeight=_bestFitHeight;
@property double bestFitWidth; // @synthesize bestFitWidth=_bestFitWidth;
@property _Bool shouldNotRevertToNormalAfterTapEnd; // @synthesize shouldNotRevertToNormalAfterTapEnd=_shouldNotRevertToNormalAfterTapEnd;
@property _Bool isConversationViewNormal; // @synthesize isConversationViewNormal=_isConversationViewNormal;
@property struct CGPoint swipeStartPoint; // @synthesize swipeStartPoint=_swipeStartPoint;
@property double maxAllowedHeight; // @synthesize maxAllowedHeight=_maxAllowedHeight;
@property(retain, nonatomic) NSTimer *timerXfHeartBeat; // @synthesize timerXfHeartBeat=_timerXfHeartBeat;
@property(retain, nonatomic) UITableView *ctrlMsgTableView; // @synthesize ctrlMsgTableView=_ctrlMsgTableView;
@property NSObject<VoiceMsgPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)electronConvulse;
- (void)killXfHeartBeatTimer;
- (void)setupUI;
- (void)fixMsgTableShowing;
- (void)onTOChatServiceUIforNewMsgsReload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reset;
- (void)close;
- (void)open;
- (void)startVoiceGuideAnim;
- (void)dealloc;
- (id)initWithVc:(id)arg1 minusHeightTakenByOthers:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

