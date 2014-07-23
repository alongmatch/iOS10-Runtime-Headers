/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, _UICharacterStreamingManager, UITextInputTraits, UITextPosition, UITextRange, NSString, UIImage, _UITextViewRestorableScrollPosition, NSTextContainer, NSAttributedString, UITextInteractionAssistant, UIAutoscroll, <UITextInputTokenizer>, <UITextViewDelegate>, UIView, _UISiriStreamingManager, NSTextStorage, UITextInputController, UIFont, UIColor, _UITextContainerView, <UITextInputDelegate>, NSLayoutManager;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UITextInput, ABText> {
    id _private;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    _UITextContainerView *_containerView;
    id _inputDelegate;
    <UITextInputTokenizer> *_tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    struct { 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
        unsigned int isInteractingWithLink : 1; 
        unsigned int linkInteractionIsLongPress : 1; 
        unsigned int editable : 1; 
        unsigned int reentrancyGuard : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int interactiveSelectionDisabled : 1; 
        unsigned int selectable : 1; 
    } _tvFlags;
    id _linkInteractionItem;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    struct CGPoint { 
        double x; 
        double y; 
    } _scrollTargetOffset;
    unsigned long long _dataDetectorTypes;
    double _preferredMaxLayoutWidth;
    UIView *_inputAccessoryView;
    _UISiriStreamingManager *_streamingManager;
    _UICharacterStreamingManager *_characterStreamingManager;
    long long _siriAnimationStyle;
    NSDictionary *_siriParameters;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    bool_clearsOnInsertion;
    UIView *_inputView;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * ab_text;
@property(copy) NSDictionary * ab_textAttributes;
@property(setter=_setDrawsDebugBaselines:) bool _drawsDebugBaselines;
@property <UITextViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property long long textAlignment;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property(getter=isEditable) bool editable;
@property(getter=isSelectable) bool selectable;
@property unsigned long long dataDetectorTypes;
@property bool allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSDictionary * typingAttributes;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property bool clearsOnInsertion;
@property(readonly) NSTextContainer * textContainer;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property(readonly) NSLayoutManager * layoutManager;
@property(retain,readonly) NSTextStorage * textStorage;
@property(copy) NSDictionary * linkTextAttributes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long autocapitalizationType;
@property long long autocorrectionType;
@property long long spellCheckingType;
@property long long keyboardType;
@property long long keyboardAppearance;
@property long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned long long insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property bool isSingleLineDocument;
@property bool contentsIsSingleValue;
@property bool acceptsEmoji;
@property bool forceEnableDictation;
@property int emptyContentReturnKeyType;
@property bool returnKeyGoesToNextResponder;
@property bool acceptsFloatingKeyboard;
@property bool acceptsSplitKeyboard;
@property bool displaySecureTextUsingPlainText;
@property bool learnsCorrections;
@property int shortcutConversionType;
@property bool suppressReturnKeyStyling;
@property bool useInterfaceLanguageForLocalization;
@property bool deferBecomingResponder;
@property bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(copy) NSString * autocorrectionContext;
@property(copy) NSString * responseContext;
@property bool disablePrediction;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property long long selectionAffinity;

+ (id)_sharedHighlightView;
+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (bool)_isCompatibilityTextView;
+ (id)pkui_plainNonInteractiveTextView;

- (bool)isEditing;
- (bool)isEditable;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (id)text;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)undoManager;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectedText;
- (id)font;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)webView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineHeight;
- (id)typingAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (bool)_drawsDebugBaselines;
- (id)layoutManager;
- (long long)selectionAffinity;
- (id)linkTextAttributes;
- (id)textStorage;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_finishHandlingInteraction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForLinkAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_resetLinkInteraction;
- (void)_highlightLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_interactableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_cancelDataDetectors;
- (bool)_mightHaveSelection;
- (id)_restorableScrollPosition;
- (struct CGPoint { double x1; double x2; })_closeQuoteAnchor;
- (struct CGPoint { double x1; double x2; })_openQuoteAnchor;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_enableSiriAnimationDictationStyle;
- (void)_setPreferredMaxLayoutWidth:(double)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (unsigned long long)_effectiveDataDetectorTypes;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_restoreScrollPosition:(id)arg1 animated:(bool)arg2;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (void)_resetDataDetectorsResults;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_baselineOffsetDidChange;
- (struct CGPoint { double x1; double x2; })_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (double)_currentPreferredMaxLayoutWidth;
- (void)_performLayoutCalculation:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)usesTiledViews;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (bool)_shouldScrollEnclosingScrollView;
- (void)_resyncContainerFrameForNonAutolayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectIgnoringKeyboard;
- (void)_setScrollTarget:(id)arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeWithLayout:(bool)arg1;
- (unsigned long long)_totalNumberOfTextViewsInLayoutManager;
- (void)_startDataDetectors;
- (bool)_shouldStartDataDetectors;
- (bool)isSelectable;
- (void)setUsesTiledViews:(bool)arg1;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(bool)arg2 isEditable:(bool)arg3 isSelectable:(bool)arg4;
- (void)setSelectable:(bool)arg1;
- (void)_observedTextViewDidChange:(id)arg1;
- (void)_streamingManagerDidCommitFinalResults;
- (void)_updateBaselineInformationDependentOnBounds;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_setInteractiveTextSelectionDisabled:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)_isInteractiveTextSelectionDisabled;
- (id)_textInputViewForAddingGestureRecognizers;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isAccessibilityElementByDefault;
- (void)_keyboardDidShow:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)setForceEnableDictation:(bool)arg1;
- (bool)forceEnableDictation;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_layoutDebuggingTitle;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (bool)_isDisplayingReferenceLibraryViewController;
- (Class)_printFormatterClass;
- (id)automaticallySelectedOverlay;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMarginTop:(unsigned long long)arg1;
- (unsigned long long)marginTop;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (void)updateSelection;
- (void)disableClearsOnInsertion;
- (bool)clearsOnInsertion;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)mightHaveLinks;
- (void)setContentToHTMLString:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (void)selectAll:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (bool)allowsEditingTextAttributes;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setEditable:(bool)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (bool)canResignFirstResponder;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)textContainer;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (void)unmarkText;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (id)selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (bool)hasText;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)inputDelegate;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (long long)textAlignment;
- (void)takeTraitsFrom:(id)arg1;
- (id)_textInputTraits;
- (void)setTypingAttributes:(id)arg1;
- (id)textInputView;
- (void)cancelAutoscroll;
- (id)textColor;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputChanged:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (id)_containerView;
- (void)_updateContentSize;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)setScrollEnabled:(bool)arg1;
- (void)updateConstraints;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)tintColorDidChange;
- (double)_firstBaselineOffsetFromTop;
- (double)_baselineOffsetFromBottom;
- (bool)canBecomeFirstResponder;
- (void)invalidateIntrinsicContentSize;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (bool)_isDisplayingShortcutViewController;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)ab_textAttributes;
- (id)ab_text;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })pkui_frameSizeForTextSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })pkui_textSizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
