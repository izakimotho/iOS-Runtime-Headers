/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSDictionary;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying> {
}

@property(copy) NSString * accountName;
@property(getter=isAccountNameEditable) BOOL accountNameEditable;
@property int accountScope;
@property BOOL canCreateNewAccount;
@property(copy) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount) BOOL demoAccount;
@property(copy) NSString * preferredITunesStoreClient;
@property int promptStyle;
@property(copy) NSDictionary * requestParameters;
@property(retain) NSNumber * requiredUniqueIdentifier;
@property BOOL shouldFollowAccountButtons;
@property(copy) NSDictionary * signupRequestParameters;
@property int tokenType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(int)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(int)arg1;

@end