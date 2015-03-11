/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, NSString;

@interface KNActionPulse : KNAnimationEffect <KNActionEffectBuildAnimator> {
    KNAnimParameterGroup *_parameterGroup;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)actionEffectStyle;
+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (bool)isEmphasisBuildAnimation;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;
- (void)p_addAnimationsToLayer:(id)arg1 maxScale:(double)arg2 scaleMin:(double)arg3 scaleMinThreshold:(double)arg4 scaleMaxThreshold:(double)arg5 scaleDownTiming:(id)arg6 scaleUpTiming:(id)arg7 pulseCount:(double)arg8 duration:(double)arg9 result:(id)arg10;

@end