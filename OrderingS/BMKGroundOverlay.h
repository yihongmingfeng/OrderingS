//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKMultiPoint.h"

#import "BMKOverlay.h"

@class NSString, UIImage;

@interface BMKGroundOverlay : BMKMultiPoint <BMKOverlay>
{
    float zoomLevel;
    CDStruct_2c43369c _pt;
    CDStruct_dafdc2cb _bound;
    struct CGPoint _anchor;
    UIImage *_icon;
    int iconID;
    _Bool isCenterPt;
    int left;
    int bottom;
    int width;
    int height;
    float _alpha;
}

+ (id)groundOverlayWithBounds:(CDStruct_90e2a262)arg1 icon:(id)arg2;
+ (id)groundOverlayWithPosition:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 anchor:(struct CGPoint)arg3 icon:(id)arg4;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *icon;
@property(nonatomic) struct CGPoint anchor;
@property(nonatomic) CDStruct_90e2a262 bound;
@property(nonatomic) CDStruct_c3b9c2ee pt;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

