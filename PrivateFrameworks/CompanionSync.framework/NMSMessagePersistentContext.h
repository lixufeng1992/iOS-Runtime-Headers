/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSDate, NSDictionary, NSString;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDictionary *_customIDSFlags;
    NSDate *_date;
    BOOL _fromRequest;
    NSString *_idsIdentifier;
    unsigned short _messageID;
    BOOL _processAcked;
    BOOL _sendAcked;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary * customIDSFlags;
@property(retain) NSDate * date;
@property(getter=isFromRequest) BOOL fromRequest;
@property(copy) NSString * idsIdentifier;
@property unsigned short messageID;
@property BOOL processAcked;
@property BOOL sendAcked;
@property(retain) NSDictionary * userInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customIDSFlags;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFromRequest;
- (unsigned short)messageID;
- (BOOL)processAcked;
- (BOOL)sendAcked;
- (void)setCustomIDSFlags:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFromRequest:(BOOL)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setProcessAcked:(BOOL)arg1;
- (void)setSendAcked:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
