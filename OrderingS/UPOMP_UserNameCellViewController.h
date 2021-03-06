//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPOMP_CellViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface UPOMP_UserNameCellViewController : UPOMP_CellViewController <UITextFieldDelegate>
{
    UITextField *myField;
    UILabel *label;
    UIButton *bg;
    NSString *value;
    _Bool notitel;
    NSString *placeholderStr;
    _Bool noTitel;
}

@property _Bool noTitel; // @synthesize noTitel;
- (void)setValue:(id)arg1;
- (id)getKey;
- (void)setKeyReturnType:(_Bool)arg1;
- (void)select;
- (void)noSelect;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)selectBG:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)restText;
- (id)getValue;
- (id)checkFinish;
- (void)setPlaceholder:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

