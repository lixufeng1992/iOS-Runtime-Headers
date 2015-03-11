/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {
    struct { 
        unsigned int numberDoubleValue : 1; 
        unsigned int numberIntValue : 1; 
        unsigned int timestamp : 1; 
    NSData *_bytesValue;
    } _has;
    NSString *_key;
    double _numberDoubleValue;
    long long _numberIntValue;
    NSString *_stringValue;
    double _timestamp;
}

@property(retain) NSData * bytesValue;
@property(readonly) BOOL hasBytesValue;
@property(readonly) BOOL hasKey;
@property BOOL hasNumberDoubleValue;
@property BOOL hasNumberIntValue;
@property(readonly) BOOL hasStringValue;
@property BOOL hasTimestamp;
@property(retain) NSString * key;
@property double numberDoubleValue;
@property long long numberIntValue;
@property(retain) NSString * stringValue;
@property double timestamp;

- (void).cxx_destruct;
- (id)bytesValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedTimestamp;
- (id)decodedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesValue;
- (BOOL)hasKey;
- (BOOL)hasNumberDoubleValue;
- (BOOL)hasNumberIntValue;
- (BOOL)hasStringValue;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)numberDoubleValue;
- (long long)numberIntValue;
- (BOOL)readFrom:(id)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setHasNumberDoubleValue:(BOOL)arg1;
- (void)setHasNumberIntValue:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberDoubleValue:(double)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampWithDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
