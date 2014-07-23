/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, NSDateFormatter;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter> {
    bool_includeFunction;
    bool_includeLevel;
    bool_includeLogName;
    bool_includeMessage;
    bool_includeProcessID;
    bool_includeProcessName;
    bool_includeMachPort;
    bool_includeTimestamp;
    bool_includeEnvelopePartNames;
    bool_useTinyEnvelopePartNames;
    bool_useCompactForm;
    bool_usePrettyTimestamp;
    NSDateFormatter *_dateFormatter;
}

@property bool includeFunction;
@property bool includeLevel;
@property bool includeLogName;
@property bool includeMessage;
@property bool includeProcessID;
@property bool includeProcessName;
@property bool includeMachPort;
@property bool includeTimestamp;
@property bool includeEnvelopePartNames;
@property bool useTinyEnvelopePartNames;
@property bool useCompactForm;
@property bool usePrettyTimestamp;
@property(retain) NSDateFormatter * dateFormatter;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setUseCompactForm:(bool)arg1;
- (void)setUseTinyEnvelopePartNames:(bool)arg1;
- (void)setIncludeMachPort:(bool)arg1;
- (void)setIncludeProcessID:(bool)arg1;
- (void)setIncludeLevel:(bool)arg1;
- (void)setIncludeFunction:(bool)arg1;
- (bool)includeMessage;
- (bool)includeFunction;
- (bool)includeMachPort;
- (bool)includeProcessID;
- (bool)includeProcessName;
- (bool)includeLevel;
- (bool)includeLogName;
- (void)setDateFormatter:(id)arg1;
- (bool)usePrettyTimestamp;
- (bool)includeTimestamp;
- (bool)useCompactForm;
- (bool)useTinyEnvelopePartNames;
- (bool)includeEnvelopePartNames;
- (void)setUsePrettyTimestamp:(bool)arg1;
- (void)setIncludeEnvelopePartNames:(bool)arg1;
- (void)setIncludeMessage:(bool)arg1;
- (void)setIncludeProcessName:(bool)arg1;
- (void)setIncludeLogName:(bool)arg1;
- (void)setIncludeTimestamp:(bool)arg1;
- (id)newFormattedString:(id)arg1;
- (id)dateFormatter;
- (id)init;
- (void).cxx_destruct;

@end
