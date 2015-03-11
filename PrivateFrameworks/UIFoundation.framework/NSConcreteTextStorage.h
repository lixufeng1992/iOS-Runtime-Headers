/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    struct { 
        unsigned int _forceFixAttributes : 1; 
        unsigned int _needLock : 1; 
        unsigned int _lockInitialized : 1; 
        unsigned int _inFixingAttributes : 1; 
        unsigned int _reserved : 28; 
    NSConcreteNotifyingMutableAttributedString *_contents;
    } _lock;
    } _pFlags;
}

+ (unsigned long)_writerCountTSDKey;

- (BOOL)_attributeFixingInProgress;
- (BOOL)_forceFixAttributes;
- (void)_initLocks;
- (BOOL)_lockForReading;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)_unlock;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (Class)classForCoder;
- (void)dealloc;
- (BOOL)fixesAttributesLazily;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (unsigned int)length;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)string;

@end
