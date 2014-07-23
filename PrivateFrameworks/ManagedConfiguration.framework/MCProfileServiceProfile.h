/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray, NSData;

@interface MCProfileServiceProfile : MCProfile  {
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    bool_confirmInstallation;
    NSArray *_bogusPayloads;
}

@property(retain) NSString * URLString;
@property(retain) NSData * enrollmentIdentityPersistentID;
@property(retain,readonly) NSArray * deviceAttributes;
@property(retain,readonly) id challenge;
@property(readonly) bool confirmInstallation;


- (bool)confirmInstallation;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (id)enrollmentIdentityPersistentID;
- (id)deviceAttributes;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(bool)arg2 outError:(id*)arg3;
- (id)payloads;
- (id)stubDictionary;
- (id)URLString;
- (id)challenge;
- (void).cxx_destruct;
- (id)description;
- (void)setURLString:(id)arg1;

@end
