/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter {
    CIVector *inputBlueCoefficients;
    CIVector *inputCoefficients;
    CIVector *inputGreenCoefficients;
    CIImage *inputImage;
    CIVector *inputRedCoefficients;
}

@property(retain) CIVector * inputBlueCoefficients;
@property(retain) CIVector * inputGreenCoefficients;
@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputRedCoefficients;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)inputBlueCoefficients;
- (id)inputGreenCoefficients;
- (id)inputImage;
- (id)inputRedCoefficients;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputBlueCoefficients:(id)arg1;
- (void)setInputGreenCoefficients:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRedCoefficients:(id)arg1;

@end
