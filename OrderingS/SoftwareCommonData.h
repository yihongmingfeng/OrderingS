//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CityListDto, ErrorReportTypeListPackDTO, NSString, OrderSelInfo, VersionChkDto, WebAppCfg;

@interface SoftwareCommonData : NSObject
{
    int _normalRequestTimeout;
    int _uploadRequestTimeout;
    VersionChkDto *_versionChkDto;
    CityListDto *_cityDto;
    ErrorReportTypeListPackDTO *_errorReportTypeListDto;
    OrderSelInfo *_orderSelInfo;
    NSString *_xfUrl;
    NSString *_xfEngineName;
    NSString *_sinaIphoneSsoUrl;
    NSString *_sinaIpadSsoUrl;
    NSString *_sinaWapUrl;
    NSString *_sinaInterceptUrl;
    NSString *_qqWeiboWapUrl;
    NSString *_qqWeiboInterceptUrl;
    double _serverTimestamp;
    NSString *_splashPicUrl;
    NSString *_wapPageUrl;
    WebAppCfg *_webAppCfg;
}

@property(retain, nonatomic) WebAppCfg *webAppCfg; // @synthesize webAppCfg=_webAppCfg;
@property(retain, nonatomic) NSString *wapPageUrl; // @synthesize wapPageUrl=_wapPageUrl;
@property(retain, nonatomic) NSString *splashPicUrl; // @synthesize splashPicUrl=_splashPicUrl;
@property(nonatomic) double serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
@property(nonatomic) int uploadRequestTimeout; // @synthesize uploadRequestTimeout=_uploadRequestTimeout;
@property(nonatomic) int normalRequestTimeout; // @synthesize normalRequestTimeout=_normalRequestTimeout;
@property(retain, nonatomic) NSString *qqWeiboInterceptUrl; // @synthesize qqWeiboInterceptUrl=_qqWeiboInterceptUrl;
@property(retain, nonatomic) NSString *qqWeiboWapUrl; // @synthesize qqWeiboWapUrl=_qqWeiboWapUrl;
@property(retain, nonatomic) NSString *sinaInterceptUrl; // @synthesize sinaInterceptUrl=_sinaInterceptUrl;
@property(retain, nonatomic) NSString *sinaWapUrl; // @synthesize sinaWapUrl=_sinaWapUrl;
@property(retain, nonatomic) NSString *sinaIpadSsoUrl; // @synthesize sinaIpadSsoUrl=_sinaIpadSsoUrl;
@property(retain, nonatomic) NSString *sinaIphoneSsoUrl; // @synthesize sinaIphoneSsoUrl=_sinaIphoneSsoUrl;
@property(retain, nonatomic) NSString *xfEngineName; // @synthesize xfEngineName=_xfEngineName;
@property(retain, nonatomic) NSString *xfUrl; // @synthesize xfUrl=_xfUrl;
@property(retain, nonatomic) OrderSelInfo *orderSelInfo; // @synthesize orderSelInfo=_orderSelInfo;
@property(retain, nonatomic) ErrorReportTypeListPackDTO *errorReportTypeListDto; // @synthesize errorReportTypeListDto=_errorReportTypeListDto;
@property(retain, nonatomic) CityListDto *cityDto; // @synthesize cityDto=_cityDto;
@property(retain, nonatomic) VersionChkDto *versionChkDto; // @synthesize versionChkDto=_versionChkDto;
- (void)unitTest;
- (void)dealloc;
- (id)initWithObj:(id)arg1;

@end
