/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary, NSLocale, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString;

@interface NSNumberFormatter : NSFormatter {
    NSMutableDictionary *_attributes;
    unsigned int _behavior;
    unsigned int _counter;
    struct __CFNumberFormatter { } *_formatter;
    NSRecursiveLock *_lock;
    void *_reserved[9];
    unsigned long _stateBitMask;
}

@property BOOL allowsFloats;
@property BOOL alwaysShowsDecimalSeparator;
@property(copy) NSString * currencyCode;
@property(copy) NSString * currencyDecimalSeparator;
@property(copy) NSString * currencyGroupingSeparator;
@property(copy) NSString * currencySymbol;
@property(copy) NSString * decimalSeparator;
@property(copy) NSString * exponentSymbol;
@property unsigned int formatWidth;
@property unsigned int formatterBehavior;
@property int formattingContext;
@property BOOL generatesDecimalNumbers;
@property(copy) NSString * groupingSeparator;
@property unsigned int groupingSize;
@property(copy) NSString * internationalCurrencySymbol;
@property(getter=isLenient) BOOL lenient;
@property(copy) NSLocale * locale;
@property(copy) NSNumber * maximum;
@property unsigned int maximumFractionDigits;
@property unsigned int maximumIntegerDigits;
@property unsigned int maximumSignificantDigits;
@property(copy) NSNumber * minimum;
@property unsigned int minimumFractionDigits;
@property unsigned int minimumIntegerDigits;
@property unsigned int minimumSignificantDigits;
@property(copy) NSString * minusSign;
@property(copy) NSNumber * multiplier;
@property(copy) NSString * negativeFormat;
@property(copy) NSString * negativeInfinitySymbol;
@property(copy) NSString * negativePrefix;
@property(copy) NSString * negativeSuffix;
@property(copy) NSString * nilSymbol;
@property(copy) NSString * notANumberSymbol;
@property unsigned int numberStyle;
@property(copy) NSString * paddingCharacter;
@property unsigned int paddingPosition;
@property(getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;
@property(copy) NSString * perMillSymbol;
@property(copy) NSString * percentSymbol;
@property(copy) NSString * plusSign;
@property(copy) NSString * positiveFormat;
@property(copy) NSString * positiveInfinitySymbol;
@property(copy) NSString * positivePrefix;
@property(copy) NSString * positiveSuffix;
@property(copy) NSNumber * roundingIncrement;
@property unsigned int roundingMode;
@property unsigned int secondaryGroupingSize;
@property(copy) NSDictionary * textAttributesForNegativeInfinity;
@property(copy) NSDictionary * textAttributesForNegativeValues;
@property(copy) NSDictionary * textAttributesForNil;
@property(copy) NSDictionary * textAttributesForNotANumber;
@property(copy) NSDictionary * textAttributesForPositiveInfinity;
@property(copy) NSDictionary * textAttributesForPositiveValues;
@property(copy) NSDictionary * textAttributesForZero;
@property BOOL usesGroupingSeparator;
@property BOOL usesSignificantDigits;
@property(copy) NSString * zeroSymbol;

+ (id)FU_adaptiveLocalizedDistanceStringWithDistance:(double)arg1 unitStyle:(int)arg2 usedUnit:(int*)arg3;
+ (id)FU_decimalSeparator;
+ (double)FU_distanceInDistanceUnit:(int)arg1 forDistanceInMeters:(double)arg2;
+ (double)FU_distanceInMetersForDistanceInUserUnit:(double)arg1;
+ (double)FU_distanceInUserDistanceUnitForDistanceInMeters:(double)arg1;
+ (int)FU_lengthUnitForCurrentLocale;
+ (BOOL)FU_localeUsesMetricForPersonHeight;
+ (id)FU_localizedDisplayStringForDistanceUnit:(int)arg1;
+ (id)FU_localizedShortUnitStringWithDistanceUnit:(int)arg1;
+ (id)FU_localizedSpeedUnit;
+ (id)FU_localizedSpeedValueForDistance:(id)arg1 overTime:(double)arg2;
+ (id)FU_localizedStringWithCalories:(double)arg1 unitStyle:(int)arg2;
+ (id)FU_localizedStringWithDistance:(double)arg1 distanceUnit:(int)arg2 unitStyle:(int)arg3 withDecimalPrecision:(int)arg4;
+ (id)FU_localizedStringWithDistance:(double)arg1 unitStyle:(int)arg2;
+ (id)FU_percentStringWithNumber:(id)arg1;
+ (void)FU_setUserDistanceUnit:(int)arg1;
+ (id)FU_stringForHeight:(long)arg1 withUnitString:(id)arg2;
+ (id)FU_stringForHeightInInches:(long)arg1;
+ (id)FU_stringWithNumber:(id)arg1 decimalPrecision:(int)arg2;
+ (id)FU_stringWithTimeInterval:(double)arg1 formatType:(unsigned int)arg2;
+ (int)FU_userDistanceUnit;
+ (id)_FU_doubleFractionNumberFormatter;
+ (id)_FU_integerNumberFormatter;
+ (id)_FU_integerPercentNumberFormatter;
+ (id)_FU_singleFractionNumberFormatter;
+ (id)_FU_zeroPaddedIntegerNumberFormatter;
+ (int)_defaultPrecisionForDistanceUnit:(int)arg1;
+ (id)_formatDoubleValue:(double)arg1 withFormatString:(id)arg2 withDecimalPrecision:(int)arg3;
+ (id)_longStyleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (id)_longStyleTitleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (id)_shortStyleStringWithDistanceUnit:(int)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(int)arg3;
+ (unsigned int)defaultFormatterBehavior;
+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;
+ (id)gk_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;
+ (void)initialize;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned int)arg2;
+ (id)mf_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;
+ (id)mf_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;

