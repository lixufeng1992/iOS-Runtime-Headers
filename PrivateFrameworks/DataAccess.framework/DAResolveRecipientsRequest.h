/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject {
    NSArray *_emailAddresses;
    NSDate *_endTime;
    BOOL _retrieveAvailablilty;
    BOOL _retrieveCertificates;
    NSDate *_startTime;
}

@property(retain) NSArray * emailAddresses;
@property(retain) NSDate * endTime;
@property BOOL retrieveAvailablilty;
@property BOOL retrieveCertificates;
@property(retain) NSDate * startTime;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddresses;
- (id)endTime;
- (unsigned int)hash;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (id)initWithEmailAddresses:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)retrieveAvailablilty;
- (BOOL)retrieveCertificates;
- (void)setEmailAddresses:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRetrieveAvailablilty:(BOOL)arg1;
- (void)setRetrieveCertificates:(BOOL)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
