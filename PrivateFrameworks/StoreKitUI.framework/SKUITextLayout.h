/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {
    struct __CTFramesetter { } *_framesetter;
    bool_requiresTruncation;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    struct __CTFrame { } *_textFrame;
    struct CGSize { 
        double width; 
        double height; 
    } _truncatedSize;
}

@property(readonly) bool requiresTruncation;
@property(readonly) struct __CTFrame { }* textFrame;
@property(readonly) struct CGSize { double x1; double x2; } textSize;
@property(readonly) struct CGSize { double x1; double x2; } truncatedSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct __CFAttributedString { }*)newAttributedStringWithText:(id)arg1;
+ (struct __CFAttributedString { }*)_newAttributedStringWithRequest:(id)arg1;

- (struct CGSize { double x1; double x2; })truncatedSize;
- (bool)requiresTruncation;
- (id)initWithLayoutRequest:(id)arg1;
- (struct __CTFrame { }*)textFrame;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })textSize;

@end
