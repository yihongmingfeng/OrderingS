//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpeechParams.h"

@class NSString;

@interface DialogParams : SpeechParams
{
    NSString *_city;
    NSString *_loc;
    float _latitude;
    float _longitude;
    NSString *_refText;
}

- (void).cxx_destruct;
- (id)getDic;
- (id)getEnv;
- (int)setEnv:(id)arg1 location:(id)arg2 latitude:(float)arg3 longitude:(float)arg4;
- (id)getDlgType;
- (int)setDlgType:(id)arg1;
- (id)getReqRefText;
- (int)setReqRefText:(id)arg1;
- (id)init;

@end

