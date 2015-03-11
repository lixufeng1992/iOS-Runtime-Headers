/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSError, NSString;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {
    NSString *_pcsDiagnosticString;
    NSError *_pcsError;
    int _pcsStatus;
    BOOL _wasRepaired;
}

@property(retain) NSString * pcsDiagnosticString;
@property(retain) NSError * pcsError;
@property int pcsStatus;
@property BOOL wasRepaired;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pcsDiagnosticString;
- (id)pcsError;
- (int)pcsStatus;
- (void)setPcsDiagnosticString:(id)arg1;
- (void)setPcsError:(id)arg1;
- (void)setPcsStatus:(int)arg1;
- (void)setWasRepaired:(BOOL)arg1;
- (BOOL)wasRepaired;

@end
