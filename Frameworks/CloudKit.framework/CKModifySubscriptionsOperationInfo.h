/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_subscriptionIDsToDelete;
    NSArray *_subscriptionsToSave;
}

@property(retain) NSArray * subscriptionIDsToDelete;
@property(retain) NSArray * subscriptionsToSave;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsToSave;

@end
