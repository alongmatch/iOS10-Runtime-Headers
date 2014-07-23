/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {
    bool__autoChartFillIsHollow;
    bool__autoChartStrokeIsHollow;
}

@property bool _autoChartFillIsHollow;
@property bool _autoChartStrokeIsHollow;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (int)styleIdWithStyleRow:(int)arg1 styleColumn:(int)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 shade:(float)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 tint:(float)arg2;
+ (int)styleColumnWithStyleId:(int)arg1;
+ (int)styleRowWithStyleId:(int)arg1;
+ (id)colorWithSchemeColorId:(int)arg1 transformType:(int)arg2 transformValue:(float)arg3;

- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(bool)arg3;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3;
- (id)autoTextFill;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)setAutoChartStrokeIsHollow:(bool)arg1;
- (void)setAutoChartFillIsHollow:(bool)arg1;
- (bool)_autoChartStrokeIsHollow;
- (id)autoOtherStrokeColor;
- (void)set_autoChartStrokeIsHollow:(bool)arg1;
- (void)set_autoChartFillIsHollow:(bool)arg1;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1;
- (int)styleRow;
- (id)autoColorOfSeriesWithIndex:(unsigned long long)arg1;
- (id)autoMinorGridColor;
- (id)autoAxisAndMajorGridColor;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (unsigned int)autoFloorAndWallsFillIndex;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (unsigned int)autoFloorAndChartAreaStrokeIndex;
- (id)autoChartAreaFillColor;
- (bool)_autoChartFillIsHollow;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned long long)arg1 seriesCount:(unsigned long long)arg2;
- (int)styleColumn;
- (int)styleId;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;

@end
