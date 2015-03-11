/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection, NSString;

@interface ML3DatabaseStatement : NSObject {
    BOOL _clearBindingsAfterRunning;
    ML3DatabaseConnection *_connection;
    BOOL _isExecuting;
    NSString *_sql;
    struct sqlite3_stmt { } *_sqliteStatement;
}

@property BOOL clearBindingsAfterRunning;
@property(readonly) ML3DatabaseConnection * connection;
@property BOOL isExecuting;
@property(readonly) NSString * sql;
@property(readonly) struct sqlite3_stmt { }* sqliteStatement;

- (void).cxx_destruct;
- (void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2;
- (void)bindNullForParameterAtPosition:(int)arg1;
- (void)bindUTF8String:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2;
- (void)bindValuesForParameterNames:(id)arg1;
- (void)bindValuesInArray:(id)arg1;
- (int)clearBindings;
- (BOOL)clearBindingsAfterRunning;
- (id)connection;
- (void)dealloc;
- (id)description;
- (int)finalizeStatement;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { }*)arg1 SQL:(id)arg2 connection:(id)arg3;
- (BOOL)isBusy;
- (BOOL)isExecuting;
- (BOOL)isReadOnly;
- (int)reset;
- (void)setClearBindingsAfterRunning:(BOOL)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (id)sql;
- (struct sqlite3_stmt { }*)sqliteStatement;
- (int)step;

@end
