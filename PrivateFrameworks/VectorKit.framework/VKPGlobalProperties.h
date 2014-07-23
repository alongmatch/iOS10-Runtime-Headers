/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGlobalProperties : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeBackgroundRasters;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeGroundCovers;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeHybridRasters;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangePOIs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeRasterTraffics;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeSatelliteRasters;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeStandardRasters;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeVectorBuildings;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeVectorPolygons;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeVectorRealistics;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeVectorRoadTraffics;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _layerZoomRangeVectorRoads;
    unsigned int _buildingChangeoverZ;
    float _globalScaleFactor;
    float _globeLODScale;
    float _labelIconScale;
    float _lodOffset;
    float _minLineTriangleWidth;
    unsigned int _minTrafficTypeAccidentZ;
    unsigned int _minTrafficTypeConstructionZ;
    unsigned int _minTrafficTypeEventZ;
    unsigned int _minTrafficTypeHazardZ;
    unsigned int _minTrafficTypeLaneClosureZ;
    unsigned int _minTrafficTypeRampClosureZ;
    unsigned int _minTrafficTypeRoadClosureZ;
    unsigned int _minTrafficTypeUnknownZ;
    unsigned int _navLabelMaxRoadSigns;
    float _navLabelRoadSignHeight;
    float _navLabelRoadSignScaleLarge;
    float _navLabelRoadSignScaleMedium;
    float _navLabelRoadSignScaleSmall;
    float _navLabelRoadSignScaleXLarge;
    float _navLabelRoadSignScaleXXLarge;
    unsigned int _rasterPolygonChangeoverZ;
    float _realisticNightBrightness;
    float _realisticShieldNightBrightness;
    float _shieldNightBrightness;
    float _tiltLimitSatelliteScale;
    struct { 
        unsigned int buildingChangeoverZ : 1; 
        unsigned int globalScaleFactor : 1; 
        unsigned int globeLODScale : 1; 
        unsigned int labelIconScale : 1; 
        unsigned int lodOffset : 1; 
        unsigned int minLineTriangleWidth : 1; 
        unsigned int minTrafficTypeAccidentZ : 1; 
        unsigned int minTrafficTypeConstructionZ : 1; 
        unsigned int minTrafficTypeEventZ : 1; 
        unsigned int minTrafficTypeHazardZ : 1; 
        unsigned int minTrafficTypeLaneClosureZ : 1; 
        unsigned int minTrafficTypeRampClosureZ : 1; 
        unsigned int minTrafficTypeRoadClosureZ : 1; 
        unsigned int minTrafficTypeUnknownZ : 1; 
        unsigned int navLabelMaxRoadSigns : 1; 
        unsigned int navLabelRoadSignHeight : 1; 
        unsigned int navLabelRoadSignScaleLarge : 1; 
        unsigned int navLabelRoadSignScaleMedium : 1; 
        unsigned int navLabelRoadSignScaleSmall : 1; 
        unsigned int navLabelRoadSignScaleXLarge : 1; 
        unsigned int navLabelRoadSignScaleXXLarge : 1; 
        unsigned int rasterPolygonChangeoverZ : 1; 
        unsigned int realisticNightBrightness : 1; 
        unsigned int realisticShieldNightBrightness : 1; 
        unsigned int shieldNightBrightness : 1; 
        unsigned int tiltLimitSatelliteScale : 1; 
    } _has;
}

