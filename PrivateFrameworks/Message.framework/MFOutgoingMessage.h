/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (void)dealloc;
- (id)headers;
- (id)headersIfAvailable;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (unsigned int)messageSize;
- (id)messageStore;
- (id)mutableHeaders;
- (void)setMessageBody:(id)arg1;
- (void)setMutableHeaders:(id)arg1;

@end
