/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKColorPalette, NSString, UIColor;

@interface GKTextStyle : NSObject {
    float _UIKitFontLeading;
    NSString *_UIKitFontTextStyleName;
    UIColor *_color;
    NSString *_fontName;
    SEL _fontNameRebaseSelector;
    float _fontSize;
    SEL _fontSizeRebaseSelector;
    int _lineBreakMode;
    float _m34;
    float _minimumLineHeight;
    BOOL _needsParagraphStyle;
    BOOL _overrideUIKitFontSize;
    GKColorPalette *_palette;
    int _textAlignment;
    float _zPosition;
}

@property(readonly) NSString * UIKitFontTextStyleName;
@property(retain) UIColor * color;
@property(readonly) NSString * fontName;
@property SEL fontNameRebaseSelector;
@property(readonly) float fontSize;
@property SEL fontSizeRebaseSelector;
@property int lineBreakMode;
@property float m34;
@property float minimumLineHeight;
@property BOOL needsParagraphStyle;
@property BOOL overrideUIKitFontSize;
@property(retain) GKColorPalette * palette;
@property int textAlignment;
@property float zPosition;

+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2 systemContentSizeDidChange:(BOOL)arg3;
+ (float)bubbleTextScale;
+ (float)scaledValueFromHISpecLeading:(float)arg1 forFontTextStyle:(id)arg2;
+ (float)standardFontSize;
+ (float)standardLeadingForFontTextStyle:(id)arg1;
+ (id)textStyle;

- (id)UIKitFontTextStyleName;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)achievementValueText;
- (id)alignment:(int)arg1 lineBreakMode:(int)arg2;
- (void)applyScaleForMesh;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)attributes;
- (id)bannerMessage;
- (id)bannerTitle;
- (id)baseFontRebaseSelector;
- (id)body;
- (id)bold;
- (id)bubbleCaption;
- (id)bubbleCaptionSmall;
- (id)bubbleHeadline;
- (id)bubbleText;
- (id)bubbleTextSmall;
- (id)bubbleValue;
- (id)bubbleValueSmall;
- (id)buttonTitle;
- (id)buyButtonTitle;
- (id)caption1;
- (id)caption2;
- (id)caption;
- (id)cellActionItem;
- (id)centered;
- (id)challengeBubbleValue;
- (id)color;
- (id)composeFields;
- (id)composeMessage;
- (id)copy;
- (id)copyWithBaseClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)detailSecondaryHeaderText;
- (id)emphasized;
- (id)emphasizedOnDarkBackground;
- (id)fontName;
- (SEL)fontNameRebaseSelector;
- (float)fontSize;
- (SEL)fontSizeRebaseSelector;
- (id)footnote;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)gameDetailNameText;
- (unsigned int)hash;
- (id)header0;
- (id)header1;
- (id)header2;
- (id)header3;
- (id)header4;
- (id)headerViewSubText1;
- (id)headline;
- (id)info;
- (id)init;
- (id)initEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)light;
- (id)lineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (id)lineHeight:(float)arg1;
- (id)localPlayerColor;
- (float)m34;
- (id)meBubbleCaption;
- (id)meBubbleValue;
- (id)medium;
- (float)minimumLineHeight;
- (id)multiplayerAddText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerNameText;
- (id)multiplayerStatusText;
- (BOOL)needsParagraphStyle;
- (BOOL)overrideUIKitFontSize;
- (id)palette;
- (id)regular;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)removeButtonTitle;
- (id)replayOnBaseStyle:(id)arg1 systemContentSizeDidChange:(BOOL)arg2;
- (id)resolveFontAndLineSpacing:(float*)arg1;
- (id)roundButtonTitle;
- (id)scaled:(float)arg1;
- (id)scaledForM34:(float)arg1 zPosition:(float)arg2;
- (id)sectionCaption;
- (id)sectionCaptionSmall;
- (id)sectionHeader;
- (id)segmentBubbleCaption;
- (id)segmentBubbleValue;
- (id)selectedBuyButtonTitle;
- (void)setColor:(id)arg1;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(float)arg3 shouldOverrideSize:(BOOL)arg4 rebaseSelector:(SEL)arg5;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(BOOL)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontNameRebaseSelector:(SEL)arg1;
- (void)setFontSize:(float)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontSizeRebaseSelector:(SEL)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setM34:(float)arg1;
- (void)setMinimumLineHeight:(float)arg1;
- (void)setNeedsParagraphStyle:(BOOL)arg1;
- (void)setOverrideUIKitFontSize:(BOOL)arg1;
- (void)setPalette:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setZPosition:(float)arg1;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsLinkText;
- (id)signInField;
- (id)signInFieldLabel;
- (id)signInLink;
- (id)signInSubtitle;
- (id)signInTitle;
- (id)small;
- (id)smallInfo;
- (id)strong;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)tabIconCaption;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)tableFooterStyle;
- (int)textAlignment;
- (id)thin;
- (id)thinNumberText;
- (id)viewBackground;
- (float)zPosition;

@end
