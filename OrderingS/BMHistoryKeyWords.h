//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMHistoryKeyWords : NSObject
{
    struct CVString m_historyKeyWordsFilePath;
    CVArray_301a5d81 m_arrHotKeywords;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)GetHotKeywords:(id)arg1 hotKeyWordsArray:(id)arg2;
- (_Bool)CleanHotKeywords;
- (_Bool)AddHotKeywords:(id)arg1;
- (_Bool)SaveKeyWordsHisMan;
- (_Bool)LoadKeyWordsHisMan;
- (void)dealloc;
- (id)init;

@end
