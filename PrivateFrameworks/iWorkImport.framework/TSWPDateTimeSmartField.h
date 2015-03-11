/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, NSString;

@interface TSWPDateTimeSmartField : TSWPSmartField {
    NSDate *_date;
    long _dateStyle;
    NSString *_format;
    NSString *_localeID;
    BOOL _needsUpdate;
    long _timeStyle;
    int _updatePlan;
}

@property(copy) NSDate * date;
@property long dateStyle;
@property(copy) NSString * format;
@property(copy) NSString * localeIdentifier;
@property BOOL needsUpdate;
@property long timeStyle;
@property int updatePlan;

+ (id)dateStringFromTime:(double)arg1 withFormat:(id)arg2 localeIdentifier:(id)arg3 dateStyle:(long)arg4 timeStyle:(long)arg5;
+ (id)newDateFormatWithLocaleIdentifier:(id)arg1 dateStyle:(long)arg2 timeStyle:(long)arg3;

- (id)copyWithContext:(id)arg1;
- (id)date;
- (long)dateStyle;
- (void)dealloc;
- (id)format;
- (id)generateInlineText;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long)arg2 timeStyle:(long)arg3 autoUpdate:(BOOL)arg4 context:(id)arg5;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long)arg2 timeStyle:(long)arg3 format:(id)arg4 autoUpdate:(BOOL)arg5 context:(id)arg6;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long)arg2 timeStyle:(long)arg3 format:(id)arg4 date:(id)arg5 updatePlan:(int)arg6 context:(id)arg7;
- (id)localeIdentifier;
- (BOOL)needsUpdate;
- (void)resetLocale;
- (void)saveToArchiver:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateStyle:(long)arg1;
- (void)setFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(long)arg3 timeStyle:(long)arg4;
- (void)setFormat:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)setTimeStyle:(long)arg1;
- (void)setUpdatePlan:(int)arg1;
- (int)smartFieldKind;
- (long)timeStyle;
- (void)updateInParentStorageWithDolcContext:(id)arg1 undoTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg2;
- (int)updatePlan;

@end
