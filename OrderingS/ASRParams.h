//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpeechParams.h"

@interface ASRParams : SpeechParams
{
    long long _use_xbnf_rec;
    long long _use_conf_dnn;
}

- (id)getDic;
- (id)getUseConf;
- (int)setUseConf:(id)arg1;
- (id)getUseXbnfRec;
- (int)setUseXbnfRec:(id)arg1;
- (id)getReqAttachRecordId;
- (int)setReqAttachRecordId:(id)arg1;
- (id)getReqApplicationId;
- (int)setReqApplicationId:(id)arg1;
- (id)getReqAttachUrl;
- (int)setReqAttachUrl:(id)arg1;
- (id)init;

@end

