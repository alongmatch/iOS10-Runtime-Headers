/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebHTMLViewPrivate, NSString;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
    WebHTMLViewPrivate *_private;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)unsupportedTextMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedMIMETypes;
+ (void)initialize;

- (bool)_isEditable;
- (void)viewDidMoveToWindow;
- (void)willRemoveSubview:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (void)touch:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)viewWillDraw;
- (void)scrollWheel:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (bool)acceptsFirstResponder;
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (bool)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(bool)arg1;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1 allowShadowContent:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionImageRect;
- (bool)_findString:(id)arg1 options:(unsigned long long)arg2;
- (long long)conversationIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_destroyAllWebPlugins;
- (void)_executeSavedKeypressCommands;
- (bool)_canSmartCopyOrDelete;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
- (void)_updateSelectionForInputManager;
- (bool)_wantsKeyDownForEvent:(id)arg1;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)_applyStyleToSelection:(id)arg1 withUndoAction:(int)arg2;
- (id)_emptyStyle;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (bool)_isSelectionEvent:(id)arg1;
- (void)setNeedsToApplyStyles:(bool)arg1;
- (void)reapplyStyles;
- (void)_web_makePluginSubviewsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)jumpToSelection:(id)arg1;
- (void)clearText:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)unscript:(id)arg1;
- (void)underline:(id)arg1;
- (void)transpose:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)setMark:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)overWrite:(id)arg1;
- (void)outdent:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)indent:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)executeCoreCommandByName:(const char *)arg1;
- (bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4;
- (void)_windowChangedKeyState;
- (void)_updateControlTints;
- (void)_changeWordCaseWithSelector:(SEL)arg1;
- (void)selectWord:(id)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityFocusedUIElement;
- (void)clearFocus;
- (void)drawSingleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4 startInSelection:(bool)arg5;
- (void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 originalPageWidth:(float)arg3 originalPageHeight:(float)arg4 maximumShrinkRatio:(float)arg5 adjustingViewSize:(bool)arg6;
- (bool)maintainsInactiveSelection;
- (void)executeCoreCommandBySelector:(SEL)arg1;
- (struct Command { struct EditorInternalCommand {} *x1; int x2; struct RefPtr<WebCore::Frame> { struct Frame {} *x_3_1_1; } x3; })coreCommandByName:(const char *)arg1;
- (struct Command { struct EditorInternalCommand {} *x1; int x2; struct RefPtr<WebCore::Frame> { struct Frame {} *x_3_1_1; } x3; })coreCommandBySelector:(SEL)arg1;
- (bool)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1;
- (void)markedTextUpdate:(id)arg1;
- (id)accessibilityRootElement;
- (void)_endScreenPaginationMode;
- (bool)_beginScreenPaginationModeWithPageSize:(struct CGSize { double x1; double x2; })arg1 shrinkToFit:(bool)arg2;
- (bool)_beginPrintModeWithPageWidth:(float)arg1 height:(float)arg2 shrinkToFit:(bool)arg3;
- (id)_compositingLayersHostingView;
- (bool)_isUsingAcceleratedCompositing;
- (bool)_hasHTMLDocument;
- (void)_decreaseSelectionListLevel;
- (id)_increaseSelectionListLevelUnordered;
- (id)_increaseSelectionListLevelOrdered;
- (id)_increaseSelectionListLevel;
- (bool)_canDecreaseSelectionListLevel;
- (bool)_canIncreaseSelectionListLevel;
- (id)_insertUnorderedList;
- (id)_insertOrderedList;
- (void)_setTransparentBackground:(bool)arg1;
- (bool)_transparentBackground;
- (bool)_hasInsertionPoint;
- (bool)_canAlterCurrentSelection;
- (bool)_canEditRichly;
- (bool)_canEdit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionRect;
- (void)_startAutoscrollTimer:(id)arg1;
- (bool)_insideAnotherHTMLView;
- (void)_restoreSubviews;
- (void)_setAsideSubviews;
- (bool)_isInPrintMode;
- (void)_setPrinting:(bool)arg1 minimumPageLogicalWidth:(float)arg2 logicalHeight:(float)arg3 originalPageWidth:(float)arg4 originalPageHeight:(float)arg5 maximumShrinkRatio:(float)arg6 adjustViewSize:(bool)arg7 paginateScreenContent:(bool)arg8;
- (bool)_isInScreenPaginationMode;
- (void)_clearLastHitViewIfSelf;
- (bool)_hasSelectionOrInsertionPoint;
- (void)_stopAutoscrollTimer;
- (void)_autoscroll;
- (void)_layoutIfNeeded;
- (void)_web_updateLayoutAndStyleIfNeededRecursive;
- (bool)_isTopHTMLView;
- (void)_setMouseDownEvent:(id)arg1;
- (bool)_shouldDeleteRange:(id)arg1;
- (bool)_shouldReplaceSelectionWithText:(id)arg1 givenAction:(long long)arg2;
- (bool)_shouldInsertFragment:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(long long)arg3;
- (id)_frameView;
- (id)_topHTMLView;
- (bool)_shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(long long)arg3;
- (id)_selectedRange;
- (void)closeIfNotCurrentView;
- (id)_pluginController;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_needsLayout;
- (bool)_web_isDrawingIntoLayer;
- (bool)_hasSelection;
- (void)deselectAll;
- (id)selectedString;
- (bool)supportsTextEncoding;
- (void)insertNewline:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (bool)_handleEditingKeyEvent:(struct KeyboardEvent { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; unsigned int x3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; boolx5; boolx6; boolx7; boolx8; boolx9; boolx10; boolx11; unsigned short x12; struct EventTarget {} *x13; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_14_1_1; } x14; unsigned long long x15; struct RefPtr<WebCore::Event> { struct Event {} *x_16_1_1; } x16; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_17_1_1; } x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct unique_ptr<WebCore::PlatformKeyboardEvent, std::__1::default_delete<WebCore::PlatformKeyboardEvent> > { struct __compressed_pair<WebCore::PlatformKeyboardEvent *, std::__1::default_delete<WebCore::PlatformKeyboardEvent> > { struct PlatformKeyboardEvent {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; unsigned int x25; unsigned int x26 : 1; boolx27; struct Vector<WebCore::KeypressCommand, 0, WTF::CrashOnOverflow> { struct KeypressCommand {} *x_28_1_1; unsigned int x_28_1_2; unsigned int x_28_1_3; } x28; }*)arg1;
- (void)_selectionChanged;
- (id)_documentRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (id)_webView;
- (void)detachRootLayer;
- (void)attachRootLayer:(id)arg1;
- (void)_setToolTip:(id)arg1;
- (id)_dataSource;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (id)_frame;
- (void)dataSourceUpdated:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (bool)isOpaque;
- (void)layoutIfNeeded;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScale:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (void)close;
- (id)string;
- (void)finalize;
- (void)dealloc;
- (struct CGImage { }*)selectionImageForcingBlackText:(bool)arg1;
- (id)selectionTextRects;
- (void)delete:(id)arg1;
- (void)_frameOrBoundsChanged;
- (void)_endPrintMode;
- (double)_adjustedBottomOfPageWithTop:(double)arg1 bottom:(double)arg2 limit:(double)arg3;
- (bool)_beginPrintModeWithMinimumPageWidth:(double)arg1 height:(double)arg2 maximumPageWidth:(double)arg3;
- (void)toggleItalic:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll:(id)arg1;
- (bool)hasMarkedText;
- (void)selectAll;
- (void)unmarkText;
- (id)selectionView;
- (void)viewWillMoveToWindow:(id)arg1;

@end
