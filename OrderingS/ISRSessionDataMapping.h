//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SessionDataMapping.h"

@interface ISRSessionDataMapping : NSObject <SessionDataMapping>
{
}

+ (id)ValueMapping:(id)arg1;
+ (void)ISRDictionaryInit;
+ (void)setAudioSource:(id)arg1;
+ (id)audioSource;
+ (id)AudioFilePath;
+ (_Bool)isSaveAudioFile;
+ (id)SessionParam;
+ (_Bool)ParamMapping:(id)arg1 value:(id)arg2;
+ (void)setGrammarID:(id)arg1;
+ (id)grammarID;
+ (int)parseCategory;

@end

