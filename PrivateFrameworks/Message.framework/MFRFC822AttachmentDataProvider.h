/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessage, MFMimePart, NSData, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider> {
    MFMailMessage *_message;
    NSData *_messageData;
    MFMimePart *_parentPart;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;
- (id)messageForAttachment:(id)arg1;

@end
