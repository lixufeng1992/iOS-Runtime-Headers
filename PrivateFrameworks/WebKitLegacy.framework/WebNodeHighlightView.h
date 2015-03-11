/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSMutableArray, WebNodeHighlight;

@interface WebNodeHighlightView : WAKView {
    NSMutableArray *_layers;
    WebNodeHighlight *_webNodeHighlight;
}

- (void)_attach:(id)arg1 numLayers:(unsigned int)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; struct Color { unsigned int x_5_1_1; boolx_5_1_2; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; boolx8; }*)arg1 parent:(id)arg2;
- (void)_layoutForRectsHighlight:(struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; struct Color { unsigned int x_5_1_1; boolx_5_1_2; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; boolx8; }*)arg1 parent:(id)arg2;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (BOOL)isFlipped;
- (void)layoutSublayers:(id)arg1;
- (id)webNodeHighlight;

@end
