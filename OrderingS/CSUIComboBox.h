//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PickerDialogDelegate.h"

@class NSMutableArray, NSObject<CSUIComboBoxDelegate>, NSString, PickerDialogVc;

@interface CSUIComboBox : UIButton <PickerDialogDelegate>
{
    NSObject<CSUIComboBoxDelegate> *delegate;
    PickerDialogVc *pickerDialogVc;
    NSMutableArray *list;
    _Bool needStyleTag;
    int style;
    long long selectRow;
    long long rightSelectRow;
    NSString *selectId;
    NSString *rightSelectId;
    _Bool twoColumnTag;
    float leftColumnWidth;
    float rigthColumnWidth;
}

@property float rigthColumnWidth; // @synthesize rigthColumnWidth;
@property float leftColumnWidth; // @synthesize leftColumnWidth;
@property(nonatomic) _Bool twoColumnTag; // @synthesize twoColumnTag;
@property(retain, nonatomic) NSString *rightSelectId; // @synthesize rightSelectId;
@property(retain, nonatomic) NSString *selectId; // @synthesize selectId;
@property(nonatomic) long long rightSelectRow; // @synthesize rightSelectRow;
@property(nonatomic) long long selectRow; // @synthesize selectRow;
@property int style; // @synthesize style;
@property(nonatomic) _Bool needStyleTag; // @synthesize needStyleTag;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
@property(retain, nonatomic) PickerDialogVc *pickerDialogVc; // @synthesize pickerDialogVc;
@property NSObject<CSUIComboBoxDelegate> *delegate; // @synthesize delegate;
- (void)changeTitleForTwoColumnWithLeftName:(id)arg1 rightName:(id)arg2;
- (void)changeLeftSelectId:(id)arg1 rightSelectId:(id)arg2;
- (void)changeList:(id)arg1;
- (void)pickerDialogCancel;
- (void)pickerDialogReturnOkWithLeftRow:(long long)arg1 leftSelectId:(id)arg2 leftSelectName:(id)arg3 rightRow:(long long)arg4 rightSelectId:(id)arg5 rightSelectName:(id)arg6;
- (void)btnClicked:(id)arg1;
- (void)openPickerDialog;
- (void)changeTitle:(id)arg1;
- (void)changeSelectId:(id)arg1 righId:(id)arg2;
- (void)changeSelectId:(id)arg1;
- (void)changeWithList:(id)arg1 leftSelectId:(id)arg2 rightSelectId:(id)arg3;
- (void)changeWithList:(id)arg1 selectId:(id)arg2;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 frame:(struct CGRect)arg2 needStyleTag:(_Bool)arg3 pickerStyle:(int)arg4;
- (id)initWithSuperView:(id)arg1 frame:(struct CGRect)arg2 needStyleTag:(_Bool)arg3;
- (id)initWithSuperView:(id)arg1 frame:(struct CGRect)arg2;

@end
