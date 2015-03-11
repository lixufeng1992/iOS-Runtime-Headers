/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString, NSURL, WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
    WebResourcePrivate *_private;
}

@property(copy,readonly) NSString * MIMEType;
@property(readonly) NSURL * URL;
@property(copy,readonly) NSData * data;
@property(copy,readonly) NSString * frameName;
@property(copy,readonly) NSString * textEncodingName;

+ (id)bundleForClass;

- (struct ArchiveResource { int (**x1)(); unsigned int x2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; int x_3_1_8; int x_3_1_9; int x_3_1_10; int x_3_1_11; int x_3_1_12; int x_3_1_13; } x3; struct ResourceResponse { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_4_1_1; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; } x_4_1_2; long long x_4_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_4_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_4_1_5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_6_2_1; } x_4_1_6; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_7_2_1; } x_4_1_7; struct ResourceLoadTiming { int x_8_2_1; int x_8_2_2; int x_8_2_3; int x_8_2_4; int x_8_2_5; int x_8_2_6; int x_8_2_7; } x_4_1_8; int x_4_1_9; unsigned int x_4_1_10; double x_4_1_11; double x_4_1_12; double x_4_1_13; double x_4_1_14; double x_4_1_15; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; unsigned int x_4_1_21 : 1; unsigned int x_4_1_22 : 1; unsigned int x_4_1_23 : 1; unsigned int x_4_1_24 : 1; unsigned int x_4_1_25 : 1; unsigned int x_4_1_26 : 1; unsigned int x_4_1_27 : 3; unsigned int x_4_1_28 : 1; struct RetainPtr<_CFURLResponse *> { void *x_29_2_1; } x_4_1_29; struct RetainPtr<NSURLResponse> { void *x_30_2_1; } x_4_1_30; struct RetainPtr<const __CFArray *> { void *x_31_2_1; } x_4_1_31; } x4; struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; boolx9; boolx10; }*)_coreResource;
- (id)MIMEType;
- (id)URL;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithCoreResource:(struct PassRefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; })arg1;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(BOOL)arg7;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_response;
- (id)_stringValue;
- (id)_suggestedFilename;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)textEncodingName;

@end
