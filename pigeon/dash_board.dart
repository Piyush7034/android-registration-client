import 'package:pigeon/pigeon.dart';

class DashBoardData {
  final String userId;
  final String userName;
  final bool userStatus;
  final bool userIsOnboarded;

  DashBoardData({
    required this.userId,
    required this.userName,
    required this.userStatus,
    required this.userIsOnboarded,
  });
}

@HostApi()
abstract class DashBoardApi {
  @async
  List<DashBoardData> getDashBoardDetails();
  @async
  int getPacketUploadedDetails();
  @async
  int getPacketUploadedPendingDetails();
  @async
  int getPacketCreatedDetails();
  @async
  int getSyncedPacketDetails();
}