/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScreen, _UIReplicantContentView, _UISlotIdWrapper;

@interface _UIReplicantView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    _UIReplicantContentView *_contentView;
    UIScreen *_screen;
    _UISlotIdWrapper *_slotIdWrapper;
    } _snapshotSize;
}

+ (id)_pendingSnapshotOfTarget:(id)arg1 snapshotBlock:(id)arg2;
+ (Class)layerClass;
+ (id)snapshotContext;
+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)snapshotWithScreen:(id)arg1 defer:(bool)arg2;
+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 defer:(bool)arg4;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_appliedTransform;
- (id)_copyResizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end