@property bool hasRasterPolygonChangeoverZ;
@property unsigned int rasterPolygonChangeoverZ;
@property bool hasMinLineTriangleWidth;
@property float minLineTriangleWidth;
@property bool hasBuildingChangeoverZ;
@property unsigned int buildingChangeoverZ;
@property bool hasMinTrafficTypeUnknownZ;
@property unsigned int minTrafficTypeUnknownZ;
@property bool hasMinTrafficTypeAccidentZ;
@property unsigned int minTrafficTypeAccidentZ;
@property bool hasMinTrafficTypeConstructionZ;
@property unsigned int minTrafficTypeConstructionZ;
@property bool hasMinTrafficTypeRoadClosureZ;
@property unsigned int minTrafficTypeRoadClosureZ;
@property bool hasMinTrafficTypeEventZ;
@property unsigned int minTrafficTypeEventZ;
@property bool hasMinTrafficTypeHazardZ;
@property unsigned int minTrafficTypeHazardZ;
@property bool hasMinTrafficTypeLaneClosureZ;
@property unsigned int minTrafficTypeLaneClosureZ;
@property bool hasMinTrafficTypeRampClosureZ;
@property unsigned int minTrafficTypeRampClosureZ;
@property bool hasRealisticNightBrightness;
@property float realisticNightBrightness;
@property bool hasShieldNightBrightness;
@property float shieldNightBrightness;
@property bool hasRealisticShieldNightBrightness;
@property float realisticShieldNightBrightness;
@property(readonly) unsigned long long layerZoomRangeBackgroundRastersCount;
@property(readonly) unsigned int* layerZoomRangeBackgroundRasters;
@property(readonly) unsigned long long layerZoomRangeStandardRastersCount;
@property(readonly) unsigned int* layerZoomRangeStandardRasters;
@property(readonly) unsigned long long layerZoomRangeSatelliteRastersCount;
@property(readonly) unsigned int* layerZoomRangeSatelliteRasters;
@property(readonly) unsigned long long layerZoomRangeHybridRastersCount;
@property(readonly) unsigned int* layerZoomRangeHybridRasters;
@property(readonly) unsigned long long layerZoomRangeGroundCoversCount;
@property(readonly) unsigned int* layerZoomRangeGroundCovers;
@property(readonly) unsigned long long layerZoomRangeRasterTrafficsCount;
@property(readonly) unsigned int* layerZoomRangeRasterTraffics;
@property(readonly) unsigned long long layerZoomRangeVectorPolygonsCount;
@property(readonly) unsigned int* layerZoomRangeVectorPolygons;
@property(readonly) unsigned long long layerZoomRangeVectorRoadsCount;
@property(readonly) unsigned int* layerZoomRangeVectorRoads;
@property(readonly) unsigned long long layerZoomRangeVectorRealisticsCount;
@property(readonly) unsigned int* layerZoomRangeVectorRealistics;
@property(readonly) unsigned long long layerZoomRangeVectorBuildingsCount;
@property(readonly) unsigned int* layerZoomRangeVectorBuildings;
@property(readonly) unsigned long long layerZoomRangePOIsCount;
@property(readonly) unsigned int* layerZoomRangePOIs;
@property(readonly) unsigned long long layerZoomRangeVectorRoadTrafficsCount;
@property(readonly) unsigned int* layerZoomRangeVectorRoadTraffics;
@property bool hasTiltLimitSatelliteScale;
@property float tiltLimitSatelliteScale;
@property bool hasGlobeLODScale;
@property float globeLODScale;
@property bool hasLodOffset;
@property float lodOffset;
@property bool hasGlobalScaleFactor;
@property float globalScaleFactor;
@property bool hasLabelIconScale;
@property float labelIconScale;
@property bool hasNavLabelRoadSignHeight;
@property float navLabelRoadSignHeight;
@property bool hasNavLabelRoadSignScaleSmall;
@property float navLabelRoadSignScaleSmall;
@property bool hasNavLabelRoadSignScaleMedium;
@property float navLabelRoadSignScaleMedium;
@property bool hasNavLabelRoadSignScaleLarge;
@property float navLabelRoadSignScaleLarge;
@property bool hasNavLabelRoadSignScaleXLarge;
@property float navLabelRoadSignScaleXLarge;
@property bool hasNavLabelRoadSignScaleXXLarge;
@property float navLabelRoadSignScaleXXLarge;
@property bool hasNavLabelMaxRoadSigns;
@property unsigned int navLabelMaxRoadSigns;


