/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDHomeKitConfiguration : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _databaseSize;
    NSString *_guid;
    unsigned int _numAccessories;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numHomes;
    unsigned int _numLocationGroups;
    unsigned int _numLocations;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int databaseSize : 1; 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numHomes : 1; 
        unsigned int numLocationGroups : 1; 
        unsigned int numLocations : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasNumHomes;
@property unsigned int numHomes;
@property bool hasNumAccessories;
@property unsigned int numAccessories;
@property bool hasNumServices;
@property unsigned int numServices;
@property bool hasNumUsers;
@property unsigned int numUsers;
@property bool hasNumScenes;
@property unsigned int numScenes;
@property bool hasNumTriggers;
@property unsigned int numTriggers;
@property bool hasNumLocations;
@property unsigned int numLocations;
@property bool hasNumLocationGroups;
@property unsigned int numLocationGroups;
@property bool hasNumAccessoryServiceGroups;
@property unsigned int numAccessoryServiceGroups;
@property bool hasDatabaseSize;
@property unsigned int databaseSize;


- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numLocationGroups;
- (unsigned int)numLocations;
- (unsigned int)numTriggers;
- (unsigned int)numScenes;
- (unsigned int)numUsers;
- (unsigned int)numServices;
- (unsigned int)numAccessories;
- (unsigned int)numHomes;
- (bool)hasDatabaseSize;
- (void)setHasDatabaseSize:(bool)arg1;
- (void)setDatabaseSize:(unsigned int)arg1;
- (bool)hasNumAccessoryServiceGroups;
- (void)setHasNumAccessoryServiceGroups:(bool)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (bool)hasNumLocationGroups;
- (void)setHasNumLocationGroups:(bool)arg1;
- (void)setNumLocationGroups:(unsigned int)arg1;
- (bool)hasNumLocations;
- (void)setHasNumLocations:(bool)arg1;
- (void)setNumLocations:(unsigned int)arg1;
- (bool)hasNumTriggers;
- (void)setHasNumTriggers:(bool)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (bool)hasNumScenes;
- (void)setHasNumScenes:(bool)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (bool)hasNumUsers;
- (void)setHasNumUsers:(bool)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (bool)hasNumServices;
- (void)setHasNumServices:(bool)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (bool)hasNumAccessories;
- (void)setHasNumAccessories:(bool)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (bool)hasNumHomes;
- (void)setHasNumHomes:(bool)arg1;
- (void)setNumHomes:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (unsigned int)databaseSize;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
