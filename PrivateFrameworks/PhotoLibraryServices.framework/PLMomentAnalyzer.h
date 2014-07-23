/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CLLocation, NSDate, NSDictionary, <GEOMapItemPrivate>, NSDateFormatter, NSOrderedSet, PLMomentAnalyzerWorkThread, <PLMomentGenerationDataManagement>, NSString, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface PLMomentAnalyzer : NSObject  {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned long long _mode;
    double _analysisStartTime;
    bool_delayedSavePending;
    unsigned long long _objectUpdatesSinceSave;
    NSMutableOrderedSet *_pendingGEORequests;
    NSMutableSet *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    NSMutableSet *_megaMomentListIdsToProcess;
    NSMutableSet *_yearMomentListIdsToProcess;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    <PLMomentGenerationDataManagement> *_momentDataManager;
    bool_analyzingAllMoments;
    bool_skippedMomentsDuringAnalysis;
    bool_passSuccess;
    unsigned long long _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    bool_networkObservingReachability;
    bool_needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    <GEOMapItemPrivate> *_homeMapItem;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    double _lastRevGeoRequestTime;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned long long _lastGeoVersionFileVersion;
    NSDictionary *_serverVersionInfo;
    double _lastServerVersionInfoFetchAttemptTime;
    unsigned long long _currentRevGeoServerVersionNum;
    bool_pendingServerVersionInfoFetch;
    bool_addCountyIfNeeded;
    bool_noResultErrorIsSuccess;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
    NSString *_currentProviderId;
    bool_momentAnalysisPaused;
    <PLMomentGenerationDataManagement> *_momentGenerationDataManager;
}

@property <PLMomentGenerationDataManagement> * momentGenerationDataManager;
@property(retain,readonly) <PLMomentGenerationDataManagement> * _momentDataManager;
@property(retain,readonly) CLLocation * _homeLocation;


- (bool)updateInfoForMomentListWithMomentListId:(id)arg1;
- (bool)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(bool)arg2;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (unsigned long long)_significantPlaceCountInMap:(id)arg1;
- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;
- (id)_compactPlaceDescriptionForMapItem:(id)arg1;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(bool)arg2 invalidOnly:(bool)arg3;
- (void)_setMomentAnalysisPaused:(bool)arg1;
- (bool)updateInfoForYearMomentLists:(id)arg1;
- (bool)updateInfoForMegaMomentLists:(id)arg1;
- (bool)updateInfoForMoments:(id)arg1 invalidOnly:(bool)arg2;
- (bool)_shouldProcessMoments:(id)arg1;
- (bool)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;
- (bool)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;
- (id)_homeLocation;
- (bool)_canProcessMoments;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(bool)arg3 outAddedHome:(bool*)arg4;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(bool)arg2;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 atLastLevel:(bool)arg7 outOtherNonDominantPlaces:(id)arg8;
- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(bool)arg9;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(bool)arg2;
- (id)_geoLocationForCoordinate:(struct { double x1; double x2; })arg1 date:(id)arg2;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned long long)_processYearMomentList:(id)arg1;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long*)arg9 outUsedHome:(bool*)arg10;
- (unsigned long long)_processMegaMomentList:(id)arg1;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (void)_waitForReachability;
- (void)_processNextAnalysisTransaction;
- (void)_analysisComplete;
- (void)_processYearMomentLists;
- (void)_processMegaMomentLists;
- (void)_processPendingGEORequests;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_analysisDidComplete:(bool)arg1;
- (void)_stopObservingReachabilityChanges;
- (void)_runOnWorkQueueAferSeconds:(double)arg1 block:(id)arg2;
- (void)_saveNow;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(bool)arg2 errorType:(unsigned long long)arg3;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(bool)arg3;
- (bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (id)_userSuppliedTitlesForCountedSet:(id)arg1;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4;
- (bool)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_resetErrorState;
- (bool)_isNetworkReachable;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(bool)arg2;
- (void)_setErrorState:(unsigned long long)arg1;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(bool)arg1;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;
- (void)_updateHomeLocation;
- (id)_dictionaryFromLocation:(id)arg1;
- (unsigned long long)_errorTypeForError:(id)arg1;
- (id)_momentDataManager;
- (void)_startObservingReachabilityChanges;
- (void)_updateErrorStateWithSuccess:(bool)arg1 errorType:(unsigned long long)arg2;
- (id)_currentProviderId;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (bool)setVersionInfoURLIfAvailable:(id)arg1;
- (void)_runBlockOnWorkQueue:(id)arg1;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (bool)_loadServerVersionInfo;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;
- (void)_updateCurrentProviderId;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_countryCodeChanged:(id)arg1;
- (bool)_updateLanguageIfNeeded;
- (bool)_updateHomeAddressIfNeeded;
- (void)_saveGlobalMetadata;
- (id)_locationFromDictionary:(id)arg1;
- (id)momentGenerationDataManager;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (void)_finalizeInitOnWorkQueue;
- (void)_fetchServerVersionInfo;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (void)addressBookChanged;
- (void)_networkReachabilityDidChange:(bool)arg1;
- (void)startAnalyzer;
- (void)setMomentGenerationDataManager:(id)arg1;
- (void)updateInfoForAllMoments;
- (void)_processNextTransaction;
- (void)resumeMomentAnalysis;
- (void)pauseMomentAnalysis;
- (id)init;
- (void)dealloc;

@end
