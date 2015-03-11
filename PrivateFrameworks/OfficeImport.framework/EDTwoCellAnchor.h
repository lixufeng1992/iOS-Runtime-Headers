/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTwoCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    int mEditAs;
    } mFrom;
    BOOL mIsRelative;
    } mTo;
}

- (id).cxx_construct;
- (int)editAs;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })from;
- (id)init;
- (BOOL)isRelative;
- (void)setEditAs:(int)arg1;
- (void)setFrom:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (void)setRelative:(BOOL)arg1;
- (void)setTo:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })to;

@end