- (float)navLabelRoadSignScaleXXLarge;
- (float)navLabelRoadSignScaleXLarge;
- (float)navLabelRoadSignScaleLarge;
- (float)navLabelRoadSignScaleMedium;
- (float)navLabelRoadSignScaleSmall;
- (float)navLabelRoadSignHeight;
- (unsigned int)minTrafficTypeRampClosureZ;
- (unsigned int)minTrafficTypeLaneClosureZ;
- (unsigned int)minTrafficTypeHazardZ;
- (unsigned int)minTrafficTypeEventZ;
- (unsigned int)minTrafficTypeRoadClosureZ;
- (unsigned int)minTrafficTypeConstructionZ;
- (unsigned int)minTrafficTypeAccidentZ;
- (unsigned int)minTrafficTypeUnknownZ;
- (bool)hasNavLabelMaxRoadSigns;
- (void)setHasNavLabelMaxRoadSigns:(bool)arg1;
- (void)setNavLabelMaxRoadSigns:(unsigned int)arg1;
- (unsigned int)navLabelMaxRoadSigns;
- (bool)hasNavLabelRoadSignScaleXXLarge;
- (void)setHasNavLabelRoadSignScaleXXLarge:(bool)arg1;
- (void)setNavLabelRoadSignScaleXXLarge:(float)arg1;
- (bool)hasNavLabelRoadSignScaleXLarge;
- (void)setHasNavLabelRoadSignScaleXLarge:(bool)arg1;
- (void)setNavLabelRoadSignScaleXLarge:(float)arg1;
- (bool)hasNavLabelRoadSignScaleLarge;
- (void)setHasNavLabelRoadSignScaleLarge:(bool)arg1;
- (void)setNavLabelRoadSignScaleLarge:(float)arg1;
- (bool)hasNavLabelRoadSignScaleMedium;
- (void)setHasNavLabelRoadSignScaleMedium:(bool)arg1;
- (void)setNavLabelRoadSignScaleMedium:(float)arg1;
- (bool)hasNavLabelRoadSignScaleSmall;
- (void)setHasNavLabelRoadSignScaleSmall:(bool)arg1;
- (void)setNavLabelRoadSignScaleSmall:(float)arg1;
- (bool)hasNavLabelRoadSignHeight;
- (void)setHasNavLabelRoadSignHeight:(bool)arg1;
- (void)setNavLabelRoadSignHeight:(float)arg1;
- (bool)hasGlobalScaleFactor;
- (void)setHasGlobalScaleFactor:(bool)arg1;
- (void)setGlobalScaleFactor:(float)arg1;
- (float)globalScaleFactor;
- (bool)hasLodOffset;
- (void)setHasLodOffset:(bool)arg1;
- (void)setLodOffset:(float)arg1;
- (bool)hasGlobeLODScale;
- (void)setHasGlobeLODScale:(bool)arg1;
- (void)setGlobeLODScale:(float)arg1;
- (float)globeLODScale;
- (bool)hasTiltLimitSatelliteScale;
- (void)setHasTiltLimitSatelliteScale:(bool)arg1;
- (void)setTiltLimitSatelliteScale:(float)arg1;
- (void)setLayerZoomRangeVectorRoadTraffics:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)layerZoomRangeVectorRoadTraffics;
- (void)setLayerZoomRangePOIs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeVectorBuildings:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeVectorRealistics:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeVectorRoads:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeVectorPolygons:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeRasterTraffics:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeGroundCovers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)layerZoomRangeGroundCovers;
- (void)setLayerZoomRangeHybridRasters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeSatelliteRasters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeStandardRasters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLayerZoomRangeBackgroundRasters:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (bool)hasRealisticShieldNightBrightness;
- (void)setHasRealisticShieldNightBrightness:(bool)arg1;
- (void)setRealisticShieldNightBrightness:(float)arg1;
- (bool)hasShieldNightBrightness;
- (void)setHasShieldNightBrightness:(bool)arg1;
- (void)setShieldNightBrightness:(float)arg1;
- (bool)hasRealisticNightBrightness;
- (void)setHasRealisticNightBrightness:(bool)arg1;
- (void)setRealisticNightBrightness:(float)arg1;
- (float)realisticNightBrightness;
- (bool)hasMinTrafficTypeRampClosureZ;
- (void)setHasMinTrafficTypeRampClosureZ:(bool)arg1;
- (void)setMinTrafficTypeRampClosureZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeLaneClosureZ;
- (void)setHasMinTrafficTypeLaneClosureZ:(bool)arg1;
- (void)setMinTrafficTypeLaneClosureZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeHazardZ;
- (void)setHasMinTrafficTypeHazardZ:(bool)arg1;
- (void)setMinTrafficTypeHazardZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeEventZ;
- (void)setHasMinTrafficTypeEventZ:(bool)arg1;
- (void)setMinTrafficTypeEventZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeRoadClosureZ;
- (void)setHasMinTrafficTypeRoadClosureZ:(bool)arg1;
- (void)setMinTrafficTypeRoadClosureZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeConstructionZ;
- (void)setHasMinTrafficTypeConstructionZ:(bool)arg1;
- (void)setMinTrafficTypeConstructionZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeAccidentZ;
- (void)setHasMinTrafficTypeAccidentZ:(bool)arg1;
- (void)setMinTrafficTypeAccidentZ:(unsigned int)arg1;
- (bool)hasMinTrafficTypeUnknownZ;
- (void)setHasMinTrafficTypeUnknownZ:(bool)arg1;
- (void)setMinTrafficTypeUnknownZ:(unsigned int)arg1;
- (void)setHasBuildingChangeoverZ:(bool)arg1;
- (void)setBuildingChangeoverZ:(unsigned int)arg1;
- (bool)hasMinLineTriangleWidth;
- (void)setHasMinLineTriangleWidth:(bool)arg1;
- (void)setMinLineTriangleWidth:(float)arg1;
- (float)minLineTriangleWidth;
- (bool)hasRasterPolygonChangeoverZ;
- (void)setHasRasterPolygonChangeoverZ:(bool)arg1;
- (void)setRasterPolygonChangeoverZ:(unsigned int)arg1;
- (void)addLayerZoomRangeVectorRoadTraffic:(unsigned int)arg1;
- (unsigned int)layerZoomRangeVectorRoadTrafficAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeVectorRoadTraffics;
- (unsigned long long)layerZoomRangeVectorRoadTrafficsCount;
- (void)addLayerZoomRangePOI:(unsigned int)arg1;
- (unsigned int)layerZoomRangePOIAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangePOIs;
- (void)addLayerZoomRangeVectorBuildings:(unsigned int)arg1;
- (unsigned int)layerZoomRangeVectorBuildingsAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeVectorBuildings;
- (void)addLayerZoomRangeVectorRealistic:(unsigned int)arg1;
- (unsigned int)layerZoomRangeVectorRealisticAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeVectorRealistics;
- (void)addLayerZoomRangeVectorRoads:(unsigned int)arg1;
- (unsigned int)layerZoomRangeVectorRoadsAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeVectorRoads;
- (void)addLayerZoomRangeVectorPolygons:(unsigned int)arg1;
- (unsigned int)layerZoomRangeVectorPolygonsAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeVectorPolygons;
- (void)addLayerZoomRangeRasterTraffic:(unsigned int)arg1;
- (unsigned int)layerZoomRangeRasterTrafficAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeRasterTraffics;
- (void)addLayerZoomRangeGroundCover:(unsigned int)arg1;
- (unsigned int)layerZoomRangeGroundCoverAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeGroundCovers;
- (unsigned long long)layerZoomRangeGroundCoversCount;
- (void)addLayerZoomRangeHybridRasters:(unsigned int)arg1;
- (unsigned int)layerZoomRangeHybridRastersAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeHybridRasters;
- (void)addLayerZoomRangeSatelliteRasters:(unsigned int)arg1;
- (unsigned int)layerZoomRangeSatelliteRastersAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeSatelliteRasters;
- (void)addLayerZoomRangeStandardRasters:(unsigned int)arg1;
- (unsigned int)layerZoomRangeStandardRastersAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeStandardRasters;
- (void)addLayerZoomRangeBackgroundRasters:(unsigned int)arg1;
- (unsigned int)layerZoomRangeBackgroundRastersAtIndex:(unsigned long long)arg1;
- (void)clearLayerZoomRangeBackgroundRasters;
- (float)tiltLimitScale:(long long)arg1;
- (float)tiltLimitSatelliteScale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })zoomRangeForMapLayer:(unsigned long long)arg1;
- (unsigned int*)layerZoomRangePOIs;
- (unsigned long long)layerZoomRangePOIsCount;
- (unsigned int*)layerZoomRangeVectorBuildings;
- (unsigned long long)layerZoomRangeVectorBuildingsCount;
- (unsigned int*)layerZoomRangeVectorRealistics;
- (unsigned long long)layerZoomRangeVectorRealisticsCount;
- (unsigned int*)layerZoomRangeVectorRoads;
- (unsigned long long)layerZoomRangeVectorRoadsCount;
- (unsigned int*)layerZoomRangeVectorPolygons;
- (unsigned long long)layerZoomRangeVectorPolygonsCount;
- (unsigned int*)layerZoomRangeRasterTraffics;
- (unsigned long long)layerZoomRangeRasterTrafficsCount;
- (unsigned int*)layerZoomRangeHybridRasters;
- (unsigned long long)layerZoomRangeHybridRastersCount;
- (unsigned int*)layerZoomRangeSatelliteRasters;
- (unsigned long long)layerZoomRangeSatelliteRastersCount;
- (unsigned int*)layerZoomRangeStandardRasters;
- (unsigned long long)layerZoomRangeStandardRastersCount;
- (unsigned int*)layerZoomRangeBackgroundRasters;
- (unsigned long long)layerZoomRangeBackgroundRastersCount;
- (unsigned int)rasterPolygonChangeoverZ;
- (float)shieldNightBrightness;
- (float)realisticShieldNightBrightness;
- (float)labelIconScale;
- (bool)hasLabelIconScale;
- (void)setHasLabelIconScale:(bool)arg1;
- (void)setLabelIconScale:(float)arg1;
- (float)lodOffset;
- (unsigned int)buildingChangeoverZ;
- (bool)hasBuildingChangeoverZ;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
