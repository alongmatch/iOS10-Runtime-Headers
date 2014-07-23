/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, NSString, UIView, ABPersonTableAction, UIButton;

@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate> {
    bool_editing;
    ABPersonTableAction *_deleteAction;
    UIView *_deleteView;
    UIView *_accessoryView;
    UIButton *_attributionButton;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) <ABStyleProvider> * styleProvider;
@property(getter=isEditing) bool tableEditing;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) bool attributionEnabled;
@property(retain) UIView * accessoryView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setTableEditing:(bool)arg1;
- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(bool)arg4;
- (bool)isAttributionEnabled;
- (void)setAttribution:(id)arg1 enabled:(bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)removeDeleteAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deleteViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributionFrame;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)attribution;
- (bool)isEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
