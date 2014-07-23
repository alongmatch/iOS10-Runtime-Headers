/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

@interface EDFormulaHelper : NSObject <EFHelper> {
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;
- (unsigned long long)resolveTableToSheetId:(id)arg1;
- (id)resolveTable:(id)arg1;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (bool)isCurrentSheet:(id)arg1;
- (unsigned long long)resolveSheet:(id)arg1;
- (unsigned long long)resolveName:(id)arg1;
- (int)resolveFunctionName:(id)arg1;
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (unsigned long long)resolveFile:(id)arg1;
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (id)workbook;
- (int)rowNumber;
- (void)dealloc;
- (int)columnNumber;

@end
