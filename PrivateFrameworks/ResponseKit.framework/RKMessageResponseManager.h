/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKMessageResponseManager : NSObject {
}

+ (id)sharedManager;

- (id)_init;
- (id)init;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (void)resetRegisteredResponsesForContext:(id)arg1;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned int)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned int)arg5;

@end
