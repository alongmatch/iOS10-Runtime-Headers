/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebHTMLRepresentationPrivate, NSString;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM> {
    WebHTMLRepresentationPrivate *_private;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)unsupportedTextMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedMIMETypes;

- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)controlsInForm:(id)arg1;
- (id)currentForm;
- (id)formForElement:(id)arg1;
- (bool)elementIsPassword:(id)arg1;
- (bool)elementDoesAutoComplete:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (bool)canSaveAsWebArchive;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long*)arg3 resultIsInCellAbove:(bool*)arg4;
- (bool)_isDisplayingWebArchive;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (id)documentSource;
- (bool)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)setDataSource:(id)arg1;
- (id)title;
- (id)DOMDocument;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
