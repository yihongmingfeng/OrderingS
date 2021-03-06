//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<CSZyLocNameFindDelegate>, NSString, NSTimer;

@interface CSZyLocNameFind : NSObject
{
    _Bool _isRefreshingTag;
    _Bool _forceReloadListTag;
    int _delegateIsa;
    int _locTryNum;
    NSObject<CSZyLocNameFindDelegate> *_soDelegate;
    NSTimer *_ctrlLocTimer;
    NSString *_lastAddress;
}

@property(nonatomic) _Bool forceReloadListTag; // @synthesize forceReloadListTag=_forceReloadListTag;
@property(nonatomic) _Bool isRefreshingTag; // @synthesize isRefreshingTag=_isRefreshingTag;
@property(retain, nonatomic) NSString *lastAddress; // @synthesize lastAddress=_lastAddress;
@property(nonatomic) int locTryNum; // @synthesize locTryNum=_locTryNum;
@property(retain, nonatomic) NSTimer *ctrlLocTimer; // @synthesize ctrlLocTimer=_ctrlLocTimer;
@property(nonatomic) int delegateIsa; // @synthesize delegateIsa=_delegateIsa;
@property NSObject<CSZyLocNameFindDelegate> *soDelegate; // @synthesize soDelegate=_soDelegate;
- (void)updateAddress:(id)arg1 succ:(_Bool)arg2;
- (void)saveAddressToCache:(id)arg1;
- (id)readAddressFromCache;
- (void)stopLocTimer;
- (void)endQuery:(id)arg1 succ:(_Bool)arg2;
- (void)onQueryFail;
- (void)onQuerySuccess:(id)arg1;
- (void)queryAddress:(CDStruct_c3b9c2ee)arg1;
- (void)handleLocTimer:(id)arg1;
- (void)beginQuery;
- (void)receivingMsgChineseGpsFailListener:(id)arg1;
- (void)receivingMsgChineseGpsSuccListener:(id)arg1;
- (void)findWithForceTag:(_Bool)arg1;
- (void)find;
- (void)findForForceQuery;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDefault;

@end

