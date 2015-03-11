/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray, NSError, NSMutableArray, NSString, NSURL;

@interface CKDMMCSItemGroup : NSObject {
    BOOL _complete;
    NSError *_error;
    NSMutableArray *_items;
    NSArray *_tuple;
}

@property BOOL complete;
@property(readonly) NSURL * contentBaseURL;
@property(retain) NSError * error;
@property(readonly) NSArray * items;
@property(readonly) NSString * owner;
@property(readonly) NSString * requestor;
@property(retain) NSArray * tuple;
@property(readonly) BOOL useAuthRequests;

+ (id)tupleForItem:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addItem:(id)arg1;
- (BOOL)complete;
- (id)contentBaseURL;
- (id)description;
- (id)error;
- (id)initWithTuple:(id)arg1;
- (id)items;
- (id)owner;
- (id)requestor;
- (void)setComplete:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setTuple:(id)arg1;
- (id)tuple;
- (BOOL)useAuthRequests;

@end
