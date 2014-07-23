/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class DOMHTMLDocument, NSArray, <MFMailComposeViewDelegate>, DOMHTMLElement;

@interface MFComposeBodyField : UIWebDocumentView  {
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    DOMHTMLElement *_blockquote;
    struct CGSize { 
        double width; 
        double height; 
    } _originalSize;
    struct CGSize { 
        double width; 
        double height; 
    } _layoutSize;
    bool_shouldShowStandardButtons;
    unsigned int _isDirty : 1;
    unsigned int _forwardingNotification : 1;
    unsigned int _isLoading : 1;
    unsigned int _needsReplaceImages : 1;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _rangeToSelect;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    int _preventLayout;
    bool_prefersFirstLineSelection;
    unsigned long long _imageCount;
    NSArray *_attachmentURLsToReplaceWithFilenames;
}

@property bool shouldShowStandardButtons;

+ (void)addAdditionalItemsToCalloutBar;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfElementWithID:(id)arg1;
- (id)htmlString;
- (void)htmlString:(id*)arg1 otherHtmlStringsAndAttachments:(id*)arg2 charsets:(id*)arg3;
- (id)plainTextContent;
- (id)plainTextAlternative;
- (bool)containsRichText;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(bool)arg1;
- (void)prependMarkupString:(id)arg1 quote:(bool)arg2;
- (void)prependString:(id)arg1;
- (void)setPrefersFirstLineSelection;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)addDOMNode:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5;
- (bool)isForwardingNotification;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)setLayoutInterval:(int)arg1;
- (id)mailComposeViewDelegate;
- (void)_removeInlineAttachment:(id)arg1;
- (id)_addInlineAttachmentWithData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)restoreSelectionFromTemporaryMarkers;
- (id)temporaryEndingSelectionMarker;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)saveSelectionForUndo;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)deleteRange:(id)arg1;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)deleteNode:(id)arg1;
- (void)restoreSelectionFromTemporaryMarkers:(bool)arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)appendMarkupString:(id)arg1 quote:(bool)arg2;
- (void)prependMarkupString:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4;
- (void)addMarkupString:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5;
- (void)_nts_AddDOMNode:(id)arg1 quote:(bool)arg2 baseURL:(id)arg3 emptyFirst:(bool)arg4 prepended:(bool)arg5;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(bool)arg3;
- (void)setMarkupString:(id)arg1;
- (void)webViewDidDraw:(id)arg1;
- (void)replaceImagesIfNecessary;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(bool)arg2;
- (void)replaceImages;
- (void)didUndoOrRedo:(id)arg1;
- (void)updateQuoteLevelMenu;
- (void)layoutWithMinimumSize;
- (void)setPinHeight:(double)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
- (bool)shouldShowStandardButtons;
- (void)changeQuoteLevel:(long long)arg1;
- (void)setShouldShowStandardButtons:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (bool)isDirty;
- (bool)becomeFirstResponder;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidChange:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)contentWidth;
- (void)setDirty:(bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(bool)arg2;
- (void)ensureSelection;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)deferredBecomeFirstResponder;

@end
