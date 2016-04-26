//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDetailVc.h"

#import "CSLikeBtnlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CSLikeBtn, NSString, UITableView;

@interface PostCommentRankVc : BaseDetailVc <CSLikeBtnlDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CSLikeBtn *_ctrlLike;
    UITableView *_ctrlScore;
    long long _tasteNum;
    long long _envNum;
    long long _serviceNum;
    NSString *_restId;
    NSString *_restName;
    NSString *_commentId;
}

@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *restName; // @synthesize restName=_restName;
@property(retain, nonatomic) NSString *restId; // @synthesize restId=_restId;
@property(nonatomic) long long serviceNum; // @synthesize serviceNum=_serviceNum;
@property(nonatomic) long long envNum; // @synthesize envNum=_envNum;
@property(nonatomic) long long tasteNum; // @synthesize tasteNum=_tasteNum;
@property(retain, nonatomic) UITableView *ctrlScore; // @synthesize ctrlScore=_ctrlScore;
@property(retain, nonatomic) CSLikeBtn *ctrlLike; // @synthesize ctrlLike=_ctrlLike;
- (void)backToFromPage;
- (void)submitBtnClicked:(id)arg1;
- (void)btnClick_score:(id)arg1;
- (void)alertView:(id)arg1 hideWithBtnIdx:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)topViewBackBtnClicked:(id)arg1;
- (void)completeQueryParams;
- (void)onHttpRequestFail:(long long)arg1 errorMsg:(id)arg2 tag:(long long)arg3;
- (void)onHttpRequestSuccess:(id)arg1 tag:(long long)arg2;
- (void)postData;
- (void)onWillShow;
- (void)onParsePageParams:(id)arg1;
- (void)onClose;
- (void)onCleanData;
- (void)onCreate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
