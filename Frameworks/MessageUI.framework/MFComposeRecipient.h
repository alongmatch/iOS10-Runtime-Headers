/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSArray, MFComposeRecipientOriginContext;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem, NSCoding> {
    void *_record;
    int _recordID;
    int _property;
    int _identifier;
    NSString *_address;
    NSString *_label;
    NSString *_countryCode;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    MFComposeRecipientOriginContext *_originContext;
}

@property(readonly) MFComposeRecipientOriginContext * originContext;
@property(getter=isRemovableFromSearchResults,readonly) bool removableFromSearchResults;
@property(readonly) bool showsAccessoryButton;
@property(retain) NSString * countryCode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;

- (id)shortName;
- (id)originContext;
- (id)preferredSendingAddress;
- (id)completelyMatchedAttributedStrings;
- (bool)wasCompleteMatch;
- (void)setOriginContext:(id)arg1;
- (id)childrenWithCompleteMatches;
- (id)sortedChildren;
- (bool)showsAccessoryButton;
- (id)unlocalizedLabel;
- (id)normalizedAddress;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)objectForDragType:(id)arg1;
- (id)supportedDragTypes;
- (bool)isRemovableFromSearchResults;
- (id)_unformattedAddress;
- (id)placeholderName;
- (id)uncommentedAddress;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (id)compositeName;
- (id)commentedAddress;
- (void*)record;
- (int)property;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (void)setIdentifier:(int)arg1;
- (int)identifier;
- (id)displayString;
- (id)label;
- (int)recordID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;
- (bool)isGroup;
- (id)children;

@end
