/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)backwardsCompatibleTypeForType:(id)arg1;
- (id)epubExportCategories;
- (Class)exportOptionsControllerClass;
- (id)exportableTypes;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1;
- (id)indexXmlFilename;
- (BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2;
- (BOOL)isSageDocumentType:(id)arg1;
- (BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)needNewerVersionIndexXmlContentString;
- (id)nestedDocumentFilename;
- (id)newExportableDocumentTypesForFlag:(unsigned int)arg1;
- (id)unsupportedExportMessageStringForType:(id)arg1;

@end
