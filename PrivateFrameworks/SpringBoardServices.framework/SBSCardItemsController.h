/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    NSXPCConnection *_connection;
    NSString *_identifier;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)addCardItems:(id)arg1;
- (void)clearAllCardItems;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)removeCardItems:(id)arg1;
- (void)setCardItems:(id)arg1;

@end
