//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GAIDispatchSender.h"
#import "GAIReachabilityDelegate.h"

@class GAIDataStore, GAIReachabilityChecker, GAIRequestBuilder, NSString, NSTimer;

@interface GAIBatchingDispatcher : NSObject <GAIReachabilityDelegate, GAIDispatchSender>
{
    _Bool _hasHits;
    _Bool _optOut;
    _Bool _hostReachable;
    _Bool _serverBatchingDisabled;
    unsigned long long _batchingStrategy;
    unsigned long long _compressionStrategy;
    double _dispatchInterval;
    GAIDataStore *_dataStore;
    GAIRequestBuilder *_requestBuilder;
    Class _urlConnectionClass;
    unsigned long long _maxHitsPerDispatch;
    double _maxHitAge;
    unsigned long long _maxBodySize;
    unsigned long long _maxHitSize;
    GAIReachabilityChecker *_reachability;
    NSString *_httpURL;
    NSString *_httpsURL;
    NSString *_httpBatchURL;
    NSString *_httpsBatchURL;
    id _connection;
    NSTimer *_timer;
    double _batchFailedTime;
    double _batchRetryInterval;
    CDUnknownBlockType _defaultCompletionHandler;
    CDUnknownBlockType _currentCompletionHandler;
}

+ (id)thread;
+ (id)dispatcher;
@property(copy) CDUnknownBlockType currentCompletionHandler; // @synthesize currentCompletionHandler=_currentCompletionHandler;
@property(copy) CDUnknownBlockType defaultCompletionHandler; // @synthesize defaultCompletionHandler=_defaultCompletionHandler;
@property(nonatomic) double batchRetryInterval; // @synthesize batchRetryInterval=_batchRetryInterval;
@property(nonatomic) _Bool serverBatchingDisabled; // @synthesize serverBatchingDisabled=_serverBatchingDisabled;
@property(nonatomic) double batchFailedTime; // @synthesize batchFailedTime=_batchFailedTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *httpsBatchURL; // @synthesize httpsBatchURL=_httpsBatchURL;
@property(retain, nonatomic) NSString *httpBatchURL; // @synthesize httpBatchURL=_httpBatchURL;
@property(retain, nonatomic) NSString *httpsURL; // @synthesize httpsURL=_httpsURL;
@property(retain, nonatomic) NSString *httpURL; // @synthesize httpURL=_httpURL;
@property(nonatomic) _Bool hostReachable; // @synthesize hostReachable=_hostReachable;
@property(retain, nonatomic) GAIReachabilityChecker *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) unsigned long long maxHitSize; // @synthesize maxHitSize=_maxHitSize;
@property(nonatomic) unsigned long long maxBodySize; // @synthesize maxBodySize=_maxBodySize;
@property(nonatomic) double maxHitAge; // @synthesize maxHitAge=_maxHitAge;
@property(nonatomic) unsigned long long maxHitsPerDispatch; // @synthesize maxHitsPerDispatch=_maxHitsPerDispatch;
@property(retain, nonatomic) Class urlConnectionClass; // @synthesize urlConnectionClass=_urlConnectionClass;
@property(readonly, nonatomic) GAIRequestBuilder *requestBuilder; // @synthesize requestBuilder=_requestBuilder;
@property(retain, nonatomic) GAIDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) double dispatchInterval; // @synthesize dispatchInterval=_dispatchInterval;
@property(nonatomic) unsigned long long compressionStrategy; // @synthesize compressionStrategy=_compressionStrategy;
@property(nonatomic) unsigned long long batchingStrategy; // @synthesize batchingStrategy=_batchingStrategy;
@property(nonatomic) _Bool optOut; // @synthesize optOut=_optOut;
- (void).cxx_destruct;
- (oneway void)rescheduleDispatch;
- (void)timerFired;
- (_Bool)canScheduleDispatch;
- (_Bool)canDispatch;
- (void)cancelDispatch;
- (void)initialDispatch;
- (_Bool)rescheduleIfNeeded:(SEL)arg1 withObject:(id)arg2 andWait:(_Bool)arg3;
- (void)queueDispatch:(id)arg1;
- (void)queueModel:(id)arg1;
- (id)buildPayload:(id)arg1;
- (oneway void)dispatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)dispatch;
@property(readonly, nonatomic) NSString *clientId;
- (void)deleteAllHits;
- (void)deleteHits:(id)arg1;
- (void)persist:(id)arg1;
- (id)nextPendingHits;
- (id)hitsForDispatch;
- (unsigned long long)batchBySessionSplit:(id)arg1 maxHits:(unsigned long long)arg2;
- (unsigned long long)batchByTimeGap:(id)arg1 maxHits:(unsigned long long)arg2;
- (void)cancelPerformRequests;
- (void)dealloc;
- (void)setupBatching;
- (id)initWithDataStore:(id)arg1;
- (id)init;
- (void)didSendHits:(id)arg1;
- (void)didSendHits:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reachability:(id)arg1 statusChanged:(int)arg2;
@property _Bool hasHits;

@end

