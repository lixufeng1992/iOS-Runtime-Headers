/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, NSDate, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    float _bottomPinningProximity;
    EKCalendarDate *_endDate;
    unsigned int _eventIndex;
    EKCalendarDate *_startDate;
    float _topPinningProximity;
    double _travelTime;
    } _unPinnedViewFrame;
    EKDayOccurrenceView *_view;
}

@property float bottomPinningProximity;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSDate * end;
@property(copy) EKCalendarDate * endDate;
@property(readonly) float enoughHeightForOneLine;
@property(readonly) EKEvent * event;
@property(readonly) unsigned int eventIndex;
@property(readonly) unsigned int hash;
@property(readonly) BOOL hideTravelTime;
@property(readonly) NSDate * start;
@property(copy) EKCalendarDate * startDate;
@property(copy,readonly) EKCalendarDate * startDateIncludingTravelTime;
@property(readonly) NSDate * startWithTravelTime;
@property(readonly) Class superclass;
@property float topPinningProximity;
@property double travelTime;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unPinnedViewFrame;
@property(retain) EKDayOccurrenceView * view;
@property(readonly) float viewMaxNaturalTextHeight;
@property(readonly) BOOL visibleHeightLocked;

+ (float)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (float)bottomPinningProximity;
- (id)description;
- (id)end;
- (id)endDate;
- (float)enoughHeightForOneLine;
- (id)event;
- (unsigned int)eventIndex;
- (BOOL)hideTravelTime;
- (id)initWithEventIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPinned;
- (void)setBottomPinningProximity:(float)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setTopPinningProximity:(float)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(float)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setVisibleHeight:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startDate;
- (id)startDateIncludingTravelTime;
- (id)startWithTravelTime;
- (float)topPinningProximity;
- (double)travelTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unPinnedViewFrame;
- (id)view;
- (float)viewMaxNaturalTextHeight;
- (BOOL)visibleHeightLocked;

@end
