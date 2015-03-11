/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NSURLAuthenticationChallengeSender>, NSError, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSError *error;
    NSURLResponse *failureResponse;
    int previousFailureCount;
    NSURLCredential *proposedCredential;
    <NSURLAuthenticationChallengeSender> *sender;
    NSURLProtectionSpace *space;
}

- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
