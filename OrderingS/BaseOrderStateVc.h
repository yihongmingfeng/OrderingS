//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

@class CSUIImageView, CommonOrderStateData, NSString, NSTimer, UIButton, UILabel;

@interface BaseOrderStateVc : BaseDetailVc
{
    _Bool _forAddTag;
    int _countNum;
    CSUIImageView *_ctrlIcon;
    UILabel *_ctrlTitleLabel;
    UILabel *_ctrlMsgLabel;
    UIButton *_ctrlBtn;
    NSTimer *_ctrlTimer;
    CommonOrderStateData *_data;
    NSString *_orderId;
    NSString *_rePageKey;
    NSString *_pageNameForPageStat;
    NSString *_queryName;
}

@property(retain, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(retain, nonatomic) NSString *pageNameForPageStat; // @synthesize pageNameForPageStat=_pageNameForPageStat;
@property(nonatomic) _Bool forAddTag; // @synthesize forAddTag=_forAddTag;
@property(nonatomic) int countNum; // @synthesize countNum=_countNum;
@property(retain, nonatomic) NSString *rePageKey; // @synthesize rePageKey=_rePageKey;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) CommonOrderStateData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSTimer *ctrlTimer; // @synthesize ctrlTimer=_ctrlTimer;
@property(retain, nonatomic) UIButton *ctrlBtn; // @synthesize ctrlBtn=_ctrlBtn;
@property(retain, nonatomic) UILabel *ctrlMsgLabel; // @synthesize ctrlMsgLabel=_ctrlMsgLabel;
@property(retain, nonatomic) UILabel *ctrlTitleLabel; // @synthesize ctrlTitleLabel=_ctrlTitleLabel;
@property(retain, nonatomic) CSUIImageView *ctrlIcon; // @synthesize ctrlIcon=_ctrlIcon;
- (void)toNextPage;
- (void)btnClicked;
- (void)updateBtn:(id)arg1 succTag:(_Bool)arg2;
- (void)arrangePanel;
- (void)alertHintViewOnClickTryAgainBtn;
- (void)stopTimer;
- (void)countingDown;
- (void)startTimer;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2;
- (void)completeLoadData;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)loadData;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)onPopFromNavStack;
- (void)onHide;
- (void)onParseNavBackPageParams:(id)arg1;
- (void)onShow;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)_onCloseBegin;
- (void)_onCleanDataBegin;
- (void)_onCreateBegin;

@end
