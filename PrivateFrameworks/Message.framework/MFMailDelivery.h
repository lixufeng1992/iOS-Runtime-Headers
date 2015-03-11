/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DeliveryAccount, MFDeliveryResult, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@interface MFMailDelivery : NSObject {
    unsigned int _threaded : 1;
    unsigned int _useCellDataOnly : 1;
    DeliveryAccount *_account;
    MailAccount *_archiveAccount;
    NSArray *_charsets;
    NSDictionary *_compositionSpecification;
    unsigned long long _conversationFlags;
    id _delegate;
    MFMutableMessageHeaders *_headers;
    NSString *_htmlString;
    BOOL _isUserRequested;
    MFMessage *_message;
    NSArray *_mixedContent;
    NSArray *_otherStringsAndAttachments;
    MFPlainTextDocument *_plainTextAlternative;
    MFDeliveryResult *_result;
    BOOL _textPartsAreHTML;
}

@property(retain) NSDictionary * compositionSpecification;
@property unsigned long long conversationFlags;
@property BOOL isUserRequested;

+ (BOOL)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)account;
- (void)archive;
- (id)archiveAccount;
- (id)compositionSpecification;
- (unsigned long long)conversationFlags;
- (void)dealloc;
- (id)delegate;
- (void)deliverAsynchronously;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)deliverSynchronously;
- (id)deliveryResult;
- (int)deliveryStatus;
- (id)headersForDelivery;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;
- (BOOL)isUserRequested;
- (id)message;
- (id)newMessageWriter;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCellDataOnly:(BOOL)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUserRequested:(BOOL)arg1;
- (BOOL)shouldEncryptMessage;
- (BOOL)shouldSignMessage;

@end
