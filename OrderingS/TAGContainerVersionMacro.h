//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGFunctionCallImplementation.h"

@class NSString;

@interface TAGContainerVersionMacro : TAGFunctionCallImplementation
{
    NSString *_version;
}

+ (id)functionId;
@property(readonly) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1;
- (_Bool)isCacheable;
- (id)initWithVersion:(id)arg1;

@end

