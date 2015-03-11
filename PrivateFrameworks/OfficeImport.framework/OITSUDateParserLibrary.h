/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSCondition, NSMutableArray;

@interface OITSUDateParserLibrary : NSObject {
    NSMutableArray *mAvailableDateParsers;
    unsigned int mMaxPermittedParsers;
    unsigned int mNumberOfUses;
    NSCondition *mParserLibraryConditionVariable;
    unsigned int mParsersCreated;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDateParserLibrary;

- (id)autorelease;
- (id)checkoutDateParser;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)returnDateParser:(id)arg1;

@end
