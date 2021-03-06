/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialPromptAlert : TPAlert {
    id /* block */  _dialAction;
    TUDialRequest * _dialRequest;
}

@property (nonatomic, copy) id /* block */ dialAction;
@property (nonatomic, retain) TUDialRequest *dialRequest;

- (void).cxx_destruct;
- (id)defaultButtonTitle;
- (void)defaultResponse;
- (id /* block */)dialAction;
- (id)dialRequest;
- (id)initWithDialRequest:(id)arg1 dialAction:(id /* block */)arg2;
- (id)otherButtonTitle;
- (void)otherResponse;
- (void)setDialAction:(id /* block */)arg1;
- (void)setDialRequest:(id)arg1;
- (id)title;

@end
