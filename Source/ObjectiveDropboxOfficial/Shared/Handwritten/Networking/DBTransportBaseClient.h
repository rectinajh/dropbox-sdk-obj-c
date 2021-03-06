///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import <Foundation/Foundation.h>

@class DBRequestError;
@class DBRoute;

@interface DBTransportBaseClient : NSObject

- (nonnull instancetype)initWithAccessToken:(NSString * _Nonnull)accessToken userAgent:(NSString * _Nonnull)userAgent;

- (nonnull instancetype)initWithAccessToken:(NSString * _Nullable)accessToken
                                 selectUser:(NSString * _Nullable)selectUser
                                  userAgent:(NSString * _Nullable)userAgent
                                     appKey:(NSString * _Nullable)appKey
                                  appSecret:(NSString * _Nullable)appSecret;

+ (DBRequestError * _Nullable)dBRequestErrorWithErrorData:(NSData * _Nullable)errorData
                                             clientError:(NSError * _Nullable)clientError
                                              statusCode:(int)statusCode
                                             httpHeaders:(NSDictionary * _Nullable)httpHeaders;
+ (id _Nullable)routeErrorWithRouteData:(DBRoute * _Nullable)route
                                   data:(NSData * _Nullable)data
                             statusCode:(int)statusCode;

+ (id _Nullable)routeResultWithRouteData:(DBRoute * _Nullable)route
                                    data:(NSData * _Nullable)data
                      serializationError:(NSError * _Nullable * _Nullable)serializationError;

+ (BOOL)statusCodeIsRouteError:(int)statusCode;

+ (NSString * _Nullable)caseInsensitiveLookup:(NSString * _Nullable)lookupKey
                                  dictionary:(NSDictionary<id, id> * _Nullable)dictionary;

+ (NSString * _Nonnull)sdkVersion;

+ (NSString * _Nonnull)defaultUserAgent;

/// The Dropbox OAuth2 access token used to make requests.
@property (nonatomic, copy) NSString * _Nullable accessToken;

@property (nonatomic, readonly, copy) NSString * _Nonnull userAgent;

@property (nonatomic, readonly, copy) NSString * _Nullable appKey;

@property (nonatomic, readonly, copy) NSString * _Nullable appSecret;

/// An additional authentication header field used when a team app with
/// the appropriate permissions "performs" user actions on behalf of
/// a team member.
@property (nonatomic, readonly, copy) NSString * _Nullable selectUser;

@end
