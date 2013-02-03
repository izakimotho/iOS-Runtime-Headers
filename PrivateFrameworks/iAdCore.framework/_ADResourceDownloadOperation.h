/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableData, NSURLConnection, NSURL;

@interface _ADResourceDownloadOperation : NSOperation {
    NSString *_HTTPMethod;
    NSString *_authenticationUserName;
    NSURLConnection *_conn;
    NSMutableData *_data;
    id _errorBlock;
    BOOL _finished;
    BOOL _shouldTrackTiming;
    double _startTime;
    id _successBlock;
    BOOL _supportsAuthentication;
    double _totalTime;
    NSURL *_url;
}

@property(retain) NSString * HTTPMethod;
@property(retain) NSString * authenticationUserName;
@property(retain) NSURLConnection * conn;
@property(retain) NSMutableData * data;
@property(copy) id errorBlock;
@property BOOL finished;
@property BOOL shouldTrackTiming;
@property double startTime;
@property(copy) id successBlock;
@property BOOL supportsAuthentication;
@property double totalTime;
@property(retain) NSURL * url;

- (id)HTTPMethod;
- (void)_finish;
- (id)authenticationUserName;
- (void)cancel;
- (id)conn;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)errorBlock;
- (BOOL)finished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setData:(id)arg1;
- (void)setErrorBlock:(id)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setShouldTrackTiming:(BOOL)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSuccessBlock:(id)arg1;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (void)setTotalTime:(double)arg1;
- (void)setUrl:(id)arg1;
- (BOOL)shouldTrackTiming;
- (void)start;
- (double)startTime;
- (id)successBlock;
- (BOOL)supportsAuthentication;
- (double)totalTime;
- (id)url;

@end