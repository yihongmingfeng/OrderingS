//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSXsMainSuggestPanel;

@protocol CSXsMainSuggestPanelDelegate <NSObject>

@optional
- (void)suggestPanelDidEndContract:(CSXsMainSuggestPanel *)arg1;
- (void)suggestPanelDidBeginContract:(CSXsMainSuggestPanel *)arg1;
- (void)suggestPanelDidEndExpand:(CSXsMainSuggestPanel *)arg1;
- (void)suggestPanelDidBeginExpand:(CSXsMainSuggestPanel *)arg1;
@end
