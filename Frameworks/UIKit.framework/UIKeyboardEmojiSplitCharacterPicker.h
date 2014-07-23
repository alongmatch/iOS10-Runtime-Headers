/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController;

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiInput> {
    UILabel *_optionalDescription;
    UIKeyboardEmojiCategory *_category;
    UIKeyboardEmojiInputController *_inputController;
}

@property(retain) UIKeyboardEmojiCategory * category;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)category;
- (void)dealloc;
- (id)charactersForRow:(long long)arg1;
- (void)reloadForCategory:(id)arg1;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
