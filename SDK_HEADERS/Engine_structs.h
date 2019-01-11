/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Engine_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, dano20zombie
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Engine.Actor.RepArrayData
// 0x000C
struct FRepArrayData
{
	class UProperty*                                   Property;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ArrayIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FVector                                     LinVel;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     AngVel;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned char                                      bNewData;                                         		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0044
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ContactPenetration;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     ContactVelocity[ 0x2 ];                           		// 0x001C (0x0018) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial[ 0x2 ];                              		// 0x0034 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     TotalNormalForceVector;                           		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     TotalFrictionForceVector;                         		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ReFireDelay;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FGuid                                       Guid;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FGuid                                       Guid;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedBaseLocation;                               		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CachedBaseRotation;                               		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedTransPosition;                              		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.RelevantDelayInfo
// 0x0060
struct FRelevantDelayInfo
{
	struct FString                                     PropertyName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              RelevantDelayTime;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FrontSideCheckDelayDelta;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FMap_Mirror                                 LastUpdateInfo;                                   		// 0x0018 (0x0048) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x002C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Item;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LevelIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0064
struct FImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     RayDir;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartTrace;                                       		// 0x002C (0x000C) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0038 (0x002C) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0034
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                QueuedActivations;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisabled : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	class USequenceOp*                                 LinkedOp;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivateDelay;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bMoving : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumChannels;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    ChannelWeights;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Actor.TimerData
// 0x0020
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPaused : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       FuncName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              Rate;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TimerTimeDilation;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	class UObject*                                     TimerObj;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0034
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Ping;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                StatsID;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FKeyValuePair >                     PlayerInfo;                                       		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0078
struct FServerResponseLine
{
	int                                                ServerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     IP;                                               		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                QueryPort;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x001C (0x0010) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x002C (0x0010) [0x0000000000000000]              
	struct FString                                     GameType;                                         		// 0x003C (0x0010) [0x0000000000000000]              
	int                                                CurrentPlayers;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MaxPlayers;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Ping;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	TArray< struct FKeyValuePair >                     ServerInfo;                                       		// 0x0058 (0x0010) [0x0000000000000000]              
	TArray< struct FPlayerResponseLine >               PlayerInfo;                                       		// 0x0068 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Value1;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Value2;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0015
struct FSettingsProperty
{
	int                                                PropertyId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0004 (0x0010) [0x0000000000000000]              
	unsigned char                                      AdvertisementType;                                		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsWildcard : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x002C
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x0010) [0x0000000000000000]              
	TArray< struct FStringIdToStringMapping >          ValueMappings;                                    		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x004C
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     ColumnHeaderText;                                 		// 0x000C (0x0010) [0x0000000000000000]              
	unsigned char                                      MappingType;                                      		// 0x001C (0x0001) [0x0000000000000000]              
	TArray< struct FIdToStringMapping >                ValueMappings;                                    		// 0x0020 (0x0010) [0x0000000000000000]              
	TArray< struct FSettingsData >                     PredefinedValues;                                 		// 0x0030 (0x0010) [0x0000000000000000]              
	float                                              MinVal;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              MaxVal;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              RangeIncrement;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0008
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C(0x0014 - 0x0008)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Trustworthiness;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0038
struct FNamedSession
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    SessionInfo;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	TArray< struct FOnlineRegistrant >                 Registrants;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FOnlineArbitrationRegistrant >      ArbitrationRegistrants;                           		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     InterfaceObject;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageFlags
// 0x0004
struct FSocialPostImageFlags
{
	unsigned long                                      bIsUserGeneratedImage : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsGameGeneratedImage : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsAchievementImage : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsMediaImage : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostImageInfo
// 0x0044
struct FSocialPostImageInfo
{
	struct FSocialPostImageFlags                       Flags;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MessageText;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     TitleText;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     PictureCaption;                                   		// 0x0024 (0x0010) [0x0000000000000000]              
	struct FString                                     PictureDescription;                               		// 0x0034 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostLinkInfo
// 0x0020(0x0064 - 0x0044)
struct FSocialPostLinkInfo : FSocialPostImageInfo
{
	struct FString                                     TitleURL;                                         		// 0x0044 (0x0010) [0x0000000000000000]              
	struct FString                                     PictureURL;                                       		// 0x0054 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.SocialPostPrivileges
// 0x0004
struct FSocialPostPrivileges
{
	unsigned long                                      bCanPostImage : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanPostLink : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x003C
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	unsigned char                                      LocalUserNum;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x0019 (0x0001) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsLocal : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsInPartyVoice : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsInGameSession : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FQWord                                      SessionId;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Data2;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Data3;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Data4;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0048
struct FAchievementDetails
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     AchievementName;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     HowTo;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
	class USurface*                                    Image;                                            		// 0x0034 (0x0008) [0x0000000000000000]              
	unsigned char                                      MonthEarned;                                      		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      DayEarned;                                        		// 0x003D (0x0001) [0x0000000000000000]              
	unsigned char                                      YearEarned;                                       		// 0x003E (0x0001) [0x0000000000000000]              
	unsigned char                                      DayOfWeekEarned;                                  		// 0x003F (0x0001) [0x0000000000000000]              
	int                                                GamerPoints;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSecret : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasAchievedOnline : 1;                           		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasAchievedOffline : 1;                          		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0014
struct FCommunityContentMetadata
{
	int                                                ContentType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSettingsProperty >                 MetadataItems;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0038
struct FCommunityContentFile
{
	int                                                ContentId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FileId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ContentType;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                FileSize;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                Owner;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                DownloadCount;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AverageRating;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RatingCount;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LastRatingGiven;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalFilePath;                                    		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x0024
struct FTitleFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      AsyncState;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            Data;                                             		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.EmsFile
// 0x0034
struct FEmsFile
{
	struct FString                                     Hash;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     Filename;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	int                                                FileSize;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     InterfaceClassName;                               		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x002C
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SendingPlayerNick;                                		// 0x0008 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsFriendInvite : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsGameInvite : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasAccepted : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasDenied : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0010
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastNotificationTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasTalking : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasNetworkedVoice : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsRecognizingSpeech : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasTalking : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsTalking : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsRegistered : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0010
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TeamID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0018
struct FSpeechRecognizedWord
{
	int                                                WordId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WordText;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	float                                              Confidence;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0060
struct FOnlineContent
{
	unsigned char                                      ContentType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      UserIndex;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsCorrupt : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LicenseMask;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     FriendlyName;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     Filename;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     ContentPath;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ContentPackages;                                  		// 0x0040 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ContentFiles;                                     		// 0x0050 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004(0x0064 - 0x0060)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int                                                TitleId;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0038
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      SessionId;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     PresenceInfo;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	unsigned char                                      FriendState;                                      		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsOnline : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsPlayingThisGame : 1;                           		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsJoinable : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHasVoiceSupport : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHaveInvited : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasInvitedYou : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsFriend : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineAuthInterface.BaseAuthSession
// 0x0010
struct FBaseAuthSession
{
	int                                                EndPointIP;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EndPointPort;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                EndPointUID;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.AccessControl.PendingClientAuth
// 0x0018
struct FPendingClientAuth
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              AuthTimestamp;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AuthRetryCount;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AccessControl.ServerAuthRetry
// 0x000C
struct FServerAuthRetry
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                AuthRetryCount;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineAuthInterface.AuthSession
// 0x0008(0x0018 - 0x0010)
struct FAuthSession : FBaseAuthSession
{
	unsigned char                                      AuthStatus;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                AuthTicketUID;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineAuthInterface.LocalAuthSession
// 0x0004(0x0014 - 0x0010)
struct FLocalAuthSession : FBaseAuthSession
{
	int                                                SessionUID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                     		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FMatrix                                     LightToWorld;                                     		// 0x0040 (0x0040) [0x0000000000000000]              
	struct FBox                                        LightSpaceImportanceBounds;                       		// 0x0080 (0x001C) [0x0000000000000000]              
	int                                                ShadowMapSizeX;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                ShadowMapSizeY;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              IndirectLightingSaturation;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ShadowExponent;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004(0x0010 - 0x000C)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004(0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	unsigned long                                      bUseTwoSidedLighting : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShadowIndirectOnly : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseEmissiveForStaticLighting : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              EmissiveLightFalloffExponent;                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EmissiveLightExplicitInfluenceRadius;             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EmissiveBoost;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DiffuseBoost;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SpecularBoost;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FullyOccludedSamplesFraction;                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	unsigned long                                      bDebugMode : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStatsEnabled : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGatherBSPSurfacesAcrossComponents : 1;           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              CoplanarTolerance;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDeterministicLighting : 1;                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseImmediateImport : 1;                          		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bImmediateProcessMappings : 1;                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSortMappings : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDumpBinaryFiles : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugMaterials : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPadMappings : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDebugPaddings : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOnlyCalcDebugTexelMappings : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bUseRandomColors : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bColorBordersGreen : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bColorByExecutionTime : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000800] 
	float                                              ExecutionTimeDivisor;                             		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned long                                      bDistributionEnabled : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForceContentExport : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0020
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FInterpCurveVector                          Curve;                                            		// 0x0008 (0x0014) [0x0000000000000000]              
	float                                              MaxCurveTime;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                MaterialIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPrimitiveMaterialRef >             AffectedMaterialRefs;                             		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FPostProcessMaterialRef >           AffectedPPChainMaterialRefs;                      		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned long                                      bMature : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bManualWordWrap : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSingleLine : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Nothing : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Pawn : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      Vehicle : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      Water : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      GameplayPhysics : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      EffectPhysics : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      Untitled1 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      Untitled2 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      Untitled3 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      Untitled4 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      FluidDrain : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      FracturedMeshPart : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      BlockingVolume : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      DeadPawn : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      Clothing : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      ClothingCollision : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BSP : 1;                                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Static : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      Dynamic : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      CompositeDynamic : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      Skybox : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      Unnamed : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      Unnamed01 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      Unnamed02 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      Unnamed03 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      Unnamed04 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      Unnamed05 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      Cinematic : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      Cinematic01 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      Cinematic02 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      Cinematic03 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      Cinematic04 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      Cinematic05 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      Cinematic06 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      Cinematic07 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      Cinematic08 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      Cinematic09 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      Gameplay : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      Gameplay01 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      Gameplay02 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      Gameplay03 : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      Crowd : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
};

// ScriptStruct Engine.PrimitiveComponent.OutlineProperty
// 0x003C
struct FOutlineProperty
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              IntenseCycleTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ColorIntense;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              WidthMaxDistance;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              CullDistance;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     OverrideMaterialName;                             		// 0x001C (0x0010) [0x0000000000000000]              
	class UMaterialInterface*                          OverrideMaterial;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	unsigned char                                      Width;                                            		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      MinWidth;                                         		// 0x0035 (0x0001) [0x0000000000000000]              
	unsigned char                                      BlendMode;                                        		// 0x0036 (0x0001) [0x0000000000000000]              
	unsigned long                                      bUseOriginalMaterial : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuppressOtherOutline : 1;                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DrawOnlyHidden : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      DisableDepthTest : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      EnableDepthWrite : 1;                             		// 0x0038 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverlaySurface : 1;                              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDisableForeground : 1;                           		// 0x0038 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTranslucent : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDistortion : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOneLayerDistortionRelevance : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLit : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bUsesSceneColor : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Destination;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class AController*                                 Controller;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x0010 (0x001C) [0x0000000000000000]              
	float                                              AspectRatio;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x0004 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BlendFunction;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              BlendExp;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockOutgoing : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	TArray< class UTexture* >                          LUTTextures;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< float >                                    LUTWeights;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned long                                      bHasChanged : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PostProcessVolume.MobileColorGradingParams
// 0x003C
struct FMobileColorGradingParams
{
	float                                              TransitionTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Blend;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                HighLights;                                       		// 0x000C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                MidTones;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                Shadows;                                          		// 0x002C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.PostProcessVolume.MobilePostProcessSettings
// 0x0038
struct FMobilePostProcessSettings
{
	unsigned long                                      bOverride_Mobile_BlurAmount : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverride_Mobile_TransitionTime : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverride_Mobile_Bloom_Scale : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride_Mobile_Bloom_Threshold : 1;             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverride_Mobile_Bloom_Tint : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverride_Mobile_DOF_Distance : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverride_Mobile_DOF_MinRange : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverride_Mobile_DOF_MaxRange : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOverride_Mobile_DOF_NearBlurFactor : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bOverride_Mobile_DOF_FarBlurFactor : 1;           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              Mobile_BlurAmount;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Mobile_TransitionTime;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Mobile_Bloom_Scale;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Mobile_Bloom_Threshold;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                Mobile_Bloom_Tint;                                		// 0x0014 (0x0010) [0x0000000000000000]              
	float                                              Mobile_DOF_Distance;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Mobile_DOF_MinRange;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Mobile_DOF_MaxRange;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Mobile_DOF_NearBlurFactor;                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              Mobile_DOF_FarBlurFactor;                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0164
struct FPostProcessSettings
{
	unsigned long                                      bOverride_EnableBloom : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverride_EnableDOF : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverride_EnableMotionBlur : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride_EnableSceneEffect : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverride_AllowAmbientOcclusion : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverride_OverrideRimShaderColor : 1;             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverride_Bloom_Scale : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverride_Bloom_Threshold : 1;                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOverride_Bloom_Tint : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bOverride_Bloom_ScreenBlendThreshold : 1;         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bOverride_Bloom_InterpolationDuration : 1;        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bOverride_DOF_FalloffExponent : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bOverride_DOF_BlurKernelSize : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bOverride_DOF_BlurBloomKernelSize : 1;            		// 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bOverride_DOF_MaxNearBlurAmount : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bOverride_DOF_MinBlurAmount : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bOverride_DOF_MaxFarBlurAmount : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bOverride_DOF_FocusType : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bOverride_DOF_FocusInnerRadius : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bOverride_DOF_FocusDistance : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bOverride_DOF_FocusPosition : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bOverride_DOF_InterpolationDuration : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bOverride_DOF_BokehTexture : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bOverride_MotionBlur_MaxVelocity : 1;             		// 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bOverride_MotionBlur_Amount : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bOverride_MotionBlur_FullMotionBlur : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bOverride_MotionBlur_CameraRotationThreshold : 1; 		// 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bOverride_MotionBlur_CameraTranslationThreshold : 1;		// 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bOverride_MotionBlur_InterpolationDuration : 1;   		// 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bOverride_Scene_Desaturation : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bOverride_Scene_Colorize : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bOverride_Scene_TonemapperScale : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      bOverride_Scene_ImageGrainScale : 1;              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverride_Scene_HighLights : 1;                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverride_Scene_MidTones : 1;                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride_Scene_Shadows : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverride_Scene_InterpolationDuration : 1;        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverride_Scene_ColorGradingLUT : 1;              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bOverride_RimShader_Color : 1;                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverride_RimShader_InterpolationDuration : 1;    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bOverride_MobileColorGrading : 1;                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bEnableBloom : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bEnableMotionBlur : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bEnableSceneEffect : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bOverrideRimShaderColor : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00004000] 
	float                                              Bloom_Scale;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Bloom_Threshold;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      Bloom_Tint;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Bloom_ScreenBlendThreshold;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Bloom_InterpolationDuration;                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DOF_BlurBloomKernelSize;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DOF_FalloffExponent;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DOF_BlurKernelSize;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              DOF_MinBlurAmount;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              DOF_MaxFarBlurAmount;                             		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned char                                      DOF_FocusType;                                    		// 0x0034 (0x0001) [0x0000000000000000]              
	float                                              DOF_FocusInnerRadius;                             		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              DOF_FocusDistance;                                		// 0x003C (0x0004) [0x0000000000000000]              
	struct FVector                                     DOF_FocusPosition;                                		// 0x0040 (0x000C) [0x0000000000000000]              
	float                                              DOF_InterpolationDuration;                        		// 0x004C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DOF_BokehTexture;                                 		// 0x0050 (0x0008) [0x0000000000000000]              
	float                                              MotionBlur_MaxVelocity;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              MotionBlur_Amount;                                		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MotionBlur_CameraRotationThreshold;               		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              MotionBlur_CameraTranslationThreshold;            		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              MotionBlur_InterpolationDuration;                 		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              Scene_Desaturation;                               		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FVector                                     Scene_Colorize;                                   		// 0x0074 (0x000C) [0x0000000000000000]              
	float                                              Scene_TonemapperScale;                            		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              Scene_ImageGrainScale;                            		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FVector                                     Scene_HighLights;                                 		// 0x0088 (0x000C) [0x0000000000000000]              
	struct FVector                                     Scene_MidTones;                                   		// 0x0094 (0x000C) [0x0000000000000000]              
	struct FVector                                     Scene_Shadows;                                    		// 0x00A0 (0x000C) [0x0000000000000000]              
	float                                              Scene_InterpolationDuration;                      		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FLinearColor                                RimShader_Color;                                  		// 0x00B0 (0x0010) [0x0000000000000000]              
	float                                              RimShader_InterpolationDuration;                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTexture*                                    ColorGrading_LookupTable;                         		// 0x00C4 (0x0008) [0x0000000000000000]              
	struct FLUTBlender                                 ColorGradingLUT;                                  		// 0x00CC (0x0024) [0x0000000000000000]              
	struct FMobileColorGradingParams                   MobileColorGrading;                               		// 0x00F0 (0x003C) [0x0000000000000000]              
	struct FMobilePostProcessSettings                  MobilePostProcess;                                		// 0x012C (0x0038) [0x0000000000000000]              
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	unsigned long                                      bAllowAmbientOcclusion : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowDominantWholeSceneDynamicShadows : 1;       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowMotionBlurSkinning : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAllowTemporalAA : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowLightShafts : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                InputLinkIdx;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0038
struct FSeqOpOutputLink
{
	TArray< struct FSeqOpOutputInputLink >             Links;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned long                                      bHasImpulse : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabledPIE : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	class USequenceOp*                                 LinkedOp;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              ActivateDelay;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoving : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsActivated : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0054
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class USequenceVariable* >                 LinkedVariables;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FName                                       LinkVar;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWriteable : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSequenceNeverReadsOnlyWritesToThisVar : 1;       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifiesLinkedObject : 1;                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHidden : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                MinVars;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MaxVars;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                DrawX;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	class UProperty*                                   CachedProperty;                                   		// 0x0048 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAllowAnyType : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoving : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0030
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class USequenceEvent* >                    LinkedEvents;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     LinkDesc;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	int                                                DrawX;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoving : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClampedMax : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampedMin : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      ComparisonType;                                   		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	TArray< struct FOnlineGameSearchParameter >        OrParams;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectPropertyName;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      SortType;                                         		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	TArray< struct FOnlineGameSearchORClause >         OrClauses;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FOnlineGameSearchSortClause >       SortClauses;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0034
struct FOverrideSkill
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	TArray< struct FDouble >                           Mus;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	TArray< struct FDouble >                           Sigmas;                                           		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ObjectPropertyValue;                              		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    PlatformData;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0054
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     SrcActorOffset;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     SrcActorDesiredOffset;                            		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FString                                     DebugText;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAbsoluteLocation : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKeepAttachedToActor : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     OrigActorLocation;                                		// 0x0040 (0x000C) [0x0000000000000000]              
	class UFont*                                       Font;                                             		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[ 0x2 ];                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x001C
struct FAnimBlendChild
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimNode*                                   Anim;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BlendWeight;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMirrorSkeleton : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsAdditive : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x001C
struct FSkelMeshComponentLODInfo
{
	TArray< unsigned long >                            HiddenMaterials;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlwaysUseInstanceWeights : 1;                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      InstanceWeightUsage;                              		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                InstanceWeightIdx;                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0034
struct FAttachment
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeScale;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.SingleChannelSound
// 0x0018
struct FSingleChannelSound
{
	class AActor*                                      SourceActor;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             AudioComponent;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SoundCue;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.ConnectedPeerInfo
// 0x0010
struct FConnectedPeerInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bLostConnectionToHost : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      newPhysics;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     NewVel;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	class AActor*                                      NewBase;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FVector                                     NewFloor;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	unsigned char                                      bAckGoodMove;                                     		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	struct FString                                     MessageText;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     AppendedText;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	class UFont*                                       MessageFont;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MessageFontScale;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MessageOffset;                                    		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FColor                                      MessageColor;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              MessageEndTime;                                   		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MessageLife;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0050
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     StringMessage;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Switch;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              EndOfLife;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              PosY;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FColor                                      DrawColor;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                FontSize;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	class UFont*                                       StringFont;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	float                                              DX;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              DY;                                               		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      Drawn : 1;                                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Count;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	class UObject*                                     OptionalObject;                                   		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumMapListCyclesDone;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeDelta;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0048
struct FInputMatchRequest
{
	TArray< struct FInputEntry >                       Inputs;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	class AActor*                                      MatchActor;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       MatchFuncName;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             MatchDelegate;                                    		// 0x0020 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0024 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       FailedFuncName;                                   		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       RequestName;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	int                                                MatchIdx;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              LastMatchTime;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0014
struct FDebugNavCost
{
	struct FString                                     Desc;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0039
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                      		// 0x0000 (0x001C) [0x0000000000000000]              
	struct FVector                                     BoxCenter;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FPointer                                    OctreeNode;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	class UObject*                                     Owner;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned char                                      OwnerType;                                        		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationPoint.CheckpointRecord
// 0x0004
struct ANavigationPoint_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlocked : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000000]              
	float                                              X;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoRBCollision : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPerPolyShape : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                               		// 0x0000 (0x0040) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Length;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoRBCollision : 1;                               		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPerPolyShape : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x007C
struct FKConvexElem
{
	TArray< struct FVector >                           VertexData;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FPlane >                            PermutedVertexData;                               		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< int >                                      FaceTriData;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	TArray< struct FVector >                           EdgeDirections;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	TArray< struct FVector >                           FaceNormalDirections;                             		// 0x0040 (0x0010) [0x0000000000000000]              
	TArray< struct FPlane >                            FacePlaneData;                                    		// 0x0050 (0x0010) [0x0000000000000000]              
	struct FBox                                        ElemBox;                                          		// 0x0060 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x004C
struct FKAggregateGeom
{
	TArray< struct FKSphereElem >                      SphereElems;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FKBoxElem >                         BoxElems;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< struct FKSphylElem >                       SphylElems;                                       		// 0x0020 (0x0010) [0x0000000000000000]              
	TArray< struct FKConvexElem >                      ConvexElems;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FPointer                                    RenderInfo;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSkipCloseAndParallelChecks : 1;                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0024
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                      		// 0x0000 (0x0018) [0x0000000000000000]              
	int                                                PolyId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CachedPoly;                                       		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CrouchHeight;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      PathColor;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x0010
struct FKCachedConvexData_Mirror
{
	TArray< int >                                      CachedConvexElements;                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SelectionIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ReverbVolume.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned long                                      bIsWorldInfo : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExteriorVolume;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ExteriorTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ExteriorLPF;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ExteriorLPFTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              InteriorVolume;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              InteriorTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              InteriorLPF;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              InteriorLPFTime;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x0010
struct FReverbSettings
{
	unsigned long                                      bApplyReverb : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ReverbType;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0014
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              FloatParam;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundNodeWave*                              WaveParam;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0044
struct FListener
{
	class APortalVolume*                               PortalVolume;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Up;                                               		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     Right;                                            		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     Front;                                            		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AudioDevice.AudioClassInfo
// 0x0010
struct FAudioClassInfo
{
	int                                                NumResident;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SizeResident;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumRealTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeRealTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NodePosY;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundNodeAmbient.AmbientSoundSlot
// 0x0014
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PitchScale;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VolumeScale;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AmbientSoundSimpleToggleable.CheckpointRecord
// 0x0004
struct AAmbientSoundSimpleToggleable_FCheckpointRecord
{
	unsigned long                                      bCurrentlyPlaying : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SplineAudioComponent.InterpPointOnSpline
// 0x0014
struct FInterpPointOnSpline
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              InVal;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Length;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SimpleSplineAudioComponent.SplineSoundSlot
// 0x0034
struct FSplineSoundSlot
{
	class USoundNodeWave*                              Wave;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PitchScale;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VolumeScale;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StartPoint;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EndPoint;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FDouble                                     LastUpdateTime;                                   		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              SourceInteriorVolume;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SourceInteriorLPF;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              CurrentInteriorVolume;                            		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              CurrentInteriorLPF;                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MultiCueSplineAudioComponent.MultiCueSplineSoundSlot
// 0x0034
struct FMultiCueSplineSoundSlot
{
	class USoundCue*                                   SoundCue;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PitchScale;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VolumeScale;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StartPoint;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EndPoint;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FDouble                                     LastUpdateTime;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              SourceInteriorVolume;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              SourceInteriorLPF;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CurrentInteriorVolume;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              CurrentInteriorLPF;                               		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlaying : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PlatformInterfaceBase.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray< struct FScriptDelegate >                   Delegates;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceData
// 0x002C
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                IntValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FloatValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     StringValue;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
	class UObject*                                     ObjectValue;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.PlatformInterfaceBase.PlatformInterfaceDelegateResult
// 0x0030
struct FPlatformInterfaceDelegateResult
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPlatformInterfaceData                      Data;                                             		// 0x0004 (0x002C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnalyticEventsBase.EventStringParam
// 0x0020
struct FEventStringParam
{
	struct FString                                     ParamName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     ParamValue;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray< unsigned char >                            ByteStream;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
	float                                              Mins[ 0x3 ];                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              Ranges[ 0x3 ];                                    		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    CurveWeights;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray< struct FQuat >                             RotKeys;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< float >                                    Times;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TargetStrength;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FTimeModifier >                     Modifiers;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0010
struct FAnimNotifyEvent
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNotify*                                 Notify;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0020
struct FRawAnimSequenceTrack
{
	TArray< struct FVector >                           PosKeys;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FQuat >                             RotKeys;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0020
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimNodeBlendBase*                          CachedNode;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UAnimNodeSlot*                               CachedSlotNode;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeightCheck;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                ChildIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                        		// 0x0000 (0x0020) [0x0000000000000000]              
	struct FWeightNodeRule                             SecondNode;                                       		// 0x0020 (0x0020) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              PerBoneWeightIncrease;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0050
struct FPerBoneMaskInfo
{
	TArray< struct FBranchInfo >                       BranchList;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              DesiredWeight;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BlendTimeToGo;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FWeightRule >                       WeightRuleList;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
	unsigned long                                      bWeightBasedOnNodeRules : 1;                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPendingBlend : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< float >                                    PerBoneWeights;                                   		// 0x002C (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            TransformReqBone;                                 		// 0x003C (0x0010) [0x0000000000000000]              
	int                                                TransformReqBoneIndex;                            		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                               		// 0x0010 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               LC;                                               		// 0x0030 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               LD;                                               		// 0x0050 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               CU;                                               		// 0x0070 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               CC;                                               		// 0x0090 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               CD;                                               		// 0x00B0 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               RU;                                               		// 0x00D0 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               RC;                                               		// 0x00F0 (0x0020) [0x0000000000000000]              
	struct FAimTransform                               RD;                                               		// 0x0110 (0x0020) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0070
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   HorizontalRange;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   VerticalRange;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	TArray< struct FAimComponent >                     AimComponents;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FName                                       AnimName_LU;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_LC;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_LD;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_CU;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_CC;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_CD;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_RU;                                      		// 0x0058 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_RC;                                      		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName_RD;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	TArray< float >                                    TargetPerBoneWeight;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       InitTargetStartBone;                              		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              InitPerBoneIncrease;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       OldStartBone;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              OldBoneIncrease;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            TargetRequiredBones;                              		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   PlayRateRange;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned long                                      bStillFrame : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      LoopCount;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
	float                                              LastPosition;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                AnimLinkupIndex;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0020
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FAnimInfo                                   AnimInfo;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	class UAnimNodeSequence*                           MasterNode;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       GroupName;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bFireSlaveNotifies : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RateScale;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              WarmupTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                                  		// 0x0004 (0x0018) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     ControlPointSample;                               		// 0x001C (0x0018) [0x0000000000000000]              
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                                 		// 0x0034 (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     FirstEdgeSample;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     ControlPointSample;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     SecondEdgeSample;                                 		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray< int >                                      BoneToTrackTable;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	TArray< class UAnimNodeSequence* >                 SeqNodes;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	class UAnimNodeSequence*                           SynchMaster;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           NotifyMaster;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       GroupName;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              RateScale;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              SynchPctPosition;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkelControlBase*                            ControlHead;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0028
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class USkeletalMesh* >                     PreviewSkelMesh;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< class UMorphTargetSet* >                   PreviewMorphSets;                                 		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.PreviewSocketEntryStruct
// 0x0020
struct FPreviewSocketEntryStruct
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     PreviewMesh;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	class UAnimSet*                                    AnimsetToUse;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       BaseSequenceName;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x001C
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPreviewSocketEntryStruct >         Attachments;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                RelatedPreviewAnimsetIndex;                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UAnimSet* >                          PreviewAnimSets;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	TArray< int >                                      LODMaterialMap;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageSpread;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ImpactDamage;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ImpactResistance;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DefaultImpactDamageDepth;                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DebrisLifetimeMax;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DebrisMaxSeparationMin;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DebrisMaxSeparationMax;                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FBox                                        ValidBounds;                                      		// 0x0010 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ImpactVelocityThreshold;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxChunkSpeed;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MassScaleExponent;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MassScale;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FractureImpulseScale;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	unsigned long                                      ACCUMULATE_DAMAGE : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ASSET_DEFINED_SUPPORT : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      WORLD_SUPPORT : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      DEBRIS_TIMEOUT : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DEBRIS_MAX_SEPARATION : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      CRUMBLE_SMALLEST_CHUNKS : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      ACCURATE_RAYCASTS : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      USE_VALID_BOUNDS : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      FORM_EXTENDED_STRUCTURES : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	unsigned long                                      TAKE_IMPACT_DAMAGE : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IGNORE_POSE_UPDATES : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IGNORE_RAYCAST_CALLBACKS : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IGNORE_CONTACT_CALLBACKS : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      USER_FLAG : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      USER_FLAG01 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      USER_FLAG02 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      USER_FLAG03 : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned char                                      ImpactDamageOverride;                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                                 		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FNxDestructibleDebrisParameters             DebrisParameters;                                 		// 0x0014 (0x002C) [0x0000000000000000]              
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                               		// 0x0040 (0x0018) [0x0000000000000000]              
	float                                              DamageThreshold;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              DamageToRadius;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              DamageCap;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              ForceToDamage;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              ImpactVelocityThreshold;                          		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              MaterialStrength;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              DamageToPercentDeformation;                       		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              DeformationPercentLimit;                          		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFormExtendedStructures : 1;                      		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SupportDepth;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                MinimumFractureDepth;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                DebrisDepth;                                      		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                EssentialDepth;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              DebrisLifetimeMin;                                		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              DebrisLifetimeMax;                                		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              DebrisMaxSeparationMin;                           		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              DebrisMaxSeparationMax;                           		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FBox                                        ValidBounds;                                      		// 0x009C (0x001C) [0x0000000000000000]              
	float                                              MaxChunkSpeed;                                    		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              MassScaleExponent;                                		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FNxDestructibleParametersFlag               Flags;                                            		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              GrbVolumeLimit;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              GrbParticleSpacing;                               		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              FractureImpulseScale;                             		// 0x00CC (0x0004) [0x0000000000000000]              
	TArray< struct FNxDestructibleDepthParameters >    DepthParameters;                                  		// 0x00D0 (0x0010) [0x0000000000000000]              
	int                                                DynamicChunksDominanceGroup;                      		// 0x00E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      UseDynamicChunksGroupsMask : 1;                   		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DynamicChunksChannel;                             		// 0x00E8 (0x0001) [0x0000000000000000]              
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;                 		// 0x00EC (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	unsigned char                                      OverrideMode;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDamageParameters                           Params;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AppNotificationsBase.NotificationMessageInfo
// 0x0020
struct FNotificationMessageInfo
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AppNotificationsBase.NotificationInfo
// 0x0028
struct FNotificationInfo
{
	unsigned long                                      bIsLocal : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     MessageBody;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                BadgeNumber;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FNotificationMessageInfo >          MessageInfo;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.AppNotificationsBase.LaunchNotificationInfo
// 0x002C
struct FLaunchNotificationInfo
{
	unsigned long                                      bWasLaunchedViaNotification : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FNotificationInfo                           Notification;                                     		// 0x0004 (0x0028) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Frequency;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      InitialOffset;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FFOscillator                                Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	struct FFOscillator                                Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FFOscillator                                Yaw;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	struct FFOscillator                                Roll;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CameraModifier_CameraShake.CameraShakeInstance
// 0x0090
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SourceShakeName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              OscillatorTimeRemaining;                          		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlendingIn : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlendingOut : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	float                                              FOVSinOffset;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	class UCameraAnimInst*                             AnimInst;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	unsigned char                                      PlaySpace;                                        		// 0x004C (0x0001) [0x0000000000000000]              
	struct FMatrix                                     UserPlaySpaceMatrix;                              		// 0x0050 (0x0040) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              U;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	unsigned long                                      TEXTUREGROUP_World : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      TEXTUREGROUP_WorldNormalMap : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      TEXTUREGROUP_WorldSpecular : 1;                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      TEXTUREGROUP_Character : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      TEXTUREGROUP_CharacterNormalMap : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      TEXTUREGROUP_CharacterSpecular : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      TEXTUREGROUP_Weapon : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      TEXTUREGROUP_WeaponNormalMap : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      TEXTUREGROUP_WeaponSpecular : 1;                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      TEXTUREGROUP_Vehicle : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      TEXTUREGROUP_VehicleNormalMap : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      TEXTUREGROUP_VehicleSpecular : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      TEXTUREGROUP_Cinematic : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      TEXTUREGROUP_Effects : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      TEXTUREGROUP_EffectsNotFiltered : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      TEXTUREGROUP_Skybox : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      TEXTUREGROUP_UI : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      TEXTUREGROUP_Lightmap : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      TEXTUREGROUP_RenderTarget : 1;                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      TEXTUREGROUP_MobileFlattened : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      TEXTUREGROUP_ProcBuilding_Face : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      TEXTUREGROUP_ProcBuilding_LightMap : 1;           		// 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      TEXTUREGROUP_Shadowmap : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      TEXTUREGROUP_ColorLookupTable : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      TEXTUREGROUP_Terrain_Heightmap : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      TEXTUREGROUP_Terrain_Weightmap : 1;               		// 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      TEXTUREGROUP_ImageBasedReflection : 1;            		// 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      TEXTUREGROUP_Bokeh : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      TEXTUREGROUP_WorldCubeMap : 1;                    		// 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x0048
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                             		// 0x0000 (0x0040) [0x0000000000000000]              
	int                                                SizeX;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x0018
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    Next;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FPointer                                    PrevLink;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned long                                      bEnableGlow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   GlowOuterRadius;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   GlowInnerRadius;                                  		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.MobileDistanceFieldParams
// 0x0054
struct FMobileDistanceFieldParams
{
	float                                              Gamma;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AlphaRefVal;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SmoothWidth;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      EnableShadow : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   ShadowDirection;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                ShadowColor;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
	float                                              ShadowSmoothWidth;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x002C (0x0024) [0x0000000000000000]              
	int                                                BlendMode;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned long                                      bClipText : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableShadow : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x0004 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   V0_UV;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   V1_Pos;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   V1_UV;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   V2_Pos;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   V2_UV;                                            		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x002C
struct FTextSizingParameters
{
	float                                              DrawX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DrawY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DrawXL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DrawYL;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Scaling;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	class UFont*                                       DrawFont;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   SpacingAdjust;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              ViewportHeight;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   LineExtent;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MinValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxValue;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              NudgeValue;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIntRange : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x002C
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      InputKeyState;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< struct FSeqOpOutputInputLink >             TriggeredOps;                                     		// 0x000C (0x0010) [0x0000000000000000]              
	TArray< class USequenceOp* >                       ActionsToExecute;                                 		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       InputKeyName;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              InputDelta;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DeltaTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAltPressed : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShiftPressed : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008(0x0028 - 0x0020)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AdjacentAxisInputKey;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEmulateButtonPress : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       InputKeyToEmulate[ 0x2 ];                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ModifierKeyFlags;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0024
struct FAutoCompleteNode
{
	int                                                IndexChar;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      AutoCompleteListIndices;                          		// 0x0004 (0x0010) [0x0000000000000000]              
	TArray< struct FPointer >                          ChildNodes;                                       		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0038
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                LtSlotIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RtSlotIdx;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LtToRtPct;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     Tangent;                                          		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	unsigned char                                      SrcType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SrcAction;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestType;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      DestAction;                                       		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0018
struct FFireLink
{
	TArray< unsigned char >                            Interactions;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                PackedProperties_CoverPairRefAndDynamicInfo;      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFallbackLink : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDynamicIndexInited : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.CoverLink.DynamicLinkInfo
// 0x0018
struct FDynamicLinkInfo
{
	struct FVector                                     LastTargetLocation;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSrcLocation;                                  		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0004(0x001C - 0x0018)
struct FCoverReference : FActorReference
{
	int                                                SlotIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x001D
struct FExposedLink
{
	struct FCoverReference                             TargetActor;                                      		// 0x0000 (0x001C) [0x0000000000000000]              
	unsigned char                                      ExposedScale;                                     		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.SlotMoveRef
// 0x0060
struct FSlotMoveRef
{
	struct FPolyReference                              Poly;                                             		// 0x0000 (0x0024) [0x0000000000000000]              
	struct FBasedPosition                              Dest;                                             		// 0x0024 (0x0038) [0x0000000000000000]              
	int                                                Direction;                                        		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x000C
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x0090
struct FCoverSlot
{
	class APawn*                                       SlotOwner;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              SlotValidAfterTime;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      ForceCoverType;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      CoverType;                                        		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      LocationDescription;                              		// 0x000E (0x0001) [0x0000000000000000]              
	struct FVector                                     LocationOffset;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotationOffset;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< unsigned char >                            Actions;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FFireLink >                         FireLinks;                                        		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< struct FFireLink >                         RejectedFireLinks;                                		// 0x0048 (0x0010) [0x0000000000000000]              
	TArray< int >                                      ExposedCoverPackedProperties;                     		// 0x0058 (0x0010) [0x0000000000000000]              
	int                                                TurnTargetPackedProperties;                       		// 0x0068 (0x0004) [0x0000000000000000]              
	TArray< struct FSlotMoveRef >                      SlipRefs;                                         		// 0x006C (0x0010) [0x0000000000000000]              
	TArray< struct FCoverInfo >                        OverlapClaimsList;                                		// 0x007C (0x0010) [0x0000000000000000]              
	unsigned long                                      bLeanLeft : 1;                                    		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLeanRight : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceCanPopUp : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanPopUp : 1;                                    		// 0x008C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCanMantle : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCanClimbUp : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bForceCanCoverSlip_Left : 1;                      		// 0x008C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bForceCanCoverSlip_Right : 1;                     		// 0x008C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bCanCoverSlip_Left : 1;                           		// 0x008C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bCanCoverSlip_Right : 1;                          		// 0x008C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bCanSwatTurn_Left : 1;                            		// 0x008C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bCanSwatTurn_Right : 1;                           		// 0x008C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bEnabled : 1;                                     		// 0x008C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bAllowPopup : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bAllowMantle : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bAllowCoverSlip : 1;                              		// 0x008C (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bAllowClimbUp : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bAllowSwatTurn : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bForceNoGroundAdjust : 1;                         		// 0x008C (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bPlayerOnly : 1;                                  		// 0x008C (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bPreferLeanOverPopup : 1;                         		// 0x008C (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bDestructible : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bSelected : 1;                                    		// 0x008C (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bFailedToFindSurface : 1;                         		// 0x008C (0x0004) [0x0000000000000000] [0x00800000] 
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FPackedNormal                               Normal;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0040
struct FStaticMeshComponentLODInfo
{
	TArray< class UShadowMap2D* >                      ShadowMaps;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           ShadowVertexBuffers;                              		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FPointer                                    LightMap;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FPointer                                    OverrideVertexColors;                             		// 0x0028 (0x0008) [0x0000000000000000]              
	TArray< struct FPaintedVertex >                    PaintedVertices;                                  		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 LeanLeft;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 LeanRight;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 LeanLeftPref;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 LeanRightPref;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 Climb;                                            		// 0x0028 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 Mantle;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 SlipLeft;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 SlipRight;                                        		// 0x0040 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 SwatLeft;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 SwatRight;                                        		// 0x0050 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 PopUp;                                            		// 0x0058 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 PlayerOnly;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualCoverType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0048
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsEnabled;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsDisabled;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            SlotsAdjusted;                                    		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FManualCoverTypeInfo >              SlotsCoverTypeChanged;                            		// 0x0038 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CullDistance;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              KeyOut;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      TangentsValid : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TangentOut;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      IntepMode;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UUIDataStore* >                      DataStores;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    RenderData;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x000C
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LifetimeRemaining;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x001C
struct FLightmassMaterialInterfaceSettings
{
	unsigned long                                      bCastShadowAsMasked : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EmissiveBoost;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DiffuseBoost;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpecularBoost;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ExportResolutionScale;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DistanceFieldPenumbraScale;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideCastShadowAsMasked : 1;                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverrideEmissiveBoost : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOverrideDiffuseBoost : 1;                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverrideSpecularBoost : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverrideExportResolutionScale : 1;               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOverrideDistanceFieldPenumbraScale : 1;          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x0034
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                OutputIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     InputName;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	class UMaterialFunction*                           Function;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008(0x003C - 0x0034)
struct FColorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008(0x003C - 0x0034)
struct FScalarMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010(0x0044 - 0x0034)
struct FVectorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C(0x0040 - 0x0034)
struct FVector2MaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              ConstantY;                                        		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	unsigned long                                      bPainCausing : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bCollideActors : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlockActors : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsReplication : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                         		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0040
struct FParticleSysParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ParamType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              Scalar;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Scalar_Low;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     Vector;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     Vector_Low;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          Material;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              EmitterTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000(0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004(0x0038 - 0x0034)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020(0x0054 - 0x0034)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Item;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventAttractorCollideData
// 0x0000(0x0054 - 0x0054)
struct FParticleEventAttractorCollideData : FParticleEventCollideData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010(0x0044 - 0x0034)
struct FParticleEventKismetData : FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0048
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                                		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Base;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned long                                      bInheritBaseScale : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      Out;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	struct FString                                     StatName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FStatColorMapEntry >                ColorMap;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned long                                      DisableBlend : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FString                                     Comment;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Engine.LoadingCompUserData
// 0x006C
struct FLoadingCompUserData
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	int                                                CoverIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanImage;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
	struct FString                                     RankImage;                                        		// 0x0038 (0x0010) [0x0000000000000000]              
	struct FString                                     TierImage;                                        		// 0x0048 (0x0010) [0x0000000000000000]              
	struct FString                                     CallingCardURL;                                   		// 0x0058 (0x0010) [0x0000000000000000]              
	int                                                LoadingStatus;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Engine.LoadingUIInfo
// 0x015C
struct FLoadingUIInfo
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     ModeName;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     Tip;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FString                                     BGImgPath;                                        		// 0x0040 (0x0010) [0x0000000000000000]              
	struct FString                                     MinimapImgPath;                                   		// 0x0050 (0x0010) [0x0000000000000000]              
	unsigned long                                      bMapBeta : 1;                                     		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModeBeta : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     ClanMatchClanName_Left;                           		// 0x0064 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanName_Right;                          		// 0x0074 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanEmblemPath_Left;                     		// 0x0084 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanEmblemPath_Right;                    		// 0x0094 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanLevel_Left;                          		// 0x00A4 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanLevel_Right;                         		// 0x00B4 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanLevelColor_Left;                     		// 0x00C4 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchClanLevelColor_Right;                    		// 0x00D4 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchAdvantage_Left;                          		// 0x00E4 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMatchAdvantage_Right;                         		// 0x00F4 (0x0010) [0x0000000000000000]              
	int                                                ClanMatchAdvantageColor_Left;                     		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                ClanMatchAdvantageColor_Right;                    		// 0x0108 (0x0004) [0x0000000000000000]              
	unsigned long                                      isCompMatchUI : 1;                                		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     CompMatchTeamName_Left;                           		// 0x0110 (0x0010) [0x0000000000000000]              
	struct FString                                     CompMatchTeamName_Right;                          		// 0x0120 (0x0010) [0x0000000000000000]              
	int                                                CompMatchTeamScore_Left;                          		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                CompMatchTeamScore_Right;                         		// 0x0134 (0x0004) [0x0000000000000000]              
	int                                                CompMatchTeamIndex;                               		// 0x0138 (0x0004) [0x0000000000000000]              
	TArray< struct FLoadingCompUserData >              CompMatchLeftUsers;                               		// 0x013C (0x0010) [0x0000000000000000]              
	TArray< struct FLoadingCompUserData >              CompMatchRightUsers;                              		// 0x014C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.FacebookIntegration.FacebookFriend
// 0x0020
struct FFacebookFriend
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Id;                                               		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.FogVolumeDensityInfo.CheckpointRecord
// 0x0004
struct AFogVolumeDensityInfo_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00A8
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableAntialiasing : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableBold : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableItalic : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnableUnderline : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAlphaOnly : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned char                                      CharacterSet;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FString                                     Chars;                                            		// 0x001C (0x0010) [0x0000000000000000]              
	struct FString                                     UnicodeRange;                                     		// 0x002C (0x0010) [0x0000000000000000]              
	struct FString                                     CharsFilePath;                                    		// 0x003C (0x0010) [0x0000000000000000]              
	struct FString                                     CharsFileWildcard;                                		// 0x004C (0x0010) [0x0000000000000000]              
	unsigned long                                      bCreatePrintableOnly : 1;                         		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIncludeASCIIRange : 1;                           		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FLinearColor                                ForegroundColor;                                  		// 0x0060 (0x0010) [0x0000000000000000]              
	unsigned long                                      bEnableDropShadow : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TexturePageWidth;                                 		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                TexturePageMaxHeight;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                XPadding;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                YPadding;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                ExtendBoxTop;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                ExtendBoxBottom;                                  		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                ExtendBoxRight;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                ExtendBoxLeft;                                    		// 0x0090 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableLegacyMode : 1;                            		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Kerning;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDistanceFieldAlpha : 1;                       		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DistanceFieldScaleFactor;                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              DistanceFieldScanRadiusScale;                     		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StartV;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                USize;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                VSize;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      TextureIndex;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                VerticalOffset;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      RightAmplitude;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LeftFunction;                                     		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      RightFunction;                                    		// 0x0003 (0x0001) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0014
struct FFragmentGroup
{
	TArray< int >                                      FragmentIndices;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bGroupIsRooted : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x002C
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UNavMeshPathGoalEvaluator*                   List[ 0x5 ];                                      		// 0x0004 (0x0028) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.HostMigrationState
// 0x0020
struct FHostMigrationState
{
	unsigned char                                      HostMigrationProgress;                            		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              HostMigrationElapsedTime;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HostMigrationTravelCountdown;                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     HostMigrationTravelURL;                           		// 0x000C (0x0010) [0x0000000000000000]              
	unsigned long                                      bHostMigrationEnabled : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.WorldCube
// 0x0014
struct FWorldCube
{
	class UTextureCube*                                TextureCube;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.LightmassCustomSettingInfo
// 0x0018
struct FLightmassCustomSettingInfo
{
	struct FColor                                      LightmapColor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LightmapBrightness;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LightmapDesaturation;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      MinLightmapFactor;                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      MinShadowFactor;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.TickableActors
// 0x0010
struct FTickableActors
{
	class AActor*                                      PreviousTickableActor;                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      PostTickableActor;                                		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.TickableActorList
// 0x0010
struct FTickableActorList
{
	TArray< class AActor* >                            ActorList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x002C
struct FMusicTrackStruct
{
	class USoundCue*                                   TheSoundCue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPersistentAcrossLevels : 1;                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              FadeInTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FadeInVolumeLevel;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FadeOutVolumeLevel;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     MP3Filename;                                      		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ParticlesLodMin;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ParticlesLodMax;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PacketsPerPhysXParticleSystemMax;                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplyCylindricalPacketCulling : 1;               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpawnLodVsFifoBias;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                         		// 0x0000 (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLimitExplosionChunkSize : 1;                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLimitDamageChunkSize : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxNumFacturedChunksToSpawnInAFrame;              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              FractureExplosionVelScale;                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x002C
struct FNavMeshPathConstraintCacheDatum
{
	int                                                ListIdx;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UNavMeshPathConstraint*                      List[ 0x5 ];                                      		// 0x0004 (0x0028) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0058
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumIndirectLightingBounces;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FColor                                      EnvironmentColor;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EnvironmentIntensity;                             		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableAdvancedEnvironmentColor : 1;              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      EnvironmentSunColor;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              EnvironmentSunIntensity;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              EnvironmentLightTerminatorAngle;                  		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     EnvironmentLightDirection;                        		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              EmissiveBoost;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              DiffuseBoost;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              SpecularBoost;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              IndirectNormalInfluenceBoost;                     		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseAmbientOcclusion : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableImageReflectionShadowing : 1;              		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DirectIlluminationOcclusionFraction;              		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              IndirectIlluminationOcclusionFraction;            		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              OcclusionExponent;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              FullyOccludedSamplesFraction;                     		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              MaxOcclusionDistance;                             		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisualizeMaterialDiffuse : 1;                    		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisualizeAmbientOcclusion : 1;                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCompressShadowmap : 1;                           		// 0x0054 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	struct FQWord                                      Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ScreenMessage;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FColor                                      DisplayColor;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              TimeToDisplay;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              CurrentTimeDisplayed;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.CharacterLightmapInfo
// 0x0018
struct FCharacterLightmapInfo
{
	float                                              LitIndirectBrightness;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LitIndirectContrastFactor;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ShadowedIndirectBrightness;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ShadowedIndirectContrastFactor;                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LightingContrastFactor;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LightingDesaturation;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int                                                MaxChunkIslandCount;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxShapeCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxRrbActorCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MaxChunkSeparationLOD;                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideMaxChunkSeparationLOD : 1;               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFixedTimeStep : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TimeStep;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxSubSteps;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                             		// 0x000C (0x000C) [0x0000000000000000]              
	struct FPhysXSimulationProperties                  CompartmentFluid;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FPhysXSimulationProperties                  CompartmentCloth;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                              		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Fluid : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Cloth : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      SoftBody : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      Viewer;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     ViewLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     ViewDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.FracturedStaticMeshActor.DeferredPartToSpawn
// 0x0024
struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     InitialVel;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     InitialAngVel;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              RelativeScale;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bExplosion : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.FracturedStaticMeshActor.CheckpointRecord
// 0x0014
struct AFracturedStaticMeshActor_FCheckpointRecord
{
	unsigned long                                      bIsShutdown : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            FragmentVis;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0034
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      FullyLoadType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0004 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             PackagesToLoad;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           LoadedObjects;                                    		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    NetDriver;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	struct FString                                     Tag;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Contains;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameEngine.URL
// 0x0058
struct FURL
{
	struct FString                                     Protocol;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Host;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     Map;                                              		// 0x0024 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Op;                                               		// 0x0034 (0x0010) [0x0000000000000000]              
	struct FString                                     Portal;                                           		// 0x0044 (0x0010) [0x0000000000000000]              
	int                                                Valid;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	struct FString                                     ShortName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     GameClassName;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0044
struct FGameTypePrefix
{
	struct FString                                     Prefix;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bUsesCommonPackage : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     GameType;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           AdditionalGameTypes;                              		// 0x0024 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ForcedObjects;                                    		// 0x0034 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.PlayerInformation
// 0x0024
struct FPlayerInformation
{
	struct FName                                       ControllerName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                UniqueId;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsBot : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameplayEvents.TeamInformation
// 0x001C
struct FTeamInformation
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FColor                                      TeamColor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaxSize;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameStatGroup
// 0x0008
struct FGameStatGroup
{
	unsigned char                                      Group;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameplayEventMetaData
// 0x0018
struct FGameplayEventMetaData
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FGameStatGroup                              StatGroup;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                EventDataType;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.WeaponClassEventData
// 0x0008
struct FWeaponClassEventData
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.DamageClassEventData
// 0x0008
struct FDamageClassEventData
{
	struct FName                                       DamageClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.ProjectileClassEventData
// 0x0008
struct FProjectileClassEventData
{
	struct FName                                       ProjectileClassName;                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.PawnClassEventData
// 0x0008
struct FPawnClassEventData
{
	struct FName                                       PawnClassName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameplayEventsHeader
// 0x0030
struct FGameplayEventsHeader
{
	int                                                EngineVersion;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StatsWriterVersion;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StreamOffset;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                AggregateOffset;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                FooterOffset;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TotalStreamSize;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                FileSize;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     FilterClass;                                      		// 0x001C (0x0010) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameplayEvents.GameSessionInformation
// 0x0088
struct FGameSessionInformation
{
	int                                                AppTitleID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlatformType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Language;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     GameplaySessionTimestamp;                         		// 0x0018 (0x0010) [0x0000000000000000]              
	float                                              GameplaySessionStartTime;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              GameplaySessionEndTime;                           		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bGameplaySessionInProgress : 1;                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     GameplaySessionID;                                		// 0x0034 (0x0010) [0x0000000000000000]              
	struct FString                                     GameClassName;                                    		// 0x0044 (0x0010) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0054 (0x0010) [0x0000000000000000]              
	struct FString                                     MapURL;                                           		// 0x0064 (0x0010) [0x0000000000000000]              
	int                                                SessionInstance;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                GameTypeId;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                OwningNetId;                                      		// 0x007C (0x0008) [0x0000000000000000]              
	int                                                PlaylistId;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxPercentY;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentX;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RecommendedPercentY;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OriginX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              OriginY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	TArray< struct FPerPlayerSplitscreenData >         PlayerData;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       PropertyName;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSpecialProperty : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.ShowFlags_Mirror
// 0x0010
struct FShowFlags_Mirror
{
	struct FQWord                                      flags0;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      flags1;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.GameViewportClient.ExportShowFlags_Mirror
// 0x0000(0x0010 - 0x0010)
struct FExportShowFlags_Mirror : FShowFlags_Mirror
{
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Rating;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EnteredTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastKnownDistance;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              StartTimeBeingLookedAt;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      CurrentlyBeingLookedAt : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x0035
struct FIniLocFileEntry
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     HashCode;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ReadState;                                        		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	unsigned long                                      Control : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Shift : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Alt : 1;                                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreCtrl : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreShift : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIgnoreAlt : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.Input.TouchTracker
// 0x0018
struct FTouchTracker
{
	int                                                Handle;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TouchpadIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Location;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bTrapInput : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                        		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FVector2D                                   LightmapUVBias;                                   		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ShadowmapUVBias;                                  		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0020
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    LightMap;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  LightmapTexture;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	class UShadowMap2D*                                ShadowmapTexture;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      CollisionType;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsShutdown : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsPositionReplication : 1;                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0034
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FColor                                      CurveColor;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     CurveName;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	int                                                bHideCurve;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                bColorCurve;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                bFloatingPointColorCurve;                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                bClamp;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              ClampLow;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              ClampHigh;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FCurveEdEntry >                     Curves;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	float                                              ViewStartInput;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ViewEndInput;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ViewStartOutput;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              ViewEndOutput;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	struct FString                                     AnimSetName;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned long                                      bReferencedButUnused : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipBakeAndPrune : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSkipCooking : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UInterpTrack*                                Track;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                KeyIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              UnsnappedPosition;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpGroupCamera.CameraPreviewInfo
// 0x0040
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UAnimSet* >                          PreviewAnimSets;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FName                                       AnimSeqName;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	class APawn*                                       PawnInst;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< int >                                      TrackIndices;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsCollapsed : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsSelected : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SubTrackName;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                GroupIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AnimSeqName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              AnimStartOffset;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AnimEndOffset;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReverse : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Value : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       TargetCamGroup;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                ShotNumber;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0024
struct FFaceFXTrackKey
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     FaceFXGroupName;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     FaceFXSeqName;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0008
struct FFaceFXSoundCueKey
{
	class USoundCue*                                   FaceFXSoundCue;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< float >                                    MICResetFloats;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ToggleAction;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FVector >                           MICResetVectors;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Action;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      ActiveCondition;                                  		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray< struct FInterpLookupPoint >                Points;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ClipIDNumber;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0014
struct FSoundTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.LandscapeProxy.LandscapeLayerStruct
// 0x000C
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LandscapeProxy.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[ 0x4 ];                              		// 0x0000 (0x0020) [0x0000000000000000]              
};

// ScriptStruct Engine.Landscape.LandscapeLayerInfo
// 0x001C
struct FLandscapeLayerInfo
{
	struct FName                                       LayerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Hardness;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoWeightBlend : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeightmapTextureIndex;                            		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeightmapTextureChannel;                          		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.LandscapeGizmoActiveActor.GizmoSelectData
// 0x0000
struct FGizmoSelectData
{
};

// ScriptStruct Engine.LandscapeInfo.LandscapeAddCollision
// 0x0000
struct FLandscapeAddCollision
{
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UFont*                                       FontValue;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                FontPage;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FGuid                                       ExpressionGUID;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    ParameterValue;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FGuid                                       ExpressionGUID;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FGuid                                       ExpressionGUID;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0198
struct FLensFlareElement
{
	struct FName                                       ElementName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              RayDistance;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsEnabled : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseSourceDistance : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNormalizeRadialDistance : 1;                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bModulateColorBySource : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     Size;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                LFMaterials;                                      		// 0x001C (0x0010) [0x0000000000000000]              
	struct FRawDistributionFloat                       LFMaterialIndex;                                  		// 0x002C (0x0024) [0x0000000000000000]              
	struct FRawDistributionFloat                       Scaling;                                          		// 0x0050 (0x0024) [0x0000000000000000]              
	struct FRawDistributionVector                      AxisScaling;                                      		// 0x0074 (0x0024) [0x0000000000000000]              
	struct FRawDistributionFloat                       Rotation;                                         		// 0x0098 (0x0024) [0x0000000000000000]              
	unsigned long                                      bOrientTowardsSource : 1;                         		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRawDistributionVector                      Color;                                            		// 0x00C0 (0x0024) [0x0000000000000000]              
	struct FRawDistributionFloat                       Alpha;                                            		// 0x00E4 (0x0024) [0x0000000000000000]              
	struct FRawDistributionVector                      Offset;                                           		// 0x0108 (0x0024) [0x0000000000000000]              
	struct FRawDistributionVector                      DistMap_Scale;                                    		// 0x012C (0x0024) [0x0000000000000000]              
	struct FRawDistributionVector                      DistMap_Color;                                    		// 0x0150 (0x0024) [0x0000000000000000]              
	struct FRawDistributionFloat                       DistMap_Alpha;                                    		// 0x0174 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	class UObject*                                     CurveObject;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	TArray< class UMaterialInterface* >                ElementMaterials;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x019C
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                         		// 0x0000 (0x0164) [0x0000000000000000]              
	unsigned long                                      bBlendingIn : 1;                                  		// 0x0164 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlendingOut : 1;                                 		// 0x0164 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentBlendInTime;                               		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              CurrentBlendOutTime;                              		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              BlendInDuration;                                  		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              BlendOutDuration;                                 		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              BlendStartTime;                                   		// 0x0178 (0x0004) [0x0000000000000000]              
	struct FInterpCurveFloat                           TimeAlphaCurve;                                   		// 0x017C (0x0014) [0x0000000000000000]              
	unsigned long                                      bEffectMaintain : 1;                              		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EffectMaintainDuration;                           		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              CurrentEffectMaintainTime;                        		// 0x0198 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0174
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                     		// 0x0000 (0x0164) [0x0000000000000000]              
	class APostProcessVolume*                          LastVolumeUsed;                                   		// 0x0164 (0x0008) [0x0000000000000000]              
	float                                              BlendStartTime;                                   		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              LastBlendTime;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0010
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    CriticalSection;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	struct FString                                     OutputName;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0034
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                OutputIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     InputName;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaskR;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaskG;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaskB;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaskA;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                GCC64_Padding;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0044
struct FCustomInput
{
	struct FString                                     InputName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FExpressionInput                            Input;                                            		// 0x0010 (0x0034) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpressionLandscapeLayerBlend.LayerBlendInput
// 0x0080
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      BlendType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FExpressionInput                            LayerInput;                                       		// 0x000C (0x0034) [0x0000000000000000]              
	struct FExpressionInput                            HeightInput;                                      		// 0x0040 (0x0034) [0x0000000000000000]              
	float                                              PreviewWeight;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FPointer                                    InstanceOverride;                                 		// 0x0078 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x004C
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FGuid                                       ExpressionInputId;                                		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FExpressionInput                            Input;                                            		// 0x0018 (0x0034) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x003C
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FGuid                                       ExpressionOutputId;                               		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FExpressionOutput                           Output;                                           		// 0x0018 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       ParameterName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CycleTime;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OffsetTime;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x000C(0x003C - 0x0030)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                FontPage;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0018(0x0048 - 0x0030)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0034 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0008(0x0038 - 0x0030)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                   		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0024(0x0054 - 0x0030)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0040 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.LinearColorParameterValueOverTime
// 0x0024(0x0054 - 0x0030)
struct FLinearColorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FInterpCurveLinearColor                     ParameterValueCurve;                              		// 0x0040 (0x0014) [0x0000000000000000]              
};

// ScriptStruct Engine.MicroTransactionBase.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     DisplayDescription;                               		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     DisplayPrice;                                     		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	TArray< class UMorphNodeBase* >                    ChildNodes;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       ConnName;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TargetWeight;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x0020
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     P1;                                               		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     P2;                                               		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x0034
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCanMantle : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedsMantleValidityTest : 1;                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAbleToSearch : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     SearchExtent;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              SearchLaneMultiplier;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     SearchStart;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              MaxDropHeight;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              MinWalkableZ;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              MaxHoverDistance;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0008
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0010
struct FPathStore
{
	TArray< struct FEdgePointer >                      EdgeList;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x000C
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ExtraCost;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.NavMeshObstacle.CheckpointRecord
// 0x0004
struct ANavMeshObstacle_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineMatchmakingStats.MMStats_Timer
// 0x000C
struct FMMStats_Timer
{
	unsigned long                                      bInProgress : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDouble                                     MSecs;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0020
struct FOnlineProfileSetting
{
	unsigned char                                      Owner;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsKeep : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSettingsProperty                           ProfileSetting;                                   		// 0x0008 (0x0018) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineRecentPlayersList.RecentParty
// 0x0018
struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PartyMembers;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineRecentPlayersList.CurrentPlayerMet
// 0x0010
struct FCurrentPlayerMet
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0014
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               StatValue;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0038
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FSettingsData                               Rank;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FOnlineStatsColumn >                Columns;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x001C
struct FColumnMetaData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     ColumnName;                                       		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CountLow;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	class UObject*                                     CurveObject;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x001C
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bGetSeedFromInstance : 1;                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInstanceSeedIsIndex : 1;                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bResetSeedOnEmitterLooping : 1;                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRandomlySelectSeedArray : 1;                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< int >                                      RandomSeeds;                                      		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleAttractorBoneSocket.AttractLocationBoneSocketInfo
// 0x0014
struct FAttractLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScale : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleModuleCollision.ParticleAttractorCollisionAction
// 0x0014
struct FParticleAttractorCollisionAction
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     EventName;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x002C
struct FParticleEvent_GenerateInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Frequency;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LowFreq;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ParticleFrequency;                                		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      FirstTimeOnly : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LastTimeOnly : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseReflectedImpactVector : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FName                                       CustomName;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	TArray< class UParticleModuleEventSendToGame* >    ParticleModuleEventsToSendToGame;                 		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bProcessDuringUpdate : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0038
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseEmitterTime : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpawnTimeOnly : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ValueMethod;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bScaleVelocityByParamValue : 1;                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRawDistributionFloat                       ParamValue;                                       		// 0x0014 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TargetPercentage;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              WeightForSpawnLod;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SpawnLodRateVsLifeBias;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RelativeFadeoutTime;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	unsigned long                                      bLit : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray< unsigned char >                            SoloEnableSetting;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OriginalEmitterIndex;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    FrameState;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	TArray< struct FParticleEmitterReplayFrame >       Emitters;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeBase.PBRuleLink
// 0x0010
struct FPBRuleLink
{
	class UPBRuleNodeBase*                             NextRule;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LinkName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBMaterialParam
// 0x0018
struct FPBMaterialParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                Color;                                            		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuildingRuleset.PBParamSwatch
// 0x0018
struct FPBParamSwatch
{
	struct FName                                       SwatchName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPBMaterialParam >                  Params;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuildingRuleset.PBVariationInfo
// 0x000C
struct FPBVariationInfo
{
	struct FName                                       VariationName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMeshOnTopOfFacePoly : 1;                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ProcBuilding.PBFracMeshCompInfo
// 0x000C
struct FPBFracMeshCompInfo
{
	class UFracturedStaticMeshComponent*               FracMeshComp;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TopLevelScopeIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBFaceUVInfo
// 0x0010
struct FPBFaceUVInfo
{
	struct FVector2D                                   Offset;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   Size;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBMemUsageInfo
// 0x002C
struct FPBMemUsageInfo
{
	class AProcBuilding*                               Building;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UProcBuildingRuleset*                        Ruleset;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                NumStaticMeshComponent;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumInstancedStaticMeshComponents;                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                NumInstancedTris;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                LightmapMemBytes;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ShadowmapMemBytes;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LODDiffuseMemBytes;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LODLightingMemBytes;                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBMeshCompInfo
// 0x000C
struct FPBMeshCompInfo
{
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TopLevelScopeIndex;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBEdgeInfo
// 0x002C
struct FPBEdgeInfo
{
	struct FVector                                     EdgeEnd;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EdgeStart;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                ScopeAIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      ScopeAEdge;                                       		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                ScopeBIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      ScopeBEdge;                                       		// 0x0024 (0x0001) [0x0000000000000000]              
	float                                              EdgeAngle;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.ProcBuilding.PBScopeProcessInfo
// 0x001C
struct FPBScopeProcessInfo
{
	class AProcBuilding*                               OwningBuilding;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UProcBuildingRuleset*                        Ruleset;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       RulesetVariation;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      bGenerateLODPoly : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPartOfNonRect : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.ProcBuilding.PBScope2D
// 0x0048
struct FPBScope2D
{
	struct FMatrix                                     ScopeFrame;                                       		// 0x0000 (0x0040) [0x0000000000000000]              
	float                                              DimX;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              DimZ;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeCorner.RBCornerAngleInfo
// 0x0008
struct FRBCornerAngleInfo
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CornerSize;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeEdgeAngle.RBEdgeAngleInfo
// 0x0004
struct FRBEdgeAngleInfo
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMatOverrides
// 0x0010
struct FBuildingMatOverrides
{
	TArray< class UMaterialInterface* >                MaterialOptions;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeMesh.BuildingMeshInfo
// 0x004C
struct FBuildingMeshInfo
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DimX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DimZ;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Chance;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class UDistributionVector*                         Translation;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	class UDistributionVector*                         Rotation;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned long                                      bMeshScaleTranslation : 1;                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOverrideMeshLightMapRes : 1;                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                OverriddenMeshLightMapRes;                        		// 0x0028 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                MaterialOverrides;                                		// 0x002C (0x0010) [0x0000000000000000]              
	TArray< struct FBuildingMatOverrides >             SectionOverrides;                                 		// 0x003C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.PBRuleNodeSplit.RBSplitInfo
// 0x0014
struct FRBSplitInfo
{
	unsigned long                                      bFixSize : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FixedSize;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ExpandRatio;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       SplitName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class USequenceOp*                                 Op;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                InputIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RemainingDelay;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      InOriginator;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class AActor*                                      InInstigator;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	TArray< int >                                      ActivateIndices;                                  		// 0x0018 (0x0010) [0x0000000000000000]              
	unsigned long                                      bPushTop : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x0010
struct FKCachedConvexDataElement
{
	TArray< unsigned char >                            ConvexElementData;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x0010
struct FKCachedConvexData
{
	TArray< struct FKCachedConvexDataElement >         CachedConvexElements;                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              LimitSize;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LevelName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.WorldAttractor.WorldAttractorData
// 0x0020
struct FWorldAttractorData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      FalloffType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              FalloffExponent;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Range;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Strength;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      bFallThru;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bFallThru : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultValue : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Bary;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x001C
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x001C
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      BoneType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< int >                                      AttachedVertexIndices;                            		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshOptimizationSettings
// 0x0028
struct FSkeletalMeshOptimizationSettings
{
	float                                              MaxDeviationPercentage;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SilhouetteImportance;                             		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      TextureImportance;                                		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      ShadingImportance;                                		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      SkinningImportance;                               		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      NormalMode;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              BoneReductionRatio;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaxBonesPerVertex;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      ReductionMethod;                                  		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              NumOfTrianglesPercentage;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WeldingThreshold;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRecalcNormals : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalsThreshold;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	unsigned char                                      TriangleSorting;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      CustomLeftRightAxis;                              		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FName                                       CustomLeftRightBoneName;                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x0050
struct FSkeletalMeshLODInfo
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DisplayFactor;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LODHysteresis;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< int >                                      LODMaterialMap;                                   		// 0x000C (0x0010) [0x0000000000000000]              
	TArray< unsigned long >                            bEnableShadowCasting;                             		// 0x001C (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            TriangleSorting;                                  		// 0x002C (0x0010) [0x0000000000000000]              
	TArray< struct FTriangleSortSettings >             TriangleSortSettings;                             		// 0x003C (0x0010) [0x0000000000000000]              
	unsigned long                                      bDisableCompressions : 1;                         		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasBeenSimplified : 1;                           		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SourceBoneName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      BoneFlipAxis;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BoneFlipAxis;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	TArray< int >                                      ClothingSectionInfo;                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	TArray< struct FApexClothingLodInfo >              ClothingLodInfo;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       ClothingAssetName;                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMesh.MaterialSet
// 0x0030
struct FMaterialSet
{
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< int >                                      MaterialPackageIndex;                             		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           PackageName;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	unsigned long                                      bReplicated : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHidden : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSavedPosition : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x000C
struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundClass.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	int                                                NodePosX;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NodePosY;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundClass.SoundClassProperties
// 0x0020
struct FSoundClassProperties
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              StereoBleed;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LFEBleed;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VoiceCenterChannelVolume;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RadioFilterVolume;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              RadioFilterVolumeThreshold;                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplyEffects : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlwaysPlay : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsUISound : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsMusic : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bReverb : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCenterChannelOnly : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bApplyAmbientVolumes : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.SoundMode.SoundClassAdjuster
// 0x001C
struct FSoundClassAdjuster
{
	unsigned char                                      SoundClassName;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       SoundClass;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              VolumeAdjuster;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PitchAdjuster;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplyToChildren : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VoiceCenterChannelVolumeAdjuster;                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundMode.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	struct FDouble                                     RootTime;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HFFrequency;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HFGain;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              MFCutoffFrequency;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MFBandwidth;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              MFGain;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              LFFrequency;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LFGain;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x005C
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FadeInDistanceEnd;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FadeOutDistanceStart;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FadeOutDistanceEnd;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FRawDistributionFloat                       FadeInDistance;                                   		// 0x0014 (0x0024) [0x0000000000000000]              
	struct FRawDistributionFloat                       FadeOutDistance;                                  		// 0x0038 (0x0024) [0x0000000000000000]              
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x0024
struct FRecognisableWord
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ReferenceWord;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     PhoneticWord;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0060
struct FRecogVocabulary
{
	TArray< struct FRecognisableWord >                 WhoDictionary;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FRecognisableWord >                 WhatDictionary;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< struct FRecognisableWord >                 WhereDictionary;                                  		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     VocabName;                                        		// 0x0030 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            VocabData;                                        		// 0x0040 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            WorkingVocabData;                                 		// 0x0050 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0014
struct FRecogUserData
{
	int                                                ActiveVocabularies;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            UserData;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0038
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	class UShadowMap1D*                                BranchShadowMap;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	class UShadowMap1D*                                FrondShadowMap;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	class UShadowMap1D*                                LeafMeshShadowMap;                                		// 0x0020 (0x0008) [0x0000000000000000]              
	class UShadowMap1D*                                LeafCardShadowMap;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	class UShadowMap1D*                                BillboardShadowMap;                               		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class ASplineActor*                                ConnectTo;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartTangent;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector2D                                   StartScale;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              StartRoll;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   StartOffset;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FVector                                     EndPos;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTangent;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   EndScale;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	float                                              EndRoll;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   EndOffset;                                        		// 0x0050 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x000C
struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          TheMaterial;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                          		// 0x0000 (0x0040) [0x0000000000000000]              
	unsigned char                                      ServerBrake;                                      		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerGas;                                        		// 0x0041 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerSteering;                                   		// 0x0042 (0x0001) [0x0000000000000000]              
	unsigned char                                      ServerRise;                                       		// 0x0043 (0x0001) [0x0000000000000000]              
	unsigned long                                      bServerHandbrake : 1;                             		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ServerView;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0038
struct FTerrainLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	class UTerrainLayerSetup*                          Setup;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                AlphaMapIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      Highlighted : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      WireframeHighlighted : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Hidden : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      HighlightColor;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FColor                                      WireframeColor;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MinX;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MinY;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MaxX;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxY;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x002C
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              MinScale;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MaxScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Density;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SlopeRotationBlend;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RandSeed;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FTerrainDecorationInstance >        Instances;                                        		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FTerrainDecoration >                Decorations;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                AlphaMapIndex;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	TArray< struct FPointer >                          CachedMaterials;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainComponent.TerrainPatchBounds
// 0x000C
struct FTerrainPatchBounds
{
	float                                              MinHeight;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxHeight;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxDisplacement;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainComponent.TerrainMaterialMask
// 0x000C
struct FTerrainMaterialMask
{
	struct FQWord                                      BitMask;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NumBits;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	TArray< int >                                      Nodes;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Base;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              NoiseScale;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              NoiseAmount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NoiseScale;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              NoisePercent;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FFilterLimit                                MinHeight;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	struct FFilterLimit                                MaxHeight;                                        		// 0x001C (0x0010) [0x0000000000000000]              
	struct FFilterLimit                                MinSlope;                                         		// 0x002C (0x0010) [0x0000000000000000]              
	struct FFilterLimit                                MaxSlope;                                         		// 0x003C (0x0010) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	class UTerrainMaterial*                            Material;                                         		// 0x0050 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0020
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OffsetY;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeY;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DestOffsetX;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DestOffsetY;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture2D;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x000C
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldBlockOnLoad : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class ULevelStreaming*                             Level;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x000C
struct FPlayerStorageArrayProvider
{
	int                                                PlayerStorageId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0020
struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ProviderClassName;                                		// 0x0008 (0x0010) [0x0000000000000000]              
	class UClass*                                      ProviderClass;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x0024
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ProviderClassName;                                		// 0x0008 (0x0010) [0x0000000000000000]              
	unsigned long                                      bExpandProviders : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      ProviderClass;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x001C
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     ButtonFontMarkupString;                           		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x005C
struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FUIInputKeyData                             PlatformInputKeys[ 0x3 ];                         		// 0x0008 (0x0054) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0030
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      DefaultGameSettingsClass;                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UClass*                                      SearchResultsProviderClass;                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                          		// 0x0018 (0x0008) [0x0000000000000000]              
	class UOnlineGameSearch*                           Search;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       SearchName;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0020
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	class UUIDataProvider_Settings*                    Provider;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       SettingsName;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0018
struct FRankMetaData
{
	struct FName                                       RankName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     RankColumnName;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0018
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerNickColumnName;                             		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_Registry.RegistryKeyValuePair
// 0x0020
struct FRegistryKeyValuePair
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x0020
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Set;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     MappedText;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDouble                                     NextRepeatTime;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004(0x0014 - 0x0010)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0010
struct FSoundEventMapping
{
	struct FName                                       SoundEventName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SoundToPlay;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0044
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                MaterialSetList;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< int >                                      MaterialSetPackageIndex;                          		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             MaterialSetPackageName;                           		// 0x0028 (0x0010) [0x0000000000000000]              
	unsigned long                                      bEnableShadowCasting : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	unsigned long                                      bEnableCollision : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0010
struct FStaticMeshLODInfo
{
	TArray< struct FStaticMeshLODElement >             Elements;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif