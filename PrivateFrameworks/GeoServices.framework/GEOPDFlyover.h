/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {
    struct { 
        unsigned int useSplines : 1; 
    struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; } *_cameraPaths;
    unsigned int _cameraPathsCount;
    unsigned int _cameraPathsSpace;
    } _has;
    struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_labelFrames;
    unsigned int _labelFramesCount;
    unsigned int _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    BOOL _useSplines;
}

@property(readonly) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; }* cameraPaths;
@property(readonly) unsigned int cameraPathsCount;
@property BOOL hasUseSplines;
@property(readonly) struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* labelFrames;
@property(readonly) unsigned int labelFramesCount;
@property(retain) NSMutableArray * labels;
@property(retain) NSMutableArray * notificationMessages;
@property BOOL useSplines;

+ (id)flyoverForPlaceData:(id)arg1;

- (void)addCameraPath:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; })arg1;
- (void)addLabel:(id)arg1;
- (void)addLabelFrame:(struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addNotificationMessage:(id)arg1;
- (id)bestLocalizedAnnouncementMessage;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; })cameraPathAtIndex:(unsigned int)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; }*)cameraPaths;
- (unsigned int)cameraPathsCount;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)clearLabels;
- (void)clearNotificationMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasUseSplines;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)labelAtIndex:(unsigned int)arg1;
- (struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })labelFrameAtIndex:(unsigned int)arg1;
- (struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)labelFrames;
- (unsigned int)labelFramesCount;
- (id)labels;
- (unsigned int)labelsCount;
- (void)mergeFrom:(id)arg1;
- (id)notificationMessageAtIndex:(unsigned int)arg1;
- (id)notificationMessages;
- (unsigned int)notificationMessagesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCameraPaths:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; struct { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; unsigned int x_11_1_4 : 1; unsigned int x_11_1_5 : 1; unsigned int x_11_1_6 : 1; unsigned int x_11_1_7 : 1; unsigned int x_11_1_8 : 1; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; } x11; }*)arg1 count:(unsigned int)arg2;
- (void)setHasUseSplines:(BOOL)arg1;
- (void)setLabelFrames:(struct { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (void)setLabels:(id)arg1;
- (void)setNotificationMessages:(id)arg1;
- (void)setUseSplines:(BOOL)arg1;
- (BOOL)useSplines;
- (void)writeTo:(id)arg1;

@end
