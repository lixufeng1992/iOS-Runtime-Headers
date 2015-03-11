/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaDataRequester, AVWeakReference, CALayer, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL aboveHighWaterLevel;
    BOOL addedToSynchronizer;
    } bounds;
    CALayer *contentLayer;
    struct OpaqueCMTimebase { } *controlTimebaseSetByUser;
    BOOL controlTimebaseSetByUserIsInUse;
    NSError *error;
    BOOL isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    BOOL outputObscured;
    } presentationSize;
    struct OpaqueCMTimebase { } *readOnlyRenderingTimebase;
    struct OpaqueCMTimebase { } *readOnlyVideoQueueTimebase;
    NSObject<OS_dispatch_queue> *serialQueue;
    int status;
    NSString *videoGravity;
    struct OpaqueFigVideoQueue { } *videoQueue;
    AVWeakReference *weakReferenceToSelf;
    AVWeakReference *weakReferenceToSynchronizer;
}

@end
