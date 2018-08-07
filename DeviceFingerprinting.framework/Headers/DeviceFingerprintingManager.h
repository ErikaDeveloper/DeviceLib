//
//  DeviceFingerprintingManager.h
//  DeviceFingerprinting
//
//  Created by xuye on 2018/7/3.
//  Copyright © 2018年 xuye. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface DeviceFingerprintingManager : NSObject
+ (instancetype)sharedDeviceFingerprintingManager;
- (void)initFingerprintingWithParam:(NSMutableDictionary *)param;

/**
  *
  *  deviceId    设备 ID
  *  cpuArchitecture    CPU 类型，例如:X86、 i386、 X86_64、ARMV6、 ARMV7、ARMV8、 ARM64
  *  cpuProcessorNum    处理器个数
  *  diskTotalSpace    磁盘总量
  *  diskFreeSpace    磁盘空闲量
  *  diskUsedSpace    磁盘已使用量
  *  memoryTotal    内存总量
  *  memoryUsed    内存已使用量
  *  systemUpTime    自上次重启后累计运 行小时数/上次重启时间
  *  deviceType    设备类型，例如 iphone、ipad、 ipod 等
  *  deviceName    设备名称
  *  deviceModel    设备型号 例如 iphone 6s
  *  os    系统名称
  *  osVersion    系统版本
  *  isEmulate    是否是模拟器
  *  resolution    分辨率 H x W
  *  screenW    屏幕宽度
  *  screenH    屏幕高度
  *  screenBrightness    屏幕亮度
  *  isJailBreak    是否越狱
  *  carrierAllowVoip    是否支持网络电话
  *  isOpenGPS    是否打开 GPS
  *  gatherDate    设备信息采集时间
  *  appName    App 名称
  *  appVersion    App 版本
  *  appPackageName    App Bundle Id 或包名
  *  src    数据来源
  *  isConnWifi    是否连接 wifi
  *  isConnCell    是否连接到蜂窝移动 网络
  *  internetType    网络类型 wifi/2G/3G/4G
  *  cellIp    蜂窝移动网络 ip 地址
  *  carrierOperator    运营商名称
  *  carrierMobileCountryCode    移动国家码
  *  carrierIsoCountryCode    国家代码表
  *  carrierMobileNetworkCode    移动网络码
  *  headphonesAttached    是否插入耳机
  *  hasBluetooth    是否支持蓝牙
  *  hasWiFi    是否有 WIFI 模块
  *  hasCellular    是否支持移动网络
  *  batteryLevel    电池电量
  *  isCharging    是否正在充电
  *  fullCharged    是否已经充满电
  *  country    国家
  *  language    语言
  *  timezone    时区
  *  gyroSersorInfo    陀螺仪传感器 (JsonArray)
  *  timestamp    采样时间戳
  *  x    x轴
  *  Y    y轴
  *  Z    z轴
  *  accelerometerSersorInfo    加速度传感器 (JsonArray)
  *  magnetometerSersorInfo    磁场传感器 (JsonArray)
  *  deviceMotionSersorInfo    设备运动传感器 (JsonArray)
  *  isAgency    是否有代理
  *
  */
@end
