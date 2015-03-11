/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {
    NSFileHandle *_destinationFile;
}

@property(retain) NSFileHandle * destinationFile;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)destinationFile;
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;
- (void)setDestinationFile:(id)arg1;
- (BOOL)shouldLogResponseBody;

@end
