/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTimeFormatter : NSFormatter {
    unsigned int _fullWidth : 1;
    double _formatTemplate;
    int _style;
}

@property double formatTemplate;
@property(getter=isFullWidth) BOOL fullWidth;
@property int style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)formatTemplate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFullWidth;
- (void)setFormatTemplate:(double)arg1;
- (void)setFullWidth:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (int)style;

@end
