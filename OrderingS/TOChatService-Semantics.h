//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TOChatService.h"

@interface TOChatService (Semantics)
+ (id)fixPeopleNum:(id)arg1;
+ (id)fixSpecial:(id)arg1;
+ (id)fixCategory:(id)arg1;
+ (id)fixShanghaiArea:(id)arg1;
+ (id)moveNameToCategoryIfNecessary:(id)arg1 accordToKnownCusines:(id)arg2;
+ (id)sanitizeXfSemanticInfo:(id)arg1 withKnowCusine:(id)arg2;
- (id)restEntityForInquery:(id)arg1;
- (int)cntRestEntitiesForInquery:(id)arg1;
- (_Bool)hasExtraNonBookingInfoAfteerDetermineOneRest:(id)arg1;
- (void)checkIfUserGoOrderIntention:(id)arg1;
- (id)cleanUnnecessaryRawVoiceText:(id)arg1;
@end
