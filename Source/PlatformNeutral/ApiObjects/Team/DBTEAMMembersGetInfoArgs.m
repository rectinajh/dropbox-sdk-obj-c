///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMMembersGetInfoArgs.h"
#import "DBTEAMUserSelectorArg.h"

#pragma mark - API Object

@implementation DBTEAMMembersGetInfoArgs 

#pragma mark - Constructors

- (instancetype)initWithMembers:(NSArray<DBTEAMUserSelectorArg *> *)members {
    [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](members);

    self = [super init];
    if (self) {
        _members = members;
    }
    return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
    return [DBTEAMMembersGetInfoArgsSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBTEAMMembersGetInfoArgsSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
    return [[DBTEAMMembersGetInfoArgsSerializer serialize:self] description];
}

@end


#pragma mark - Serializer Object

@implementation DBTEAMMembersGetInfoArgsSerializer 

+ (NSDictionary *)serialize:(DBTEAMMembersGetInfoArgs *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"members"] = [DBArraySerializer serialize:valueObj.members withBlock:^id(id elem) { return [DBTEAMUserSelectorArgSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBTEAMMembersGetInfoArgs *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBTEAMUserSelectorArg *> *members = [DBArraySerializer deserialize:valueDict[@"members"] withBlock:^id(id elem) { return [DBTEAMUserSelectorArgSerializer deserialize:elem]; }];

    return [[DBTEAMMembersGetInfoArgs alloc] initWithMembers:members];
}

@end