/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKAnnotationContainerViewDelegate>, MKAnnotationCalloutController, MKAnnotationView, MKPinAnnotationView, NSMutableArray, NSMutableSet, NSString, UIPopoverController;

@interface MKAnnotationContainerView : UIView <MKAnnotationCalloutControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    BOOL _addingSubview;
    MKAnnotationView *_annotationViewToSelect;
    NSMutableArray *_annotationViews;
    float _annotationViewsRotationRadians;
    NSMutableArray *_awaitingDropPins;
    MKAnnotationCalloutController *_calloutController;
    BOOL _clickedOnAnnotationView;
    <MKAnnotationContainerViewDelegate> *_delegate;
    BOOL _didDragAnnotationView;
    MKAnnotationView *_draggingAnnotationView;
    } _draggingAnnotationViewCenter;
    unsigned int _mapDisplayStyle;
    float _mapPitchRadians;
    } _mapTransform;
    unsigned int _mapType;
    } _mouseDownPoint;
    MKAnnotationView *_selectedAnnotationView;
    MKAnnotationView *_userLocationView;
    NSMutableSet *_viewsToAnimate;
}

@property BOOL allowsPopoverWhenNotInWindow;
@property(readonly) NSMutableArray * annotationViews;
@property(readonly) MKPinAnnotationView * bubblePin;
@property(readonly) MKAnnotationView * calloutAnnotationView;
@property(readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; } currentComparisonContext;
@property(copy,readonly) NSString * debugDescription;
@property <MKAnnotationContainerViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL hasDroppingPins;
@property(readonly) BOOL hasPendingAnimations;
@property(readonly) unsigned int hash;
@property unsigned int mapType;
@property(readonly) UIPopoverController * popoverController;
@property(readonly) Class superclass;
@property(readonly) MKAnnotationView * userLocationView;

