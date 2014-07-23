/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, NSArray, NSString, DOMHTMLSelectElement;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    <UIWebSelectedItemPrivate> *_singleSelectionItem;
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

@property(retain) DOMHTMLSelectElement * _selectionNode;
@property(retain) NSArray * _cachedItems;
@property(retain) <UIWebSelectedItemPrivate> * _singleSelectionItem;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)dealloc;
- (id)_singleSelectionItem;
- (id)_cachedItems;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(bool)arg5;
- (int)_itemIndexForRowIndex:(int)arg1;
- (id)_selectionNode;
- (void)set_singleSelectionItem:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)layoutSubviews;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4;

@end
