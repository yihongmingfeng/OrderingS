//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSObject<CSWaPicDownloaderDelegate>;

@interface CSWaPicDownloader : NSObject
{
    int _delegateIsa;
    NSObject<CSWaPicDownloaderDelegate> *_delegate;
    ASIHTTPRequest *_req;
}

@property(retain, nonatomic) ASIHTTPRequest *req; // @synthesize req=_req;
@property(nonatomic) int delegateIsa; // @synthesize delegateIsa=_delegateIsa;
@property(nonatomic) __weak NSObject<CSWaPicDownloaderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyBack:(_Bool)arg1 dir:(id)arg2 maxFileNum:(int)arg3 url:(id)arg4 data:(id)arg5;
- (void)requestFinishedOrFailed:(id)arg1 finished:(_Bool)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)downLoadWithDir:(id)arg1 maxFileNum:(int)arg2 url:(id)arg3;
- (void)downLoadWithDir:(id)arg1 url:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

