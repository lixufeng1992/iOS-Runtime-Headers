/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class MediaControlClient, NSDictionary, NSString, PUAirplayRoute;

@interface PUAirplaySession : NSObject {
    PUAirplayRoute *_airplayRoute;
    BOOL _isAuthenticating;
    MediaControlClient *_mediaControlClient;
    NSString *_password;
    NSDictionary *_slideshowTransitions;
}

@property(readonly) PUAirplayRoute * airplayRoute;
@property(readonly) MediaControlClient * mediaControlClient;
@property(copy) NSString * password;

- (void).cxx_destruct;
- (void)_authenticateWithCompletion:(id)arg1;
- (void)_requestPasswordWithCompletion:(id)arg1;
- (void)_savePassword;
- (void)_validatePasswordWithCompletion:(id)arg1;
- (id)airplayRoute;
- (void)authenticateWithCompletion:(id)arg1;
- (void)dealloc;
- (void)didFailToStreamContentWithError:(id)arg1 retryBlock:(id)arg2;
- (void)fetchSlideshowTransitions:(id)arg1;
- (id)init;
- (id)initWithAirplayRoute:(id)arg1;
- (id)mediaControlClient;
- (id)newAirPlayRemoteSlideshow;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)validatePasswordWithCompletion:(id)arg1;

@end