- (void).cxx_destruct;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2 maxDistance:(float)arg3;
- (void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1;
- (void)_dropPinsIfNeeded:(BOOL)arg1;
- (void)_findNextView:(id*)arg1 orientation:(int*)arg2 context:(id)arg3;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 1; unsigned int x_11_1_65 : 5; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 1; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 2; unsigned int x_11_1_71 : 1; unsigned int x_11_1_72 : 2; unsigned int x_11_1_73 : 1; unsigned int x_11_1_74 : 3; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; unsigned int x_11_1_82 : 1; } x11; }*)arg3;
- (void)_updateOrientationOfViews:(id)arg1;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 1; unsigned int x_11_1_65 : 5; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 1; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 2; unsigned int x_11_1_71 : 1; unsigned int x_11_1_72 : 2; unsigned int x_11_1_73 : 1; unsigned int x_11_1_74 : 3; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; unsigned int x_11_1_82 : 1; } x11; }*)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 1; unsigned int x_11_1_65 : 5; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 1; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 2; unsigned int x_11_1_71 : 1; unsigned int x_11_1_72 : 2; unsigned int x_11_1_73 : 1; unsigned int x_11_1_74 : 3; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; unsigned int x_11_1_82 : 1; } x11; }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRectInView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 1; unsigned int x_11_1_65 : 5; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 1; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 2; unsigned int x_11_1_71 : 1; unsigned int x_11_1_72 : 2; unsigned int x_11_1_73 : 1; unsigned int x_11_1_74 : 3; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; unsigned int x_11_1_82 : 1; } x11; }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryPadding;
- (void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addSubview:(id)arg1;
- (BOOL)allowsPopoverWhenNotInWindow;
- (void)annotationViewDidChangeCenterOffset:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (id)annotationViewForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)annotationViews;
- (id)bubblePin;
- (id)calloutAnnotationView;
- (BOOL)calloutContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { float x1; float x2; })arg2 annotationCoordinate:(struct { double x1; double x2; })arg3 completionHandler:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
- (void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inCalloutController:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(struct UIView { Class x1; id x2; id x3; id x4; id x5; float x6; int x7; id x8; id x9; unsigned int x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 6; unsigned int x_11_1_18 : 1; unsigned int x_11_1_19 : 1; unsigned int x_11_1_20 : 1; unsigned int x_11_1_21 : 1; unsigned int x_11_1_22 : 1; unsigned int x_11_1_23 : 1; unsigned int x_11_1_24 : 1; unsigned int x_11_1_25 : 1; unsigned int x_11_1_26 : 1; unsigned int x_11_1_27 : 1; unsigned int x_11_1_28 : 1; unsigned int x_11_1_29 : 1; unsigned int x_11_1_30 : 1; unsigned int x_11_1_31 : 1; unsigned int x_11_1_32 : 1; unsigned int x_11_1_33 : 1; unsigned int x_11_1_34 : 1; unsigned int x_11_1_35 : 1; unsigned int x_11_1_36 : 1; unsigned int x_11_1_37 : 1; unsigned int x_11_1_38 : 1; unsigned int x_11_1_39 : 1; unsigned int x_11_1_40 : 1; unsigned int x_11_1_41 : 1; unsigned int x_11_1_42 : 1; unsigned int x_11_1_43 : 1; unsigned int x_11_1_44 : 1; unsigned int x_11_1_45 : 1; unsigned int x_11_1_46 : 1; unsigned int x_11_1_47 : 1; unsigned int x_11_1_48 : 1; unsigned int x_11_1_49 : 1; unsigned int x_11_1_50 : 1; unsigned int x_11_1_51 : 1; unsigned int x_11_1_52 : 1; unsigned int x_11_1_53 : 1; unsigned int x_11_1_54 : 1; unsigned int x_11_1_55 : 1; unsigned int x_11_1_56 : 1; unsigned int x_11_1_57 : 1; unsigned int x_11_1_58 : 1; unsigned int x_11_1_59 : 1; unsigned int x_11_1_60 : 1; unsigned int x_11_1_61 : 1; unsigned int x_11_1_62 : 1; unsigned int x_11_1_63 : 1; unsigned int x_11_1_64 : 1; unsigned int x_11_1_65 : 5; unsigned int x_11_1_66 : 1; unsigned int x_11_1_67 : 1; unsigned int x_11_1_68 : 1; unsigned int x_11_1_69 : 2; unsigned int x_11_1_70 : 2; unsigned int x_11_1_71 : 1; unsigned int x_11_1_72 : 2; unsigned int x_11_1_73 : 1; unsigned int x_11_1_74 : 3; unsigned int x_11_1_75 : 1; unsigned int x_11_1_76 : 1; unsigned int x_11_1_77 : 1; unsigned int x_11_1_78 : 1; unsigned int x_11_1_79 : 1; unsigned int x_11_1_80 : 1; unsigned int x_11_1_81 : 1; unsigned int x_11_1_82 : 1; } x11; }*)arg2;
- (struct { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; })currentComparisonContext;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })draggingAnnotationViewDropPoint;
- (struct CGPoint { float x1; float x2; })draggingAnnotationViewDropPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)draggingTouchMovedToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dropPinsIfNeeded;
- (void)finishAddingAnnotationViews;
- (BOOL)hasDroppingPins;
- (BOOL)hasPendingAnimations;
- (unsigned int)indexForAnnotationView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCalloutExpanded;
- (unsigned int)mapType;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (id)popoverController;
- (void)removeAnnotationView:(id)arg1;
- (void)removeAnnotationViewsRotationAnimations;
- (void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setAllowsPopoverWhenNotInWindow:(BOOL)arg1;
- (void)setAnnotationViewsRotationRadians:(float)arg1 animation:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMapDisplayStyle:(unsigned int)arg1;
- (void)setMapPitchRadians:(float)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;
- (void)transitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (void)updateAnnotationView:(id)arg1;
- (void)updateUserLocationView;
- (id)userLocationView;

@end
