//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SuggestResultData;

@protocol CSOrderPanelDelegate <NSObject>
- (void)orderPanelTel:(SuggestResultData *)arg1;
- (void)orderPanelSubmitOrder:(SuggestResultData *)arg1 reserveTime:(double)arg2 peopleNum:(long long)arg3 roomType:(long long)arg4;
@end

