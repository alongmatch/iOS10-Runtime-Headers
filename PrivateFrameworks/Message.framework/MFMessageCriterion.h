/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray, NSIndexSet;

@interface MFMessageCriterion : NSObject  {
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    int _qualifier;
    NSArray *_criteria;
    int _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    unsigned int _includeRelatedMessages : 1;
    int _type;
    NSArray *_requiredHeaders;
    bool_useFlaggedForUnreadCount;
    bool_expressionIsSanitized;
    NSIndexSet *_libraryIdentifiers;
}

@property(retain) NSIndexSet * libraryIdentifiers;
@property bool useFlaggedForUnreadCount;
@property bool includeRelatedMessages;
@property bool expressionIsSanitized;

+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)todayMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)includesMeCriterion;
+ (id)unreadMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)ThreadNotifyMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (void)_updateAddressComments:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(bool)arg2;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)messageIsServerSearchResultCriterion:(bool)arg1;
+ (id)messageIsDeletedCriterion:(bool)arg1;
+ (id)criterionForMailboxURL:(id)arg1;

- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (bool)hasNonFullTextSearchableCriterion;
- (id)extractedUnreadCriterion;
- (id)extractedDateCriterion;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(bool)arg3 contentIndex:(id)arg4 mailboxIDs:(id)arg5;
- (id)criterionForSQL;
- (id)criteriaSatisfyingPredicate:(int (*)())arg1;
- (id)criterionByApplyingTransform:(id)arg1;
- (bool)includesCriterionSatisfyingPredicate:(int (*)())arg1 restrictive:(bool)arg2;
- (void)_addCriteriaSatisfyingPredicate:(int (*)())arg1 toCollector:(id)arg2;
- (unsigned int)bestBaseTable;
- (id)SQLExpressionWithContext:(struct { id x1; id x2; unsigned int x3; unsigned int x4; boolx5; boolx6; boolx7; }*)arg1 depth:(unsigned int)arg2;
- (bool)hasLibraryIDCriterion;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(bool)arg2 collapsedIndexes:(id*)arg3;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (bool)isFullTextSearchableCriterion;
- (id)_criterionForSQL;
- (id)fixOnce;
- (void)setExpressionIsSanitized:(bool)arg1;
- (bool)expressionIsSanitized;
- (void)setIncludeRelatedMessages:(bool)arg1;
- (bool)includeRelatedMessages;
- (bool)useFlaggedForUnreadCount;
- (void)setLibraryIdentifiers:(id)arg1;
- (id)emailAddressesForGroupCriterion;
- (bool)dateIsRelative;
- (int)dateUnits;
- (bool)_evaluateIsEncryptedCriterion:(id)arg1;
- (bool)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (void)setDateIsRelative:(bool)arg1;
- (void)setDateUnits:(int)arg1;
- (void)setUseFlaggedForUnreadCount:(bool)arg1;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (bool)_evaluateAttachmentCriterion:(id)arg1;
- (bool)_evaluatePriorityIsLowCriterion:(id)arg1;
- (bool)_evaluatePriorityIsHighCriterion:(id)arg1;
- (bool)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (bool)_evaluateFullNameCriterion:(id)arg1;
- (bool)_evaluateAddressHistoryCriterion:(id)arg1;
- (bool)_evaluateDateCriterion:(id)arg1;
- (bool)_evaluateAccountCriterion:(id)arg1;
- (bool)_evaluateSenderHeaderCriterion:(id)arg1;
- (bool)_evaluateHeaderCriterion:(id)arg1;
- (bool)_evaluateAddressBookCriterion:(id)arg1;
- (bool)_evaluateFlagCriterion:(id)arg1;
- (bool)_evaluateCompoundCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (bool)doesMessageSatisfyCriterion:(id)arg1;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (id)_qualifierString;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)criteria;
- (int)qualifier;
- (id)criterionIdentifier;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (void)setQualifier:(int)arg1;
- (void)setCriterionType:(int)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(bool)arg2;
- (void)setAllCriteriaMustBeSatisfied:(bool)arg1;
- (void)setCriteria:(id)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (bool)allCriteriaMustBeSatisfied;
- (int)criterionType;
- (id)libraryIdentifiers;
- (void)setExpression:(id)arg1;
- (id)expression;
- (void)setName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
