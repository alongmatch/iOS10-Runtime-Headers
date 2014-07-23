/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore  {
    NSData *_data;
    Class _messageClass;
    NSString *_storagePath;
}


- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (void)setMessageClass:(Class)arg1;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)storePath;
- (id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;
- (void)writeUpdatedMessageDataToDisk;
- (id)mailboxUid;
- (id)message;
- (id)account;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
