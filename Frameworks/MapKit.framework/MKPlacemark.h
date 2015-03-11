/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation> {
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSString * countryCode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * title;

- (struct { double x1; double x2; })coordinate;
- (id)countryCode;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2;
- (id)thoroughfare;
- (id)title;

@end
