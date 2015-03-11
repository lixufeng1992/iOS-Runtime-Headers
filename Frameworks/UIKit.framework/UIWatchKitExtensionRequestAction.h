/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class BKSProcessAssertion, NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction {
    BKSProcessAssertion *_replyAssertion;
}

@property(retain) BKSProcessAssertion * replyAssertion;
@property(retain,readonly) NSDictionary * request;

- (int)UIActionType;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithRequest:(id)arg1 withHandler:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)replyAssertion;
- (id)request;
- (void)sendResponse:(id)arg1;
- (void)setReplyAssertion:(id)arg1;

@end
