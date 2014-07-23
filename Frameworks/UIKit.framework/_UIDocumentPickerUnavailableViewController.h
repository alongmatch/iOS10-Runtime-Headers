/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSURL, UILabel, NSLayoutConstraint, UIButton;

@interface _UIDocumentPickerUnavailableViewController : UIViewController  {
    UIImageView *_leadImageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIButton *_button;
    NSURL *_buttonURL;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_imageToTitleConstraint;
    NSLayoutConstraint *_titleToTextConstraint;
    NSLayoutConstraint *_textToButtonConstraint;
}

@property(retain) UIImageView * leadImageView;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * textLabel;
@property(retain) UIButton * button;
@property(retain) NSURL * buttonURL;
@property(retain) NSLayoutConstraint * topConstraint;
@property(retain) NSLayoutConstraint * imageToTitleConstraint;
@property(retain) NSLayoutConstraint * titleToTextConstraint;
@property(retain) NSLayoutConstraint * textToButtonConstraint;


- (void)dealloc;
- (id)_buttonBackgroundImageForState:(unsigned long long)arg1 traits:(id)arg2;
- (id)buttonURL;
- (void)_fontSizeDidChange:(id)arg1;
- (id)textToButtonConstraint;
- (void)setTextToButtonConstraint:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonURL:(id)arg1;
- (id)titleToTextConstraint;
- (void)setTitleToTextConstraint:(id)arg1;
- (id)imageToTitleConstraint;
- (void)setImageToTitleConstraint:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)leadImageView;
- (void)setLeadImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)textLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)button;

@end
