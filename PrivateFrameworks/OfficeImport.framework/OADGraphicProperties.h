/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
    NSArray *mEffects;
    NSArray *mExts;
    OADFill *mFill;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)effects;
- (id)exts;
- (id)fill;
- (BOOL)hasEffects;
- (BOOL)hasExts;
- (BOOL)hasFill;
- (BOOL)hasIsBehindText;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (BOOL)hasStroke;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isBehindText;
- (BOOL)isEqual:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)scene3D;
- (void)setEffects:(id)arg1;
- (void)setExts:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setIsBehindText:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (void)setStroke:(id)arg1;
- (id)shape3D;
- (id)stroke;

@end
