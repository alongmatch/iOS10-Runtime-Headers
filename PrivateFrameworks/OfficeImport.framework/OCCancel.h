/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {
    boolmIsCancelled;
    boolmIsQuit;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isQuit;
- (void)quit;
- (bool)isCancelled;
- (id)init;
- (void)cancel;

@end
