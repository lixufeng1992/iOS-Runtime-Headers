/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<OS_dispatch_queue>, OITSUProgress, OITSUScaledProgressStorage;

@interface OITSUScaledProgress : OITSUProgress {
    OITSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
    OITSUScaledProgressStorage *mStorage;
}

@property double maxValue;
@property(retain) OITSUProgress * progress;

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void)p_addProgressObserverToProgressInQueue;
- (void)p_removeProgressObserverFromProgressInQueue;
- (id)progress;
- (void)removeProgressObserver:(id)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setProgress:(id)arg1;
- (double)value;

@end
