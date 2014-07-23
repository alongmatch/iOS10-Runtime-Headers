/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABPersonTableActionDataSource, <ABFMFActionButtonsDelegate>, ABStyleProvider, ABPersonTableViewDataSource, ABPersonTableTinyActionCell, ABUIPerson;

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate> {
    int _highlightedValueIdentifier;
    bool_highlightedValueIsImportant;
    int _actionSheetType;
    ABPersonTableTinyActionCell *_tinyActionCell;
    <ABFMFActionButtonsDelegate> *_FMFActionButtonsDelegate;
    bool_actionShouldPickHighlightedValue;
    int _highlightedValueProperty;
    ABStyleProvider *_styleProvider;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableActionDataSource *_actionDataSource;
    ABUIPerson *_highlightedValuePerson;
}

@property <ABFMFActionButtonsDelegate> * FMFActionButtonsDelegate;
@property(retain) ABStyleProvider * styleProvider;
@property ABPersonTableViewDataSource * dataSource;
@property(retain) ABUIPerson * highlightedValuePerson;
@property int highlightedValueProperty;
@property int highlightedValueIdentifier;
@property(readonly) ABPersonTableTinyActionCell * tinyActionCell;
@property bool actionShouldPickHighlightedValue;
@property(readonly) ABPersonTableActionDataSource * actionDataSource;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setHighlightedValueIdentifier:(int)arg1;
- (int)highlightedValueIdentifier;
- (void)setHighlightedValueProperty:(int)arg1;
- (int)highlightedValueProperty;
- (void)setHighlightedValuePerson:(id)arg1;
- (id)FMFActionButtonsDelegate;
- (void)setActionShouldPickHighlightedValue:(bool)arg1;
- (bool)actionShouldPickHighlightedValue;
- (void)reloadPrimaryPropertyActionsSection;
- (void)reloadBottomActions;
- (long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(bool)arg2;
- (long long)actionCountForTopGroupingInSection:(long long)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3 outExcludedIndexPaths:(id*)arg4;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5;
- (id)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(long long)arg6 ordering:(long long)arg7;
- (bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)performPersonTableAction:(id)arg1 atIndexPath:(id)arg2;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 entryType:(int)arg3;
- (void)reloadBottomActionsAnimated:(bool)arg1;
- (void)reloadBottomActionsAnimated:(bool)arg1 favorites:(bool)arg2 texting:(bool)arg3 sharing:(bool)arg4 conferencing:(bool)arg5;
- (void)reloadBottomActionDataForFavorites:(bool)arg1 texting:(bool)arg2 sharing:(bool)arg3 conferencing:(bool)arg4;
- (void)callContact:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)shareContactButtonClicked:(id)arg1;
- (void)sendTextMessage:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)addToFavoritesButtonClicked:(id)arg1;
- (bool)shouldShowAddToFavoritesAction;
- (id)tinyActionCell;
- (bool)isFavoriteOfType:(int)arg1 inPropertyGroup:(id)arg2 atIndex:(long long)arg3;
- (long long)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(bool)arg2 assumeThatPropertyHasSection:(bool)arg3;
- (long long)actionCountForGrouping:(long long)arg1 inSection:(long long)arg2 excludingProperty:(int)arg3 excludedPropertyGroupContext:(void*)arg4 outExcludedIndexPaths:(id*)arg5;
- (bool)shouldShowAction:(id)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void*)arg3;
- (bool)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2;
- (bool)shouldShowActionForProperty:(int)arg1 propertyGroupContext:(void*)arg2 assumeThatPropertyHasSection:(bool)arg3;
- (long long)actionCountForBottomGroupingExcludingProperty:(int)arg1 excludedPropertyGroupContext:(void*)arg2;
- (void)reloadBottomActionCellAnimated:(bool)arg1;
- (unsigned long long)_sectionForAction:(id)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(long long)arg4 ordering:(long long)arg5 animated:(bool)arg6;
- (bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6 outActions:(id*)arg7 outIndex:(long long*)arg8;
- (void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2;
- (id)highlightedValuePerson;
- (bool)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2;
- (id)actionDataSource;
- (id)actionsForProperty:(int)arg1 withActionGroupingAtIndex:(long long)arg2;
- (long long)groupingCountForProperty:(int)arg1;
- (id)newActionsForProperty:(int)arg1;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(long long)arg8 ordering:(long long)arg9;
- (id)actionsForProperty:(int)arg1 withActionGrouping:(long long)arg2;
- (void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(long long)arg3 inPropertyGroup:(id)arg4;
- (void)presentDifferentiationSheetForAction:(id)arg1;
- (void)setFMFActionButtonsDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