- (void*)__Keynote_NOOP;
- (void)_clearFormatter;
- (BOOL)_hasSetCurrencyCode;
- (BOOL)_hasSetCurrencySymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (BOOL)allowsFloats;
- (BOOL)alwaysShowsDecimalSeparator;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)checkLocaleChange;
- (BOOL)checkModify;
- (void)clearPropertyBit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (id)currencyGroupingSeparator;
- (id)currencySymbol;
- (void)dealloc;
- (id)decimalSeparator;
- (void)encodeWithCoder:(id)arg1;
- (id)exponentSymbol;
- (void)finalize;
- (unsigned int)formatWidth;
- (unsigned int)formatterBehavior;
- (int)formattingContext;
- (BOOL)generatesDecimalNumbers;
- (void*)getFormatter;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (id)groupingSeparator;
- (unsigned int)groupingSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internationalCurrencySymbol;
- (BOOL)isLenient;
- (BOOL)isPartialStringValidationEnabled;
- (id)locale;
- (id)maximum;
- (unsigned int)maximumFractionDigits;
- (unsigned int)maximumIntegerDigits;
- (unsigned int)maximumSignificantDigits;
- (id)minimum;
- (unsigned int)minimumFractionDigits;
- (unsigned int)minimumIntegerDigits;
- (unsigned int)minimumSignificantDigits;
- (id)minusSign;
- (id)multiplier;
- (id)negativeFormat;
- (id)negativeInfinitySymbol;
- (id)negativePrefix;
- (id)negativeSuffix;
- (id)nilSymbol;
- (id)notANumberSymbol;
- (id)numberFromString:(id)arg1;
- (unsigned int)numberStyle;
- (id)paddingCharacter;
- (unsigned int)paddingPosition;
- (id)perMillSymbol;
- (id)percentSymbol;
- (id)plusSign;
- (id)positiveFormat;
- (id)positiveInfinitySymbol;
- (id)positivePrefix;
- (id)positiveSuffix;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (id)roundingIncrement;
- (unsigned int)roundingMode;
- (unsigned int)secondaryGroupingSize;
- (void)setAllowsFloats:(BOOL)arg1;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDecimalSeparator:(id)arg1;
- (void)setExponentSymbol:(id)arg1;
- (void)setFormatWidth:(unsigned int)arg1;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (void)setFormattingContext:(int)arg1;
- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (void)setGroupingSize:(unsigned int)arg1;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (void)setLenient:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned int)arg1;
- (void)setMaximumIntegerDigits:(unsigned int)arg1;
- (void)setMaximumSignificantDigits:(unsigned int)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMinimumFractionDigits:(unsigned int)arg1;
- (void)setMinimumIntegerDigits:(unsigned int)arg1;
- (void)setMinimumSignificantDigits:(unsigned int)arg1;
- (void)setMinusSign:(id)arg1;
- (void)setMultiplier:(id)arg1;
- (void)setNegativeFormat:(id)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setNumberStyle:(unsigned int)arg1;
- (void)setPaddingCharacter:(id)arg1;
- (void)setPaddingPosition:(unsigned int)arg1;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (void)setPerMillSymbol:(id)arg1;
- (void)setPercentSymbol:(id)arg1;
- (void)setPlusSign:(id)arg1;
- (void)setPositiveFormat:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setPropertyBit;
- (void)setRoundingIncrement:(id)arg1;
- (void)setRoundingMode:(unsigned int)arg1;
- (void)setSecondaryGroupingSize:(unsigned int)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (void)setTextAttributesForZero:(id)arg1;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (void)setZeroSymbol:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (id)textAttributesForNegativeValues;
- (id)textAttributesForNil;
- (id)textAttributesForNotANumber;
- (id)textAttributesForPositiveInfinity;
- (id)textAttributesForPositiveValues;
- (id)textAttributesForZero;
- (BOOL)usesGroupingSeparator;
- (BOOL)usesSignificantDigits;
- (id)zeroSymbol;

@end
