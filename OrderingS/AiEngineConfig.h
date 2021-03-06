//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AiCommonConfig.h"

@class AiVadConfig, NSString;

@interface AiEngineConfig : AiCommonConfig
{
    AiVadConfig *vadConfig;
    _Bool isVadEnable;
    _Bool isCloudEnable;
    NSString *cloudServer;
    unsigned long long httpConnectTimeout;
    unsigned long long httpTransferTimeout;
    AiCommonConfig *_nativeCfg;
}

- (void).cxx_destruct;
- (id)getDic;
- (void)authenDic;
- (void)logDic;
- (void)cloudDic;
- (int)setVadSampleRate:(id)arg1;
- (id)getVadRightMargin;
- (int)setVadRightMargin:(id)arg1;
- (id)getVadLeftMargin;
- (int)setVadLeftMargin:(id)arg1;
- (id)getStrip;
- (id)getSpeechLowSeek;
- (int)setStrip:(id)arg1;
- (int)setSpeechLowSeek:(id)arg1;
- (id)getVadRes;
- (id)getVadEnable;
- (int)setVadEnable:(id)arg1;
- (id)getHttpConnectTimeout;
- (int)setHttpConnectTimeout:(id)arg1;
- (id)getHttpTransferTimeout;
- (int)setHttpTransferTimeout:(id)arg1;
- (id)getCloudServer;
- (int)setCloudServer:(id)arg1;
- (id)getCloudEnable;
- (int)setCloudEnable:(id)arg1;
- (id)getProfOutput;
- (int)setProfOutput:(id)arg1;
- (id)getProfEnable;
- (int)setProfEnable:(id)arg1;
- (int)setSerialNumber:(id)arg1;
- (int)setProvision:(id)arg1;
- (id)getLuaPath;
- (int)setLuaPath:(id)arg1;
- (id)getAppSecretKey;
- (int)setAppSecretKey:(id)arg1;
- (id)getAppKey;
- (int)setAppKey:(id)arg1;
- (id)getNativeConfig;
- (int)setNativeConfig:(id)arg1;
- (void)initDefaultValue;
- (id)init;

@end

