//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_CellViewController.h"

#import "UITextFieldDelegate.h"
#import "UPOMP_KaNetDelegate.h"

@class NSDate, NSString, NSTimer, UIButton, UILabel, UITextField, UPOMP_KaNet, UPOMP_KaTextFieldToolBarViewController;

@interface UPOMP_CheckPhoneCellViewController : UPOMP_CellViewController <UITextFieldDelegate, UPOMP_KaNetDelegate>
{
    UIButton *smsButton;
    UILabel *smsLable;
    UITextField *myField;
    UILabel *label;
    UIButton *bg;
    UPOMP_KaNet *net;
    NSTimer *timer;
    _Bool canReLoad;
    int countDownIndex;
    UPOMP_CheckPhoneCellViewController *phoneCell;
    NSString *phoneNum;
    _Bool isGetSMS;
    int secureInfo;
    int misc;
    _Bool hasLoadData;
    _Bool willRelease;
    _Bool notitel;
    _Bool isRest;
    _Bool isUseMainCount;
    _Bool isUseAddCardMainCount;
    NSDate *date;
    UPOMP_KaTextFieldToolBarViewController *myTextFieldToolBar;
}

@property _Bool isUseAddCardMainCount; // @synthesize isUseAddCardMainCount;
@property _Bool isGetSMS; // @synthesize isGetSMS;
@property _Bool isUseMainCount; // @synthesize isUseMainCount;
@property _Bool isRest; // @synthesize isRest;
@property _Bool notitel; // @synthesize notitel;
@property _Bool hasLoadData; // @synthesize hasLoadData;
@property int misc; // @synthesize misc;
@property int secureInfo; // @synthesize secureInfo;
- (void)setWillRelease;
- (void)netCancel;
- (void)setHasLoadData;
- (id)getKey;
- (void)select;
- (void)noSelect;
- (void)reloadSMS:(id)arg1;
- (void)selectBG:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)getValue;
- (void)restText;
- (void)restButton;
- (id)checkFinish;
- (void)viewDidLoad;
- (void)netFinish:(id)arg1;
- (_Bool)checkXML:(id)arg1;
- (_Bool)xmlDetailed:(id)arg1 root:(struct _UPOMP_TBXMLElement *)arg2;
- (void)netError:(id)arg1;
- (void)countDown;
- (void)network;
- (void)setPhoneNumCell:(id)arg1;
- (void)setPhoneNum:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

