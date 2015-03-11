/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisit : NSObject {
    int _databaseID;
    long long _generation;
    BOOL _httpNonGet;
    WBSHistoryItem *_item;
    BOOL _loadSuccessful;
    int _origin;
    WBSHistoryVisit *_redirectDestination;
    int _redirectDestinationDatabaseID;
    WBSHistoryVisit *_redirectSource;
    int _redirectSourceDatabaseID;
    BOOL _synthesized;
    NSString *_title;
    double _visitTime;
}

@property int databaseID;
@property(readonly) WBSHistoryVisit * endOfRedirectChain;
@property long long generation;
@property(getter=wasHTTPNonGet,readonly) BOOL httpNonGet;
@property WBSHistoryItem * item;
@property(getter=loadWasSuccessful) BOOL loadSuccessful;
@property int origin;
@property(retain) WBSHistoryVisit * redirectDestination;
@property int redirectDestinationDatabaseID;
@property(retain) WBSHistoryVisit * redirectSource;
@property(readonly) unsigned int redirectSourceChainLength;
@property int redirectSourceDatabaseID;
@property(getter=isSynthesized,readonly) BOOL synthesized;
@property(copy) NSString * title;
@property(readonly) double visitTime;

+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;

- (void).cxx_destruct;
- (int)databaseID;
- (id)endOfRedirectChain;
- (long long)generation;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned int)arg3;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(int)arg5;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (BOOL)isSynthesized;
- (id)item;
- (BOOL)loadWasSuccessful;
- (int)origin;
- (id)redirectDestination;
- (int)redirectDestinationDatabaseID;
- (id)redirectSource;
- (unsigned int)redirectSourceChainLength;
- (int)redirectSourceDatabaseID;
- (void)setDatabaseID:(int)arg1;
- (void)setGeneration:(long long)arg1;
- (void)setItem:(id)arg1;
- (void)setLoadSuccessful:(BOOL)arg1;
- (void)setOrigin:(int)arg1;
- (void)setRedirectDestination:(id)arg1;
- (void)setRedirectDestinationDatabaseID:(int)arg1;
- (void)setRedirectSource:(id)arg1;
- (void)setRedirectSourceDatabaseID:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)visitTime;
- (BOOL)wasHTTPNonGet;

@end
