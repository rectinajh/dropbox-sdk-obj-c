///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

@class DBAUTHRoutes;
@class DBFILESRoutes;
@class DBSHARINGRoutes;
@class DBUSERSRoutes;

@protocol DBTransportClient;

///
/// Base client object that contains an instance field for each namespace, each
/// of which contains references to all routes within that namespace.
/// Fully-implemented API clients will inherit this class.
///
@interface DBUserBaseClient : NSObject

@property (nonatomic, readonly) id<DBTransportClient> _Nonnull transportClient;

/// Routes within the `auth` namespace.
@property (nonatomic, readonly) DBAUTHRoutes * _Nonnull authRoutes;

/// Routes within the `files` namespace.
@property (nonatomic, readonly) DBFILESRoutes * _Nonnull filesRoutes;

/// Routes within the `sharing` namespace.
@property (nonatomic, readonly) DBSHARINGRoutes * _Nonnull sharingRoutes;

/// Routes within the `users` namespace.
@property (nonatomic, readonly) DBUSERSRoutes * _Nonnull usersRoutes;

/// Initializes the `DBUserBaseClient` object with a networking client.
- (nonnull instancetype)initWithTransportClient:(id<DBTransportClient> _Nonnull)client;

@end
