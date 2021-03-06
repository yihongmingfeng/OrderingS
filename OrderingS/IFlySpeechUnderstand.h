//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFlySpeechRecognizer;

@interface IFlySpeechUnderstand : NSObject
{
    IFlySpeechRecognizer *_recognizer;
}

+ (id)IFlySeechUnderstandWith:(id)arg1 delegate:(id)arg2;
@property(retain) IFlySpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (_Bool)writeAudio:(id)arg1;
- (void)recognizeStream;
- (void)cancel;
- (void)stopListening;
- (_Bool)startListening;
@property(getter=getDelegate, setter=setDelegate:) id <IFlySpeechRecognizerDelegate> delegate;
- (_Bool)setParameter:(id)arg1 value:(id)arg2;

@end

