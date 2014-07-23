/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITableView, NSString, SUTableView, NSIndexPath, SUTableDataSource;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    SUTableDataSource *_dataSource;
    long long _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    long long _placeholderRowCount;
    bool_preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    long long _tableViewStyle;
}

@property(readonly) unsigned long long numberOfRows;
@property(retain) SUTableDataSource * dataSource;
@property(readonly) UITableView * tableView;
@property long long tableViewStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)newTableView;
- (bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (void)_deliverTapCount:(long long)arg1 forIndexPath:(id)arg2;
- (bool)canSelectRowAtIndexPath:(id)arg1;
- (bool)deleteRowAtIndexPath:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (bool)indexPathIsPlaceholder:(id)arg1;
- (void)_doubleTapTimeout;
- (void)_resetTableView;
- (void)_reloadPlaceholderCells;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (long long)tableViewStyle;
- (id)tableView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(bool)arg3;
- (void)setTableViewStyle:(long long)arg1;
- (unsigned long long)numberOfRows;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
