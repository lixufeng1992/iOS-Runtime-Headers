/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <GEOMapServiceProblemReportTicket>, GEOMapServiceTraits, NSString;

@interface _MKProblemReportTicket : NSObject <MKMapServiceProblemReportTicket> {
    <GEOMapServiceProblemReportTicket> *_ticket;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProblemReportTicket:(id)arg1;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end
