//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DateUtil : NSObject
{
}

+ (id)dateWithDate:(id)arg1 min:(int)arg2;
+ (id)dateWithDouble:(double)arg1;
+ (id)dateFromNowWithDays:(int)arg1;
+ (id)dateFromNowWithMinutes:(int)arg1;
+ (id)dateWithDateStr:(id)arg1;
+ (id)dateWithDateTimeStr:(id)arg1;
+ (id)dateWithDateTimeSecStr:(id)arg1;
+ (id)dateWithStr:(id)arg1 format:(id)arg2;
+ (id)dateStrFromNowWithDayNum:(int)arg1;
+ (id)timeStrWithDouble:(double)arg1;
+ (id)dateTimeStrWithDouble:(double)arg1;
+ (id)dateStrWithDouble:(double)arg1;
+ (id)weekStrWithDate:(id)arg1;
+ (id)timeStrWithDate:(id)arg1;
+ (id)dateStrWithDate:(id)arg1;
+ (id)dateTimeStrWithDate:(id)arg1;
+ (id)dateTimeSecStrWithDate:(id)arg1;
+ (id)timeStrWithNow;
+ (id)dateStrWithNow;
+ (id)dateTimeStrWithNow;
+ (id)dateTimeSecStrWithNow;
+ (id)strWithDouble:(double)arg1 format:(id)arg2;
+ (id)strWithDate:(id)arg1 format:(id)arg2;
+ (id)dateNumberFrom1970WithDate:(id)arg1;
+ (id)dateNumberFrom1970WithDateTimeStr:(id)arg1;
+ (id)dateNumberFrom1970WithDateStr:(id)arg1;
+ (id)dateNumberFrom1970WithNow;
+ (double)compareMilliSecondWithDate1:(id)arg1 date2:(id)arg2;
+ (double)compareSecondWithDate1:(id)arg1 date2:(id)arg2;
+ (double)compareMinuteWithDate1:(id)arg1 date2:(id)arg2;
+ (int)compareDayWithDate1:(id)arg1 date2:(id)arg2;

@end

