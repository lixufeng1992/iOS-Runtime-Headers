/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSItemLookupRequestDelegate>, NSDictionary, NSMutableDictionary, NSString;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
    NSMutableDictionary *_parameters;
}

@property(copy,readonly) NSString * debugDescription;
@property <SSItemLookupRequestDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSDictionary * parameters;
@property(readonly) Class superclass;

- (id)_convertedValueForValue:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
- (id)_errorForStatusCode:(int)arg1;
- (id)copyQueryStringParameters;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)parameters;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (BOOL)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithItemLookupBlock:(id)arg1;
- (id)valueForParameter:(id)arg1;

@end
