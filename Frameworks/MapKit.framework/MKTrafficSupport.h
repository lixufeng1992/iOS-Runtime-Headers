/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTrafficSupport : NSObject {
}

+ (id)sharedTrafficSupport;

- (int)_convertType:(int)arg1;
- (struct CGImage { }*)imageForGEOIncidentType:(int)arg1 contentScale:(float)arg2;
- (struct CGImage { }*)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned int)arg3;
- (id)localizedTitleForIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned int)arg3;
- (void)setupTrafficIncidents;

@end
