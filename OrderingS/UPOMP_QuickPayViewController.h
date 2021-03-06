//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_ViewController.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UPOMP_KaNetDelegate.h"

@class NSData, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UIPickerView, UITableView, UITableViewCell, UITextField, UIView, UPOMP_CheckPhoneCellViewController, UPOMP_KaNet;

@interface UPOMP_QuickPayViewController : UPOMP_ViewController <UITableViewDataSource, UITableViewDelegate, UPOMP_KaNetDelegate, UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>
{
    UIImageView *infoTopImageView;
    UITableViewCell *infoTopCell;
    UITableViewCell *userNameCell;
    UIImageView *userNameBG;
    UIImageView *userNameLeftBG;
    UILabel *userNameText;
    UILabel *userNameValue;
    UIView *userNameLine;
    UITableViewCell *welComeCell;
    UIImageView *welComeBG;
    UIImageView *welComeLeftBG;
    UILabel *welComeText;
    UILabel *welComeValue;
    UITableViewCell *cardTypeCell;
    UIImageView *cardTypeBG;
    UIImageView *cardTypeLeftBG;
    UITextField *cardField;
    UIView *cardTypeLine;
    UIImageView *cardTypeIcon;
    UIButton *cardMoreButton;
    UILabel *cardValueLabel;
    UIImageView *phoneNumIcon;
    UITableViewCell *phoneNumCell;
    UIImageView *phoneNumBG;
    UIImageView *phoneNumLeftBG;
    UILabel *phoneNumValue;
    UIImageView *bottomBG;
    UITableViewCell *bottomCell;
    UIButton *userButton;
    UIButton *nextButton;
    UIButton *backButton;
    UITableViewCell *buttonCell;
    UITableView *myTabelView;
    UIImageView *infoTopImageView2;
    UITableViewCell *infoTopCell2;
    UILabel *infoValue;
    UIImageView *infoBG;
    UITableViewCell *infoCell;
    UIImageView *bottomBG2;
    UITableViewCell *bottomCell2;
    UIView *cardListView;
    UIPickerView *pickerView;
    UIImageView *infoTopImageView3;
    UITableViewCell *infoTopCell3;
    UIImageView *bottomBG3;
    UITableViewCell *bottomCell3;
    UIView *popinfoView;
    UIImageView *popBG;
    UILabel *poptext;
    NSTimer *timer;
    _Bool timerRun;
    UPOMP_KaNet *net;
    NSMutableArray *cellArray;
    _Bool hasLoadData;
    _Bool willAddCard;
    UPOMP_CheckPhoneCellViewController *smsCheck;
    int selectCardIndex;
    NSData *upData;
}

- (void)prevCell;
- (void)nextCell;
- (void)checkCellArray:(int)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)selectRow:(id)arg1;
- (void)selectRowByRow:(int)arg1;
- (void)addCard:(id)arg1;
- (void)netCancel;
- (void)hiddenCell;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)moreCard:(id)arg1;
- (void)userManage:(id)arg1;
- (void)back:(id)arg1;
- (void)okButon:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)over;
- (void)show;
- (void)viewDidLoad;
- (void)netOver;
- (void)netFinish:(id)arg1;
- (id)encodeData:(id)arg1 type:(int)arg2;
- (void)hasCardData;
- (_Bool)checkQuickPayXML2:(id)arg1;
- (_Bool)xmlQuickPayDetailed:(id)arg1 root:(struct _UPOMP_TBXMLElement *)arg2;
- (_Bool)checkCardInfoXML:(id)arg1;
- (_Bool)xmlCardInfoDetailed:(id)arg1 root:(struct _UPOMP_TBXMLElement *)arg2;
- (void)netError:(id)arg1;
- (void)netWork:(int)arg1;
- (void)restCellArray:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

