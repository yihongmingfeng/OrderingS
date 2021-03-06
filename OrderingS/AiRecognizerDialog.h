//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AiSpeechEngineDelegate.h"
#import "AlertViewClickDelegate.h"

@class AiSpeechEngine, CustomAlertView, NSString, SpeechParams;

@interface AiRecognizerDialog : NSObject <AiSpeechEngineDelegate, AlertViewClickDelegate>
{
    AiSpeechEngine *engine;
    SpeechParams *params;
    CustomAlertView *alert;
    _Bool inited;
    _Bool showFlag;
    id <AiRecognizerDelegate> delegate;
}

@property(nonatomic) id <AiRecognizerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) CustomAlertView *alert; // @synthesize alert;
- (void).cxx_destruct;
- (void)aiSpeechEngine:(id)arg1 didReceive:(id)arg2 errorJson:(id)arg3;
- (void)aiSpeechEngine:(id)arg1 didReceive:(id)arg2 wakeUpJson:(id)arg3;
- (void)aiSpeechEngine:(id)arg1 didReceive:(id)arg2 responseBinary:(id)arg3;
- (void)aiSpeechEngine:(id)arg1 didReceive:(id)arg2 responseJson:(id)arg3;
- (void)aiSpeechEngine:(id)arg1 didReceive:(id)arg2 volume:(id)arg3;
- (void)aiSpeechEngineDidFinishRecording:(id)arg1 stopType:(int)arg2;
- (void)aiSpeechEngine:(id)arg1 onInit:(id)arg2;
- (void)releaseEngine;
- (void)okClick:(id)arg1;
- (void)cancelClick;
- (int)showInit;
- (id)show:(id)arg1;
- (void)setAiRecognizerDialogStyle:(int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 Delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

