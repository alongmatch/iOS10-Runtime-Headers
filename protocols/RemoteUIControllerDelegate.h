/* Generated by RuntimeBrowser.
 */

@protocol RemoteUIControllerDelegate <NSObject>

@optional

- (RUIPage *)remoteUIController:(RemoteUIController *)arg1 createPageWithName:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2 actionSignal:(int*)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 didRemoveObjectModel:(RUIObjectModel *)arg2;
- (BOOL)remoteUIController:(RemoteUIController *)arg1 shouldLoadRequest:(NSMutableURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)remoteUIController:(RemoteUIController *)arg1 willLoadRequest:(NSMutableURLRequest *)arg2;
- (void)remoteUIController:(RemoteUIController *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 modally:(BOOL)arg3;
- (void)remoteUIControllerDidDismiss:(RemoteUIController *)arg1;

@end