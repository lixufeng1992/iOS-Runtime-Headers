/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, UIColor;

@interface EKEventDetailAttendeesListView : UIView {
    NSArray *_acceptedNames;
    NSArray *_declinedNames;
    BOOL _groupsNames;
    BOOL _highlighted;
    UIColor *_highlightedTextColor;
    NSArray *_maybeNames;
    NSArray *_noReplyNames;
    UIColor *_textColor;
    NSArray *_ungroupedNames;
}

@property(retain) NSArray * acceptedNames;
@property(retain) NSArray * declinedNames;
@property BOOL groupsNames;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIColor * highlightedTextColor;
@property(retain) NSArray * maybeNames;
@property(retain) NSArray * noReplyNames;
@property(retain) UIColor * textColor;
@property(retain) NSArray * ungroupedNames;

- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (float)_heightForGroupOfAttendeeNames:(id)arg1;
- (float)_offsetFromOffsetToBaseline:(float)arg1 withFont:(id)arg2;
- (id)acceptedNames;
- (id)declinedNames;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)groupsNames;
- (id)highlightedTextColor;
- (BOOL)isHighlighted;
- (id)maybeNames;
- (id)noReplyNames;
- (void)setAcceptedNames:(id)arg1;
- (void)setDeclinedNames:(id)arg1;
- (void)setGroupsNames:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setMaybeNames:(id)arg1;
- (void)setNoReplyNames:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUngroupedNames:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textColor;
- (id)ungroupedNames;

@end
