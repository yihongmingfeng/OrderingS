//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StringUtil : NSObject
{
}

+ (id)cleanStyleText:(id)arg1;
+ (id)randomStr;
+ (id)parseQueryString:(id)arg1;
+ (id)priceToStr:(double)arg1;
+ (id)doubleToStr:(double)arg1;
+ (id)floatToStr:(float)arg1;
+ (id)boolToStr:(_Bool)arg1;
+ (id)integerToStr:(long long)arg1;
+ (id)intToStr:(int)arg1;
+ (id)trimStr:(id)arg1;
+ (id)newStrListWithText:(id)arg1 splitStr:(id)arg2;
+ (id)replaceAll:(id)arg1 fromStr:(id)arg2 toStr:(id)arg3;
+ (id)matchListByText:(id)arg1 pattern:(id)arg2;
+ (long long)posAtText:(id)arg1 key:(id)arg2;
+ (id)specLenStr:(id)arg1 len:(long long)arg2 suffix:(id)arg3;
+ (id)specLenStr:(id)arg1 len:(long long)arg2;

@end

