/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_NumTouchDataEntries                                5
#define CONST_NumInDragHistory                                   4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameTypes.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/

// Enum GameFramework.GameCrowdAgent.EConformType
/*enum EConformType
{
	CFM_NavMesh                                        = 0,
	CFM_BSP                                            = 1,
	CFM_World                                          = 2,
	CFM_None                                           = 3,
	CFM_MAX                                            = 4
};*/

// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
/*enum ECrowdBehaviorEvent
{
	CBE_None                                           = 0,
	CBE_Spawn                                          = 1,
	CBE_Random                                         = 2,
	CBE_SeePlayer                                      = 3,
	CBE_EncounterAgent                                 = 4,
	CBE_TakeDamage                                     = 5,
	CBE_GroupWaiting                                   = 6,
	CBE_Uneasy                                         = 7,
	CBE_Alert                                          = 8,
	CBE_Panic                                          = 9,
	CBE_MAX                                            = 10
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/

// Enum GameFramework.GameStateObject.GameSessionType
/*enum GameSessionType
{
	GT_SessionInvalid                                  = 0,
	GT_SinglePlayer                                    = 1,
	GT_Coop                                            = 2,
	GT_Multiplayer                                     = 3,
	GT_MAX                                             = 4
};*/

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
/*enum ECameraViewportTypes
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_MAX                                            = 6
};*/

// Enum GameFramework.MobileInputZone.EZoneType
/*enum EZoneType
{
	ZoneType_Button                                    = 0,
	ZoneType_Joystick                                  = 1,
	ZoneType_Trackball                                 = 2,
	ZoneType_Slider                                    = 3,
	ZoneType_SubClassed                                = 4,
	ZoneType_MAX                                       = 5
};*/

// Enum GameFramework.MobileInputZone.EZoneState
/*enum EZoneState
{
	ZoneState_Inactive                                 = 0,
	ZoneState_Activating                               = 1,
	ZoneState_Active                                   = 2,
	ZoneState_Deactivating                             = 3,
	ZoneState_MAX                                      = 4
};*/

// Enum GameFramework.MobileInputZone.EZoneSlideType
/*enum EZoneSlideType
{
	ZoneSlide_UpDown                                   = 0,
	ZoneSlide_LeftRight                                = 1,
	ZoneSlide_MAX                                      = 2
};*/

// Enum GameFramework.MobilePlayerInput.EUIOrientation
/*enum EUIOrientation
{
	UI_Unknown                                         = 0,
	UI_Portait                                         = 1,
	UI_PortaitUpsideDown                               = 2,
	UI_LandscapeRight                                  = 3,
	UI_LandscapeLeft                                   = 4,
	UI_MAX                                             = 5
};*/

// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
/*enum MenuImageDrawStyle
{
	IDS_Normal                                         = 0,
	IDS_Stretched                                      = 1,
	IDS_Tile                                           = 2,
	IDS_MAX                                            = 3
};*/

// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
/*enum ETextDrawMethod
{
	DRAW_CenterText                                    = 0,
	DRAW_WrapText                                      = 1,
	DRAW_MAX                                           = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.DebugCameraHUD
// 0x0004 (0x0568 - 0x0564)
class ADebugCameraHUD : public AHUD
{
public:
	unsigned long                                      bDrawDebugText : 1;                               		// 0x0564 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1325 ];

		return pClassPointer;
	};

	void eventPostRender ( );
	void DisplayMaterials ( );
	void eventPostBeginPlay ( );
};

UClass* ADebugCameraHUD::pClassPointer = NULL;

// Class GameFramework.DynamicSpriteComponent
// 0x004C (0x02BC - 0x0270)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	struct FInterpCurveFloat                           AnimatedScale;                                    		// 0x0270 (0x0014) [0x0000000000000000]              
	struct FInterpCurveLinearColor                     AnimatedColor;                                    		// 0x0284 (0x0014) [0x0000000000000000]              
	struct FInterpCurveVector2D                        AnimatedPosition;                                 		// 0x0298 (0x0014) [0x0000000000000000]              
	struct FVector                                     LocationOffset;                                   		// 0x02AC (0x000C) [0x0000000000000000]              
	int                                                LoopCount;                                        		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1326 ];

		return pClassPointer;
	};

};

UClass* UDynamicSpriteComponent::pClassPointer = NULL;

// Class GameFramework.FrameworkGame
// 0x0010 (0x04D0 - 0x04C0)
class AFrameworkGame : public AGameInfo
{
public:
	TArray< struct FRequiredMobileInputConfig >        RequiredMobileInputConfigs;                       		// 0x04C0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1327 ];

		return pClassPointer;
	};

};

UClass* AFrameworkGame::pClassPointer = NULL;

// Class GameFramework.GameAIController
// 0x004C (0x04A0 - 0x0454)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                      		// 0x0454 (0x0008) [0x0000000000000000]              
	unsigned long                                      bHasRunawayCommandList : 1;                       		// 0x045C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAILogging : 1;                                   		// 0x045C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAILogToWindow : 1;                               		// 0x045C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFlushAILogEachLine : 1;                          		// 0x045C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMapBasedLogName : 1;                             		// 0x045C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAIDrawDebug : 1;                                 		// 0x045C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAIBroken : 1;                                    		// 0x045C (0x0004) [0x0000000000000000] [0x00000040] 
	class AFileLog*                                    AILogFile;                                        		// 0x0460 (0x0008) [0x0000000000000000]              
	float                                              DebugTextMaxLen;                                  		// 0x0468 (0x0004) [0x0000000000000000]              
	TArray< struct FAICmdHistoryItem >                 CommandHistory;                                   		// 0x046C (0x0010) [0x0000000000000000]              
	int                                                CommandHistoryNum;                                		// 0x047C (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             AILogFilter;                                      		// 0x0480 (0x0010) [0x0000000000000000]              
	struct FString                                     DemoActionString;                                 		// 0x0490 (0x0010) [0x0000000000170000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1328 ];

		return pClassPointer;
	};

	void eventGetActionString ( );
	void SetDesiredRotation ( );
	void eventAILog_Internal ( );
	void RecordDemoAILog ( );
	void eventDestroyed ( );
	void ReachedIntermediateMoveGoal ( );
	void ReachedMoveGoal ( );
	void GetDestinationOffset ( );
	void GetAICommandInStack ( );
	void FindCommandOfClass ( );
	void DumpCommandStack ( );
	void CheckCommandCount ( );
	void GetActiveCommand ( );
	void AbortCommand ( );
	void PopCommand ( );
	void PushCommand ( );
	void AllCommands ( );
};

UClass* AGameAIController::pClassPointer = NULL;

// Class GameFramework.GameAICommand
// 0x0024 (0x0084 - 0x0060)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       ChildStatus;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
	class AGameAIController*                           GameAIOwner;                                      		// 0x0070 (0x0008) [0x0000000000000000]              
	struct FName                                       Status;                                           		// 0x0078 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAllowNewSameClassInstance : 1;                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceActiveSameClassInstance : 1;              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAborted : 1;                                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreNotifies : 1;                              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreStepAside : 1;                             		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPendingPop : 1;                                  		// 0x0080 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1329 ];

		return pClassPointer;
	};

	void HandlePathObstruction ( );
	void MoveUnreachable ( );
	void NotifyNeedRepath ( );
	void eventGetDebugVerboseText ( );
	void GetDebugOverheadText ( );
	void eventDrawDebug ( );
	void eventGetDumpString ( );
	void Resumed ( );
	void Paused ( );
	void Popped ( );
	void Pushed ( );
	void PostPopped ( );
	void PrePushed ( );
	void AllowStateTransitionTo ( );
	void AllowTransitionTo ( );
	void Tick ( );
	void ShouldIgnoreNotifies ( );
	void eventInternalTick ( );
	void eventInternalResumed ( );
	void eventInternalPaused ( );
	void eventInternalPopped ( );
	void eventInternalPushed ( );
	void eventInternalPrePushed ( );
	void InitCommand ( );
	void InitCommandUserActor ( );
};

UClass* UGameAICommand::pClassPointer = NULL;

// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x0284 - 0x0284)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1330 ];

		return pClassPointer;
	};

};

UClass* AGameCameraBlockingVolume::pClassPointer = NULL;

// Class GameFramework.GameCheatManager
// 0x0020 (0x029C - 0x027C)
class AGameCheatManager : public ACheatManager
{
public:
	class ADebugCameraController*                      DebugCameraControllerRef;                         		// 0x027C (0x0008) [0x0000000000000000]              
	class UClass*                                      DebugCameraControllerClass;                       		// 0x0284 (0x0008) [0x0000000000000000]              
	struct FString                                     DebugCameraControllerClassName;                   		// 0x028C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1331 ];

		return pClassPointer;
	};

	void OnRequestComplete ( );
	void TestHttp ( );
	void EnableDebugCamera ( );
	void TeleportPawnToCamera ( );
	void ToggleDebugCamera ( );
	void EnableAIDebugCamera ( );
	void AIDebugCamera ( );
	void PatchDebugCameraController ( );
};

UClass* AGameCheatManager::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgent
// 0x0278 (0x04C4 - 0x024C)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IInterface_RVO;                           		// 0x024C (0x0008) [0x0000000000000000]              
	class UGameCrowdGroup*                             MyGroup;                                          		// 0x0254 (0x0008) [0x0000000000000000]              
	struct FVector                                     PreferredVelocity;                                		// 0x025C (0x000C) [0x0000000000000000]              
	struct FVector                                     PendingVelocity;                                  		// 0x0268 (0x000C) [0x0000000000000000]              
	class AGameCrowdDestination*                       CurrentDestination;                               		// 0x0274 (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       BehaviorDestination;                              		// 0x027C (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       PreviousDestination;                              		// 0x0284 (0x0008) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              DeadBodyDuration;                                 		// 0x0294 (0x0004) [0x0000000000000000]              
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0298 (0x0008) [0x0000000000000000]              
	int                                                ConformTraceFrameCount;                           		// 0x02A0 (0x0004) [0x0000000000000000]              
	TArray< struct FNearbyDynamicItem >                NearbyDynamics;                                   		// 0x02A4 (0x0010) [0x0000000000000000]              
	unsigned long                                      bUniformScale : 1;                                		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseNavMeshPathing : 1;                           		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWantsSeePlayerNotification : 1;                  		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowPitching : 1;                               		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHitObstacle : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBadHitNormal : 1;                                		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bSimulateThisTick : 1;                            		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPotentialEncounter : 1;                          		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsPanicked : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWantsGroupIdle : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bPreferVisibleDestination : 1;                    		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;             		// 0x02B4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bHasNotifiedSpawner : 1;                          		// 0x02B4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIsInSpawnPool : 1;                               		// 0x02B4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bPaused : 1;                                      		// 0x02B4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned char                                      ConformType;                                      		// 0x02B8 (0x0001) [0x0000000000000000]              
	float                                              ConformTraceDist;                                 		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                ConformTraceInterval;                             		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                CurrentConformTraceInterval;                      		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              AwareRadius;                                      		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              AvoidOtherRadius;                                 		// 0x02D0 (0x0004) [0x0000000000000000]              
	TArray< struct FAvoidOtherSampleItem >             AvoidOtherSampleList;                             		// 0x02D4 (0x0010) [0x0000000000000000]              
	float                                              PENALTY_COEFF_ANGLETOGOAL;                        		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              PENALTY_COEFF_ANGLETOVEL;                         		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              PENALTY_COEFF_MAG;                                		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              MIN_PENALTY_THRESHOLD;                            		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              LastProgressTime;                                 		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              LastFallbackActiveTime;                           		// 0x02F8 (0x0004) [0x0000000000000000]              
	float                                              MaxPathLaneValue;                                 		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              CurrentPathLaneValue;                             		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                ExtraPathCost;                                    		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              RotateToTargetSpeed;                              		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              MaxYawRate;                                       		// 0x030C (0x0004) [0x0000000000000000]              
	struct FVector                                     MeshMinScale3D;                                   		// 0x0310 (0x000C) [0x0000000000000000]              
	struct FVector                                     MeshMaxScale3D;                                   		// 0x031C (0x000C) [0x0000000000000000]              
	float                                              EyeZOffset;                                       		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              ProximityLODDist;                                 		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              VisibleProximityLODDist;                          		// 0x0330 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastKnownGoodPosition;                            		// 0x0334 (0x000C) [0x0000000000000000]              
	float                                              GroundOffset;                                     		// 0x0340 (0x0004) [0x0000000000000000]              
	struct FVector                                     IntermediatePoint;                                		// 0x0344 (0x000C) [0x0000000000000000]              
	struct FVector                                     SearchExtent;                                     		// 0x0350 (0x000C) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x035C (0x0008) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x0364 (0x0008) [0x0000000000000000]              
	int                                                ObstacleCheckCount;                               		// 0x036C (0x0004) [0x0000000000000000]              
	float                                              WalkableFloorZ;                                   		// 0x0370 (0x0004) [0x0000000000000000]              
	float                                              LastPathingAttempt;                               		// 0x0374 (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x0378 (0x0004) [0x0000000000000000]              
	float                                              NotVisibleLifeSpan;                               		// 0x037C (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             MyArchetype;                                      		// 0x0380 (0x0008) [0x0000000000000000]              
	float                                              MaxWalkingSpeed;                                  		// 0x0388 (0x0004) [0x0000000000000000]              
	float                                              MaxRunningSpeed;                                  		// 0x038C (0x0004) [0x0000000000000000]              
	float                                              MaxSpeed;                                         		// 0x0390 (0x0004) [0x0000000000000000]              
	TArray< struct FRecentInteraction >                RecentInteractions;                               		// 0x0394 (0x0010) [0x0000000000000000]              
	float                                              BeaconMaxDist;                                    		// 0x03A4 (0x0004) [0x0000000000000000]              
	struct FVector                                     BeaconOffset;                                     		// 0x03A8 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  BeaconTexture;                                    		// 0x03B4 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                BeaconColor;                                      		// 0x03BC (0x0010) [0x0000000000000000]              
	class USoundCue*                                   AmbientSoundCue;                                  		// 0x03CC (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x03D4 (0x0008) [0x0000000000000000]              
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                  		// 0x03DC (0x0008) [0x0000000000000000]              
	float                                              CurrentBehaviorActivationTime;                    		// 0x03E4 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    EncounterAgentBehaviors;                          		// 0x03E8 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    SeePlayerBehaviors;                               		// 0x03F8 (0x0010) [0x0000000000000000]              
	float                                              MaxSeePlayerDistSq;                               		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              SeePlayerInterval;                                		// 0x040C (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    SpawnBehaviors;                                   		// 0x0410 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    UneasyBehaviors;                                  		// 0x0420 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    AlertBehaviors;                                   		// 0x0430 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    PanicBehaviors;                                   		// 0x0440 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    RandomBehaviors;                                  		// 0x0450 (0x0010) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    TakeDamageBehaviors;                              		// 0x0460 (0x0010) [0x0000000000000000]              
	float                                              RandomBehaviorInterval;                           		// 0x0470 (0x0004) [0x0000000000000000]              
	float                                              ForceUpdateTime;                                  		// 0x0474 (0x0004) [0x0000000000000000]              
	float                                              ReachThreshold;                                   		// 0x0478 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    GroupWaitingBehaviors;                            		// 0x047C (0x0010) [0x0000000000000000]              
	float                                              DesiredGroupRadius;                               		// 0x048C (0x0004) [0x0000000000000000]              
	float                                              DesiredGroupRadiusSq;                             		// 0x0490 (0x0004) [0x0000000000000000]              
	float                                              MaxLOSLifeDistanceSq;                             		// 0x0494 (0x0004) [0x0000000000000000]              
	class UGameCrowdSpawnerInterface*                  MySpawner;                                        		// 0x0498 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x04A0 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     SpawnOffset;                                      		// 0x04A8 (0x000C) [0x0000000000000000]              
	float                                              InitialLastRenderTime;                            		// 0x04B4 (0x0004) [0x0000000000000000]              
	struct FColor                                      DebugAgentColor;                                  		// 0x04B8 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       DebugSpawnDest;                                   		// 0x04BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1332 ];

		return pClassPointer;
	};

	void InitDebugColor ( );
	void GetBehaviorString ( );
	void GetDestString ( );
	void eventPostRenderFor ( );
	void NativePostRenderFor ( );
	void eventGeneratePathToActor ( );
	void eventInitNavigationHandle ( );
	void eventOverlappedActorEvent ( );
	void TakeDamage ( );
	void eventFireDeathEvent ( );
	void PlayDeath ( );
	void eventUpdateIntermediatePoint ( );
	void CalcCamera ( );
	void IsIdle ( );
	void SetCurrentBehavior ( );
	void eventStopBehavior ( );
	void eventHandleBehaviorEvent ( );
	void ActivateInstancedBehavior ( );
	void eventActivateBehavior ( );
	void ResetSeePlayer ( );
	void TryRandomBehavior ( );
	void eventNotifySeePlayer ( );
	void PlaySpawnBehavior ( );
	void eventHandlePotentialAgentEncounter ( );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void OnPlayAgentAnimation ( );
	void InitializeAgent ( );
	void GetAttemptedSpawnLocation ( );
	void SetLighting ( );
	void DisplayDebug ( );
	void Destroyed ( );
	void ResetPooledAgent ( );
	void eventKillAgent ( );
	void PostBeginPlay ( );
	void SetMaxSpeed ( );
	void eventSetCurrentDestination ( );
	void eventWaitForGroupMembers ( );
	void PickBehaviorFrom ( );
	void IsPanicked ( );
	void eventFellOutOfWorld ( );
	void GetCollisionExtent ( );
};

UClass* AGameCrowdAgent::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentSkeletal
// 0x00B4 (0x0578 - 0x04C4)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x04C4 (0x0008) [0x0000000000000000]              
	class UAnimNodeBlend*                              SpeedBlendNode;                                   		// 0x04CC (0x0008) [0x0000000000000000]              
	class UAnimNodeSlot*                               FullBodySlot;                                     		// 0x04D4 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           ActionSeqNode;                                    		// 0x04DC (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           WalkSeqNode;                                      		// 0x04E4 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           RunSeqNode;                                       		// 0x04EC (0x0008) [0x0000000000000000]              
	class UAnimTree*                                   AgentTree;                                        		// 0x04F4 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             WalkAnimNames;                                    		// 0x04FC (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             RunAnimNames;                                     		// 0x050C (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             IdleAnimNames;                                    		// 0x051C (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             DeathAnimNames;                                   		// 0x052C (0x0010) [0x0000000000000000]              
	float                                              SpeedBlendStart;                                  		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              SpeedBlendEnd;                                    		// 0x0540 (0x0004) [0x0000000000000000]              
	float                                              AnimVelRate;                                      		// 0x0544 (0x0004) [0x0000000000000000]              
	float                                              MaxSpeedBlendChangeSpeed;                         		// 0x0548 (0x0004) [0x0000000000000000]              
	struct FName                                       MoveSyncGroupName;                                		// 0x054C (0x0008) [0x0000000000000000]              
	TArray< struct FGameCrowdAttachmentList >          Attachments;                                      		// 0x0554 (0x0010) [0x0000000000000000]              
	float                                              MaxTargetAcquireTime;                             		// 0x0564 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRootMotionVelocity : 1;                       		// 0x0568 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowSkeletonUpdateChangeBasedOnTickResult : 1;  		// 0x0568 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTickWhenNotVisible : 1;                          		// 0x0568 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsPlayingIdleAnimation : 1;                      		// 0x0568 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsPlayingDeathAnimation : 1;                     		// 0x0568 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsPlayingImportantAnimation : 1;                 		// 0x0568 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAnimateThisTick : 1;                             		// 0x0568 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              NotVisibleDisableTickTime;                        		// 0x056C (0x0004) [0x0000000000000000]              
	float                                              MaxAnimationDistance;                             		// 0x0570 (0x0004) [0x0000000000000000]              
	float                                              MaxAnimationDistanceSq;                           		// 0x0574 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1333 ];

		return pClassPointer;
	};

	void CreateAttachments ( );
	void eventOnAnimEnd ( );
	void eventStopIdleAnimation ( );
	void eventPlayIdleAnimation ( );
	void eventClearLatentAnimation ( );
	void OnPlayAgentAnimation ( );
	void SetRootMotion ( );
	void PlayDeath ( );
	void SetLighting ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdAgentSkeletal::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentSM
// 0x0010 (0x04D4 - 0x04C4)
class AGameCrowdAgentSM : public AGameCrowdAgent
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x04C4 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MeshColor;                                        		// 0x04CC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1334 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	void ActivateBehavior ( );
	void ChangeDebugColor ( );
	void InitDebugColor ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdAgentSM::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentBehavior
// 0x003C (0x009C - 0x0060)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned char                                      MyEventType;                                      		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      ViralBehaviorEvent;                               		// 0x0061 (0x0001) [0x0000000000000000]              
	float                                              DurationOfBehavior;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilStopBehavior;                            		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIdleBehavior : 1;                                		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsViralBehavior : 1;                             		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPassOnIsViralBehaviorFlag : 1;                   		// 0x006C (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      ActionTarget;                                     		// 0x0070 (0x0008) [0x0000000000000000]              
	float                                              MaxPlayerDistance;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              ViralRadius;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              DurationBeforeBecomesViral;                       		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              TimeToBecomeViral;                                		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              DurationOfViralBehaviorPropagation;               		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              TimeToStopPropagatingViralBehavior;               		// 0x008C (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             MyAgent;                                          		// 0x0090 (0x0008) [0x0000000000000000]              
	struct FColor                                      DebugBehaviorColor;                               		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1335 ];

		return pClassPointer;
	};

	void AllowBehaviorAt ( );
	void AllowThisDestination ( );
	void eventPropagateViralBehaviorTo ( );
	void GetBehaviorInstigator ( );
	void ActivatedBy ( );
	void GetDestinationActor ( );
	void ChangingDestination ( );
	void GetBehaviorString ( );
	void eventOnAnimEnd ( );
	void StopBehavior ( );
	void InitBehavior ( );
	void HandleMovement ( );
	void eventFinishedTargetRotation ( );
	void CanBeUsedBy ( );
	void eventTick ( );
	void ShouldEndIdle ( );
	void TriggerCrowdBehavior ( );
};

UClass* UGameCrowdAgentBehavior::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x0038 (0x00D4 - 0x009C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x009C (0x0010) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRootMotion : 1;                               		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLookAtPlayer : 1;                                		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLooping : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      CustomActionTarget;                               		// 0x00B8 (0x0008) [0x0000000000000000]              
	int                                                LoopIndex;                                        		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              LoopTime;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                     		// 0x00C8 (0x0008) [0x0000000000000000]              
	int                                                AnimationIndex;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1336 ];

		return pClassPointer;
	};

	void GetBehaviorString ( );
	void StopBehavior ( );
	void PlayAgentAnimationNow ( );
	void eventOnAnimEnd ( );
	void SetSequenceOutput ( );
	void eventFinishedTargetRotation ( );
	void InitBehavior ( );
};

UClass* UGameCrowdBehavior_PlayAnimation::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0008 (0x00A4 - 0x009C)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                       		// 0x009C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1337 ];

		return pClassPointer;
	};

	void GetBehaviorString ( );
	void AllowBehaviorAt ( );
	void AllowThisDestination ( );
	void GetBehaviorInstigator ( );
	void StopBehavior ( );
	void InitBehavior ( );
	void ActivatedBy ( );
};

UClass* UGameCrowdBehavior_RunFromPanic::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x009C - 0x009C)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1338 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	void ShouldEndIdle ( );
	void GetBehaviorString ( );
	void InitBehavior ( );
};

UClass* UGameCrowdBehavior_WaitForGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x000C (0x00A8 - 0x009C)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                            		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                    		// 0x00A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1339 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	void ShouldEndIdle ( );
	void GetBehaviorString ( );
	void GetDestinationActor ( );
	void ChangingDestination ( );
	void HandleMovement ( );
};

UClass* UGameCrowdBehavior_WaitInQueue::pClassPointer = NULL;

// Class GameFramework.GameCrowdGroup
// 0x0010 (0x0070 - 0x0060)
class UGameCrowdGroup : public UObject
{
public:
	TArray< class AGameCrowdAgent* >                   Members;                                          		// 0x0060 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1340 ];

		return pClassPointer;
	};

	void UpdateDestinations ( );
	void RemoveMember ( );
	void AddMember ( );
};

UClass* UGameCrowdGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdInfoVolume
// 0x0010 (0x0290 - 0x0280)
class AGameCrowdInfoVolume : public AVolume
{
public:
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1341 ];

		return pClassPointer;
	};

	void UnTouch ( );
	void Touch ( );
};

UClass* AGameCrowdInfoVolume::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionPoint
// 0x000C (0x0250 - 0x0244)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                   		// 0x0244 (0x0004) [0x0000000000150000] [0x00000001] ( CPF_Travel | CPF_GlobalConfig )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0248 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1342 ];

		return pClassPointer;
	};

	void OnToggle ( );
};

UClass* AGameCrowdInteractionPoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehaviorPoint
// 0x0018 (0x0268 - 0x0250)
class AGameCrowdBehaviorPoint : public AGameCrowdInteractionPoint
{
public:
	float                                              RadiusOfBehaviorEvent;                            		// 0x0250 (0x0004) [0x0000000000000000]              
	float                                              DurationOfBehaviorEvent;                          		// 0x0254 (0x0004) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0258 (0x0001) [0x0000000000000000]              
	unsigned long                                      bRequireLOS : 1;                                  		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      Initiator;                                        		// 0x0260 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1343 ];

		return pClassPointer;
	};

	void eventTouch ( );
	void DestroySelf ( );
	void eventPostBeginPlay ( );
};

UClass* AGameCrowdBehaviorPoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestination
// 0x00A8 (0x02F8 - 0x0250)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;            		// 0x0250 (0x0008) [0x0000000000000000]              
	unsigned long                                      bKillWhenReached : 1;                             		// 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowAsPreviousDestination : 1;                  		// 0x0258 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAvoidWhenPanicked : 1;                           		// 0x0258 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                      		// 0x0258 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFleeDestination : 1;                             		// 0x0258 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bMustReachExactly : 1;                            		// 0x0258 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasRestrictions : 1;                             		// 0x0258 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAllowsSpawning : 1;                              		// 0x0258 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bAllowCloudSpawning : 1;                          		// 0x0258 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bAllowVisibleSpawning : 1;                        		// 0x0258 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bLineSpawner : 1;                                 		// 0x0258 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bSpawnAtEdge : 1;                                 		// 0x0258 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bSoftPerimeter : 1;                               		// 0x0258 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bIsVisible : 1;                                   		// 0x0258 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bWillBeVisible : 1;                               		// 0x0258 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCanSpawnHereNow : 1;                             		// 0x0258 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bIsBeyondSpawnDistance : 1;                       		// 0x0258 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bAdjacentToVisibleNode : 1;                       		// 0x0258 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bHasNavigationMesh : 1;                           		// 0x0258 (0x0004) [0x0000000000000000] [0x00040000] 
	TArray< class AGameCrowdDestination* >             NextDestinations;                                 		// 0x025C (0x0010) [0x0000000000000000]              
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                        		// 0x026C (0x0008) [0x0000000000000000]              
	int                                                Capacity;                                         		// 0x0274 (0x0004) [0x0000000000000000]              
	float                                              Frequency;                                        		// 0x0278 (0x0004) [0x0000000000000000]              
	int                                                CustomerCount;                                    		// 0x027C (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            SupportedAgentClasses;                            		// 0x0280 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           SupportedArchetypes;                              		// 0x0290 (0x0010) [0x0000000000000000]              
	TArray< class UClass* >                            RestrictedAgentClasses;                           		// 0x02A0 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           RestrictedArchetypes;                             		// 0x02B0 (0x0010) [0x0000000000000000]              
	float                                              ExactReachTolerance;                              		// 0x02C0 (0x0004) [0x0000000000000000]              
	struct FName                                       InteractionTag;                                   		// 0x02C4 (0x0008) [0x0000000000000000]              
	float                                              InteractionDelay;                                 		// 0x02CC (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    ReachedBehaviors;                                 		// 0x02D0 (0x0010) [0x0000000000000000]              
	class AGameCrowdAgent*                             AgentEnRoute;                                     		// 0x02E0 (0x0008) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              LastSpawnTime;                                    		// 0x02EC (0x0004) [0x0000000000000000]              
	class AGameCrowdPopulationManager*                 MyPopMgr;                                         		// 0x02F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1344 ];

		return pClassPointer;
	};

	void DrawDebug ( );
	void GetDestinationRadius ( );
	void PrioritizeSpawnPoint ( );
	void AnalyzeSpawnPoint ( );
	void GetSpawnPosition ( );
	void GetSpawnRadius ( );
	void eventAllowableDestinationFor ( );
	void AtCapacity ( );
	void eventIncrementCustomerCount ( );
	void eventDecrementCustomerCount ( );
	void PickNewDestinationFor ( );
	void eventReachedDestination ( );
	void Destroyed ( );
	void PostBeginPlay ( );
	void ReachedByAgent ( );
};

UClass* AGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x0030 (0x0280 - 0x0250)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                		// 0x0250 (0x0008) [0x0000000000000000]              
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                            		// 0x0258 (0x0008) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueuedAgent;                                      		// 0x0260 (0x0008) [0x0000000000000000]              
	class AGameCrowdDestination*                       QueueDestination;                                 		// 0x0268 (0x0008) [0x0000000000000000]              
	unsigned long                                      bClearingQueue : 1;                               		// 0x0270 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingAdvance : 1;                              		// 0x0270 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                              		// 0x0274 (0x0004) [0x0000000000000000]              
	class UClass*                                      QueueBehaviorClass;                               		// 0x0278 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1345 ];

		return pClassPointer;
	};

	void HasCustomer ( );
	void ClearQueue ( );
	void AddCustomer ( );
	void ActuallyAdvance ( );
	void AdvanceCustomerTo ( );
	void eventReachedDestination ( );
	void HasSpace ( );
	void QueueReachedBy ( );
};

UClass* AGameCrowdDestinationQueuePoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdPopulationManager
// 0x00FC (0x0340 - 0x0244)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;              		// 0x0244 (0x0008) [0x0000000000000000]              
	struct FCrowdSpawnInfoItem                         CloudSpawnInfo;                                   		// 0x024C (0x0090) [0x0000000000000000]              
	TArray< struct FCrowdSpawnInfoItem >               ScriptedSpawnInfo;                                		// 0x02DC (0x0010) [0x0000000000000000]              
	class AGameCrowdInfoVolume*                        ActiveCrowdInfoVolume;                            		// 0x02EC (0x0008) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             GlobalPotentialSpawnPoints;                       		// 0x02F4 (0x0010) [0x0000000000000000]              
	float                                              SplitScreenNumReduction;                          		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              PlayerPositionPredictionTime;                     		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              HeadVisibilityOffset;                             		// 0x030C (0x0004) [0x0000000000000000]              
	class UClass*                                      NavigationHandleClass;                            		// 0x0310 (0x0008) [0x0000000000000000]              
	class UNavigationHandle*                           NavigationHandle;                                 		// 0x0318 (0x0008) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueryingAgent;                                    		// 0x0320 (0x0008) [0x0000000000000000]              
	TArray< struct FCrowdSpawnerPlayerInfo >           PlayerInfo;                                       		// 0x0328 (0x0010) [0x0000000000000000]              
	float                                              LastPlayerInfoUpdateTime;                         		// 0x0338 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebugSpawns : 1;                                 		// 0x033C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPauseCrowd : 1;                                  		// 0x033C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1346 ];

		return pClassPointer;
	};

	void eventCreateNewAgent ( );
	void Warmup ( );
	void SpawnAgent ( );
	void SpawnAgentByIdx ( );
	void ValidateSpawnAt ( );
	void AddPrioritizedSpawnPoint ( );
	void AnalyzeSpawnPoints ( );
	void eventPrioritizeSpawnPoints ( );
	void StaticGetPlayerInfo ( );
	void GetPlayerInfo ( );
	void eventPickSpawnPoint ( );
	void eventUpdateSpawner ( );
	void UpdateAllSpawners ( );
	void Tick ( );
	void ShouldDebugDestinations ( );
	void IsSpawningActive ( );
	void DisplayDebug ( );
	void AgentDestroyed ( );
	void eventFlushAllAgents ( );
	void eventFlushAgents ( );
	void eventCreateSpawner ( );
	void SetCrowdInfoVolume ( );
	void RemoveSpawnPoint ( );
	void AddSpawnPoint ( );
	void eventNotifyPathChanged ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdPopulationManager::pClassPointer = NULL;

// Class GameFramework.GameCrowdReplicationActor
// 0x0010 (0x0254 - 0x0244)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x0244 (0x0008) [0x0000000000150000]              ( CPF_Travel | CPF_GlobalConfig )
	unsigned long                                      bSpawningActive : 1;                              		// 0x024C (0x0004) [0x0000000000160000] [0x00000001] ( CPF_EditConst | CPF_GlobalConfig )
	int                                                DestroyAllCount;                                  		// 0x0250 (0x0004) [0x0000000000170000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1347 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( );
};

UClass* AGameCrowdReplicationActor::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnRelativeActor
// 0x0000 (0x0244 - 0x0244)
class AGameCrowdSpawnRelativeActor : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1348 ];

		return pClassPointer;
	};

};

UClass* AGameCrowdSpawnRelativeActor::pClassPointer = NULL;

// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x0250 - 0x0250)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1349 ];

		return pClassPointer;
	};

};

UClass* UGameDestinationConnRenderingComponent::pClassPointer = NULL;

// Class GameFramework.GameExplosion
// 0x00E8 (0x0148 - 0x0060)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreInstigator : 1;                            		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowTeammateCringes : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFullDamageToAttachee : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;            		// 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPerformRadialBlurRelevanceCheck : 1;             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCausesFracture : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAllowPerMaterialFX : 1;                          		// 0x0060 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;		// 0x0060 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bSkipDefaultPhysMatParticleSystem : 1;            		// 0x0060 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bUseMapSpecificValues : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x0060 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x0060 (0x0004) [0x0000000000000000] [0x00002000] 
	float                                              DirectionalExplosionAngleDeg;                     		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              DamageDelay;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              DamageFalloffExponent;                            		// 0x0074 (0x0004) [0x0000000000000000]              
	class AActor*                                      ActorToIgnoreForDamage;                           		// 0x0078 (0x0008) [0x0000000000000000]              
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0080 (0x0008) [0x0000000000000000]              
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;        		// 0x0088 (0x0008) [0x0000000000000000]              
	class UClass*                                      MyDamageType;                                     		// 0x0090 (0x0008) [0x0000000000000000]              
	float                                              KnockDownRadius;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              KnockDownStrength;                                		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              CringeRadius;                                     		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   CringeDuration;                                   		// 0x00A4 (0x0008) [0x0000000000000000]              
	float                                              MomentumTransferScale;                            		// 0x00AC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x00B0 (0x0008) [0x0000000000000000]              
	float                                              ExplosionEmitterScale;                            		// 0x00B8 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x00BC (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x00C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x00D0 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x00DC (0x0008) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSoundHurtSomeone;                        		// 0x00E4 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        ExploLight;                                       		// 0x00EC (0x0008) [0x0000000000000000]              
	float                                              ExploLightFadeOutTime;                            		// 0x00F4 (0x0004) [0x0000000000000000]              
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00F8 (0x0008) [0x0000000000000000]              
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              ExploRadialBlurMaxBlur;                           		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              FractureMeshRadius;                               		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              FracturePartVel;                                  		// 0x010C (0x0004) [0x0000000000000000]              
	class UCameraShake*                                CamShake;                                         		// 0x0110 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Left;                                    		// 0x0118 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Right;                                   		// 0x0120 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0128 (0x0008) [0x0000000000000000]              
	float                                              CamShakeInnerRadius;                              		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              CamShakeOuterRadius;                              		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              CamShakeFalloff;                                  		// 0x0138 (0x0004) [0x0000000000000000]              
	class UClass*                                      CameraLensEffect;                                 		// 0x013C (0x0008) [0x0000000000000000]              
	float                                              CameraLensEffectRadius;                           		// 0x0144 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1350 ];

		return pClassPointer;
	};

};

UClass* UGameExplosion::pClassPointer = NULL;

// Class GameFramework.GameExplosionActor
// 0x0078 (0x02BC - 0x0244)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x0244 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExplodeMoreThanOnce : 1;                         		// 0x0244 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTrackExplosionParticleSystemLifespan : 1;        		// 0x0244 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0244 (0x0004) [0x0000000000000000] [0x00000008] 
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x0248 (0x0008) [0x0000000000000000]              
	class URadialBlurComponent*                        ExplosionRadialBlur;                              		// 0x0250 (0x0008) [0x0000000000000000]              
	float                                              LightFadeTime;                                    		// 0x0258 (0x0004) [0x0000000000000000]              
	float                                              LightFadeTimeRemaining;                           		// 0x025C (0x0004) [0x0000000000000000]              
	float                                              LightInitialBrightness;                           		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              RadialBlurFadeTime;                               		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              RadialBlurFadeTimeRemaining;                      		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              RadialBlurMaxBlurAmount;                          		// 0x026C (0x0004) [0x0000000000000000]              
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0270 (0x0008) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x0278 (0x0008) [0x0000000000000000]              
	class AController*                                 InstigatorController;                             		// 0x0280 (0x0008) [0x0000000000000000]              
	class AActor*                                      HitActorFromPhysMaterialTrace;                    		// 0x0288 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocationFromPhysMaterialTrace;                 		// 0x0290 (0x000C) [0x0000000000000000]              
	class AActor*                                      Attachee;                                         		// 0x029C (0x0008) [0x0000000000000000]              
	class AController*                                 AttacheeController;                               		// 0x02A4 (0x0008) [0x0000000000000000]              
	float                                              DirectionalExplosionMinDot;                       		// 0x02AC (0x0004) [0x0000000000000000]              
	struct FVector                                     ExplosionDirection;                               		// 0x02B0 (0x000C) [0x0000000000150000]              ( CPF_Travel | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1351 ];

		return pClassPointer;
	};

	void ChooseCameraShake ( );
	void SpawnCameraLensEffects ( );
	void DoExplosionCameraEffects ( );
	void DrawDebug ( );
	void DelayedExplosionDamage ( );
	void Explode ( );
	void SpawnExplosionFogVolume ( );
	void SpawnExplosionDecal ( );
	void SpawnExplosionParticleSystem ( );
	void UpdateExplosionTemplateWithPerMaterialFX ( );
	void SpecialCringeEffectsFor ( );
	void SpecialPawnEffectsFor ( );
	void GetEffectCheckRadius ( );
	void DoExplosionDamage ( );
	void BoxDistanceToPoint ( );
	void IsBehindExplosion ( );
	void DoFullDamageToActor ( );
	void GetPhysicalMaterial ( );
	void eventPreBeginPlay ( );
};

UClass* AGameExplosionActor::pClassPointer = NULL;

// Class GameFramework.GamePawn
// 0x0004 (0x055C - 0x0558)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                          		// 0x0558 (0x0004) [0x0000000000310000] [0x00000001] ( CPF_Travel )
	unsigned long                                      bRespondToExplosions : 1;                         		// 0x0558 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1352 ];

		return pClassPointer;
	};

	void ReattachMeshWithoutBeingSeen ( );
	void ReattachMesh ( );
	void eventUpdateShadowSettings ( );
};

UClass* AGamePawn::pClassPointer = NULL;

// Class GameFramework.GamePlayerController
// 0x0010 (0x074C - 0x073C)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                            		// 0x073C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugCrowdAwareness : 1;                         		// 0x073C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsWarmupPaused : 1;                              		// 0x073C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              AgentAwareRadius;                                 		// 0x0740 (0x0004) [0x0000000000000000]              
	struct FName                                       CurrentSoundMode;                                 		// 0x0744 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1353 ];

		return pClassPointer;
	};

	void eventCallPrintHUDLogInClient ( );
	void PrintHUDLogInClient ( );
	void ClientColorFade ( );
	void eventWarmupPause ( );
	void CanUnpauseWarmup ( );
	void GetCurrentMovie ( );
	void eventClientStopMovie ( );
	void eventClientPlayMovie ( );
	void KeepPlayingLoadingMovie ( );
	void ShowLoadingMovie ( );
	void SetSoundMode ( );
	void DoForceFeedbackForScreenShake ( );
	void eventNotifyCrowdAgentInRadius ( );
	void eventNotifyCrowdAgentRefresh ( );
	void CrowdDebug ( );
	void GetUIPlayerIndex ( );
	void OnToggleMouseCursor ( );
};

UClass* AGamePlayerController::pClassPointer = NULL;

// Class GameFramework.DebugCameraController
// 0x004C (0x0798 - 0x074C)
class ADebugCameraController : public AGamePlayerController
{
public:
	struct FName                                       PrimaryKey;                                       		// 0x074C (0x0008) [0x0000000000000000]              
	struct FName                                       SecondaryKey;                                     		// 0x0754 (0x0008) [0x0000000000000000]              
	struct FName                                       UnselectKey;                                      		// 0x075C (0x0008) [0x0000000000000000]              
	unsigned long                                      bShowSelectedInfo : 1;                            		// 0x0764 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDrawDebugText : 1;                               		// 0x0764 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsFrozenRendering : 1;                           		// 0x0764 (0x0004) [0x0000000000000000] [0x00000004] 
	class UClass*                                      HUDClass;                                         		// 0x0768 (0x0008) [0x0000000000000000]              
	class APlayerController*                           OriginalControllerRef;                            		// 0x0770 (0x0008) [0x0000000000000000]              
	class UPlayer*                                     OriginalPlayer;                                   		// 0x0778 (0x0008) [0x0000000000000000]              
	class UDrawFrustumComponent*                       DrawFrustum;                                      		// 0x0780 (0x0008) [0x0000000000000000]              
	class AActor*                                      SelectedActor;                                    		// 0x0788 (0x0008) [0x0000000000000000]              
	class UPrimitiveComponent*                         SelectedComponent;                                		// 0x0790 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1354 ];

		return pClassPointer;
	};

	void ConsoleCommand ( );
	void ShowDebugSelectedInfo ( );
	void NativeInputKey ( );
	void InitDebugInputSystem ( );
	void DisableDebugCamera ( );
	void NormalSpeed ( );
	void MoreSpeed ( );
	void SetFreezeRendering ( );
	void OnDeactivate ( );
	void OnActivate ( );
	void eventPostBeginPlay ( );
	void Unselect ( );
	void SecondarySelect ( );
	void PrimarySelect ( );
};

UClass* ADebugCameraController::pClassPointer = NULL;

// Class GameFramework.GameTypes
// 0x0000 (0x0060 - 0x0060)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1355 ];

		return pClassPointer;
	};

};

UClass* UGameTypes::pClassPointer = NULL;

// Class GameFramework.MobileHUD
// 0x011C (0x0680 - 0x0564)
class AMobileHUD : public AHUD
{
public:
	unsigned long                                      bShowGameHud : 1;                                 		// 0x0564 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowMobileHud : 1;                               		// 0x0564 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceMobileHUD : 1;                              		// 0x0564 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowMobileTilt : 1;                              		// 0x0564 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugTouches : 1;                                		// 0x0564 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugZones : 1;                                  		// 0x0564 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDebugZonePresses : 1;                            		// 0x0564 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bShowMotionDebug : 1;                             		// 0x0564 (0x0004) [0x0000000000000000] [0x00000080] 
	class UTexture2D*                                  JoystickBackground;                               		// 0x0568 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickBackgroundUVs;                            		// 0x0570 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  JoystickHat;                                      		// 0x0580 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickHatUVs;                                   		// 0x0588 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  ButtonImages[ 0x2 ];                              		// 0x0598 (0x0010) [0x0000000000000000]              
	struct FTextureUVs                                 ButtonUVs[ 0x2 ];                                 		// 0x05A8 (0x0020) [0x0000000000000000]              
	class UFont*                                       ButtonFont;                                       		// 0x05C8 (0x0008) [0x0000000000000000]              
	struct FColor                                      ButtonCaptionColor;                               		// 0x05D0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TrackballBackground;                              		// 0x05D4 (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballBackgroundUVs;                           		// 0x05DC (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  TrackballTouchIndicator;                          		// 0x05EC (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                       		// 0x05F4 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  SliderImages[ 0x4 ];                              		// 0x0604 (0x0020) [0x0000000000000000]              
	struct FTextureUVs                                 SliderUVs[ 0x4 ];                                 		// 0x0624 (0x0040) [0x0000000000000000]              
	float                                              MobileTiltX;                                      		// 0x0664 (0x0004) [0x0000000000000000]              
	float                                              MobileTiltY;                                      		// 0x0668 (0x0004) [0x0000000000000000]              
	float                                              MobileTiltSize;                                   		// 0x066C (0x0004) [0x0000000000000000]              
	TArray< class USeqEvent_HudRender* >               KismetRenderEvents;                               		// 0x0670 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1356 ];

		return pClassPointer;
	};

	void RenderKismetHud ( );
	void AddKismetRenderEvent ( );
	void RefreshKismetLinks ( );
	void DrawMobileZone_Slider ( );
	void DrawMobileTilt ( );
	void DrawMobileZone_Trackball ( );
	void DrawMobileZone_Joystick ( );
	void DrawMobileZone_Button ( );
	void DrawInputZoneOverlays ( );
	void RenderMobileMenu ( );
	void ShowMobileHud ( );
	void DrawMobileDebugString ( );
	void PostRender ( );
	void PostBeginPlay ( );
};

UClass* AMobileHUD::pClassPointer = NULL;

// Class GameFramework.MobileInputZone
// 0x0200 (0x0260 - 0x0060)
class UMobileInputZone : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      TouchpadIndex;                                    		// 0x0061 (0x0001) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0062 (0x0001) [0x0000000000000000]              
	unsigned char                                      SlideType;                                        		// 0x0063 (0x0001) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0064 (0x0010) [0x0000000000000000]              
	struct FName                                       InputKey;                                         		// 0x0074 (0x0008) [0x0000000000000000]              
	struct FName                                       HorizontalInputKey;                               		// 0x007C (0x0008) [0x0000000000000000]              
	struct FName                                       TapInputKey;                                      		// 0x0084 (0x0008) [0x0000000000000000]              
	struct FName                                       DoubleTapInputKey;                                		// 0x008C (0x0008) [0x0000000000000000]              
	float                                              VertMultiplier;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              HorizMultiplier;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              Acceleration;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              Smoothing;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              EscapeVelocityStrength;                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bScalePawnMovement : 1;                           		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRelativeX : 1;                                   		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRelativeY : 1;                                   		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRelativeSizeX : 1;                               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRelativeSizeY : 1;                               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bActiveSizeYFromX : 1;                            		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSizeYFromSizeX : 1;                              		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bApplyGlobalScaleToActiveSizes : 1;               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bCenterX : 1;                                     		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bCenterY : 1;                                     		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bIsInvisible : 1;                                 		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bQuickDoubleTap : 1;                              		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bCenterOnEvent : 1;                               		// 0x00A8 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bSliderHasTrack : 1;                              		// 0x00A8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bFloatingTiltZone : 1;                            		// 0x00A8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bUseGentleTransitions : 1;                        		// 0x00A8 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bAllowFirstDeltaForTrackballZone : 1;             		// 0x00A8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bRenderGuides : 1;                                		// 0x00A8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bIsDoubleTapAndHold : 1;                          		// 0x00A8 (0x0004) [0x0000000000000000] [0x00040000] 
	float                                              X;                                                		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              SizeX;                                            		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              SizeY;                                            		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              ActiveSizeX;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              ActiveSizeY;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              InitialX;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              InitialY;                                         		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              InitialSizeX;                                     		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              InitialSizeY;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              InitialActiveSizeX;                               		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              InitialActiveSizeY;                               		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              AuthoredGlobalScale;                              		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              Border;                                           		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              ResetCenterAfterInactivityTime;                   		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              TapDistanceConstraint;                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              ActivateTime;                                     		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              DeactivateTime;                                   		// 0x00F0 (0x0004) [0x0000000000000000]              
	struct FColor                                      RenderColor;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              InactiveAlpha;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              CaptionXAdjustment;                               		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              CaptionYAdjustment;                               		// 0x0100 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OverrideTexture1;                                 		// 0x0104 (0x0008) [0x0000000000000000]              
	struct FString                                     OverrideTexture1Name;                             		// 0x010C (0x0010) [0x0000000000000000]              
	struct FTextureUVs                                 OverrideUVs1;                                     		// 0x011C (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  OverrideTexture2;                                 		// 0x012C (0x0008) [0x0000000000000000]              
	struct FString                                     OverrideTexture2Name;                             		// 0x0134 (0x0010) [0x0000000000000000]              
	struct FTextureUVs                                 OverrideUVs2;                                     		// 0x0144 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   InitialLocation;                                  		// 0x0154 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentLocation;                                  		// 0x015C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentCenter;                                    		// 0x0164 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   InitialCenter;                                    		// 0x016C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   PreviousLocations[ 0x6 ];                         		// 0x0174 (0x0030) [0x0000000000000000]              
	float                                              PreviousMoveDeltaTimes[ 0x6 ];                    		// 0x01A4 (0x0018) [0x0000000000000000]              
	int                                                PreviousLocationCount;                            		// 0x01BC (0x0004) [0x0000000000000000]              
	float                                              LastTouchTime;                                    		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastTapRepeat;                           		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              AnimatingFadeOpacity;                             		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x01CC (0x0008) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   EscapeVelocity;                                   		// 0x01D8 (0x0008) [0x0000000000000000]              
	TArray< class USeqEvent_MobileZoneBase* >          MobileSeqEventHandlers;                           		// 0x01E0 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   LastAxisValues;                                   		// 0x01F0 (0x0008) [0x0000000000000000]              
	float                                              TotalActiveTime;                                  		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              LastWentActiveTime;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;               		// 0x0200 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0204 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                        		// 0x0210 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0214 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;                  		// 0x0220 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0224 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnProcessSlide__Delegate;                       		// 0x0230 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0234 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPreDrawZone__Delegate;                        		// 0x0240 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0244 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPostDrawZone__Delegate;                       		// 0x0250 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x0254 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1357 ];

		return pClassPointer;
	};

	void AddKismetEventHandler ( );
	void OnPostDrawZone ( );
	void OnPreDrawZone ( );
	void OnProcessSlide ( );
	void OnDoubleTapDelegate ( );
	void OnTapDelegate ( );
	void OnProcessInputDelegate ( );
	void DeactivateZone ( );
	void ActivateZone ( );
};

UClass* UMobileInputZone::pClassPointer = NULL;

// Class GameFramework.MobileMenuObject
// 0x007C (0x00DC - 0x0060)
class UMobileMenuObject : public UObject
{
public:
	unsigned long                                      bHasBeenInitialized : 1;                          		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRelativeLeft : 1;                                		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRelativeTop : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRelativeWidth : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRelativeHeight : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bApplyGlobalScaleLeft : 1;                        		// 0x0060 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bApplyGlobalScaleTop : 1;                         		// 0x0060 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bApplyGlobalScaleWidth : 1;                       		// 0x0060 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bApplyGlobalScaleHeight : 1;                      		// 0x0060 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHeightRelativeToWidth : 1;                       		// 0x0060 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bXOffsetIsActual : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bYOffsetIsActual : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bIsActive : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bIsHidden : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIsTouched : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsHighlighted : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bTellSceneBeforeRendering : 1;                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00010000] 
	float                                              Left;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              InitialLeft;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              InitialTop;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              InitialWidth;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              InitialHeight;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              AuthoredGlobalScale;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              TopLeeway;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              BottomLeeway;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              LeftLeeway;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              RightLeeway;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              XOffset;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              YOffset;                                          		// 0x009C (0x0004) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x00A0 (0x0010) [0x0000000000000000]              
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x00B0 (0x0008) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UMobileMenuScene*                            OwnerScene;                                       		// 0x00BC (0x0008) [0x0000000000000000]              
	struct FString                                     RelativeToTag;                                    		// 0x00C4 (0x0010) [0x0000000000000000]              
	class UMobileMenuObject*                           RelativeTo;                                       		// 0x00D4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1358 ];

		return pClassPointer;
	};

	void RenderObject ( );
	void SetCanvasPos ( );
	void InitMenuObject ( );
	void eventGetRealPosition ( );
	void eventOnTouch ( );
};

UClass* UMobileMenuObject::pClassPointer = NULL;

// Class GameFramework.MobileMenuImage
// 0x0030 (0x010C - 0x00DC)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                            		// 0x00DC (0x0008) [0x0000000000000000]              
	unsigned char                                      ImageDrawStyle;                                   		// 0x00E4 (0x0001) [0x0000000000000000]              
	struct FUVCoords                                   ImageUVs;                                         		// 0x00E8 (0x0014) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x00FC (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1359 ];

		return pClassPointer;
	};

	void RenderObject ( );
};

UClass* UMobileMenuImage::pClassPointer = NULL;

// Class GameFramework.MobileMenuScene
// 0x0070 (0x00D0 - 0x0060)
class UMobileMenuScene : public UObject
{
public:
	struct FString                                     MenuName;                                         		// 0x0060 (0x0010) [0x0000000000000000]              
	TArray< class UMobileMenuObject* >                 MenuObjects;                                      		// 0x0070 (0x0010) [0x0000000000000000]              
	class UFont*                                       SceneCaptionFont;                                 		// 0x0080 (0x0008) [0x0000000000000000]              
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x0088 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSceneDoesNotRequireInput : 1;                    		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRelativeLeft : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRelativeTop : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRelativeWidth : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRelativeHeight : 1;                              		// 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bApplyGlobalScaleLeft : 1;                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bApplyGlobalScaleTop : 1;                         		// 0x0090 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bApplyGlobalScaleWidth : 1;                       		// 0x0090 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bApplyGlobalScaleHeight : 1;                      		// 0x0090 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned char                                      TouchpadIndex;                                    		// 0x0094 (0x0001) [0x0000000000000000]              
	float                                              Left;                                             		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              InitialLeft;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              InitialTop;                                       		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              InitialWidth;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              InitialHeight;                                    		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              AuthoredGlobalScale;                              		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              Opacity;                                          		// 0x00BC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   UITouchSound;                                     		// 0x00C0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   UIUnTouchSound;                                   		// 0x00C8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1360 ];

		return pClassPointer;
	};

	void MobileMenuCommand ( );
	void FindMenuObject ( );
	void CleanUpScene ( );
	void Closed ( );
	void Closing ( );
	void MadeTopMenu ( );
	void Opened ( );
	void eventOnSceneTouch ( );
	void eventOnTouch ( );
	void PreRenderMenuObject ( );
	void RenderScene ( );
	void GetSceneFont ( );
	void eventInitMenuScene ( );
	void GetGlobalScaleY ( );
	void GetGlobalScaleX ( );
};

UClass* UMobileMenuScene::pClassPointer = NULL;

// Class GameFramework.MobilePlayerInput
// 0x028C (0x0578 - 0x02EC)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[ 0x5 ];                                   		// 0x02EC (0x0190) [0x0000000000000000]              
	class UMobileMenuObject*                           InteractiveObject;                                		// 0x047C (0x0008) [0x0000000000000000]              
	struct FDouble                                     InteractiveObjectLastTime;                        		// 0x0484 (0x0008) [0x0000000000000000]              
	TArray< struct FMobileInputGroup >                 MobileInputGroups;                                		// 0x048C (0x0010) [0x0000000000000000]              
	int                                                CurrentMobileGroup;                               		// 0x049C (0x0004) [0x0000000000000000]              
	TArray< class UMobileInputZone* >                  MobileInputZones;                                 		// 0x04A0 (0x0010) [0x0000000000000000]              
	TArray< struct FMobileInputZoneClassMap >          MobileInputZoneClasses;                           		// 0x04B0 (0x0010) [0x0000000000000000]              
	float                                              MobilePitch;                                      		// 0x04C0 (0x0004) [0x0000000000000000]              
	float                                              MobilePitchCenter;                                		// 0x04C4 (0x0004) [0x0000000000000000]              
	float                                              MobilePitchMultiplier;                            		// 0x04C8 (0x0004) [0x0000000000000000]              
	float                                              MobileYaw;                                        		// 0x04CC (0x0004) [0x0000000000000000]              
	float                                              MobileYawCenter;                                  		// 0x04D0 (0x0004) [0x0000000000000000]              
	float                                              MobileYawMultiplier;                              		// 0x04D4 (0x0004) [0x0000000000000000]              
	float                                              MobilePitchDeadzoneSize;                          		// 0x04D8 (0x0004) [0x0000000000000000]              
	float                                              MobileYawDeadzoneSize;                            		// 0x04DC (0x0004) [0x0000000000000000]              
	float                                              MobileDoubleTapTime;                              		// 0x04E0 (0x0004) [0x0000000000000000]              
	float                                              MobileMinHoldForTap;                              		// 0x04E4 (0x0004) [0x0000000000000000]              
	float                                              MobileTapRepeatTime;                              		// 0x04E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAllowTouchesInCinematic : 1;                     		// 0x04EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableTouchInput : 1;                           		// 0x04EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAbsoluteTouchLocations : 1;                      		// 0x04EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x04EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisableSceneRender : 1;                          		// 0x04EC (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              ZoneTimeout;                                      		// 0x04F0 (0x0004) [0x0000000000000000]              
	TArray< class UMobileMenuScene* >                  MobileMenuStack;                                  		// 0x04F4 (0x0010) [0x0000000000000000]              
	struct FString                                     NativeDebugString;                                		// 0x0504 (0x0010) [0x0000000000000000]              
	float                                              MobileInactiveTime;                               		// 0x0514 (0x0004) [0x0000000000000000]              
	TArray< class USeqEvent_MobileBase* >              MobileSeqEventHandlers;                           		// 0x0518 (0x0010) [0x0000000000000000]              
	TArray< class USeqEvent_MobileRawInput* >          MobileRawInputSeqEventHandlers;                   		// 0x0528 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   MobileViewportOffset;                             		// 0x0538 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MobileViewportSize;                               		// 0x0540 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnTouchNotHandledInMenu__Delegate;              		// 0x0548 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x054C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPreviewTouch__Delegate;                       		// 0x0558 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x055C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnInputTouch__Delegate;                         		// 0x0568 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x056C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1361 ];

		return pClassPointer;
	};

	void OpenMobileMenuMode ( );
	void OpenMobileMenu ( );
	void MobileMenuCommand ( );
	void SceneRenderToggle ( );
	void PreClientTravel ( );
	void eventRenderMenus ( );
	void eventCloseAllMenus ( );
	void eventCloseMenuScene ( );
	void eventOpenMenuScene ( );
	void SetMobileInputConfig ( );
	void ActivateInputGroup ( );
	void GetCurrentZones ( );
	void HasZones ( );
	void FindorAddZone ( );
	void FindZone ( );
	void AddKismetRawInputEventHandler ( );
	void AddKismetEventHandler ( );
	void eventRefreshKismetLinks ( );
	void SwapZoneOwners ( );
	void InitializeInputZones ( );
	void InitTouchSystem ( );
	void ClientInitInputSystem ( );
	void InitInputSystem ( );
	void ProcessWorldTouch ( );
	void SendInputAxis ( );
	void SendInputKey ( );
	void ConditionalUpdateInputZones ( );
	void NativeInitializeInputZones ( );
	void NativeInitializeInputSystem ( );
	void OnInputTouch ( );
	void OnPreviewTouch ( );
	void OnTouchNotHandledInMenu ( );
	void eventPlayerInput ( );
	void CancelMobileInput ( );
	void ProcessMobileInput ( );
};

UClass* UMobilePlayerInput::pClassPointer = NULL;

// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0018 (0x0094 - 0x007C)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                         		// 0x007C (0x0008) [0x0000000000000000]              
	struct FVector                                     OutOfViewLocation;                                		// 0x0084 (0x000C) [0x0000000000000000]              
	unsigned long                                      bShowDebug : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1362 ];

		return pClassPointer;
	};

	void Recycle ( );
	void MustBeHiddenFromThisPoint ( );
	void RecycleNative ( );
};

UClass* UNavMeshGoal_OutOfViewFrom::pClassPointer = NULL;

// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x002C (0x00A4 - 0x0078)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                         		// 0x0078 (0x000C) [0x0000000000000000]              
	struct FVector                                     Rotation;                                         		// 0x0084 (0x000C) [0x0000000000000000]              
	float                                              DistanceToCheck;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           LocationsToCheck;                                 		// 0x0094 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1363 ];

		return pClassPointer;
	};

	void Recycle ( );
	void BiasAgainstPolysWithinDistanceOfLocations ( );
};

UClass* UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::pClassPointer = NULL;

// Class GameFramework.SecondaryViewportClient
// 0x0000 (0x0068 - 0x0068)
class USecondaryViewportClient : public UScriptViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1364 ];

		return pClassPointer;
	};

	void eventPostRender ( );
};

UClass* USecondaryViewportClient::pClassPointer = NULL;

// Class GameFramework.MobileSecondaryViewportClient
// 0x0000 (0x0068 - 0x0068)
class UMobileSecondaryViewportClient : public USecondaryViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1365 ];

		return pClassPointer;
	};

	void eventPostRender ( );
};

UClass* UMobileSecondaryViewportClient::pClassPointer = NULL;

// Class GameFramework.SeqAct_ControlGameMovie
// 0x0018 (0x0138 - 0x0120)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                        		// 0x0120 (0x0010) [0x0000000000000000]              
	int                                                StartOfRenderingMovieFrame;                       		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                EndOfRenderingMovieFrame;                         		// 0x0134 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1366 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ControlGameMovie::pClassPointer = NULL;

// Class GameFramework.SeqAct_Deproject
// 0x002C (0x0134 - 0x0108)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                          		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              ScreenY;                                          		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              TraceDistance;                                    		// 0x0110 (0x0004) [0x0000000000000000]              
	class UObject*                                     HitObject;                                        		// 0x0114 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x011C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0128 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1367 ];

		return pClassPointer;
	};

};

UClass* USeqAct_Deproject::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x004C (0x0154 - 0x0108)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPopulationPct;                              		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                   		// 0x010C (0x0008) [0x0000000000000000]              
	unsigned long                                      bClearOldArchetypes : 1;                          		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCastShadows : 1;                                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFillPotentialSpawnPoints : 1;                    		// 0x0114 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceObstacleChecking : 1;                       		// 0x0114 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bForceNavMeshPathing : 1;                         		// 0x0114 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIndividualSpawner : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                MaxAgents;                                        		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              SpawnRate;                                        		// 0x011C (0x0004) [0x0000000000000000]              
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              MinBehindSpawnDist;                               		// 0x0128 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x012C (0x0010) [0x0000000000000000]              
	float                                              AgentWarmupTime;                                  		// 0x013C (0x0004) [0x0000000000000000]              
	int                                                NumAgentsToTickPerFrame;                          		// 0x0140 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdAgent* >                   LastSpawnedList;                                  		// 0x0144 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1368 ];

		return pClassPointer;
	};

	void AgentDestroyed ( );
	void GetMaxSpawnDist ( );
	void eventFillCrowdSpawnInfoItem ( );
	void eventGetObjClassVersion ( );
};

UClass* USeqAct_GameCrowdPopulationManagerToggle::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0000 (0x0154 - 0x0154)
class USeqAct_GameCrowdSpawner : public USeqAct_GameCrowdPopulationManagerToggle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1369 ];

		return pClassPointer;
	};

	void eventGetObjClassVersion ( );
};

UClass* USeqAct_GameCrowdSpawner::pClassPointer = NULL;

// Class GameFramework.SeqAct_MobileAddInputZones
// 0x0010 (0x0118 - 0x0108)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	struct FName                                       ZoneName;                                         		// 0x0108 (0x0008) [0x0000000000000000]              
	class UMobileInputZone*                            NewZone;                                          		// 0x0110 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1370 ];

		return pClassPointer;
	};

};

UClass* USeqAct_MobileAddInputZones::pClassPointer = NULL;

// Class GameFramework.SeqAct_MobileClearInputZones
// 0x0000 (0x0108 - 0x0108)
class USeqAct_MobileClearInputZones : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1371 ];

		return pClassPointer;
	};

};

UClass* USeqAct_MobileClearInputZones::pClassPointer = NULL;

// Class GameFramework.SeqAct_MobileRemoveInputZone
// 0x0010 (0x0118 - 0x0108)
class USeqAct_MobileRemoveInputZone : public USequenceAction
{
public:
	struct FString                                     ZoneName;                                         		// 0x0108 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1372 ];

		return pClassPointer;
	};

};

UClass* USeqAct_MobileRemoveInputZone::pClassPointer = NULL;

// Class GameFramework.SeqAct_MobileSaveLoadValue
// 0x0000 (0x0108 - 0x0108)
class USeqAct_MobileSaveLoadValue : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1373 ];

		return pClassPointer;
	};

	void eventGetObjClassVersion ( );
};

UClass* USeqAct_MobileSaveLoadValue::pClassPointer = NULL;

// Class GameFramework.SeqAct_ModifyProperty
// 0x0010 (0x0118 - 0x0108)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x0108 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1374 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ModifyProperty::pClassPointer = NULL;

// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x002C (0x014C - 0x0120)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x0120 (0x0010) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              BlendOutTime;                                     		// 0x0134 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRootMotion : 1;                               		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x0138 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLooping : 1;                                     		// 0x0138 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x0138 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                LoopIndex;                                        		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              LoopTime;                                         		// 0x0140 (0x0004) [0x0000000000000000]              
	class AActor*                                      ActionTarget;                                     		// 0x0144 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1375 ];

		return pClassPointer;
	};

	void SetCurrentAnimationActionFor ( );
	void eventGetObjClassVersion ( );
};

UClass* USeqAct_PlayAgentAnimation::pClassPointer = NULL;

// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0128 - 0x0128)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1376 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_CrowdAgentReachedDestination::pClassPointer = NULL;

// Class GameFramework.SeqEvent_HudRender
// 0x0018 (0x0140 - 0x0128)
class USeqEvent_HudRender : public USequenceEvent
{
public:
	TArray< class UObject* >                           Targets;                                          		// 0x0128 (0x0010) [0x0000000000000000]              
	unsigned long                                      bIsActive : 1;                                    		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AuthoredGlobalScale;                              		// 0x013C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1377 ];

		return pClassPointer;
	};

	void Render ( );
	void eventRegisterEvent ( );
};

UClass* USeqEvent_HudRender::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileBase
// 0x0000 (0x0128 - 0x0128)
class USeqEvent_MobileBase : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1378 ];

		return pClassPointer;
	};

	void eventAddToMobileInput ( );
	void eventRegisterEvent ( );
};

UClass* USeqEvent_MobileBase::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileMotion
// 0x0018 (0x0140 - 0x0128)
class USeqEvent_MobileMotion : public USeqEvent_MobileBase
{
public:
	float                                              Roll;                                             		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              Yaw;                                              		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              DeltaRoll;                                        		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              DeltaPitch;                                       		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              DeltaYaw;                                         		// 0x013C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1379 ];

		return pClassPointer;
	};

	void eventGetObjClassVersion ( );
};

UClass* USeqEvent_MobileMotion::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileZoneBase
// 0x0010 (0x0138 - 0x0128)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	struct FString                                     TargetZoneName;                                   		// 0x0128 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1380 ];

		return pClassPointer;
	};

	void eventAddToMobileInput ( );
};

UClass* USeqEvent_MobileZoneBase::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileButton
// 0x0004 (0x013C - 0x0138)
class USeqEvent_MobileButton : public USeqEvent_MobileZoneBase
{
public:
	unsigned long                                      bWasActiveLastFrame : 1;                          		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSendPressedOnlyOnTouchDown : 1;                  		// 0x0138 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSendPressedOnlyOnTouchUp : 1;                    		// 0x0138 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1381 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileButton::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileInput
// 0x0018 (0x0150 - 0x0138)
class USeqEvent_MobileInput : public USeqEvent_MobileZoneBase
{
public:
	float                                              XAxisValue;                                       		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              YAxisValue;                                       		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              CenterX;                                          		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              CenterY;                                          		// 0x0144 (0x0004) [0x0000000000000000]              
	float                                              CurrentX;                                         		// 0x0148 (0x0004) [0x0000000000000000]              
	float                                              CurrentY;                                         		// 0x014C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1382 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileInput::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileLook
// 0x0014 (0x014C - 0x0138)
class USeqEvent_MobileLook : public USeqEvent_MobileZoneBase
{
public:
	float                                              Yaw;                                              		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              StickStrength;                                    		// 0x013C (0x0004) [0x0000000000000000]              
	struct FVector                                     RotationVector;                                   		// 0x0140 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1383 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileLook::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileRawInput
// 0x0014 (0x013C - 0x0128)
class USeqEvent_MobileRawInput : public USequenceEvent
{
public:
	int                                                TouchIndex;                                       		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                TouchpadIndex;                                    		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              TouchLocationX;                                   		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              TouchLocationY;                                   		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0138 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1384 ];

		return pClassPointer;
	};

	void eventRegisterEvent ( );
};

UClass* USeqEvent_MobileRawInput::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileObjectPicker
// 0x0038 (0x0174 - 0x013C)
class USeqEvent_MobileObjectPicker : public USeqEvent_MobileRawInput
{
public:
	float                                              TraceDistance;                                    		// 0x013C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCheckonTouch : 1;                                		// 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FinalTouchLocation;                               		// 0x0144 (0x000C) [0x0000000000000000]              
	struct FVector                                     FinalTouchNormal;                                 		// 0x0150 (0x000C) [0x0000000000000000]              
	class UObject*                                     FinalTouchObject;                                 		// 0x015C (0x0008) [0x0000000000000000]              
	TArray< class UObject* >                           Targets;                                          		// 0x0164 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1385 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileObjectPicker::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileSwipe
// 0x0024 (0x0160 - 0x013C)
class USeqEvent_MobileSwipe : public USeqEvent_MobileRawInput
{
public:
	float                                              Tolerance;                                        		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              MinDistance;                                      		// 0x0140 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   InitialTouch;                                     		// 0x0144 (0x0008) [0x0000000000000000]              
	TArray< class AActor* >                            TouchedActors;                                    		// 0x014C (0x0010) [0x0000000000000000]              
	float                                              TraceDistance;                                    		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1386 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileSwipe::pClassPointer = NULL;

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x014C - 0x00D0)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bApplyControl : 1;                                		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FRecoilDef                                  Recoil;                                           		// 0x00D4 (0x0070) [0x0000000000000000]              
	struct FVector2D                                   Aim;                                              		// 0x0144 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1387 ];

		return pClassPointer;
	};

};

UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;

// Class GameFramework.GameCameraBase
// 0x000C (0x006C - 0x0060)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	unsigned long                                      bResetCameraInterpolation : 1;                    		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1388 ];

		return pClassPointer;
	};

	void eventModifyPostProcessSettings ( );
	void Init ( );
	void DisplayDebug ( );
	void ProcessViewRotation ( );
	void UpdateCamera ( );
	void ResetInterpolation ( );
	void OnBecomeInActive ( );
	void OnBecomeActive ( );
};

UClass* UGameCameraBase::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCamera
// 0x0168 (0x01D4 - 0x006C)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	float                                              WorstLocBlockedPct;                               		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              WorstLocPenetrationExtentScale;                   		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              PenetrationBlendOutTime;                          		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              PenetrationBlendInTime;                           		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              PenetrationBlockedPct;                            		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              PenetrationExtentScale;                           		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastActualOriginOffset;                           		// 0x0084 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastActualCameraOrigin;                           		// 0x0090 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastActualCameraOriginRot;                        		// 0x009C (0x000C) [0x0000000000000000]              
	float                                              OriginOffsetInterpSpeed;                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastViewOffset;                                   		// 0x00AC (0x000C) [0x0000000000000000]              
	float                                              LastCamFOV;                                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastIdealCameraOrigin;                            		// 0x00BC (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastIdealCameraOriginRot;                         		// 0x00C8 (0x000C) [0x0000000000000000]              
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                            		// 0x00D4 (0x0008) [0x0000000000000000]              
	class UClass*                                      ThirdPersonCamDefaultClass;                       		// 0x00DC (0x0008) [0x0000000000000000]              
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                   		// 0x00E4 (0x0008) [0x0000000000000000]              
	float                                              LastHeightAdjustment;                             		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              LastPitchAdjustment;                              		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              LastYawAdjustment;                                		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              LeftoverPitchAdjustment;                          		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              Focus_BackOffStrength;                            		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              Focus_StepHeightAdjustment;                       		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                Focus_MaxTries;                                   		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              Focus_FastAdjustKickInTime;                       		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              LastFocusChangeTime;                              		// 0x010C (0x0004) [0x0000000000000000]              
	struct FVector                                     ActualFocusPointWorldLoc;                         		// 0x0110 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastFocusPointLoc;                                		// 0x011C (0x000C) [0x0000000000000000]              
	struct FCamFocusPointParams                        FocusPoint;                                       		// 0x0128 (0x0038) [0x0000000000000000]              
	unsigned long                                      bFocusPointSet : 1;                               		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusPointSuccessful : 1;                        		// 0x0160 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoingACameraTurn : 1;                            		// 0x0160 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                 		// 0x0160 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0160 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDoingDirectLook : 1;                             		// 0x0160 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDebugChangedCameraMode : 1;                      		// 0x0160 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDoSeamlessPivotTransition : 1;                   		// 0x0160 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              TurnCurTime;                                      		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                TurnStartAngle;                                   		// 0x0168 (0x0004) [0x0000000000000000]              
	int                                                TurnEndAngle;                                     		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              TurnTotalTime;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              TurnDelay;                                        		// 0x0174 (0x0004) [0x0000000000000000]              
	int                                                LastPostCamTurnYaw;                               		// 0x0178 (0x0004) [0x0000000000000000]              
	int                                                DirectLookYaw;                                    		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              DirectLookInterpSpeed;                            		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              WorstLocInterpSpeed;                              		// 0x0184 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastWorstLocationLocal;                           		// 0x0188 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastWorstLocation;                                		// 0x0194 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastPreModifierCameraLoc;                         		// 0x01A0 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastPreModifierCameraRot;                         		// 0x01AC (0x000C) [0x0000000000000000]              
	TArray< struct FPenetrationAvoidanceFeeler >       PenetrationAvoidanceFeelers;                      		// 0x01B8 (0x0010) [0x0000000000000000]              
	struct FVector                                     LastOffsetAdjustment;                             		// 0x01C8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1389 ];

		return pClassPointer;
	};

	void ResetInterpolation ( );
	void eventModifyPostProcessSettings ( );
	void OnBecomeActive ( );
	void ProcessViewRotation ( );
	void UpdateCameraMode ( );
	void FindBestCameraMode ( );
	void AdjustFocusPointInterpolation ( );
	void GetActualFocusLocation ( );
	void eventUpdateFocusPoint ( );
	void ClearFocusPoint ( );
	void GetFocusActor ( );
	void SetFocusOnActor ( );
	void SetFocusOnLoc ( );
	void AdjustTurn ( );
	void EndTurn ( );
	void BeginTurn ( );
	void PlayerUpdateCamera ( );
	void UpdateCamera ( );
	void eventGetDesiredFOV ( );
	void Init ( );
	void Reset ( );
	void CreateCameraMode ( );
};

UClass* UGameThirdPersonCamera::pClassPointer = NULL;

// Class GameFramework.GamePlayerCamera
// 0x008F (0x0620 - 0x0591)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                   		// 0x0594 (0x0008) [0x0000000000000000]              
	class UClass*                                      ThirdPersonCameraClass;                           		// 0x059C (0x0008) [0x0000000000000000]              
	class UGameCameraBase*                             FixedCam;                                         		// 0x05A4 (0x0008) [0x0000000000000000]              
	class UClass*                                      FixedCameraClass;                                 		// 0x05AC (0x0008) [0x0000000000000000]              
	class UGameCameraBase*                             CurrentCamera;                                    		// 0x05B4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseForcedCamFOV : 1;                             		// 0x05BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInterpolateCamChanges : 1;                       		// 0x05BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bResetInterp : 1;                                 		// 0x05BC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ForcedCamFOV;                                     		// 0x05C0 (0x0004) [0x0000000000000000]              
	class AActor*                                      LastViewTarget;                                   		// 0x05C4 (0x0008) [0x0000000000000000]              
	float                                              SplitScreenShakeScale;                            		// 0x05CC (0x0004) [0x0000000000000000]              
	class AActor*                                      LastTargetBase;                                   		// 0x05D0 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x05D8 (0x0008) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                                 		// 0x05E0 (0x0040) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1390 ];

		return pClassPointer;
	};

	void AdjustFOVForViewport ( );
	void ProcessViewRotation ( );
	void ResetInterpolation ( );
	void SetColorScale ( );
	void DisplayDebug ( );
	void UpdateCameraLensEffects ( );
	void UpdateViewTarget ( );
	void ShouldConstrainAspectRatio ( );
	void FindBestCameraType ( );
	void Reset ( );
	void PostBeginPlay ( );
	void CacheLastTargetBaseInfo ( );
	void CreateCamera ( );
};

UClass* AGamePlayerCamera::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode
// 0x01F5 (0x0255 - 0x0060)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                   		// 0x0060 (0x0008) [0x0000000000000000]              
	float                                              FOVAngle;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              BlendTime;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockedToViewTarget : 1;                          		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDirectLook : 1;                                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFollowTarget : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInterpLocation : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bInterpRotation : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bRotInterpSpeedConstant : 1;                      		// 0x0070 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDoPredictiveAvoidance : 1;                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bValidateWorstLoc : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bSkipCameraCollision : 1;                         		// 0x0070 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bSmoothViewOffsetPitchChanges : 1;                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bApplyDeltaViewOffset : 1;                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bAdjustDOF : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDOFUpdated : 1;                                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bNoFOVPostProcess : 1;                            		// 0x0070 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;        		// 0x0070 (0x0004) [0x0000000000000000] [0x00008000] 
	float                                              FollowingInterpSpeed_Pitch;                       		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              FollowingInterpSpeed_Yaw;                         		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              FollowingInterpSpeed_Roll;                        		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              FollowingCameraVelThreshold;                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              OriginLocInterpSpeed;                             		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FVector                                     PerAxisOriginLocInterpSpeed;                      		// 0x0088 (0x000C) [0x0000000000000000]              
	float                                              OriginRotInterpSpeed;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FVector                                     StrafeLeftAdjustment;                             		// 0x0098 (0x000C) [0x0000000000000000]              
	struct FVector                                     StrafeRightAdjustment;                            		// 0x00A4 (0x000C) [0x0000000000000000]              
	float                                              StrafeOffsetScalingThreshold;                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              StrafeOffsetInterpSpeedIn;                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              StrafeOffsetInterpSpeedOut;                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastStrafeOffset;                                 		// 0x00BC (0x000C) [0x0000000000000000]              
	struct FVector                                     RunFwdAdjustment;                                 		// 0x00C8 (0x000C) [0x0000000000000000]              
	struct FVector                                     RunBackAdjustment;                                		// 0x00D4 (0x000C) [0x0000000000000000]              
	float                                              RunOffsetScalingThreshold;                        		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              RunOffsetInterpSpeedIn;                           		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              RunOffsetInterpSpeedOut;                          		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastRunOffset;                                    		// 0x00EC (0x000C) [0x0000000000000000]              
	struct FVector                                     WorstLocOffset;                                   		// 0x00F8 (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetRelativeCameraOriginOffset;                 		// 0x0104 (0x000C) [0x0000000000000000]              
	struct FViewOffsetData                             ViewOffset;                                       		// 0x0110 (0x0024) [0x0000000000000000]              
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[ 0x6 ];            		// 0x0134 (0x00D8) [0x0000000000000000]              
	float                                              DOF_FalloffExponent;                              		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              DOF_BlurKernelSize;                               		// 0x0210 (0x0004) [0x0000000000000000]              
	float                                              DOF_FocusInnerRadius;                             		// 0x0214 (0x0004) [0x0000000000000000]              
	float                                              DOF_MaxNearBlurAmount;                            		// 0x0218 (0x0004) [0x0000000000000000]              
	float                                              DOF_MaxFarBlurAmount;                             		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              LastDOFRadius;                                    		// 0x0220 (0x0004) [0x0000000000000000]              
	float                                              LastDOFDistance;                                  		// 0x0224 (0x0004) [0x0000000000000000]              
	float                                              DOFDistanceInterpSpeed;                           		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FVector                                     DOFTraceExtent;                                   		// 0x022C (0x000C) [0x0000000000000000]              
	float                                              DOF_RadiusFalloff;                                		// 0x0238 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   DOF_RadiusRange;                                  		// 0x023C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   DOF_RadiusDistRange;                              		// 0x0244 (0x0008) [0x0000000000000000]              
	float                                              ViewOffsetInterp;                                 		// 0x024C (0x0004) [0x0000000000000000]              
	float                                              OffsetAdjustmentInterpSpeed;                      		// 0x0250 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentViewportType;                              		// 0x0254 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1391 ];

		return pClassPointer;
	};

	void SetViewOffset ( );
	void ModifyPostProcessSettings ( );
	void UpdatePostProcess ( );
	void DOFTrace ( );
	void GetDOFFocusLoc ( );
	void ProcessViewRotation ( );
	void SetFocusPoint ( );
	void eventGetCameraWorstCaseLoc ( );
	void GetDesiredFOV ( );
	void eventAdjustViewOffset ( );
	void OnBecomeInActive ( );
	void OnBecomeActive ( );
	void Init ( );
};

UClass* UGameThirdPersonCameraMode::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000F (0x0264 - 0x0255)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                            		// 0x0258 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTemporaryOriginRotInterp : 1;                    		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TemporaryOriginRotInterpSpeed;                    		// 0x0260 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1392 ];

		return pClassPointer;
	};

};

UClass* UGameThirdPersonCameraMode_Default::pClassPointer = NULL;

// Class GameFramework.GameSpecialMove
// 0x0048 (0x00A8 - 0x0060)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       Handle;                                           		// 0x0068 (0x0008) [0x0000000000000000]              
	float                                              LastCanDoSpecialMoveTime;                         		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastCanDoSpecialMove : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReachPreciseDestination : 1;                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bReachedPreciseDestination : 1;                   		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bReachPreciseRotation : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bReachedPreciseRotation : 1;                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bForcePrecisePosition : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     PreciseDestination;                               		// 0x0078 (0x000C) [0x0000000000000000]              
	class AActor*                                      PreciseDestBase;                                  		// 0x0084 (0x0008) [0x0000000000000000]              
	struct FVector                                     PreciseDestRelOffset;                             		// 0x008C (0x000C) [0x0000000000000000]              
	float                                              PreciseRotationInterpolationTime;                 		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FRotator                                    PreciseRotation;                                  		// 0x009C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1393 ];

		return pClassPointer;
	};

	void RelativeToWorldOffset ( );
	void WorldToRelativeOffset ( );
	void ForcePawnRotation ( );
	void MessageEvent ( );
	void ResetFacePreciseRotation ( );
	void eventReachedPrecisePosition ( );
	void SetFacePreciseRotation ( );
	void SetReachPreciseDestination ( );
	void ShouldReplicate ( );
	void SpecialMoveFlagsUpdated ( );
	void Tick ( );
	void SpecialMoveEnded ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
	void CanDoSpecialMove ( );
	void CanOverrideSpecialMove ( );
	void CanOverrideMoveWith ( );
	void CanChainMove ( );
	void ExtractSpecialMoveFlags ( );
	void InitSpecialMoveFlags ( );
	void InitSpecialMove ( );
};

UClass* UGameSpecialMove::pClassPointer = NULL;

// Class GameFramework.GameStateObject
// 0x0030 (0x00B8 - 0x0088)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                       		// 0x0088 (0x0010) [0x0000000000000000]              
	struct FArray_Mirror                               PlayerStates;                                     		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned char                                      SessionType;                                      		// 0x00A8 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsMatchStarted : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRoundStarted : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RoundNumber;                                      		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MaxRoundNumber;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1394 ];

		return pClassPointer;
	};

	void Reset ( );
	void eventPreProcessStream ( );
};

UClass* UGameStateObject::pClassPointer = NULL;

// Class GameFramework.GameStatsAggregator
// 0x0248 (0x02D0 - 0x0088)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                        		// 0x0088 (0x0008) [0x0000000000000000]              
	TArray< struct FAggregateEventMapping >            AggregatesList;                                   		// 0x0090 (0x0010) [0x0000000000000000]              
	struct FMap_Mirror                                 AggregateEventsMapping;                           		// 0x00A0 (0x0048) [0x0000000000000000]              
	TArray< struct FGameplayEventMetaData >            AggregateEvents;                                  		// 0x00E8 (0x0010) [0x0000000000000000]              
	TArray< int >                                      AggregatesFound;                                  		// 0x00F8 (0x0010) [0x0000000000000000]              
	struct FGameEvents                                 AllGameEvents;                                    		// 0x0108 (0x0048) [0x0000000000000000]              
	TArray< struct FTeamEvents >                       AllTeamEvents;                                    		// 0x0150 (0x0010) [0x0000000000000000]              
	TArray< struct FPlayerEvents >                     AllPlayerEvents;                                  		// 0x0160 (0x0010) [0x0000000000000000]              
	struct FWeaponEvents                               AllWeaponEvents;                                  		// 0x0170 (0x0058) [0x0000000000000000]              
	struct FProjectileEvents                           AllProjectileEvents;                              		// 0x01C8 (0x0058) [0x0000000000000000]              
	struct FPawnEvents                                 AllPawnEvents;                                    		// 0x0220 (0x0058) [0x0000000000000000]              
	struct FDamageEvents                               AllDamageEvents;                                  		// 0x0278 (0x0058) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1395 ];

		return pClassPointer;
	};

	void GetAggregateMappingIDs ( );
	void Reset ( );
	void eventPostProcessStream ( );
	void eventPreProcessStream ( );
};

UClass* UGameStatsAggregator::pClassPointer = NULL;

// Class GameFramework.SeqAct_ToggleMouseCursor
// 0x0000 (0x0108 - 0x0108)
class USeqAct_ToggleMouseCursor : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36705 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ToggleMouseCursor::pClassPointer = NULL;

// Class GameFramework.GameWaveForms
// 0x0020 (0x0080 - 0x0060)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                           		// 0x0060 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                            		// 0x0068 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                              		// 0x0070 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                               		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36724 ];

		return pClassPointer;
	};

};

UClass* UGameWaveForms::pClassPointer = NULL;

// Class GameFramework.DebugCameraInput
// 0x0000 (0x02EC - 0x02EC)
class UDebugCameraInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36827 ];

		return pClassPointer;
	};

	void InputKey ( );
};

UClass* UDebugCameraInput::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x0060 - 0x0060)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37016 ];

		return pClassPointer;
	};

	void GetMaxSpawnDist ( );
	void AgentDestroyed ( );
};

UClass* UGameCrowdSpawnerInterface::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x0060 - 0x0060)
class UGameCrowdSpawnInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37233 ];

		return pClassPointer;
	};

	void GetSpawnPosition ( );
};

UClass* UGameCrowdSpawnInterface::pClassPointer = NULL;

// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x02F8 - 0x02F8)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37234 ];

		return pClassPointer;
	};

};

UClass* ADynamicGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameAICmd_Hover_MoveToGoal
// 0x0044 (0x00C8 - 0x0084)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	class AActor*                                      Path;                                             		// 0x0084 (0x0008) [0x0000000000000000]              
	class AActor*                                      Find;                                             		// 0x008C (0x0008) [0x0000000000000000]              
	class AActor*                                      Goal;                                             		// 0x0094 (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DesiredHoverHeight;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              SubGoalReachDist;                                 		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	struct FVector                                     MoveVectDest;                                     		// 0x00B4 (0x000C) [0x0000000000000000]              
	class UReachSpec*                                  CurrentSpec;                                      		// 0x00C0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37326 ];

		return pClassPointer;
	};

	void IsEnemyBasedOnInterpActor ( );
	void HandlePathObstruction ( );
	void Pushed ( );
	void MoveToGoal ( );
};

UClass* UGameAICmd_Hover_MoveToGoal::pClassPointer = NULL;

// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x0098 (0x011C - 0x0084)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                             		// 0x0084 (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasFiring : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFinalApproach : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFallbackMoveToMesh : 1;                          		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DesiredHoverHeight;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              CurrentHoverHeight;                               		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              SubGoalReachDist;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              GoalDistance;                                     		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FVector                                     IntermediatePoint;                                		// 0x00A4 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastMovePoint;                                    		// 0x00B0 (0x000C) [0x0000000000000000]              
	int                                                NumMovePointFails;                                		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                MaxMovePointFails;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FVector                                     FallbackDest;                                     		// 0x00C4 (0x000C) [0x0000000000000000]              
	class AActor*                                      MoveToActor;                                      		// 0x00D0 (0x0008) [0x0000000000000000]              
	struct FBasedPosition                              LastMoveTargetPathLocation;                       		// 0x00D8 (0x0038) [0x0000000000000000]              
	struct FVector                                     InitialFinalDestination;                          		// 0x0110 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37372 ];

		return pClassPointer;
	};

	void eventDrawDebug ( );
	void IsEnemyBasedOnInterpActor ( );
	void ShouldUpdateBreadCrumbs ( );
	void HasReachedGoal ( );
	void ReEvaluatePath ( );
	void HandlePathObstruction ( );
	void Tick ( );
	void Popped ( );
	void Pushed ( );
	void HoverBackToMesh ( );
	void HoverToPoint ( );
	void HoverToGoal ( );
};

UClass* UGameAICmd_Hover_MoveToGoal_Mesh::pClassPointer = NULL;

// Class GameFramework.GameCrowd_ListOfAgents
// 0x0010 (0x0070 - 0x0060)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray< struct FAgentArchetypeInfo >               ListOfAgents;                                     		// 0x0060 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37595 ];

		return pClassPointer;
	};

};

UClass* UGameCrowd_ListOfAgents::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x02F8 - 0x02F8)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38049 ];

		return pClassPointer;
	};

};

UClass* AGameCrowdInteractionDestination::pClassPointer = NULL;

// Class GameFramework.GameExplosionContent
// 0x0070 (0x00D0 - 0x0060)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	class USoundCue*                                   ExplosionSound;                                   		// 0x0064 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake;                                         		// 0x006C (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Left;                                    		// 0x0074 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Right;                                   		// 0x007C (0x0008) [0x0000000000000000]              
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0084 (0x0008) [0x0000000000000000]              
	float                                              CamShakeInnerRadius;                              		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              CamShakeOuterRadius;                              		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              CamShakeFalloff;                                  		// 0x0094 (0x0004) [0x0000000000000000]              
	class UClass*                                      CameraLensEffect;                                 		// 0x0098 (0x0008) [0x0000000000000000]              
	float                                              CameraLensEffectRadius;                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        ExploLight;                                       		// 0x00A4 (0x0008) [0x0000000000000000]              
	float                                              ExploLightFadeOutTime;                            		// 0x00AC (0x0004) [0x0000000000000000]              
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00B0 (0x0008) [0x0000000000000000]              
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              ExploRadialBlurMaxBlur;                           		// 0x00BC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x00C0 (0x0008) [0x0000000000000000]              
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                               		// 0x00C8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38381 ];

		return pClassPointer;
	};

};

UClass* UGameExplosionContent::pClassPointer = NULL;

// Class GameFramework.GameFixedCamera
// 0x0004 (0x0070 - 0x006C)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                       		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38402 ];

		return pClassPointer;
	};

	void OnBecomeActive ( );
	void UpdateCamera ( );
};

UClass* UGameFixedCamera::pClassPointer = NULL;

// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x0378 - 0x0378)
class AGameKActorSpawnableEffect : public AKActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38413 ];

		return pClassPointer;
	};

	void StartScalingDown ( );
	void eventFellOutOfWorld ( );
	void eventPostBeginPlay ( );
};

UClass* AGameKActorSpawnableEffect::pClassPointer = NULL;

// Class GameFramework.MobileDebugCameraController
// 0x000C (0x07A4 - 0x0798)
class AMobileDebugCameraController : public ADebugCameraController
{
public:
	int                                                OldMobileGroup;                                   		// 0x0798 (0x0004) [0x0000000000000000]              
	class UMobilePlayerInput*                          MPI;                                              		// 0x079C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38947 ];

		return pClassPointer;
	};

	void SetupDebugZones ( );
	void eventInitInputSystem ( );
	void OnDeactivate ( );
	void InitDebugInputSystem ( );
	void OnActivate ( );
};

UClass* AMobileDebugCameraController::pClassPointer = NULL;

// Class GameFramework.MobileDebugCameraInput
// 0x0000 (0x0578 - 0x0578)
class UMobileDebugCameraInput : public UMobilePlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38953 ];

		return pClassPointer;
	};

	void InputKey ( );
};

UClass* UMobileDebugCameraInput::pClassPointer = NULL;

// Class GameFramework.MobileDebugCameraHUD
// 0x0004 (0x0684 - 0x0680)
class AMobileDebugCameraHUD : public AMobileHUD
{
public:
	unsigned long                                      bDrawDebugText : 1;                               		// 0x0680 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38954 ];

		return pClassPointer;
	};

	void eventPostRender ( );
	void DisplayMaterials ( );
	void eventPostBeginPlay ( );
};

UClass* AMobileDebugCameraHUD::pClassPointer = NULL;

// Class GameFramework.MobileMenuBar
// 0x001C (0x00F8 - 0x00DC)
class UMobileMenuBar : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVertical : 1;                                  		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDirty : 1;                                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SelectedIndex;                                    		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                FirstItem;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	TArray< class UMobileMenuBarItem* >                Items;                                            		// 0x00E8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39507 ];

		return pClassPointer;
	};

	void UpdateItemViewports ( );
	void SetFirstItem ( );
	void RenderItem ( );
	void RenderObject ( );
	void eventOnTouch ( );
	void GetSelected ( );
	void Num ( );
	void AddItem ( );
	void InitMenuObject ( );
};

UClass* UMobileMenuBar::pClassPointer = NULL;

// Class GameFramework.MobileMenuBarItem
// 0x0010 (0x0070 - 0x0060)
class UMobileMenuBarItem : public UObject
{
public:
	int                                                Width;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   VpPos;                                            		// 0x0068 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39510 ];

		return pClassPointer;
	};

	void RenderItem ( );
};

UClass* UMobileMenuBarItem::pClassPointer = NULL;

// Class GameFramework.MobileMenuButton
// 0x0068 (0x0144 - 0x00DC)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[ 0x2 ];                                    		// 0x00DC (0x0010) [0x0000000000000000]              
	struct FUVCoords                                   ImagesUVs[ 0x2 ];                                 		// 0x00EC (0x0028) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x0114 (0x0010) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0124 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                CaptionColor;                                     		// 0x0134 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39560 ];

		return pClassPointer;
	};

	void RenderCaption ( );
	void RenderObject ( );
	void InitMenuObject ( );
};

UClass* UMobileMenuButton::pClassPointer = NULL;

// Class GameFramework.MobileMenuElement
// 0x0014 (0x0074 - 0x0060)
class UMobileMenuElement : public UObject
{
public:
	struct FVector2D                                   VpPos;                                            		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   VpSize;                                           		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsVisible : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsActive : 1;                                    		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39585 ];

		return pClassPointer;
	};

	void RenderElement ( );
	void OnTouch ( );
};

UClass* UMobileMenuElement::pClassPointer = NULL;

// Class GameFramework.MobileMenuGame
// 0x0008 (0x04C8 - 0x04C0)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                       		// 0x04C0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39602 ];

		return pClassPointer;
	};

	void RestartPlayer ( );
	void StartMatch ( );
	void eventPostLogin ( );
};

UClass* AMobileMenuGame::pClassPointer = NULL;

// Class GameFramework.MobileMenuPlayerController
// 0x0000 (0x074C - 0x074C)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39611 ];

		return pClassPointer;
	};

};

UClass* AMobileMenuPlayerController::pClassPointer = NULL;

// Class GameFramework.MobileMenuInventory
// 0x0090 (0x016C - 0x00DC)
class UMobileMenuInventory : public UMobileMenuObject
{
public:
	TArray< class UMobileMenuElement* >                Slots;                                            		// 0x00DC (0x0010) [0x0000000000000000]              
	TArray< class UMobileMenuElement* >                Items;                                            		// 0x00EC (0x0010) [0x0000000000000000]              
	float                                              SideLeewayPercent;                                		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FRenderElementInfo                          CurrentElement;                                   		// 0x0100 (0x0008) [0x0000000000000000]              
	struct FDragElementInfo                            Drag;                                             		// 0x0108 (0x0028) [0x0000000000000000]              
	struct FVector2D                                   ScaleSize;                                        		// 0x0130 (0x0008) [0x0000000000000000]              
	unsigned long                                      bRenderDragItem : 1;                              		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnUpdateItemInSlot__Delegate;                   		// 0x013C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0140 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __DoCanPutItemInSlot__Delegate;                   		// 0x014C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0150 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUpdateDrag__Delegate;                         		// 0x015C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0160 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39627 ];

		return pClassPointer;
	};

	void RenderDragItem ( );
	void RenderObject ( );
	void GetIndexOfItem ( );
	void FindSlotIndexAt ( );
	void InitDragAt ( );
	void UpdateItemInSlot ( );
	void AddItemToSlot ( );
	void SwapItemsInSlots ( );
	void eventOnTouch ( );
	void CanPutItemInSlot ( );
	void ScaleSlot ( );
	void AddSlot ( );
	void InitMenuObject ( );
	void OnUpdateDrag ( );
	void DoCanPutItemInSlot ( );
	void OnUpdateItemInSlot ( );
};

UClass* UMobileMenuInventory::pClassPointer = NULL;

// Class GameFramework.MobileMenuLabel
// 0x002C (0x0108 - 0x00DC)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	struct FString                                     Caption;                                          		// 0x00DC (0x0010) [0x0000000000000000]              
	class UFont*                                       TextFont;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FColor                                      TouchedColor;                                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              TextXScale;                                       		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              TextYScale;                                       		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoSize : 1;                                    		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39733 ];

		return pClassPointer;
	};

	void RenderObject ( );
};

UClass* UMobileMenuLabel::pClassPointer = NULL;

// Class GameFramework.MobileMenuList
// 0x00B0 (0x018C - 0x00DC)
class UMobileMenuList : public UMobileMenuObject
{
public:
	unsigned long                                      bIsVerticalList : 1;                              		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForceSelectedToLineup : 1;                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTapToScrollToItem : 1;                           		// 0x00DC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLoops : 1;                                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              SelectedOffset;                                   		// 0x00E0 (0x0004) [0x0000000000000000]              
	TArray< class UMobileMenuListItem* >               Items;                                            		// 0x00E4 (0x0010) [0x0000000000000000]              
	struct FSelectedMenuItem                           SelectedItem;                                     		// 0x00F4 (0x000C) [0x0000000000000000]              
	struct FMenuListDragInfo                           Drag;                                             		// 0x0100 (0x0054) [0x0000000000000000]              
	struct FMenuListMovementInfo                       Movement;                                         		// 0x0154 (0x001C) [0x0000000000000000]              
	float                                              Deacceleration;                                   		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              EaseOutExp;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	struct FIntPoint                                   ScreenSize;                                       		// 0x0178 (0x0008) [0x0000000000000000]              
	int                                                FirstVisible;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                LastVisible;                                      		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              EndOfListSupression;                              		// 0x0188 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39749 ];

		return pClassPointer;
	};

	void ItemScrollSize ( );
	void RenderObject ( );
	void UpdateScroll ( );
	void CalculateSelectedItem ( );
	void GetItemClickPosition ( );
	void eventOnTouch ( );
	void SetSelectedItem ( );
	void GetNumVisible ( );
	void SetSelectedToVisibleIndex ( );
	void GetVisibleIndexOfSelected ( );
	void GetAmountSelected ( );
	void GetSelected ( );
	void Num ( );
	void AddItem ( );
	void InitMenuObject ( );
};

UClass* UMobileMenuList::pClassPointer = NULL;

// Class GameFramework.MobileMenuListItem
// 0x0008 (0x007C - 0x0074)
class UMobileMenuListItem : public UMobileMenuElement
{
public:
	float                                              Width;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0078 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39752 ];

		return pClassPointer;
	};

	void RenderItem ( );
};

UClass* UMobileMenuListItem::pClassPointer = NULL;

// Class GameFramework.MobileMenuObjectProxy
// 0x0020 (0x00FC - 0x00DC)
class UMobileMenuObjectProxy : public UMobileMenuObject
{
public:
	struct FScriptDelegate                             __OnTouchEvent__Delegate;                         		// 0x00DC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRenderObject__Delegate;                       		// 0x00EC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39892 ];

		return pClassPointer;
	};

	void RenderObject ( );
	void eventOnTouch ( );
	void OnRenderObject ( );
	void OnTouchEvent ( );
};

UClass* UMobileMenuObjectProxy::pClassPointer = NULL;

// Class GameFramework.MobileTouchInputVolume
// 0x0004 (0x0284 - 0x0280)
class AMobileTouchInputVolume : public AVolume
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x0280 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39986 ];

		return pClassPointer;
	};

	void HandleDragOver ( );
	void HandleDoubleClick ( );
	void HandleClick ( );
	void OnToggle ( );
};

UClass* AMobileTouchInputVolume::pClassPointer = NULL;

// Class GameFramework.SeqEvent_MobileTouchInputVolume
// 0x0000 (0x0128 - 0x0128)
class USeqEvent_MobileTouchInputVolume : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39991 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_MobileTouchInputVolume::pClassPointer = NULL;

// Class GameFramework.TouchableElement3D
// 0x0000 (0x0060 - 0x0060)
class UTouchableElement3D : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39996 ];

		return pClassPointer;
	};

	void HandleDragOver ( );
	void HandleDoubleClick ( );
	void HandleClick ( );
};

UClass* UTouchableElement3D::pClassPointer = NULL;

// Class GameFramework.PlayerCollectorGame
// 0x0014 (0x04D4 - 0x04C0)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                         		// 0x04C0 (0x0004) [0x0000000000000000]              
	struct FString                                     URLToLoad;                                        		// 0x04C4 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40022 ];

		return pClassPointer;
	};

	void eventGetSeamlessTravelActorList ( );
	void eventLogin ( );
};

UClass* APlayerCollectorGame::pClassPointer = NULL;

// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0008 (0x0068 - 0x0060)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                    		// 0x0060 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40037 ];

		return pClassPointer;
	};

};

UClass* UPMESTG_LeaveADecalBase::pClassPointer = NULL;

// Class GameFramework.SeqEvent_HudRenderImage
// 0x003C (0x017C - 0x0140)
class USeqEvent_HudRenderImage : public USeqEvent_HudRender
{
public:
	struct FLinearColor                                DisplayColor;                                     		// 0x0140 (0x0010) [0x0000000000000000]              
	struct FVector                                     DisplayLocation;                                  		// 0x0150 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  DisplayTexture;                                   		// 0x015C (0x0008) [0x0000000000000000]              
	float                                              XL;                                               		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              YL;                                               		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              U;                                                		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0178 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40120 ];

		return pClassPointer;
	};

	void Render ( );
};

UClass* USeqEvent_HudRenderImage::pClassPointer = NULL;

// Class GameFramework.SeqEvent_HudRenderText
// 0x0029 (0x0169 - 0x0140)
class USeqEvent_HudRenderText : public USeqEvent_HudRender
{
public:
	class UFont*                                       DisplayFont;                                      		// 0x0140 (0x0008) [0x0000000000000000]              
	struct FColor                                      DisplayColor;                                     		// 0x0148 (0x0004) [0x0000000000000000]              
	struct FVector                                     DisplayLocation;                                  		// 0x014C (0x000C) [0x0000000000000000]              
	struct FString                                     DisplayText;                                      		// 0x0158 (0x0010) [0x0000000000000000]              
	unsigned char                                      TextDrawMethod;                                   		// 0x0168 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40140 ];

		return pClassPointer;
	};

	void eventGetObjClassVersion ( );
	void Render ( );
};

UClass* USeqEvent_HudRenderText::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif