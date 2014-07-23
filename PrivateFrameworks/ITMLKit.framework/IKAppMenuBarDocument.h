/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppMenuBarDocumentDelegate>, IKViewElement, NSMutableDictionary, NSString, IKAppContext, IKJSMenuBarDocument;

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature> {
    NSMutableDictionary *_documentsByMenuItemElementID;
    NSMutableDictionary *_documentOptionsByMenuItemElementID;
    IKJSMenuBarDocument *_jsMenuBarDocument;
    IKViewElement *_menuBarElement;
    IKAppContext *_appContext;
    NSString *_featureName;
    <IKAppMenuBarDocumentDelegate> *_delegate;
}

@property <IKAppMenuBarDocumentDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) NSString * featureName;
@property IKAppContext * appContext;


- (id)documentOptionsForMenuItem:(id)arg1;
- (id)documentForMenuItem:(id)arg1;
- (void)setDocument:(id)arg1 forMenuItemWithElementID:(id)arg2 withOptions:(id)arg3;
- (id)documentForMenuItemWithElementID:(id)arg1;
- (void)migrateToViewElement:(id)arg1;
- (id)featureJSObject;
- (id)initWithFeatureName:(id)arg1;
- (void)setAppContext:(id)arg1;
- (id)appContext;
- (id)featureName;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
