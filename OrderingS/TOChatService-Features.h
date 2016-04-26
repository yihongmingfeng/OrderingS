//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TOChatService.h"

@interface TOChatService (Features)
- (id)bvc;
- (_Bool)isXmsWorkingHours;
- (void)cleanLiveSupportAndKeepInterval:(int)arg1;
- (void)retrieveSuggestionFromCallCenter;
- (id)lastTuturialStepXmsJustSaid;
- (void)installTutorialStuff;
- (void)cleanTutorialStuff;
- (id)nextTutorialStep;
- (_Bool)enforceTutorialStep:(id)arg1;
- (void)doCheckTutorial;
- (_Bool)hasNotFoundAnyDataWithTopRestListInFirstLoop;
- (_Bool)chkResultsFromTypeList;
- (void)resetRotatableTypeList;
- (void)hintUserRotatableTypeList;
- (void)reloadRotatableTypeList:(id)arg1;
- (_Bool)filterDemoTasks:(id)arg1;
- (_Bool)filterEntertainTasks:(id)arg1;
- (_Bool)filterRegularTasksAndDevoured:(id)arg1;
- (void)receievedShakeForNextType:(id)arg1;
- (void)receievedTouchlessVcDataShown:(id)arg1;
- (void)removeRestFilterCriterionListerner:(id)arg1;
- (void)repeatXmsLastSaid;
- (void)repeatXmsLastSaidListener:(id)arg1;
- (void)invokeRepeatXmsLastSaidNofication;
- (void)finalBookingConfirm;
- (void)reassureTargetOneRestDuringFiltering;
- (_Bool)processPossibleRestDetail;
- (void)askCommonReassureOneRest;
- (void)reconfirmAndCleanForNextRound;
- (id)findTopRestTypeMentionedViaStringCmp:(id)arg1;
- (id)findTopRestTypeMentionedViaStringUsingRawText;
- (id)findRestMentionedViaPinyinUsingRawDic:(id)arg1;
- (id)findCandidatesByNameAndPinyinUsingRawDict:(id)arg1;
- (void)reportInteractMethod;
- (void)voiceReportQueryResult;
- (id)textForfoundTopRestList;
- (_Bool)backSearch;
- (void)removeAutoHintsMsgs;
- (void)autoHintEmptyCriteria;
- (void)letUserKnownQueryConditions;
- (void)interruptAppActions;
- (id)startServiceHint;
- (void)doNormalGuide;
- (void)doTutorial;
- (void)didSay:(id)arg1;
- (void)xmsSaysNeedChoiceSelection:(id)arg1;
- (void)xmsNeedBoolConfirm:(id)arg1;
- (void)xmsSaysNoNeedToFeedBack:(id)arg1;
- (void)xmsSaysTutorial:(id)arg1;
- (void)xmsSaysTextOnlyMsg:(id)arg1;
- (void)xmsSays:(id)arg1;
@end
