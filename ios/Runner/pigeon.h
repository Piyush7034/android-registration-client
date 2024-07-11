// Autogenerated from Pigeon (v10.1.6), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class DashBoardData;
@class UpdatedTimeData;

@interface DashBoardData : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUserId:(NSString *)userId
    userName:(NSString *)userName
    userStatus:(NSNumber *)userStatus
    userIsOnboarded:(NSNumber *)userIsOnboarded;
@property(nonatomic, copy) NSString * userId;
@property(nonatomic, copy) NSString * userName;
@property(nonatomic, strong) NSNumber * userStatus;
@property(nonatomic, strong) NSNumber * userIsOnboarded;
@end

@interface UpdatedTimeData : NSObject
+ (instancetype)makeWithUpdatedTime:(nullable NSString *)updatedTime;
@property(nonatomic, copy, nullable) NSString * updatedTime;
@end

/// The codec used by DashBoardApi.
NSObject<FlutterMessageCodec> *DashBoardApiGetCodec(void);

@protocol DashBoardApi
- (void)getDashBoardDetailsWithCompletion:(void (^)(NSArray<DashBoardData *> *_Nullable, FlutterError *_Nullable))completion;
- (void)getPacketUploadedDetailsWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getPacketUploadedPendingDetailsWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getCreatedPacketDetailsWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getSyncedPacketDetailsWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)getUpdatedTimeWithCompletion:(void (^)(UpdatedTimeData *_Nullable, FlutterError *_Nullable))completion;
@end

extern void DashBoardApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<DashBoardApi> *_Nullable api);

NS_ASSUME_NONNULL_END
