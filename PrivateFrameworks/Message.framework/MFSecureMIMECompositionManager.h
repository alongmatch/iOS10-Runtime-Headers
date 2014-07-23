/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSLock, NSString, MFError, NSSet, MailAccount, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, <MFSecureMIMECompositionManagerDelegate>;

@interface MFSecureMIMECompositionManager : NSObject  {
    <MFSecureMIMECompositionManagerDelegate> *_delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity { } *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity { } *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    bool_invalidated;
}

@property <MFSecureMIMECompositionManagerDelegate> * delegate;
@property(copy) NSString * sendingAddress;
@property(readonly) MailAccount * sendingAccount;
@property(readonly) int signingPolicy;
@property(readonly) int encryptionPolicy;
@property(readonly) int signingStatus;
@property(readonly) int encryptionStatus;
@property(readonly) NSSet * recipients;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;

- (int)encryptionStatus;
- (void)setSendingAddress:(id)arg1;
- (id)sendingAddress;
- (int)encryptionPolicy;
- (int)signingPolicy;
- (id)sendingAccount;
- (void)addRecipients:(id)arg1;
- (void)removeRecipients:(id)arg1;
- (bool)shouldAllowSend;
- (int)signingStatus;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (bool)_shouldEncrypt_nts;
- (bool)_shouldSign_nts;
- (bool)_shouldAllowSend_nts;
- (void)_setEncryptionIdentityError_nts:(id)arg1;
- (void)_setSigningIdentityError_nts:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity { }*)arg2 error:(id)arg3;
- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity { }*)arg4 error:(id)arg5;
- (bool)_updateEncryptionStatus_nts;
- (bool)_updateSigningStatus_nts;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)compositionSpecification;
- (id)recipients;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)dealloc;

@end
