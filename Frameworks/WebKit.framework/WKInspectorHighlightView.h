/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {
    NSMutableArray *_layers;
}

- (void)_createLayers:(unsigned int)arg1;
- (void)_layoutForNodeHighlight:(const struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; struct Color { unsigned int x_5_1_1; boolx_5_1_2; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; boolx8; }*)arg1;
- (void)_layoutForRectsHighlight:(const struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; struct Color { unsigned int x_5_1_1; boolx_5_1_2; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; boolx8; }*)arg1;
- (void)_removeAllLayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)update:(const struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; struct Color { unsigned int x_5_1_1; boolx_5_1_2; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; boolx8; }*)arg1;

@end
