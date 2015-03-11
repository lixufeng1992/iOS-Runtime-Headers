/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVContainerInfoTaskGroupDelegate>, NSMutableSet, NSSet, NSString;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    NSString *_appSpecificHomeSetPropName;
    NSString *_appSpecificHomeSetPropNameSpace;
    int _containerInfoDepth;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _phase;
}

@property int containerInfoDepth;
@property(readonly) NSSet * containerURLs;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVContainerInfoTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (int)containerInfoDepth;
- (int)containerInfoDepthForURL:(id)arg1;
- (id)containerURLs;
- (void)dealloc;
- (id)description;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setContainerInfoDepth:(int)arg1;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
