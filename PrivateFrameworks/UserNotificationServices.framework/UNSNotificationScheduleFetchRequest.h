/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSNotificationScheduleFetchRequest : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    BOOL  _includeSnoozes;
    unsigned int  _maxSize;
    NSDate * _startDate;
}

@property (retain) NSDate *endDate;
@property BOOL includeSnoozes;
@property unsigned int maxSize;
@property (retain) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (BOOL)includeSnoozes;
- (id)initWithCoder:(id)arg1;
- (unsigned int)maxSize;
- (void)setEndDate:(id)arg1;
- (void)setIncludeSnoozes:(BOOL)arg1;
- (void)setMaxSize:(unsigned int)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end