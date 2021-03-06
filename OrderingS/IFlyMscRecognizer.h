//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "IFlyPcmRecorderDelegate.h"
#import "ISREngineDelegate.h"

@class IFlyPcmRecorder, ISREngine, NSMutableArray, NSString;

@interface IFlyMscRecognizer : NSOperation <ISREngineDelegate, IFlyPcmRecorderDelegate>
{
    ISREngine *_isrEngine;
    int _state;
    IFlyPcmRecorder *_isrRecorder;
    NSString *_params;
    NSString *_grammar;
    NSMutableArray *_queue;
    int _error;
    int _index;
    id <IFlySpeechRecognizerDelegate> _delegate;
}

- (void)onRecorderError:(id)arg1 theError:(int)arg2;
- (void)onReturnBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onEnd;
- (void)onResult:(id)arg1;
- (void)onStop;
- (_Bool)savePcmFile;
- (void)end;
- (void)onStopRecord;
- (void)onRecording;
- (void)onWaitting;
- (void)onStart;
- (void)setState:(int)arg1;
- (void)dealloc;
- (void)main;
- (int)state;
- (void)cancel;
- (_Bool)stopRecord;
- (void)startListening:(id)arg1 grammar:(id)arg2;
- (id)init:(id)arg1;

@end

