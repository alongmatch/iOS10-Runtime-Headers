/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_distinctRanges;
}

@property(copy) NSMutableSet * distinctRanges;

+ (id)disjointRangeWithSingleRange:(id)arg1;
+ (id)disjointRangeWithDistinctRanges:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)addRange:(id)arg1;
- (void)setDistinctRanges:(id)arg1;
- (id)subtractDisjointRange:(id)arg1;
- (id)addDisjointRange:(id)arg1;
- (double)totalDuration;
- (id)sortedDistinctRanges;
- (id)distinctRanges;
- (id)initWithDistinctRanges:(id)arg1;
- (id)subtractRange:(id)arg1;
- (bool)containsDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)containsRange:(id)arg1;

@end
