/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageBodyParser, NSArray, NSString;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    int _attributes;
    unsigned int _externalRetainCount;
    NSArray *_nodes;
    MFMessageBodyParser *_parser;
    unsigned int _quoteLevel;
    int _validAttributes;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSArray * nodes;
@property MFMessageBodyParser * parser;
@property(readonly) Class superclass;

- (BOOL)_hasValueForAttributes:(int)arg1;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)getQuoteLevel;
- (id)init;
- (BOOL)isExternallyRetained;
- (id)nodes;
- (id)parser;
- (unsigned int)quoteLevel;
- (void)releaseExternally;
- (void)reset;
- (id)retainExternally;
- (void)setNodes:(id)arg1;
- (void)setParser:(id)arg1;
- (int)valueForAttributes:(int)arg1;

@end
