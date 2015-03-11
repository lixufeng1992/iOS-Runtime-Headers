/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class PQLStatement;

@interface PQLStatement : NSObject {
    BOOL _inUse;
    BOOL _isTraced;
    PQLStatement *_next;
    unsigned char *_spec;
    int _specLength;
    struct sqlite3_stmt { } *_stmt;
}

@property(readonly) BOOL isTraced;

- (void).cxx_destruct;
- (BOOL)_prepare:(const char *)arg1 withDB:(id)arg2;
- (void)bindArguments:(void*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(void*)arg2 db:(id)arg3 cache:(struct cache_s { }*)arg4;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (void)invalidate;
- (BOOL)isTraced;
- (id)translate:(id)arg1 hasInjections:(BOOL*)arg2 arguments:(void*)arg3;
- (void)unbind;

@end
