/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase, NSString;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {
    SSSQLiteDatabase *_database;
    long long _persistentID;
}

@property(readonly) SSSQLiteDatabase * database;
@property(readonly) long long persistentID;
@property(readonly) bool existsInDatabase;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (Class)memoryEntityClass;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)databaseTable;

- (bool)existsInDatabase;
- (id)copyXPCEncodedValuesForClientProperties:(id)arg1;
- (id)copyValuesForClientProperties:(id)arg1;
- (bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (bool)deleteFromDatabase;
- (id)database;
- (bool)setValuesWithDictionary:(id)arg1;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (long long)persistentID;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end
