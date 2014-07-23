/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest  {
    bool_needUserID;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
}

@property bool needUserID;
@property NSString * containerIdentifier;
@property(copy) CKDContainerInfo * containerInfo;


- (void)setNeedUserID:(bool)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)containerInfo;
- (void)setContainerInfo:(id)arg1;
- (bool)needUserID;
- (bool)hasRequestBody;
- (bool)requiresDeviceID;
- (bool)allowsAuthedAccount;
- (bool)requiresConfiguration;
- (bool)allowsAnonymousAccount;
- (long long)partitionType;
- (long long)serverType;
- (void)requestDidParseJSONObject:(id)arg1;
- (bool)requiresSignature;
- (id)additionalHeaderValues;
- (void)setContainerIdentifier:(id)arg1;
- (id)containerIdentifier;
- (id)url;
- (void).cxx_destruct;

@end
