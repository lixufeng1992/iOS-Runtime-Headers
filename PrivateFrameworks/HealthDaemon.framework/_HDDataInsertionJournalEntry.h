/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry {
    HKObject *_dataObject;
    int _provenance;
}

@property(readonly) HKObject * dataObject;
@property(readonly) int provenance;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 provenance:(int)arg2;
- (int)provenance;

@end
