///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGMountFolderArg;

#pragma mark - API Object

///
/// The `MountFolderArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGMountFolderArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The ID of the shared folder to mount.
@property (nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedFolderId The ID of the shared folder to mount.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MountFolderArg` struct.
///
@interface DBSHARINGMountFolderArgSerializer : NSObject

///
/// Serializes `DBSHARINGMountFolderArg` instances.
///
/// @param instance An instance of the `DBSHARINGMountFolderArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGMountFolderArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGMountFolderArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGMountFolderArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGMountFolderArg` API object.
///
/// @return An instantiation of the `DBSHARINGMountFolderArg` object.
///
+ (DBSHARINGMountFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
