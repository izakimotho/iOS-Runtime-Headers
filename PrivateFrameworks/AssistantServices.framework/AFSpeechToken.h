/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechToken : NSObject <NSSecureCoding> {
    int _confidenceScore;
    double _endTime;
    BOOL _removeSpaceAfter;
    BOOL _removeSpaceBefore;
    double _startTime;
    NSString *_text;
}

@property (nonatomic) int confidenceScore;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *text;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)confidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)removeSpaceAfter;
- (BOOL)removeSpaceBefore;
- (void)setConfidenceScore:(int)arg1;
- (void)setEndTime:(double)arg1;
- (void)setRemoveSpaceAfter:(BOOL)arg1;
- (void)setRemoveSpaceBefore:(BOOL)arg1;
- (void)setStartTime:(double)arg1;
- (void)setText:(id)arg1;
- (double)startTime;
- (id)text;

@end
