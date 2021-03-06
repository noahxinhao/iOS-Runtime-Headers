/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRemoteService : SLService <NSSecureCoding> {
    NSString * _accountTypeIdentifier;
    UIImage * _activityImage;
    NSString * _activityImageName;
    NSString * _activityViewIconResourceName;
    BOOL  _addDeviceClassToRequest;
    int  _authenticationStyle;
    NSString * _localizedServiceName;
    int  _maximumImageCount;
    int  _maximumImageDataSize;
    int  _maximumURLCount;
    int  _maximumVideoCount;
    int  _maximumVideoDataSize;
    int  _maximumVideoTimeLimit;
    NSBundle * _serviceBundle;
    NSURL * _serviceBundleURL;
    BOOL  _serviceRegionTargetIsChina;
    NSString * _serviceTypeIdentifier;
    NSSet * _supportedImageAssetURLSchemes;
    NSSet * _supportedVideoAssetURLSchemes;
}

@property (retain) NSString *accountTypeIdentifier;
@property (retain) NSString *activityImageName;
@property (retain) NSString *activityViewIconResourceName;
@property BOOL addDeviceClassToRequest;
@property int authenticationStyle;
@property (retain) NSString *localizedServiceName;
@property int maximumImageCount;
@property int maximumImageDataSize;
@property int maximumURLCount;
@property (nonatomic) int maximumVideoCount;
@property int maximumVideoDataSize;
@property int maximumVideoTimeLimit;
@property (readonly) NSBundle *serviceBundle;
@property (retain) NSURL *serviceBundleURL;
@property BOOL serviceRegionTargetIsChina;
@property (retain) NSString *serviceTypeIdentifier;
@property (retain) NSSet *supportedImageAssetURLSchemes;
@property (retain) NSSet *supportedVideoAssetURLSchemes;

+ (id)_cachedServiceWithType:(id)arg1;
+ (id)_cachedServices;
+ (id)remoteServiceForTypeIdentifier:(id)arg1;
+ (id)remoteServices;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;
- (int)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (id)_authenticationStyleIdentifierMappings;
- (id)_encodableStringProperties;
- (BOOL)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (BOOL)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_requiredInfoDictKeys;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
- (id)accountTypeIdentifier;
- (id)activityImage;
- (id)activityImageName;
- (id)activityTitle;
- (id)activityViewIconResourceName;
- (BOOL)addDeviceClassToRequest;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (int)authenticationStyle;
- (id)composeViewController;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)infoDictHasRequiredKeys:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;
- (id)integerPropertyKeyMappings;
- (BOOL)isFirstClassService;
- (id)localizedServiceName;
- (int)maximumImageCount;
- (int)maximumImageDataSize;
- (int)maximumURLCount;
- (int)maximumVideoCount;
- (int)maximumVideoDataSize;
- (int)maximumVideoTimeLimit;
- (id)serviceBundle;
- (id)serviceBundleURL;
- (BOOL)serviceRegionTargetIsChina;
- (id)serviceType;
- (id)serviceTypeIdentifier;
- (void)setAccountTypeIdentifier:(id)arg1;
- (void)setActivityImageName:(id)arg1;
- (void)setActivityViewIconResourceName:(id)arg1;
- (void)setAddDeviceClassToRequest:(BOOL)arg1;
- (void)setAuthenticationStyle:(int)arg1;
- (void)setLocalizedServiceName:(id)arg1;
- (void)setMaximumImageCount:(int)arg1;
- (void)setMaximumImageDataSize:(int)arg1;
- (void)setMaximumURLCount:(int)arg1;
- (void)setMaximumVideoCount:(int)arg1;
- (void)setMaximumVideoDataSize:(int)arg1;
- (void)setMaximumVideoTimeLimit:(int)arg1;
- (void)setServiceBundleURL:(id)arg1;
- (void)setServiceRegionTargetIsChina:(BOOL)arg1;
- (void)setServiceTypeIdentifier:(id)arg1;
- (void)setSupportedImageAssetURLSchemes:(id)arg1;
- (void)setSupportedVideoAssetURLSchemes:(id)arg1;
- (id)supportedImageAssetURLSchemes;
- (id)supportedVideoAssetURLSchemes;
- (BOOL)supportsImageURL:(id)arg1;
- (BOOL)supportsVideoURL:(id)arg1;

@end
