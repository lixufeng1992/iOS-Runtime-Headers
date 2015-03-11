/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CalDateRange, NSDate, NSDictionary, NSObject<OS_dispatch_queue>;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {
    CalDateRange *_cachedCentralYear;
    CalDateRange *_cachedDateRange;
    NSDictionary *_cachedFirstsOfMonths;
    NSDictionary *_cachedFirstsOfYears;
    unsigned int _currentGeneration;
    NSDate *_currentRequest;
    BOOL _loadPending;
    NSObject<OS_dispatch_queue> *_queue;
    id _significantDatesChangedHandler;
}

@property(copy) id significantDatesChangedHandler;

- (void).cxx_destruct;
- (void)_invalidateCaches;
- (void)_load;
- (void)_requestDate:(id)arg1;
- (void)dealloc;
- (id)firstOfOverlayMonthsForCalendarMonth:(id)arg1;
- (id)firstOfOverlayYearsForCalendarMonth:(id)arg1;
- (id)init;
- (void)setSignificantDatesChangedHandler:(id)arg1;
- (id)significantDatesChangedHandler;

@end
