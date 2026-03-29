#pragma once
#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <functional>
#include "Attrib.h"
#include "Reflection.h"

struct EffectParticleAnimation { // 4 bytes
    uint32_t v;
};
struct EffectParticleConstraint { // 4 bytes
    uint32_t v;
};
struct EmitterDataRecord { // 40 bytes
    uint32_t v[10];
};
struct EffectLinkageRecord { // 56 bytes
    uint32_t v[14];
};
struct ParticleAnimationInfo { // 8 bytes
    uint32_t v[2];
};
struct ParticleTextureRecord { // 8 bytes
    uint32_t v[2];
};
struct HashedStringSet { // 24 bytes
    uint32_t v[6];
};
struct eTEG_ParticleTextures { // 4 bytes
    uint32_t v;
};
namespace Sk8 {
    namespace Net {
        struct TrophyType { // 4 bytes
            uint32_t v;
        };
    }

    namespace Challenge {
        namespace ActivityUtils {
            struct kGameLoadFlags { // 4 bytes
                uint32_t v;
            };
            struct tActivityLoadMask { // 4 bytes
                uint32_t v;
            };
        }

        struct tWorldLocationID { // 32 bytes
            Attrib::RefSpec WorldLocation;
            Sk8::Challenge::tLocationID LocationID;
        };
        struct eChallengeAssetLoadType { // 4 bytes
            uint32_t v;
        };
        struct tAttributeLink { // 4 bytes
            uint32_t v;
        };
        struct tRequiredChallengeHull { // 4 bytes
            uint32_t v;
        };
        struct eChallengePresentationEventType { // 4 bytes
            uint32_t v;
        };
        struct tChallengePresentationEvent { // 16 bytes
            eChallengePresentationEventType eventType;
            uint32_t eventTypeArg1; // offset
            uint32_t eventTypeArg2; // offset
        };
        enum eChallengeTypes : uint32_t {
            eChallengeTypes_Tutorial = 0,
            eChallengeTypes_PointContest = 1,
            eChallengeTypes_Demo = 2,
            eChallengeTypes_Risk = 3,
            eChallengeTypes_SKATE = 4,
            eChallengeTypes_SKATE_Multi = 5,
            eChallengeTypes_Photo = 6,
            eChallengeTypes_Film = 7,
            eChallengeTypes_BestTrick = 8,
            eChallengeTypes_OwnTheSpot = 9,
            eChallengeTypes_Slalom = 0xA,
            eChallengeTypes_Slide = 0xB,
            eChallengeTypes_Lap = 0xC,
            eChallengeTypes_Gate = 0xD,
            eChallengeTypes_Favour = 0xE,
            eChallengeTypes_Jam = 0xF,
            eChallengeTypes_Crash = 0x10,
            eChallengeTypes_Security = 0x11,
            eChallengeTypes_Point2PointRace = 0x12,
            eChallengeTypes_DeathRace = 0x13,
            eChallengeTypes_SpotRace = 0x14,
            eChallengeTypes_LastManStanding = 0x15,
            eChallengeTypes_OnlineFreeSkate = 0x16,
            eChallengeTypes_Follow = 0x17,
            eChallengeTypes_TrainStation = 0x18,
            eChallengeTypes_SkateShop = 0x19,
            eChallengeTypes_MegaRamp = 0x1A,
            eChallengeTypes_StreetSkating = 0x1B,
            eChallengeTypes_Pro = 0x1C,
            eChallengeTypes_Teleporter = 0x1D,
            eChallengeTypes_Goto = 0x1E,
            eChallengeTypes_HallOfMeat = 0x1F,
            eChallengeTypes_1up = 0x20,
            eChallengeTypes_HallOfMeat_SP = 0x21,
            eChallengeTypes_Service = 0x22,
            eChallengeTypes_CreateASpot = 0x23,
            eChallengeTypes_CreateASpot_Setup = 0x24,
            eChallengeTypes_AnywherePhoto = 0x25,
            eChallengeTypes_SpotPhoto = 0x26,
            eChallengeTypes_AnywhereFilm = 0x27,
            eChallengeTypes_SpotFilm = 0x28,
            eChallengeTypes_FriendFilm = 0x29,
            eChallengeTypes_OnlineFreeSkateActivity = 0x2A,
            eChallengeTypes_Dummy = 0x2B,
            eChallengeTypes_Flow = 0x2C,
            eChallengeTypes_Property = 0x2D,
            eChallengeTypes_PickaProFilm = 0x2E,
            eChallengeTypes_PickaProPhoto = 0x2F,
            eChallengeTypes_TeamFilm = 0x30,
            eChallengeTypes_TeamPhoto = 0x31,
            eChallengeTypes_Landmark = 0x32,
            eChallengeTypes_Count = 0x33,
            eChallengeTypes_Unknown = 0x34,
        };
        struct eGlobalType { // 4 bytes
            uint32_t v;
        };
        struct eRaceGateAudio { // 4 bytes
            uint32_t v;
        };
        struct eRaceMusicProgress { // 4 bytes
            uint32_t v;
        };
        struct eRaceType { // 4 bytes
            uint32_t v;
        };
        struct tChallengeIconDefinition { // 24 bytes
            Attrib::RefSpec IconData;
        };
        struct tFollowMeSpeechInfo { // 4 bytes
            uint32_t v;
		};

        struct tFollowTheLeaderWarningInfo { // 16 bytes
            int32_t minDistance;
            int32_t maxDistance;
            tFollowMeSpeechInfo warningSpeechInfo;
            tSpeechInfo recoverySpeechInfo;
            int32_t timeBeforeWarningPlayed;
            int32_t repeatTime;
        };
        struct tRaceBranchDefinition { // 24 bytes
            Attrib::RefSpec RaceBranch;
        };
        struct tRaceGateDefinition { // 24 bytes
            Attrib::RefSpec RaceGate;
        };
        struct tRaceGroupDefinition { // 24 bytes
            Attrib::RefSpec RaceGroup;
        };
        struct tRaceHeatDefinition { // 24 bytes
            Attrib::RefSpec RaceHeat;
        };
        struct tRaceLegDefinition { // 24 bytes
            Attrib::RefSpec RaceLeg;
        };
        struct tRaceMusicPaceDefinition { // 24 bytes
            Attrib::RefSpec RaceMusicPace;
        };
        struct tSpectatorSpawnInfo { // 48 bytes
            Sk8::Challenge::tWaypointInstanceID Waypoint;
            float ForceSpawnPercentage;
            Attrib::RefSpec LivingWorldCategoryGroup;
        };
        struct tTrickSequenceInfo { // 36 bytes
            const char* TrickName1;
            const char* TrickName2;
            const char* TrickName3;
            int32_t intTrickNum;
            int32_t intIsType1;
            int32_t intIsType2;
            int32_t intIsType4;
        };
        struct tTrickTypeBonus { // 8 bytes
            int32_t TrickTypeName; // offset
            int32_t intPointMultiplier;
        };
        struct tUnlockableInstanceID { // 16 bytes
            uint64_t Name; // offset?
            uint64_t ID;
        };
        struct tWaypointInstanceID { // 16 bytes
			uint64_t WaypointName; // offset?
            uint64_t WaypointID;
        };
        struct eContestType { // 4 bytes
            uint32_t v;
        };
        struct eRunType { // 4 bytes
            uint32_t v;
        };
        struct tContestCalloutDefinition { // 24 bytes
            Attrib::RefSpec ContestCallout;
        };
        struct tContestRoundDefinition { // 24 bytes
            Attrib::RefSpec ContestRound;
        };
        struct tOneUpObjectSelectorDefinition { // 24 bytes
            Attrib::RefSpec ObjectSelector;
        };
        struct tDynamicHullMapping { // 8 bytes
            uint32_t LookupName; // offset
            Sk8::Challenge::tRequiredChallengeHull RequiredHull;
        };
        struct tDynamicHullUnlock { // 32 bytes
            Attrib::RefSpec LockEntry;
            uint64_t LookupName;
        };
        struct eObjectiveFlow { // 4 bytes
            uint32_t v;
        };
        struct eObjectiveStatus { // 4 bytes
            uint32_t v;
        };
        struct eObjectiveTriggers { // 4 bytes
            uint32_t v;
        };
        struct eTriggerActivationMode { // 4 bytes
            uint32_t v;
        };
        struct eVisualIndicatorMode { // 4 bytes
            uint32_t v;
        };
        struct tHighlightDefinition { // 144 bytes
            float RewindDurationInSeconds;
            float FutureDurationInSeconds;
            Sk8::tNISPlaybackDefinition HighlightSceneName;
            Sk8::tNISPlaybackDefinition KilledItHighlightSceneName;
        };
        struct tObjectiveDefinition { // 20 bytes
            LuaState::tCompiledLua CompiledLuaObjective;
            const char* HALStringArguments;
        };
        struct tObjectiveFlow { // 8 bytes
            Sk8::Challenge::eObjectiveFlow FlowType;
            int MaxActiveObjectives;
        };
        struct tObjectiveStatusField { // 4 bytes
            uint32_t v;
        };
        struct tObjectiveTriggers { // 20 bytes
            bool WipedOut;
            bool SequenceComplete;
            bool TriggerEnter;
            bool ChallengeComplete;
            bool GroupObjectiveComplete;
            bool SessionMarkerSet;
            bool BrakedOrPushed;
            bool SkaterStateChange;
            bool ManualPumped;
            bool AirComplete;
            Sk8::Challenge::tObjectiveTriggersField TriggerField;
        };
        struct tObjectiveTriggersField { // 4 bytes
            uint32_t v;
        };
        struct ePosition_Generator_Type { // 4 bytes
            uint32_t v;
        };
        struct tLargeCrowd { // 24 bytes
            Sk8::Challenge::tTriggerVolumeInstanceID triggerVolume;
            float density;
            Sk8::Challenge::ePosition_Generator_Type generatorType;
        };
        struct tTriggerVolumeInstanceID { // 16 bytes
            const char* VolumeName;
            unsigned __int64 VolumeID;
        };
        struct eChallengeEntityOnStartType { // 4 bytes
            uint32_t v;
        };
        struct eDMOResetType { // 4 bytes
            uint32_t v;
        };
        struct eFreeskateAccumulationType { // 4 bytes
            uint32_t v;
        };
        struct eFreeskateSurvivalType { // 4 bytes
            uint32_t v;
        };
        enum eFreeskateType : uint32_t {
            eFreeskateType_Accumulation = 0,
            eFreeskateType_Gap = 1,
            eFreeskateType_Tag = 2,
            eFreeskateType_Simultaneous_Trick = 3,
            eFreeskateType_Survival = 4,
            eFreeskateType_Trick_List = 5,
            eFreeskateType_Count = 6
        };
        struct eLivingWorldManagement { // 4 bytes
            uint32_t v;
        };
        struct eLivingWorldManagementOperations { // 4 bytes
            uint32_t v;
        };
        struct ePresentationIgnoreEventFlags { // 4 bytes
            uint32_t v;
        };
        struct eProChallengePros { // 4 bytes
            uint32_t v;
        };
        struct tCompetitorInfo { // 8 bytes
			uint32_t ProfileName; // offset
            int32_t intRootCategory;
        };
        struct tDMOResetInfo { // 24 bytes
            Sk8::Challenge::eDMOResetType Type;
            Sk8::Challenge::tTriggerVolumeInstanceID Volume;
        };
        struct tGlobalSpawnCharacterInfo { // 40 bytes
            Attrib::RefSpec LivingWorldEntity;
            Sk8::Challenge::tLocationID Location;
            Sk8::Challenge::tLocationID AlternateLocation;
        };
        struct tLivingWorldManagement { // 4 bytes
            uint32_t v;
        };
        struct tLivingWorldManagementOperation { // 24 bytes
            Sk8::Challenge::eLivingWorldManagementOperations Type;
            Sk8::Challenge::tTriggerVolumeInstanceID Volume;
        };
        struct tRoundPaths { // 808 bytes
            const char* PathSubset[200];
            uint32_t intFilterDisabled;
            uint32_t intAllowDynamic;
        };
        struct tSpawnLivingWorldOnWaypointInfo { // 48 bytes
            Attrib::RefSpec LivingWorldEntity;
            Sk8::Challenge::tWaypointInstanceID Waypoint;
            Sk8::Challenge::eChallengeEntityOnStartType OnStartType;
        };
        struct eChallengeIndicatorType { // 4 bytes
            uint32_t v;
        };
        struct eSk8ChallengeIndicators { // 4 bytes
            uint32_t v;
        };
        struct tKilledItEffect { // 16 bytes
            uint32_t v[4];
        };
        struct tLocationID { // 4 bytes
			uint32_t LocationName; // offset
        };
        struct tSplineBankObject { // 48 bytes
            Attrib::RefSpec RibbonIndicator;
            Attrib::RefSpec RibbonColour;
        };
        struct tSplineInstanceID { // 16 bytes
            const char* SplineName;
            unsigned __int64 SplineID;
        };
        struct tVisualEditorData { // 80 bytes
            Sk8::Challenge::eChallengeIndicatorType type;
            Sk8::Challenge::eSk8ChallengeIndicators Indicator;
            Sk8::Challenge::tSplineInstanceID splineData;
            Sk8::Challenge::tVisualIndicatorLocation LocData;
        };
        struct tVisualIndicatorLocation { // 56 bytes
            Sk8::Challenge::tLocationID Location;
            Sk8::Challenge::tSplineBankObject SplineBankObject;
        };
        struct tVisualIndicatorVolume { // 64 bytes
            uint32_t v[16];
        };
        struct tOwnSpotSpeechInfo { // 12 bytes
            Sk8::Audio::eSk8Characters speakingCharacter;
            int16_t speechID;
            Sk8::Audio::eSk8Spch_Own_Spots spotOwned;
        };
        struct tSpeechInfo { // 8 bytes
            uint32_t v[2];
        };
    }

    namespace AIPath {
        struct EAISkater { // 4 bytes
            uint32_t v;
        };
        struct EPathFlag { // 4 bytes
            uint32_t v;
        };
        struct ESkillLevel { // 4 bytes
            uint32_t v;
        };
        struct EPathIDPathType { // 4 bytes
            uint32_t v;
        };
    }

    namespace Audio {
        struct eAudioFEStates { // 4 bytes
            uint32_t v;
        };
        struct eChallengeMusicType { // 4 bytes
            uint32_t v;
        };
        struct eCrowdBank { // 4 bytes
            uint32_t v;
        };
        struct eDMOType { // 4 bytes
            uint32_t v;
        };
        struct eEmitterStates { // 4 bytes
            uint32_t v;
        };
        struct eJitterParams { // 16 bytes
            float MidPoint;
            float Range;
            float MaxDelta;
            float Multiplier;
        };
        struct eMomentSFX { // 4 bytes
            uint32_t v;
        };
        struct eMusicFEStates { // 4 bytes
            uint32_t v;
        };
        struct eRaceMusicType { // 4 bytes
            uint32_t v;
        };
        struct eSk8AudioFingerFlipTypes { // 4 bytes
            uint32_t v;
        };
        struct eSk8AudioLateFlipTypes { // 4 bytes
            uint32_t v;
        };
        struct eSk8AudioTricks { // 4 bytes
            uint32_t v;
        };
        struct eSk8AudioTrickTiers { // 4 bytes
            uint32_t v;
        };
        struct eSk8AudioTweakTypes { // 4 bytes
            uint32_t v;
        };
        enum eSk8Characters : uint32_t {
            eSk8Character_Player = 0,
            eSk8Character_Chalmers = 1,
			eSk8Character_Cole = 2,
			eSk8Character_Haslam = 3,
			eSk8Character_Way = 4,
			eSk8Character_DNav = 5,
			eSk8Character_Mackay = 6,
			eSk8Character_Koston = 7,
            eSk8Character_JBrown = 8,
            eSk8Character_Rattray = 9,
            eSk8Character_MApple = 0xA,
            eSk8Character_Caroll = 0xB,
            eSk8Character_Duffy = 0xC,
            eSk8Character_Dyrdek = 0xD,
            eSk8Character_Kennedy = 0xE,
            eSk8Character_Busenitz = 0xF,
            eSk8Character_Dill = 0x10,
            eSk8Character_Hsu = 0x11,
            eSk8Character_JCard = 0x12,
            eSk8Character_MJohn = 0x13,
            eSk8Character_Gonzales = 0x14,
            eSk8Character_Ladd = 0x15,
            eSk8Character_RBarb = 0x16,
            eSk8Character_Gallant = 0x17,
            eSk8Character_Smith = 0x18,
            eSk8Character_Boulala = 0x19,
            eSk8Character_Boykin = 0x1A,
            eSk8Character_BSzaf = 0x1B,
            eSk8Character_LPuig = 0x1C,
            eSk8Character_Slappy = 0x1D,
            eSk8Character_Shingo = 0x1E,
            eSk8Character_Freeway = 0x1F,
            eSk8Character_MikeHawk = 0x20,
            eSk8Character_Sammy = 0x21,
            eSk8Character_Vacant = 0x22,
            eSk8Character_Cuz = 0x23,
            eSk8Character_Cyrus = 0x24,
            eSk8Character_Burnette = 0x25,
            eSk8Character_Abita = 0x26,
            eSk8Character_Unknown = 0x27,
            eSk8Character_CameraMan = 0x28,
            eSk8Character_AdultMale1 = 0x29,
            eSk8Character_AdultMale2 = 0x2A,
            eSk8Character_AdultMale3 = 0x2B,
            eSk8Character_AdultMale4 = 0x2C,
            eSk8Character_AdultMale5 = 0x2D,
            eSk8Character_AdultFemale1 = 0x2E,
            eSk8Character_AdultFemale2 = 0x2F,
            eSk8Character_AdultFemale3 = 0x30,
            eSk8Character_AdultFemale4 = 0x31,
            eSk8Character_AdultFemale5 = 0x32,
            eSk8Character_Granny1 = 0x33,
            eSk8Character_Granny2 = 0x34,
            eSk8Character_Granny3 = 0x35,
            eSk8Character_Jock1 = 0x36,
            eSk8Character_Jock2 = 0x37,
            eSk8Character_Jock3 = 0x38,
            eSk8Character_Jock4 = 0x39,
            eSk8Character_Jock5 = 0x3A,
            eSk8Character_BusinessMan1 = 0x3B,
            eSk8Character_BusinessMan2 = 0x3C,
            eSk8Character_BusinessMan3 = 0x3D,
            eSk8Character_BusinessMan4 = 0x3E,
            eSk8Character_BusinessMan5 = 0x3F,
            eSk8Character_BusinessWoman1 = 0x40,
            eSk8Character_BusinessWoman2 = 0x41,
            eSk8Character_BusinessWoman3 = 0x42,
            eSk8Character_BusinessWoman4 = 0x43,
            eSk8Character_BusinessWoman5 = 0x44,
            eSk8Character_TeenMale1 = 0x45,
            eSk8Character_TeenMale2 = 0x46,
            eSk8Character_TeenMale3 = 0x47,
            eSk8Character_TeenFemale1 = 0x48,
            eSk8Character_TeenFemale2 = 0x49,
            eSk8Character_TeenFemale3 = 0x4A,
            eSk8Character_SecurityGuard1 = 0x4B,
            eSk8Character_SecurityGuard2 = 0x4C,
            eSk8Character_SecurityGuard3 = 0x4D,
            eSk8Character_SecurityGuard4 = 0x4E,
            eSk8Character_SecurityGuard5 = 0x4F,
            eSk8Character_SecurityRadio = 0x50,
            eSk8Character_SecurityPA = 0x51,
            eSk8Character_TouristMale1 = 0x52,
            eSk8Character_TouristMale2 = 0x53,
            eSk8Character_TouristMale3 = 0x54,
            eSk8Character_TouristFemale1 = 0x55,
            eSk8Character_Bum3 = 0x56,
            eSk8Character_Bum1 = 0x57,
            eSk8Character_Bum2 = 0x58,
            eSk8Character_SkateTeenMale1 = 0x59,
            eSk8Character_SkateTeenMale2 = 0x5A,
            eSk8Character_SkateTeenMale3 = 0x5B,
            eSk8Character_SkateTeenMale4 = 0x5C,
            eSk8Character_SkateTeenMale5 = 0x5D,
            eSk8Character_SkateTeenFemale1 = 0x5E,
            eSk8Character_SkateTeenFemale2 = 0x5F,
            eSk8Character_SkateTeenFemale3 = 0x60,
            eSk8Character_Reserved = 0x61,
            eSk8Character_MusicPost = 0x62,
            eSk8Character_SFXPost = 0x63,
            eSk8Character_Max = 0x64
        };
        struct eSk8MissionMusicTrigger { // 4 bytes
            uint32_t v;
        };
        struct eSponsorType { // 4 bytes
            uint32_t v;
        };
        struct eTeamType { // 4 bytes
            uint32_t v;
        };
        struct ANSpeechRefSpec { // 32 bytes
            SPCHType_3_EventID SpeechEvent;
            Attrib::RefSpec TuningParameters;
        };
        struct CMSpeechRefSpec { // 32 bytes
            SPCHType_2_EventID SpeechEvent;
            Attrib::RefSpec TuningParameters;
        };
        struct DJSongInfo { // 16 bytes
            ePart_dj_interactive song;
            float volume;
            float duration;
        };
        struct eAudioMaterialTypes { // 4 bytes
            uint32_t v;
        };
        struct eBodySlideSurface { // 4 bytes
            uint32_t v;
        };
        enum eChannelMapPreset : uint32_t {
            CONTEST_IPOD = 1,
            CONTEST_IPOD_REPLAY = 2,
            DJLOCATION_INTERACTIVE = 3,
            DJLOCATION_IPOD = 4,
            CHANNELMAP_MAX = 5,
        };
        struct eCrowdSFX { // 4 bytes
            uint32_t v;
        };
        struct eCrowdType { // 4 bytes
            uint32_t v;
        };
        struct eEQChain { // 4 bytes
            uint32_t v;
        };
        struct eFootDragSurface { // 4 bytes
            uint32_t v;
        };
        struct eFootStepSurface { // 4 bytes
            uint32_t v;
        };
        struct eGrindMaterial { // 4 bytes
            uint32_t v;
        };
        struct eMaterialHardness { // 4 bytes
            uint32_t v;
        };
        struct eMaterialNicotineType { // 4 bytes
            uint32_t v;
        };
        struct eNotifyType { // 4 bytes
            uint32_t v;
        };
        struct eOLMaterial { // 4 bytes
            uint32_t v;
        };
        struct eParticleEffectSetTypes { // 4 bytes
            uint32_t v;
        };
        struct ePlayListMode { // 4 bytes
            uint32_t v;
        };
        struct ePSMaterial { // 4 bytes
            uint32_t v;
        };
        struct eSeamType { // 4 bytes
            uint32_t v;
        };
        struct eShoeType { // 4 bytes
            uint32_t v;
        };
        struct eSpeechSongID { // 4 bytes
            uint32_t v;
        };
        struct eSurfacePatternStyle { // 4 bytes
            uint32_t v;
        };
        struct eSurfaceTypes { // 4 bytes
            uint32_t v;
        };
        struct eTerrainTypes { // 4 bytes
            uint32_t v;
        };
        struct eTransitionType { // 4 bytes
            uint32_t v;
        };
        struct eVolumeColor { // 4 bytes
            uint32_t v;
        };
        struct eVolumeFalloffType { // 4 bytes
            uint32_t v;
        };
        struct eVolumeType { // 4 bytes
            uint32_t v;
        };
        struct IPodSongInfo { // 12 bytes
            ePart_ipod song;
            float volume;
            float duration;
        };
        struct IPodSpeechIDs { // 8 bytes
            uint32_t v[2];
        };
        struct LWSpeechRefSpec { // 32 bytes
            SPCHType_1_EventID SpeechEvent;
            Attrib::RefSpec TuningParameters;
        };
        struct MCSpeechRefSpec { // 32 bytes
            SPCHType_0_EventID SpeechEvent;
            Attrib::RefSpec TuningParameters;
        };
        struct MusicTweaks { // 8 bytes
            float raceIsClose;
            float lookAheadInteractive;
        };
        struct PlayListHistory { // 32 bytes
            unsigned __int64 playListKey;
            int current;
            unsigned __int64 playedFlags;
            float playListDuration;
        };
        namespace Splices {
            struct tCollisionSpliceAttribute { // 32 bytes
                Skate_Collisions Splice;
                Attrib::RefSpec TuningParameters;
            };
            struct tMetalSpliceAttribute { // 32 bytes
                Skate_Metal Splice;
                Attrib::RefSpec TuningParameters;
            };
        }

        struct tANNotFollow { // 8 bytes
            uint32_t v[2];
        };
        struct tAudioReflectedSurfaces { // 68 bytes
            Sk8::Audio::eSurfaceTypes vRollingMaterial;
            Sk8::Audio::eOLMaterial vOllieAndLandMaterial;
            Sk8::Audio::ePSMaterial vPowerSlideMaterial;
            Sk8::Audio::eFootDragSurface vStoppingMaterial;
            Sk8::Audio::eFootStepSurface vFootStepMaterial;
            Sk8::Audio::eMaterialHardness vMaterialHardness;
            Sk8::Audio::eTransitionType vTransitionType;
            Sk8::Audio::eBodySlideSurface vBodySlideMaterial;
            Sk8::Audio::eParticleEffectSetTypes vParticleEffectSet;
        };
        struct tCMNotFollow { // 8 bytes
            uint32_t v[2];
        };
        struct tHOMPriority { // 8 bytes
            uint32_t v[2];
        };
        struct tLWNotFollow { // 8 bytes
            uint32_t v[2];
        };
        struct tMCNotFollow { // 8 bytes
            uint32_t v[2];
        };
        struct tSpeechTuning { // 64 bytes
            float Delay;
            bool Interruptable;
            bool Interrupt;
            bool Interrupt_Stream;
            int Priority;
            float Min_Time_Between_Events;
            bool IsVoiceOver;
        };
        struct eSk8Spch_PLAN_B { // 4 bytes
            uint32_t v;
        };
        struct eSk8Spch_Trick { // 4 bytes
            uint32_t v;
        };
        struct eSk8Spch_TrickTwo { // 4 bytes
            uint32_t v;
        };
        struct eSk8Spch_Own_Spots { // 4 bytes
            uint32_t v;
        };
    }

    struct AudioSurfaceMap { // 72 bytes
        Sk8::Audio::eAudioMaterialTypes Surface;
        Sk8::Audio::tAudioReflectedSurfaces Type;
    };
    namespace Camera {
        struct eChallengeCameraOverride { // 4 bytes
            uint32_t v;
        };
    }

    namespace BE {
        enum eMapIconType : uint32_t { // 4 bytes
            XBOX2 = 0,
			PS3 = 1,
			Count = 2
        };
        struct eUNLOCK_CATEGORY { // 4 bytes
            uint32_t v;
        };
        struct eSk8ControllerGesture { // 4 bytes
            uint32_t v;
        };
        struct tUnlock { // 8 bytes
            uint32_t v[2];
        };
        struct tUnlockableItemInfo { // 8 bytes
            uint32_t v[2];
        };
        struct ObjectiveType { // 4 bytes
            uint32_t v;
        };
    }

    namespace FE {
        struct eNewsIconTypes { // 4 bytes
            uint32_t v;
        };
        struct eSponsorScreenStates { // 4 bytes
            uint32_t v;
        };
        struct eTrickSlotConnector { // 4 bytes
            uint32_t v;
        };
        struct tFEScreenShot { // 4 bytes
            uint32_t v;
        };
        struct tTrickGuideInputSlot { // 12 bytes
            Sk8::BE::eSk8ControllerGesture Gesture;
            Sk8::Score::ETrickInput Button;
            Sk8::FE::eTrickSlotConnector Connector;
        };
        struct TipsLoaderHint { // 8 bytes
            uint32_t v[2];
        };
        struct tMapInfo { // 28 bytes
            const char* Texture;
            int XMax;
            int XMin;
            int YMin;
            int XPixels;
            int YPixels;
        };
    }

    namespace CAC {
        struct COLOURIZED_SLOT { // 4 bytes
            uint32_t v;
        };
        struct ColourPreset { // 48 bytes
            uint32_t v[12];
        };
        struct eCaCState { // 4 bytes
            uint32_t v;
        };
        struct MORPH_ZONES { // 4 bytes
            uint32_t v;
        };
        struct MorphPreset { // 32 bytes
            uint32_t v[8];
        };
    }

    struct PointGraphData16 { // 128 bytes
        float x[16];
        float y[16];
    };
    struct PointGraphData4 { // 32 bytes
        float x[4];
        float y[4];
    };
    struct PointGraphData8 { // 64 bytes
        float x[8];
        float y[8];
    };
    struct PointNegGraphData16 { // 144 bytes
        float min_x;
        float min_y;
        float max_x;
        float x[16];
        float y[16];
    };
    struct PointNegGraphData4 { // 48 bytes
        float min_x;
        float min_y;
        float max_x;
        float x[4];
        float y[4];
    };
    struct PointNegGraphData8 { // 80 bytes
        float min_x;
        float min_y;
        float max_x;
        float x[8];
        float y[8];
    };
    namespace HUD {
        struct eHUDComponent { // 4 bytes
            uint32_t v;
        };
        struct eSk8HUDTutorialInstructions { // 4 bytes
            uint32_t v;
        };
    }

    namespace Input {
        struct eActorInputRestriction { // 4 bytes
            uint32_t v;
        };
        struct tRumbleInfo { // 12 bytes
            float HighFreq;
            float LowFreq;
            float Decay;
        };
    }

    namespace LivingWorld {
        struct eConversationLength { // 4 bytes
            uint32_t v;
        };
        struct eConversationTopic { // 4 bytes
            uint32_t v;
        };
        struct eHandPropActions { // 4 bytes
            uint32_t v;
        };
        struct eLivingWorldModelCategory { // 4 bytes
            uint32_t v;
        };
        struct eMoodEntityType { // 4 bytes
            uint32_t v;
        };
        struct eMoodLevel { // 4 bytes
            uint32_t v;
        };
        struct eMoodPrerequisite { // 4 bytes
            uint32_t v;
        };
        struct eMoodPrerequisiteOperator { // 4 bytes
            uint32_t v;
        };
        struct eMoodResult { // 4 bytes
            uint32_t v;
        };
        struct eObjectPersistencePriority { // 4 bytes
            uint32_t v;
        };
        struct ePedestrianBoneAdjust { // 4 bytes
            uint32_t v;
        };
        struct tLocomotionSpeedIntentMapping { // 32 bytes
            float Velocity;
            const char* MajorIntent;
            const char* MinorIntent;
        };
        struct tLWBodySpaceGrabSpline { // 48 bytes
            uint32_t v[12];
        };
        struct tLWBodySpaceGrindSpline { // 32 bytes
            uint32_t v[8];
        };
        struct tLWCensusCircle { // 20 bytes
            Sk8::LivingWorld::tLWCensusCircleInfo CensusCircleInfo;
            float Speed;
        };
        struct tLWCensusCircleInfo { // 16 bytes
            float NoSpawnRadius;
            float SpawnRadius;
            float CullRadius;
        };
        struct tLWCensusEntry { // 32 bytes
            Attrib::RefSpec Group;
            unsigned int SpawnMinCount;
        };
        struct tLWCollisionCapsuleParams { // 12 bytes
            float CapsuleRadius;
            float CapsuleLength;
            float CapsuleMass;
        };
        struct tLWDynamicObjectCharacteristicMapping { // 32 bytes
            const char* DynamicObjectNamePrefix;
            Attrib::RefSpec DynamicObjectCharacteristic;
        };
        struct tLWGroupEntry { // 32 bytes
            Attrib::RefSpec Category;
            float SpawnProbability;
        };
        struct tLWHandPropUsage { // 56 bytes
            Attrib::RefSpec HandProp;
            float DropOnCollisionProbability;
            Attrib::RefSpec UsageCharacteristics;
        };
        struct tLWHandPropUsageCharacteristics { // 16 bytes
            Sk8::LivingWorld::eHandPropActions Action;
            float Probability;
            float MinimumWaitTime;
        };
        struct tLWMoodEventPrerequisites { // 40 bytes
            Attrib::RefSpec MoodEvent;
            Sk8::LivingWorld::eMoodPrerequisite MoodPrerequisite;
            float Value;
        };
        struct tLWOpacityDistance { // 12 bytes
            Sk8::LivingWorld::tLWOpacityDistanceInfo OpacityDistanceInfo;
            float Speed;
        };
        struct tLWOpacityDistanceInfo { // 8 bytes
            float FullyOpaqueDistance;
            float FullyTransparentDistance;
        };
        struct tLWRefspecPriorityPair { // 32 bytes
            Attrib::RefSpec Category;
            unsigned int Priority;
        };
        struct tLWRefspecProbabilityPair { // 32 bytes
            Attrib::RefSpec Category;
            float Probability;
        };
        struct tPedestrianBoneAdjustMap { // 8 bytes
            Sk8::LivingWorld::ePedestrianBoneAdjust BoneIndex;
            float MaxAngle;
        };
        struct tRecoveryCollisionIntervals { // 8 bytes
            float GroundCollisionEndTime;
            float CrouchCollisionEndTime;
        };
    }

    struct tNISLocationOverride { // 32 bytes
        Math::Vector3 Position;
        Math::Vector3 Direction;
    };

    struct tNISPlaybackDefinition { // 64 bytes
        const char* SceneName;
        bool RandomPlaybackSpeed;
        bool RandomCameraTrack;
        bool UseLocationOverride;
        Sk8::tNISLocationOverride LocationOverride;
        bool IgnoreTeleportToLastBreadcrumb;
    };

    namespace ParticleSystem {
        struct eParticleEffectTypeId { // 4 bytes
            uint32_t v;
        };
    }

    namespace Physics {
        struct DeckForceTuning { // 32 bytes
            Attrib::Types::FloatColour mForceColour;
            float mForceDisplayScale;
            uint8_t mLifeTime;
            bool mDisplay;
            const char* mForceType;
        };
        struct PhysicsControllerData { // 16 bytes
            float mPVal;
            float mIVal;
            float mDVal;
        };
        struct SkeletonBoneData { // 24 bytes
            float MassFactor;
            float RagdollMassFactor;
            bool HasCollision;
            bool UseRootDrive;
            float VolumeScalar;
            unsigned int NumParents;
        };
        struct SkeletonDriveData { // 36 bytes
            float RagdollDriveStrengthStart;
            float RagdollDriveStrength;
            float RagdollDriveStrengthControlled;
            float CollisionDriveStrength;
            float CollisionDriveStrengthRoot;
            bool CollisionCompliant;
        };

        struct SkeletonJointData {
            struct JointIndex { // 4 bytes
                uint32_t v;
            };
        };

        struct SkeletonDataBase { // 0 bytes
            uint8_t v[0];
        };
        struct ePhysicsMode { // 4 bytes
            uint32_t v;
        };
    }

    namespace Progression {
        struct TeamBrandStampType { // 4 bytes
            uint32_t v;
        };
    }

    namespace Particle {
        struct tSkaterParticleEffect { // 80 bytes
            Sk8::Audio::eParticleEffectSetTypes surface;
            Attrib::RefSpec landeffect;
            Attrib::RefSpec slideeffect;
            Attrib::RefSpec throweffect;
        };
    }

    namespace Render {
        struct cDirectionalLightData { // 144 bytes
            Attrib::Types::Vector4 mColor;
            Attrib::Types::Vector4 mSpecColor;
            Attrib::Types::Vector4 mShadowColor;
            Attrib::Types::Vector4 mShadowSpecColor;
            float mDirection_x;
            float mDirection_y;
            float mDirection_z;
            float mShadowIntensity;
            float mLightSpread_x;
            float mLightSpread_y;
            float mSpecDirection_y;
            float mSpecDirection_z;
            float mSpecPower;
            float mShadowSpecIntensity;
            float mSpecSpread_x;
            float mSpecSpread_y;
            bool mEnable;
        };
        struct cSimpleLightData { // 48 bytes
            Sk8::Render::eLightSpace mSpace;
            float mAzimuth;
            float mAltitude;
            Attrib::Types::Vector4 mColour;
            bool mEdit;
        };
        struct eLightControl { // 4 bytes
            uint32_t v;
        };
        struct eLightSpace { // 4 bytes
            uint32_t v;
        };
        struct PhotoEffectFontAlign { // 4 bytes
            uint32_t v;
        };
        struct PhotoEffectFontType { // 4 bytes
            uint32_t v;
        };
        struct PhotoEffectLayer { // 64 bytes
            uint32_t v[16];
        };
        struct PhotoEffectOperation { // 4 bytes
            uint32_t v;
        };
        struct tStringCouple { // 8 bytes
			uint32_t oldMaterialName; // offset
			uint32_t newMaterialName; // offset
        };
        struct tTechniqueData { // 56 bytes
            uint32_t v[14];
        };
        struct tViewportData { // 16 bytes
            float mNearPlane;
            float mFarPlane;
            float mMinZ;
        };
        struct tVTShaderData { // 96 bytes
            Attrib::Types::Vector4 m3DColor;
            Attrib::Types::Vector4 m2DColor;
            Attrib::Types::Vector4 mLightAColor;
            Attrib::Types::Vector4 mLightADir;
            Attrib::Types::Vector4 mLightBColor;
            Attrib::Types::Vector4 mLightBDir;
        };
    }

    namespace Scene {
        struct eNISChallengeNotification { // 4 bytes
            uint32_t v;
        };
        struct eSceneType { // 4 bytes
            uint32_t v;
        };
    }

    namespace Score {
        struct EEntityDMOCategory { // 4 bytes
            uint32_t v;
        };
        struct EEntityGroup { // 4 bytes
            uint32_t v;
        };
        struct EEntityType { // 4 bytes
            uint32_t v;
        };
        struct EMovableObjectType { // 4 bytes
            uint32_t v;
        };
        enum EScorableID : uint32_t {
            eScorableID_fspowerslide = 0,
            eScorableID_bspowerslide = 1,
            eScorableID_nosemanual = 2,
            eScorableID_tailmanual = 3,
            eScorableID_fsrevert = 4,
            eScorableID_bsrevert = 5,
            eScorableID_bs_5_o = 6,
            eScorableID_bs_50_50 = 7,
            eScorableID_bs_blunt = 8,
            eScorableID_bs_board = 9,
            eScorableID_bs_crook = 0xA,
            eScorableID_bs_feeble = 0xB,
            eScorableID_bs_lip = 0xC,
            eScorableID_bs_noseblunt = 0xD,
            eScorableID_bs_nosegrind = 0xE,
            eScorableID_bs_noseslide = 0xF,
            eScorableID_bs_overcrook = 0x10,
            eScorableID_bs_overwilly = 0x11,
            eScorableID_bs_salad = 0x12,
            eScorableID_bs_smith = 0x13,
            eScorableID_bs_tailslide = 0x14,
            eScorableID_bs_willy = 0x15,
            eScorableID_fs_5_o = 0x16,
            eScorableID_fs_50_50 = 0x17,
            eScorableID_fs_blunt = 0x18,
            eScorableID_fs_board = 0x19,
            eScorableID_fs_crook = 0x1A,
            eScorableID_fs_feeble = 0x1B,
            eScorableID_fs_lip = 0x1C,
            eScorableID_fs_noseblunt = 0x1D,
            eScorableID_fs_nosegrind = 0x1E,
            eScorableID_fs_noseslide = 0x1F,
            eScorableID_fs_overcrook = 0x20,
            eScorableID_fs_overwilly = 0x21,
            eScorableID_fs_salad = 0x22,
            eScorableID_fs_smith = 0x23,
            eScorableID_fs_tailslide = 0x24,
            eScorableID_fs_willy = 0x25,
            eScorableID_grind5_o = 0x26,
            eScorableID_grind5050 = 0x27,
            eScorableID_grindcrooks = 0x28,
            eScorableID_grindfeeble = 0x29,
            eScorableID_grindnose = 0x2A,
            eScorableID_grindovercrooks = 0x2B,
            eScorableID_grindoverwilly = 0x2C,
            eScorableID_grindsalad = 0x2D,
            eScorableID_grindsmith = 0x2E,
            eScorableID_grindwilly = 0x2F,
            eScorableID_slideblunt = 0x30,
            eScorableID_slideboard = 0x31,
            eScorableID_slidelip = 0x32,
            eScorableID_slidenblunt = 0x33,
            eScorableID_slidenose = 0x34,
            eScorableID_slidetail = 0x35,
            eScorableID_bsgrab = 0x36,
            eScorableID_bsgrab_down = 0x37,
            eScorableID_bsgrab_left = 0x38,
            eScorableID_bsgrab_right = 0x39,
            eScorableID_bsgrab_up = 0x3A,
            eScorableID_christ_air = 0x3B,
            eScorableID_coffin = 0x3C,
            eScorableID_dblgrab = 0x3D,
            eScorableID_fsgrab = 0x3E,
            eScorableID_fsgrab_down = 0x3F,
            eScorableID_fsgrab_left = 0x40,
            eScorableID_fsgrab_right = 0x41,
            eScorableID_fsgrab_up = 0x42,
            eScorableID_gnd_bsgrab = 0x43,
            eScorableID_gnd_dblgrab = 0x44,
            eScorableID_gnd_fsgrab = 0x45,
            eScorableID_mutegrab = 0x46,
            eScorableID_mutegrab_down = 0x47,
            eScorableID_mutegrab_left = 0x48,
            eScorableID_mutegrab_up = 0x49,
            eScorableID_nosegrab = 0x4A,
            eScorableID_nosegrab_left = 0x4B,
            eScorableID_nosegrab_right = 0x4C,
            eScorableID_rocketair = 0x4D,
            eScorableID_stalegrab = 0x4E,
            eScorableID_stalegrab_down = 0x4F,
            eScorableID_stalegrab_left = 0x50,
            eScorableID_stalegrab_up = 0x51,
            eScorableID_tailgrab = 0x52,
            eScorableID_tailgrab_left = 0x53,
            eScorableID_tailgrab_right = 0x54,
            eScorableID_360flip = 0x55,
            eScorableID_360hardflip = 0x56,
            eScorableID_360inwardheelflip = 0x57,
            eScorableID_360popshuvit = 0x58,
            eScorableID_fs360popshuvit = 0x59,
            eScorableID_fspopshuvit = 0x5A,
            eScorableID_hardflip = 0x5B,
            eScorableID_heelflip = 0x5C,
            eScorableID_heelflip2 = 0x5D,
            eScorableID_heelflip3 = 0x5E,
            eScorableID_inwardheelflip = 0x5F,
            eScorableID_kickflip = 0x60,
            eScorableID_kickflip2 = 0x61,
            eScorableID_kickflip3 = 0x62,
            eScorableID_laserflip = 0x63,
            eScorableID_latebackfootheelflip = 0x64,
            eScorableID_latebackfootkickflip = 0x65,
            eScorableID_latebsshuv = 0x66,
            eScorableID_latefsshuv = 0x67,
            eScorableID_lateheelflip = 0x68,
            eScorableID_latekickflip = 0x69,
            eScorableID_n_360flip = 0x6A,
            eScorableID_n_360hardflip = 0x6B,
            eScorableID_n_360inwardheelflip = 0x6C,
            eScorableID_n_360popshuvit = 0x6D,
            eScorableID_n_fs360popshuvit = 0x6E,
            eScorableID_n_fspopshuvit = 0x6F,
            eScorableID_n_hardflip = 0x70,
            eScorableID_n_heelflip = 0x71,
            eScorableID_n_heelflip2 = 0x72,
            eScorableID_n_heelflip3 = 0x73,
            eScorableID_n_inwardheelflip = 0x74,
            eScorableID_n_kickflip = 0x75,
            eScorableID_n_kickflip2 = 0x76,
            eScorableID_n_kickflip3 = 0x77,
            eScorableID_n_laserflip = 0x78,
            eScorableID_n_popshuvit = 0x79,
            eScorableID_n_varialheelflip = 0x7A,
            eScorableID_n_varialkickflip = 0x7B,
            eScorableID_popshuvit = 0x7C,
            eScorableID_varialheelflip = 0x7D,
            eScorableID_varialkickflip = 0x7E,
            eScorableID_nollie = 0x7F,
            eScorableID_ollie = 0x80,
            eScorableID_air_horizontal_distance = 0x81,
            eScorableID_air_height_to_peak = 0x82,
            eScorableID_air_total_height_gain = 0x83,
            eScorableID_air_player_spin = 0x84,
            eScorableID_air_player_flip = 0x85,
            eScorableID_heelflip4 = 0x86,
            eScorableID_kickflip4 = 0x87,
            eScorableID_n_heelflip4 = 0x88,
            eScorableID_n_kickflip4 = 0x89,
            eScorableID_nofoot_air = 0x8A,
            eScorableID_fs_handplant = 0x8B,
            eScorableID_fs_handplant_up = 0x8C,
            eScorableID_fs_handplant_right = 0x8D,
            eScorableID_fs_handplant_left = 0x8E,
            eScorableID_fs_handplant_down = 0x8F,
            eScorableID_fs_handplant_onefoot_front = 0x90,
            eScorableID_fs_handplant_onefoot_back = 0x91,
            eScorableID_fs_handplant_nofoot = 0x92,
            eScorableID_fs_handplant_to_fakie = 0x93,
            eScorableID_fs_handplant_to_revert = 0x94,
            eScorableID_bs_handplant = 0x95,
            eScorableID_bs_handplant_up = 0x96,
            eScorableID_bs_handplant_right = 0x97,
            eScorableID_bs_handplant_left = 0x98,
            eScorableID_bs_handplant_down = 0x99,
            eScorableID_bs_handplant_onefoot_front = 0x9A,
            eScorableID_bs_handplant_onefoot_back = 0x9B,
            eScorableID_bs_handplant_nofoot = 0x9C,
            eScorableID_bs_handplant_to_fakie = 0x9D,
            eScorableID_bs_handplant_to_revert = 0x9E,
            eScorableID_bs_handplant_mount = 0x9F,
            eScorableID_bs_handplant_dismount = 0xA0,
            eScorableID_bs_handplant_to_flat = 0xA1,
            eScorableID_fs_onefoot_right = 0xA2,
            eScorableID_fs_backfoot = 0xA3,
            eScorableID_bs_onefoot_front = 0xA4,
            eScorableID_bs_onefoot_behind = 0xA5,
            eScorableID_nosegrab_onefoot_front = 0xA6,
            eScorableID_nosegrab_onefoot_behind = 0xA7,
            eScorableID_tailgrab_onefoot_front = 0xA8,
            eScorableID_tailgrab_onefoot_behind = 0xA9,
            eScorableID_ollie_onefoot_front = 0xAA,
            eScorableID_ollie_onefoot_back = 0xAB,
            eScorableID_tailgrab_airwalk = 0xAC,
            eScorableID_fsgrab_fingerflip = 0xAD,
            eScorableID_bsgrab_fingerflip = 0xAE,
            eScorableID_nosegrab_fingerflip = 0xAF,
            eScorableID_tailgrab_fingerflip = 0xB0,
            eScorableID_mutegrab_fingerflip = 0xB1,
            eScorableID_stalegrab_fingerflip = 0xB2,
            eScorableID_fsgrabvarial_fingerflip = 0xB3,
            eScorableID_bsgrabvarial_fingerflip = 0xB4,
            eScorableID_fs_rock_n_roll = 0xB5,
            eScorableID_bs_rock_n_roll = 0xB6,
            eScorableID_fakie_rock = 0xB7,
            eScorableID_dropin = 0xB8,
            eScorableID_dropin_fs_revert = 0xB9,
            eScorableID_dropin_bs_revert = 0xBA,
            eScorableID_crailgrab = 0xBB,
            eScorableID_crailgrab_left = 0xBC,
            eScorableID_crailgrab_right = 0xBD,
            eScorableID_seatbeltgrab = 0xBE,
            eScorableID_seatbeltgrab_left = 0xBF,
            eScorableID_seatbeltgrab_right = 0xC0,
            eScorableID_fs_50_50_fsgrab = 0xC1,
            eScorableID_fs_50_50_bsgrab = 0xC2,
            eScorableID_fs_nosegrind_tailgrab = 0xC3,
            eScorableID_fs_nosegrind_bsgrab = 0xC4,
            eScorableID_fs_crook_tailgrab = 0xC5,
            eScorableID_fs_crook_bsgrab = 0xC6,
            eScorableID_bs_crook_tailgrab = 0xC7,
            eScorableID_bs_crook_bsgrab = 0xC8,
            eScorableID_fs_noseslide_tailgrab = 0xC9,
            eScorableID_bs_noseslide_tailgrab = 0xCA,
            eScorableID_fs_noseblunt_tailgrab = 0xCB,
            eScorableID_bs_noseblunt_tailgrab = 0xCC,
            eScorableID_fs_5_o_fsgrab = 0xCD,
            eScorableID_fs_5_o_nosegrab = 0xCE,
            eScorableID_fs_salad_fsgrab = 0xCF,
            eScorableID_fs_salad_nosegrab = 0xD0,
            eScorableID_bs_salad_fsgrab = 0xD1,
            eScorableID_bs_salad_nosegrab = 0xD2,
            eScorableID_fs_tailslide_nosegrab = 0xD3,
            eScorableID_bs_tailslide_nosegrab = 0xD4,
            eScorableID_fs_blunt_tailgrab = 0xD5,
            eScorableID_bs_blunt_tailgrab = 0xD6,
            eScorableID_fsboneless = 0xD7,
            eScorableID_bsboneless = 0xD8,
            eScorableID_fsfastplant = 0xD9,
            eScorableID_bsfastplant = 0xDA,
            eScorableID_bsgrab_fs_footplant = 0xDB,
            eScorableID_bsgrab_bs_footplant = 0xDC,
            eScorableID_fsgrab_fs_footplant = 0xDD,
            eScorableID_fsgrab_bs_footplant = 0xDE,
            eScorableID_nosegrab_fs_footplant = 0xDF,
            eScorableID_nosegrab_bs_footplant = 0xE0,
            eScorableID_tailgrab_fs_footplant = 0xE1,
            eScorableID_tailgrab_bs_footplant = 0xE2,
            eScorableID_ollie_fs_footplant = 0xE3,
            eScorableID_ollie_bs_footplant = 0xE4,
            eScorableID_nocomply = 0xE5,
            eScorableID_no_comply_fs180 = 0xE6,
            eScorableID_no_comply_bs180 = 0xE7,
            eScorableID_no_comply_fs360 = 0xE8,
            eScorableID_no_comply_bs360 = 0xE9,
            eScorableID_hippyjump = 0xEA,
            eScorableID_hippyjump_fs180 = 0xEB,
            eScorableID_hippyjump_bs180 = 0xEC,
            eScorableID_air_metric = 0xED,
            eScorableID_fsgrabtostalegrab_fingerflip = 0xEE,
            eScorableID_bsgrabtomutegrab_fingerflip = 0xEF,
            eScorableID_stalegrabtofsgrab_fingerflip = 0xF0,
            eScorableID_mutegrabtobsgrab_fingerflip = 0xF1,
            eScorableID_bs_50_50_fsgrab = 0xF2,
            eScorableID_bs_50_50_bsgrab = 0xF3,
            eScorableID_bs_nosegrind_tailgrab = 0xF4,
            eScorableID_bs_nosegrind_bsgrab = 0xF5,
            eScorableID_bs_5_o_fsgrab = 0xF6,
            eScorableID_bs_5_o_nosegrab = 0xF7,
            eScorableID_fs_overcrook_tailgrab = 0xF8,
            eScorableID_fs_overcrook_bsgrab = 0xF9,
            eScorableID_bs_overcrook_tailgrab = 0xFA,
            eScorableID_bs_overcrook_bsgrab = 0xFB,
            eScorableID_superman = 0xFC,
            eScorableID_generic_metric = 0xFD,
            eScorableID_nosegrab_airwalk = 0xFE,
            eScorableID_seatbelttonose_fingerflip = 0xFF,
            eScorableID_crailtotail_fingerflip = 0x100,
            eScorableID_fs_board_double = 0x101,
            eScorableID_fs_board_tail = 0x102,
            eScorableID_fs_board_nose = 0x103,
            eScorableID_bs_board_double = 0x104,
            eScorableID_bs_board_tail = 0x105,
            eScorableID_bs_board_nose = 0x106,
            eScorableID_fs_lip_double = 0x107,
            eScorableID_fs_lip_tail = 0x108,
            eScorableID_fs_lip_nose = 0x109,
            eScorableID_bs_lip_double = 0x10A,
            eScorableID_bs_lip_tail = 0x10B,
            eScorableID_bs_lip_nose = 0x10C,
            eScorableID_NUM = 0x10D,
            eScorableID_INVALID = -1
        };
        enum EScorableIDCategory : uint32_t {
            eScorableIDCategory_GROUND = 0,
            eScorableIDCategory_GRINDS = 1,
            eScorableIDCategory_GRABS = 2,
            eScorableIDCategory_FLIPS = 3,
            eScorableIDCategory_AIR = 4,
            eScorableIDCategory_METRIC = 5,
            eScorableIDCategory_HANDPLANT = 6,
            eScorableIDCategory_NUM = 7,
			eScorableIDCategory_INVALID = -1
        };
        struct EScoreThreshold { // 4 bytes
            uint32_t v;
        };
        struct EScoreThresholdType { // 4 bytes
            uint32_t v;
        };
        struct ESkaterIntent { // 4 bytes
            uint32_t v;
        };
        struct ETrickDifficulty { // 4 bytes
            uint32_t v;
        };
        struct ETrickInput { // 4 bytes
            uint32_t v;
        };
        struct ETrickMetricType { // 4 bytes
            uint32_t v;
        };
        enum ETrickType : uint32_t {
            eTrickTypeNone = 0,
            eTrickTypeAir = 1,
            eTrickTypeFlip = 2,
            eTrickTypeFingerFlip = 3,
            eTrickTypeGrab = 4,
            eTrickTypeGrind = 5,
            eTrickTypeHandplant = 6,
            eTrickTypeNoComply = 7,
            eTrickTypeManual = 8,
            eTrickTypeSlide = 9,
            eTrickTypeHippyJump = 0xA,
            eTrickTypeRevert = 0xB,
            eTrickTypeBoneless = 0xC,
            eTrickTypeFootplant = 0xD,
			eTrickTypeMax = 0xE
        };
        namespace HoM {
            struct BodyTweakAttribData { // 24 bytes
                uint32_t v[6];
            };
            struct BoneAttribData { // 84 bytes
                uint32_t v[21];
            };
            struct BoneConnectionData { // 8 bytes
                uint32_t v[2];
            };
            struct BoneDamageLevel { // 8 bytes
                uint32_t v[2];
            };
            struct BoneSetAttribData { // 2100 bytes
                uint32_t v[525];
            };
            struct EBoneIndex { // 4 bytes
                uint32_t v;
            };
            struct EConnectionDirection { // 4 bytes
                uint32_t v;
            };
            struct EDamageLevel { // 4 bytes
                uint32_t v;
            };
            struct EntityCollisionAttribData { // 8 bytes
                uint32_t v[2];
            };
            struct EntityDMOCollisionAttribData { // 8 bytes
                uint32_t v[2];
            };
            struct EWipeoutBodyTweakIndex { // 4 bytes
                uint32_t v;
            };
        }

        struct ScoreThresholdData { // 12 bytes
            uint32_t v[3];
        };
        struct ScoreThresholdDataSet { // 180 bytes
            uint32_t v[45];
        };
        struct SkaterIntentTuple { // 16 bytes
            uint32_t v[4];
        };
        struct TrickMetricPoints { // 28 bytes
            uint32_t v[7];
        };
        struct TrickMetricTypes { // 28 bytes
            uint32_t v[7];
        };
    }

    namespace ShaderSystem {
        struct tSamplerAnisotropy { // 4 bytes
            uint32_t v;
        };
        struct tSamplerFilter { // 4 bytes
            uint32_t v;
        };
        struct tSamplerState { // 20 bytes
            uint32_t SamplerName; // offset
            float MipMapLODBias;
            tSamplerFilter FilterType;
            tSamplerAnisotropy MaxAnisotropy;
            bool Enable;
        };
    }

    namespace AI {
        struct ProfileTrickEntry { // 8 bytes
            Sk8::Score::EScorableID ID;
            float Weight;
        };
    }

    namespace UCC {
        struct eTerrainVIType { // 4 bytes
            uint32_t v;
        };
        struct tMergePlane { // 48 bytes
            uint32_t v[12];
        };
    }

}

namespace Anim {
    struct eApproachDir { // 4 bytes
        uint32_t v;
    };
    struct eBranchType { // 4 bytes
        uint32_t v;
    };
    struct eFootMatching { // 4 bytes
        uint32_t v;
    };
    struct eUseFootMatching { // 4 bytes
        uint32_t v;
    };
    struct tAnimAttributes {
        uint32_t Clip; //offset
        Anim::eUseFootMatching UseFootMatching;
        Anim::eFootMatching StartFoot;
        Anim::eFootMatching EndFoot;
        int32_t NumBranchWindows;
        Anim::tBranchWindow BranchWindows[3];
    };
    struct tAnimBranchInfo { // 8 bytes
        Anim::eBranchType Type;
        float BranchTime;
    };
    struct tAnimClipBlock { // 12 bytes
        const char* IntoClip;
        const char* CycleClip;
        const char* OutClip;
    };
    struct tAnimTakedown { // 40 bytes
        const char* AttackName;
        const char* MirroredAttackName;
        float Time;
        float MaxDistance;
        float RightAngle;
        float LeftAngle;
        float ApproachSpeed;
        bool CanBeMirrored;
        bool RotateToTarget;
        bool FallOnFail;
    };
    struct tAnimTransitionInfo { // 16 bytes
        const char* Clip;
        float BranchWindow;
        float TransitionBlendTime;
    };
    struct tBranchWindow { // 12 bytes
        float Start;
        float End;
        Anim::eFootMatching Foot;
    };
}

namespace AttribSysUtils {
    struct tHashedString32 { // 4 bytes
        uint32_t v;
    };
    struct tVaultedRefSpec { // 32 bytes
		tHashedString32 name; //idk just a guess
        Attrib::RefSpec refspec; //idk just a guess
    };
}

struct ePart_dj_interactive { // 4 bytes
    uint32_t v;
};
struct ePart_ipod { // 4 bytes
    uint32_t v;
};
namespace GrainPlayer {
    struct GrainParams { // 20 bytes
        float FadeInTime;
        float SustainTime;
        float FadeOutTime;
        float PercentageDrift;
    };
}

struct SPCH0Type_IP_cls { // 4 bytes
    uint32_t v;
};
struct SPCH0Type_IP_ID { // 4 bytes
    uint32_t v;
};
struct SPCH0Type_LW_cls { // 4 bytes
    uint32_t v;
};
struct SPCH0Type_Pro_cls { // 4 bytes
    uint32_t v;
};
struct SPCH0Type_Pro_ID { // 4 bytes
    uint32_t v;
};
struct SPCH1Type_CharID { // 4 bytes
    uint32_t v;
};
struct SPCH1Type_CharType { // 4 bytes
    uint32_t v;
};
struct SPCH1Type_cls { // 4 bytes
    uint32_t v;
};
struct SPCH2Type_LW_Gender { // 4 bytes
    uint32_t v;
};
struct SPCH3Type_char_ID_Ann { // 4 bytes
    uint32_t v;
};
struct SPCH3Type_ip_id_Ann { // 4 bytes
    uint32_t v;
};
struct SPCH3Type_pro_id_ANN { // 4 bytes
    uint32_t v;
};
struct SPCHType_0_EventID { // 4 bytes
    uint32_t v;
};
struct SPCHType_1_EventID { // 4 bytes
    uint32_t v;
};
struct SPCHType_2_EventID { // 4 bytes
    uint32_t v;
};
struct SPCHType_3_EventID { // 4 bytes
    uint32_t v;
};
namespace Iris {
    struct AnchorID { // 4 bytes
        uint32_t v;
    };
    struct BlendTypeID { // 4 bytes
        uint32_t v;
    };
    struct CollisionHint { // 4 bytes
        uint32_t v;
    };
    struct CompassNorthID { // 4 bytes
        uint32_t v;
    };
    struct ShotTypeID { // 4 bytes
        uint32_t v;
    };
    struct TransitionTimeType { // 4 bytes
        uint32_t v;
    };
}

namespace ChallengePrereq {
    struct eChallengeLevel { // 4 bytes
        uint32_t v;
    };
    struct eChallengePath { // 4 bytes
        uint32_t v;
    };
}

struct tLuaScript { // 4 bytes
    uint32_t Script; // offset
};

namespace xcore {
    struct tRect { // 16 bytes
        float X;
        float Y;
        float W;
    };
}

namespace LuaState {
    struct tCompiledLua { // 12 bytes
        uint32_t SourceLua; // offset
        tLuaBlob CompiledLua;
    };
    struct tLuaBlob { // 8 bytes
        uint32_t Size;
		uint32_t Data; // offset
    };
}

namespace Character {
    struct eHatType { // 4 bytes
        uint32_t v;
    };
}

namespace Observatory {
    struct eObservatoryIndividualChallengeState { // 4 bytes
        uint32_t v;
    };
    struct eObservatoryTriggerType { // 4 bytes
        uint32_t v;
    };
    struct tObservatoryProgressionReward { // 16 bytes
        uint32_t v[4];
    };
    struct tObservatoryProgressionRewardReturns { // 16 bytes
        uint32_t v[4];
    };
    struct tObservatoryTrigger { // 24 bytes
        uint32_t v[6];
    };
}

struct CellPhone_Rings { // 4 bytes
    uint32_t v;
};
struct sk82_cloth_foley { // 4 bytes
    uint32_t v;
};
struct Sk82_Whsh_Bys { // 4 bytes
    uint32_t v;
};
struct DLC_Cartoon_Collisions { // 4 bytes
    uint32_t v;
};
struct HOM_Set_1 { // 4 bytes
    uint32_t v;
};
struct Skate_Collisions { // 4 bytes
    uint32_t v;
};
struct Skate_Metal { // 4 bytes
    uint32_t v;
};
struct sk8_menu { // 4 bytes
    uint32_t v;
};

namespace Math {
    struct Vector2 { // 16
        float x;
        float y;
    };

    struct Vector3 { // 16
        float x;
        float y;
        float z;
    };

    struct Vector4 { // 16
        float x;
        float y;
        float z;
        float w;
    };
}
namespace WorldPainter {
    struct eLayerID {
        uint32_t layerID;
    };
};

namespace Attrib {
    namespace Gen {
        struct ClassRefSpec {
            uint64_t mClassKey;
            uint32_t mRefSpecOffset;
            uint32_t mPadding;
        };
    };
};

std::unordered_map<std::string, std::function<void* ()>> TypeFactory = {
    {"EA::Reflection::Int64", []() { return new EA::Reflection::Int64(); }},
    {"EA::Reflection::Int32", []() { return new EA::Reflection::Int32(); }},
    {"EA::Reflection::Int16", []() { return new EA::Reflection::Int16(); }},
    {"EA::Reflection::Int8", []() { return new EA::Reflection::Int8(); }},
    {"EA::Reflection::UInt64", []() { return new EA::Reflection::UInt64(); }},
    {"EA::Reflection::UInt32", []() { return new EA::Reflection::UInt32(); }},
    {"EA::Reflection::UInt16", []() { return new EA::Reflection::UInt16(); }},
    {"EA::Reflection::UInt8", []() { return new EA::Reflection::UInt8(); }},
    {"EA::Reflection::Char", []() { return new EA::Reflection::Char(); }},
    {"EA::Reflection::Bool", []() { return new EA::Reflection::Bool(); }},
    {"EA::Reflection::Float", []() { return new EA::Reflection::Float(); }},
    {"EA::Reflection::Double", []() { return new EA::Reflection::Double(); }},
    {"EA::Reflection::Text", []() { return new EA::Reflection::Text(); }},
    {"EA::Reflection::Reference", []() { return new EA::Reflection::Reference(); }},
    {"EA::Reflection::Type", []() { return new EA::Reflection::Type(); }},
    {"EA::Reflection::KeyValueAttrib", []() { return new EA::Reflection::KeyValueAttrib(); }},
    {"Attrib::Blob", []() { return new Attrib::Blob(); }},
    {"Attrib::RefSpec", []() { return new Attrib::RefSpec(); }},
    {"Attrib::Definition", []() { return new Attrib::Definition(); }},
    {"Attrib::Types::Symbol", []() { return new Attrib::Types::Symbol(); }},
    {"Attrib::Types::Colour", []() { return new Attrib::Types::Colour(); }},
    {"Attrib::Types::FloatColour", []() { return new Attrib::Types::FloatColour(); }},
    {"Attrib::Types::ShaderColour", []() { return new Attrib::Types::ShaderColour(); }},
    {"Attrib::Types::Matrix", []() { return new Attrib::Types::Matrix(); }},
    {"Attrib::Types::Quaternion", []() { return new Attrib::Types::Quaternion(); }},
    {"Attrib::Types::Vector4", []() { return new Attrib::Types::Vector4(); }},
    {"Attrib::Types::Vector3", []() { return new Attrib::Types::Vector3(); }},
    {"Attrib::Types::Vector2", []() { return new Attrib::Types::Vector2(); }},
    {"Attrib::Key", []() { return new Attrib::Key(); }},
    {"Attrib::AttributeKey", []() { return new Attrib::AttributeKey(); }},
    {"Attrib::CollectionKey", []() { return new Attrib::CollectionKey(); }},
    {"Attrib::ClassKey", []() { return new Attrib::ClassKey(); }},
    {"Attrib::Type", []() { return new Attrib::Type(); }},
    {"EffectParticleAnimation", []() { return new EffectParticleAnimation(); }},
    {"EffectParticleConstraint", []() { return new EffectParticleConstraint(); }},
    {"EmitterDataRecord", []() { return new EmitterDataRecord(); }},
    {"EffectLinkageRecord", []() { return new EffectLinkageRecord(); }},
    {"ParticleAnimationInfo", []() { return new ParticleAnimationInfo(); }},
    {"ParticleTextureRecord", []() { return new ParticleTextureRecord(); }},
    {"HashedStringSet", []() { return new HashedStringSet(); }},
    {"eTEG_ParticleTextures", []() { return new eTEG_ParticleTextures(); }},
    {"Sk8::Net::TrophyType", []() { return new Sk8::Net::TrophyType(); }},
    {"Sk8::Challenge::ActivityUtils::kGameLoadFlags", []() { return new Sk8::Challenge::ActivityUtils::kGameLoadFlags(); }},
    {"Sk8::Challenge::ActivityUtils::tActivityLoadMask", []() { return new Sk8::Challenge::ActivityUtils::tActivityLoadMask(); }},
    {"Sk8::Challenge::tWorldLocationID", []() { return new Sk8::Challenge::tWorldLocationID(); }},
    {"Sk8::AIPath::EAISkater", []() { return new Sk8::AIPath::EAISkater(); }},
    {"Sk8::AIPath::EPathFlag", []() { return new Sk8::AIPath::EPathFlag(); }},
    {"Sk8::AIPath::ESkillLevel", []() { return new Sk8::AIPath::ESkillLevel(); }},
    {"Anim::eApproachDir", []() { return new Anim::eApproachDir(); }},
    {"Anim::eBranchType", []() { return new Anim::eBranchType(); }},
    {"Anim::eFootMatching", []() { return new Anim::eFootMatching(); }},
    {"Anim::eUseFootMatching", []() { return new Anim::eUseFootMatching(); }},
    {"Anim::tAnimAttributes", []() { return new Anim::tAnimAttributes(); }},
    {"Anim::tAnimBranchInfo", []() { return new Anim::tAnimBranchInfo(); }},
    {"Anim::tAnimClipBlock", []() { return new Anim::tAnimClipBlock(); }},
    {"Anim::tAnimTakedown", []() { return new Anim::tAnimTakedown(); }},
    {"Anim::tAnimTransitionInfo", []() { return new Anim::tAnimTransitionInfo(); }},
    {"Anim::tBranchWindow", []() { return new Anim::tBranchWindow(); }},
    {"AttribSysUtils::tHashedString32", []() { return new AttribSysUtils::tHashedString32(); }},
    {"AttribSysUtils::tVaultedRefSpec", []() { return new AttribSysUtils::tVaultedRefSpec(); }},
    {"Sk8::Audio::eAudioFEStates", []() { return new Sk8::Audio::eAudioFEStates(); }},
    {"Sk8::Audio::eChallengeMusicType", []() { return new Sk8::Audio::eChallengeMusicType(); }},
    {"Sk8::Audio::eCrowdBank", []() { return new Sk8::Audio::eCrowdBank(); }},
    {"Sk8::Audio::eDMOType", []() { return new Sk8::Audio::eDMOType(); }},
    {"Sk8::Audio::eEmitterStates", []() { return new Sk8::Audio::eEmitterStates(); }},
    {"Sk8::Audio::eJitterParams", []() { return new Sk8::Audio::eJitterParams(); }},
    {"Sk8::Audio::eMomentSFX", []() { return new Sk8::Audio::eMomentSFX(); }},
    {"Sk8::Audio::eMusicFEStates", []() { return new Sk8::Audio::eMusicFEStates(); }},
    {"Sk8::Audio::eRaceMusicType", []() { return new Sk8::Audio::eRaceMusicType(); }},
    {"Sk8::Audio::eSk8AudioFingerFlipTypes", []() { return new Sk8::Audio::eSk8AudioFingerFlipTypes(); }},
    {"Sk8::Audio::eSk8AudioLateFlipTypes", []() { return new Sk8::Audio::eSk8AudioLateFlipTypes(); }},
    {"Sk8::Audio::eSk8AudioTricks", []() { return new Sk8::Audio::eSk8AudioTricks(); }},
    {"Sk8::Audio::eSk8AudioTrickTiers", []() { return new Sk8::Audio::eSk8AudioTrickTiers(); }},
    {"Sk8::Audio::eSk8AudioTweakTypes", []() { return new Sk8::Audio::eSk8AudioTweakTypes(); }},
    {"Sk8::Audio::eSk8Characters", []() { return new Sk8::Audio::eSk8Characters(); }},
    {"Sk8::Audio::eSk8MissionMusicTrigger", []() { return new Sk8::Audio::eSk8MissionMusicTrigger(); }},
    {"Sk8::Audio::eSponsorType", []() { return new Sk8::Audio::eSponsorType(); }},
    {"Sk8::Audio::eTeamType", []() { return new Sk8::Audio::eTeamType(); }},
    {"ePart_dj_interactive", []() { return new ePart_dj_interactive(); }},
    {"ePart_ipod", []() { return new ePart_ipod(); }},
    {"GrainPlayer::GrainParams", []() { return new GrainPlayer::GrainParams(); }},
    {"Sk8::Audio::ANSpeechRefSpec", []() { return new Sk8::Audio::ANSpeechRefSpec(); }},
    {"Sk8::Audio::CMSpeechRefSpec", []() { return new Sk8::Audio::CMSpeechRefSpec(); }},
    {"Sk8::Audio::DJSongInfo", []() { return new Sk8::Audio::DJSongInfo(); }},
    {"Sk8::Audio::eAudioMaterialTypes", []() { return new Sk8::Audio::eAudioMaterialTypes(); }},
    {"Sk8::Audio::eBodySlideSurface", []() { return new Sk8::Audio::eBodySlideSurface(); }},
    {"Sk8::Audio::eChannelMapPreset", []() { return new Sk8::Audio::eChannelMapPreset(); }},
    {"Sk8::Audio::eCrowdSFX", []() { return new Sk8::Audio::eCrowdSFX(); }},
    {"Sk8::Audio::eCrowdType", []() { return new Sk8::Audio::eCrowdType(); }},
    {"Sk8::Audio::eEQChain", []() { return new Sk8::Audio::eEQChain(); }},
    {"Sk8::Audio::eFootDragSurface", []() { return new Sk8::Audio::eFootDragSurface(); }},
    {"Sk8::Audio::eFootStepSurface", []() { return new Sk8::Audio::eFootStepSurface(); }},
    {"Sk8::Audio::eGrindMaterial", []() { return new Sk8::Audio::eGrindMaterial(); }},
    {"Sk8::Audio::eMaterialHardness", []() { return new Sk8::Audio::eMaterialHardness(); }},
    {"Sk8::Audio::eMaterialNicotineType", []() { return new Sk8::Audio::eMaterialNicotineType(); }},
    {"Sk8::Audio::eNotifyType", []() { return new Sk8::Audio::eNotifyType(); }},
    {"Sk8::Audio::eOLMaterial", []() { return new Sk8::Audio::eOLMaterial(); }},
    {"Sk8::Audio::eParticleEffectSetTypes", []() { return new Sk8::Audio::eParticleEffectSetTypes(); }},
    {"Sk8::Audio::ePlayListMode", []() { return new Sk8::Audio::ePlayListMode(); }},
    {"Sk8::Audio::ePSMaterial", []() { return new Sk8::Audio::ePSMaterial(); }},
    {"Sk8::Audio::eSeamType", []() { return new Sk8::Audio::eSeamType(); }},
    {"Sk8::Audio::eShoeType", []() { return new Sk8::Audio::eShoeType(); }},
    {"Sk8::Audio::eSpeechSongID", []() { return new Sk8::Audio::eSpeechSongID(); }},
    {"Sk8::Audio::eSurfacePatternStyle", []() { return new Sk8::Audio::eSurfacePatternStyle(); }},
    {"Sk8::Audio::eSurfaceTypes", []() { return new Sk8::Audio::eSurfaceTypes(); }},
    {"Sk8::Audio::eTerrainTypes", []() { return new Sk8::Audio::eTerrainTypes(); }},
    {"Sk8::Audio::eTransitionType", []() { return new Sk8::Audio::eTransitionType(); }},
    {"Sk8::Audio::eVolumeColor", []() { return new Sk8::Audio::eVolumeColor(); }},
    {"Sk8::Audio::eVolumeFalloffType", []() { return new Sk8::Audio::eVolumeFalloffType(); }},
    {"Sk8::Audio::eVolumeType", []() { return new Sk8::Audio::eVolumeType(); }},
    {"Sk8::Audio::IPodSongInfo", []() { return new Sk8::Audio::IPodSongInfo(); }},
    {"Sk8::Audio::IPodSpeechIDs", []() { return new Sk8::Audio::IPodSpeechIDs(); }},
    {"Sk8::Audio::LWSpeechRefSpec", []() { return new Sk8::Audio::LWSpeechRefSpec(); }},
    {"Sk8::Audio::MCSpeechRefSpec", []() { return new Sk8::Audio::MCSpeechRefSpec(); }},
    {"Sk8::Audio::MusicTweaks", []() { return new Sk8::Audio::MusicTweaks(); }},
    {"Sk8::Audio::PlayListHistory", []() { return new Sk8::Audio::PlayListHistory(); }},
    {"Sk8::Audio::Splices::tCollisionSpliceAttribute", []() { return new Sk8::Audio::Splices::tCollisionSpliceAttribute(); }},
    {"Sk8::Audio::Splices::tMetalSpliceAttribute", []() { return new Sk8::Audio::Splices::tMetalSpliceAttribute(); }},
    {"Sk8::Audio::tANNotFollow", []() { return new Sk8::Audio::tANNotFollow(); }},
    {"Sk8::Audio::tAudioReflectedSurfaces", []() { return new Sk8::Audio::tAudioReflectedSurfaces(); }},
    {"Sk8::Audio::tCMNotFollow", []() { return new Sk8::Audio::tCMNotFollow(); }},
    {"Sk8::Audio::tHOMPriority", []() { return new Sk8::Audio::tHOMPriority(); }},
    {"Sk8::Audio::tLWNotFollow", []() { return new Sk8::Audio::tLWNotFollow(); }},
    {"Sk8::Audio::tMCNotFollow", []() { return new Sk8::Audio::tMCNotFollow(); }},
    {"Sk8::Audio::tSpeechTuning", []() { return new Sk8::Audio::tSpeechTuning(); }},
    {"Sk8::AudioSurfaceMap", []() { return new Sk8::AudioSurfaceMap(); }},
    {"SPCH0Type_IP_cls", []() { return new SPCH0Type_IP_cls(); }},
    {"SPCH0Type_IP_ID", []() { return new SPCH0Type_IP_ID(); }},
    {"SPCH0Type_LW_cls", []() { return new SPCH0Type_LW_cls(); }},
    {"SPCH0Type_Pro_cls", []() { return new SPCH0Type_Pro_cls(); }},
    {"SPCH0Type_Pro_ID", []() { return new SPCH0Type_Pro_ID(); }},
    {"SPCH1Type_CharID", []() { return new SPCH1Type_CharID(); }},
    {"SPCH1Type_CharType", []() { return new SPCH1Type_CharType(); }},
    {"SPCH1Type_cls", []() { return new SPCH1Type_cls(); }},
    {"SPCH2Type_LW_Gender", []() { return new SPCH2Type_LW_Gender(); }},
    {"SPCH3Type_char_ID_Ann", []() { return new SPCH3Type_char_ID_Ann(); }},
    {"SPCH3Type_ip_id_Ann", []() { return new SPCH3Type_ip_id_Ann(); }},
    {"SPCH3Type_pro_id_ANN", []() { return new SPCH3Type_pro_id_ANN(); }},
    {"SPCHType_0_EventID", []() { return new SPCHType_0_EventID(); }},
    {"SPCHType_1_EventID", []() { return new SPCHType_1_EventID(); }},
    {"SPCHType_2_EventID", []() { return new SPCHType_2_EventID(); }},
    {"SPCHType_3_EventID", []() { return new SPCHType_3_EventID(); }},
    {"Sk8::BE::ObjectiveType", []() { return new Sk8::BE::ObjectiveType(); }},
    {"Iris::AnchorID", []() { return new Iris::AnchorID(); }},
    {"Iris::BlendTypeID", []() { return new Iris::BlendTypeID(); }},
    {"Iris::CollisionHint", []() { return new Iris::CollisionHint(); }},
    {"Iris::CompassNorthID", []() { return new Iris::CompassNorthID(); }},
    {"Iris::ShotTypeID", []() { return new Iris::ShotTypeID(); }},
    {"Iris::TransitionTimeType", []() { return new Iris::TransitionTimeType(); }},
    {"Sk8::Camera::eChallengeCameraOverride", []() { return new Sk8::Camera::eChallengeCameraOverride(); }},
    {"Sk8::Challenge::eChallengeAssetLoadType", []() { return new Sk8::Challenge::eChallengeAssetLoadType(); }},
    {"Sk8::Challenge::tAttributeLink", []() { return new Sk8::Challenge::tAttributeLink(); }},
    {"Sk8::Challenge::tRequiredChallengeHull", []() { return new Sk8::Challenge::tRequiredChallengeHull(); }},
    {"Sk8::Challenge::eChallengePresentationEventType", []() { return new Sk8::Challenge::eChallengePresentationEventType(); }},
    {"Sk8::Challenge::tChallengePresentationEvent", []() { return new Sk8::Challenge::tChallengePresentationEvent(); }},
    {"ChallengePrereq::eChallengeLevel", []() { return new ChallengePrereq::eChallengeLevel(); }},
    {"ChallengePrereq::eChallengePath", []() { return new ChallengePrereq::eChallengePath(); }},
    {"Sk8::AIPath::EPathIDPathType", []() { return new Sk8::AIPath::EPathIDPathType(); }},
    {"Sk8::Audio::eSk8Spch_PLAN_B", []() { return new Sk8::Audio::eSk8Spch_PLAN_B(); }},
    {"Sk8::Audio::eSk8Spch_Trick", []() { return new Sk8::Audio::eSk8Spch_Trick(); }},
    {"Sk8::Audio::eSk8Spch_TrickTwo", []() { return new Sk8::Audio::eSk8Spch_TrickTwo(); }},
    {"Sk8::BE::eMapIconType", []() { return new Sk8::BE::eMapIconType(); }},
    {"Sk8::Challenge::eChallengeTypes", []() { return new Sk8::Challenge::eChallengeTypes(); }},
    {"Sk8::Challenge::eGlobalType", []() { return new Sk8::Challenge::eGlobalType(); }},
    {"Sk8::Challenge::eRaceGateAudio", []() { return new Sk8::Challenge::eRaceGateAudio(); }},
    {"Sk8::Challenge::eRaceMusicProgress", []() { return new Sk8::Challenge::eRaceMusicProgress(); }},
    {"Sk8::Challenge::eRaceType", []() { return new Sk8::Challenge::eRaceType(); }},
    {"Sk8::Challenge::tChallengeIconDefinition", []() { return new Sk8::Challenge::tChallengeIconDefinition(); }},
    {"Sk8::Challenge::tFollowTheLeaderWarningInfo", []() { return new Sk8::Challenge::tFollowTheLeaderWarningInfo(); }},
    {"Sk8::Challenge::tRaceBranchDefinition", []() { return new Sk8::Challenge::tRaceBranchDefinition(); }},
    {"Sk8::Challenge::tRaceGateDefinition", []() { return new Sk8::Challenge::tRaceGateDefinition(); }},
    {"Sk8::Challenge::tRaceGroupDefinition", []() { return new Sk8::Challenge::tRaceGroupDefinition(); }},
    {"Sk8::Challenge::tRaceHeatDefinition", []() { return new Sk8::Challenge::tRaceHeatDefinition(); }},
    {"Sk8::Challenge::tRaceLegDefinition", []() { return new Sk8::Challenge::tRaceLegDefinition(); }},
    {"Sk8::Challenge::tRaceMusicPaceDefinition", []() { return new Sk8::Challenge::tRaceMusicPaceDefinition(); }},
    {"Sk8::Challenge::tSpectatorSpawnInfo", []() { return new Sk8::Challenge::tSpectatorSpawnInfo(); }},
    {"Sk8::Challenge::tTrickSequenceInfo", []() { return new Sk8::Challenge::tTrickSequenceInfo(); }},
    {"Sk8::Challenge::tTrickTypeBonus", []() { return new Sk8::Challenge::tTrickTypeBonus(); }},
    {"Sk8::Challenge::tUnlockableInstanceID", []() { return new Sk8::Challenge::tUnlockableInstanceID(); }},
    {"Sk8::Challenge::tWaypointInstanceID", []() { return new Sk8::Challenge::tWaypointInstanceID(); }},
    {"tLuaScript", []() { return new tLuaScript(); }},
    {"xcore::tRect", []() { return new xcore::tRect(); }},
    {"Sk8::Challenge::eContestType", []() { return new Sk8::Challenge::eContestType(); }},
    {"Sk8::Challenge::eRunType", []() { return new Sk8::Challenge::eRunType(); }},
    {"Sk8::Challenge::tContestCalloutDefinition", []() { return new Sk8::Challenge::tContestCalloutDefinition(); }},
    {"Sk8::Challenge::tContestRoundDefinition", []() { return new Sk8::Challenge::tContestRoundDefinition(); }},
    {"Sk8::Challenge::tOneUpObjectSelectorDefinition", []() { return new Sk8::Challenge::tOneUpObjectSelectorDefinition(); }},
    {"Sk8::Challenge::tDynamicHullMapping", []() { return new Sk8::Challenge::tDynamicHullMapping(); }},
    {"Sk8::Challenge::tDynamicHullUnlock", []() { return new Sk8::Challenge::tDynamicHullUnlock(); }},
    {"Sk8::FE::eNewsIconTypes", []() { return new Sk8::FE::eNewsIconTypes(); }},
    {"Sk8::FE::eSponsorScreenStates", []() { return new Sk8::FE::eSponsorScreenStates(); }},
    {"Sk8::FE::eTrickSlotConnector", []() { return new Sk8::FE::eTrickSlotConnector(); }},
    {"Sk8::FE::tFEScreenShot", []() { return new Sk8::FE::tFEScreenShot(); }},
    {"Sk8::FE::tTrickGuideInputSlot", []() { return new Sk8::FE::tTrickGuideInputSlot(); }},
    {"Sk8::CAC::COLOURIZED_SLOT", []() { return new Sk8::CAC::COLOURIZED_SLOT(); }},
    {"Sk8::CAC::ColourPreset", []() { return new Sk8::CAC::ColourPreset(); }},
    {"Sk8::CAC::eCaCState", []() { return new Sk8::CAC::eCaCState(); }},
    {"Sk8::CAC::MORPH_ZONES", []() { return new Sk8::CAC::MORPH_ZONES(); }},
    {"Sk8::CAC::MorphPreset", []() { return new Sk8::CAC::MorphPreset(); }},
    {"Sk8::FE::TipsLoaderHint", []() { return new Sk8::FE::TipsLoaderHint(); }},
    {"Sk8::PointGraphData16", []() { return new Sk8::PointGraphData16(); }},
    {"Sk8::PointGraphData4", []() { return new Sk8::PointGraphData4(); }},
    {"Sk8::PointGraphData8", []() { return new Sk8::PointGraphData8(); }},
    {"Sk8::PointNegGraphData16", []() { return new Sk8::PointNegGraphData16(); }},
    {"Sk8::PointNegGraphData4", []() { return new Sk8::PointNegGraphData4(); }},
    {"Sk8::PointNegGraphData8", []() { return new Sk8::PointNegGraphData8(); }},
    {"Sk8::HUD::eHUDComponent", []() { return new Sk8::HUD::eHUDComponent(); }},
    {"Sk8::HUD::eSk8HUDTutorialInstructions", []() { return new Sk8::HUD::eSk8HUDTutorialInstructions(); }},
    {"Sk8::Input::eActorInputRestriction", []() { return new Sk8::Input::eActorInputRestriction(); }},
    {"Sk8::Input::tRumbleInfo", []() { return new Sk8::Input::tRumbleInfo(); }},
    {"Sk8::Challenge::ePosition_Generator_Type", []() { return new Sk8::Challenge::ePosition_Generator_Type(); }},
    {"Sk8::Challenge::tLargeCrowd", []() { return new Sk8::Challenge::tLargeCrowd(); }},
    {"Sk8::Challenge::tTriggerVolumeInstanceID", []() { return new Sk8::Challenge::tTriggerVolumeInstanceID(); }},
    {"Sk8::LivingWorld::eConversationLength", []() { return new Sk8::LivingWorld::eConversationLength(); }},
    {"Sk8::LivingWorld::eConversationTopic", []() { return new Sk8::LivingWorld::eConversationTopic(); }},
    {"Sk8::LivingWorld::eHandPropActions", []() { return new Sk8::LivingWorld::eHandPropActions(); }},
    {"Sk8::LivingWorld::eLivingWorldModelCategory", []() { return new Sk8::LivingWorld::eLivingWorldModelCategory(); }},
    {"Sk8::LivingWorld::eMoodEntityType", []() { return new Sk8::LivingWorld::eMoodEntityType(); }},
    {"Sk8::LivingWorld::eMoodLevel", []() { return new Sk8::LivingWorld::eMoodLevel(); }},
    {"Sk8::LivingWorld::eMoodPrerequisite", []() { return new Sk8::LivingWorld::eMoodPrerequisite(); }},
    {"Sk8::LivingWorld::eMoodPrerequisiteOperator", []() { return new Sk8::LivingWorld::eMoodPrerequisiteOperator(); }},
    {"Sk8::LivingWorld::eMoodResult", []() { return new Sk8::LivingWorld::eMoodResult(); }},
    {"Sk8::LivingWorld::eObjectPersistencePriority", []() { return new Sk8::LivingWorld::eObjectPersistencePriority(); }},
    {"Sk8::LivingWorld::ePedestrianBoneAdjust", []() { return new Sk8::LivingWorld::ePedestrianBoneAdjust(); }},
    {"Sk8::LivingWorld::tLocomotionSpeedIntentMapping", []() { return new Sk8::LivingWorld::tLocomotionSpeedIntentMapping(); }},
    {"Sk8::LivingWorld::tLWBodySpaceGrabSpline", []() { return new Sk8::LivingWorld::tLWBodySpaceGrabSpline(); }},
    {"Sk8::LivingWorld::tLWBodySpaceGrindSpline", []() { return new Sk8::LivingWorld::tLWBodySpaceGrindSpline(); }},
    {"Sk8::LivingWorld::tLWCensusCircle", []() { return new Sk8::LivingWorld::tLWCensusCircle(); }},
    {"Sk8::LivingWorld::tLWCensusCircleInfo", []() { return new Sk8::LivingWorld::tLWCensusCircleInfo(); }},
    {"Sk8::LivingWorld::tLWCensusEntry", []() { return new Sk8::LivingWorld::tLWCensusEntry(); }},
    {"Sk8::LivingWorld::tLWCollisionCapsuleParams", []() { return new Sk8::LivingWorld::tLWCollisionCapsuleParams(); }},
    {"Sk8::LivingWorld::tLWDynamicObjectCharacteristicMapping", []() { return new Sk8::LivingWorld::tLWDynamicObjectCharacteristicMapping(); }},
    {"Sk8::LivingWorld::tLWGroupEntry", []() { return new Sk8::LivingWorld::tLWGroupEntry(); }},
    {"Sk8::LivingWorld::tLWHandPropUsage", []() { return new Sk8::LivingWorld::tLWHandPropUsage(); }},
    {"Sk8::LivingWorld::tLWHandPropUsageCharacteristics", []() { return new Sk8::LivingWorld::tLWHandPropUsageCharacteristics(); }},
    {"Sk8::LivingWorld::tLWMoodEventPrerequisites", []() { return new Sk8::LivingWorld::tLWMoodEventPrerequisites(); }},
    {"Sk8::LivingWorld::tLWOpacityDistance", []() { return new Sk8::LivingWorld::tLWOpacityDistance(); }},
    {"Sk8::LivingWorld::tLWOpacityDistanceInfo", []() { return new Sk8::LivingWorld::tLWOpacityDistanceInfo(); }},
    {"Sk8::LivingWorld::tLWRefspecPriorityPair", []() { return new Sk8::LivingWorld::tLWRefspecPriorityPair(); }},
    {"Sk8::LivingWorld::tLWRefspecProbabilityPair", []() { return new Sk8::LivingWorld::tLWRefspecProbabilityPair(); }},
    {"Sk8::LivingWorld::tPedestrianBoneAdjustMap", []() { return new Sk8::LivingWorld::tPedestrianBoneAdjustMap(); }},
    {"Sk8::LivingWorld::tRecoveryCollisionIntervals", []() { return new Sk8::LivingWorld::tRecoveryCollisionIntervals(); }},
    {"LuaState::tCompiledLua", []() { return new LuaState::tCompiledLua(); }},
    {"LuaState::tLuaBlob", []() { return new LuaState::tLuaBlob(); }},
    {"Sk8::FE::tMapInfo", []() { return new Sk8::FE::tMapInfo(); }},
    {"Character::eHatType", []() { return new Character::eHatType(); }},
    {"Sk8::Challenge::eObjectiveFlow", []() { return new Sk8::Challenge::eObjectiveFlow(); }},
    {"Sk8::Challenge::eObjectiveStatus", []() { return new Sk8::Challenge::eObjectiveStatus(); }},
    {"Sk8::Challenge::eObjectiveTriggers", []() { return new Sk8::Challenge::eObjectiveTriggers(); }},
    {"Sk8::Challenge::eTriggerActivationMode", []() { return new Sk8::Challenge::eTriggerActivationMode(); }},
    {"Sk8::Challenge::eVisualIndicatorMode", []() { return new Sk8::Challenge::eVisualIndicatorMode(); }},
    {"Sk8::Challenge::tHighlightDefinition", []() { return new Sk8::Challenge::tHighlightDefinition(); }},
    {"Sk8::Challenge::tObjectiveDefinition", []() { return new Sk8::Challenge::tObjectiveDefinition(); }},
    {"Sk8::Challenge::tObjectiveFlow", []() { return new Sk8::Challenge::tObjectiveFlow(); }},
    {"Sk8::Challenge::tObjectiveStatusField", []() { return new Sk8::Challenge::tObjectiveStatusField(); }},
    {"Sk8::Challenge::tObjectiveTriggers", []() { return new Sk8::Challenge::tObjectiveTriggers(); }},
    {"Sk8::Challenge::tObjectiveTriggersField", []() { return new Sk8::Challenge::tObjectiveTriggersField(); }},
    {"Sk8::tNISLocationOverride", []() { return new Sk8::tNISLocationOverride(); }},
    {"Sk8::tNISPlaybackDefinition", []() { return new Sk8::tNISPlaybackDefinition(); }},
    {"Observatory::eObservatoryIndividualChallengeState", []() { return new Observatory::eObservatoryIndividualChallengeState(); }},
    {"Observatory::eObservatoryTriggerType", []() { return new Observatory::eObservatoryTriggerType(); }},
    {"Observatory::tObservatoryProgressionReward", []() { return new Observatory::tObservatoryProgressionReward(); }},
    {"Observatory::tObservatoryProgressionRewardReturns", []() { return new Observatory::tObservatoryProgressionRewardReturns(); }},
    {"Observatory::tObservatoryTrigger", []() { return new Observatory::tObservatoryTrigger(); }},
    {"Sk8::ParticleSystem::eParticleEffectTypeId", []() { return new Sk8::ParticleSystem::eParticleEffectTypeId(); }},
    {"Sk8::Physics::DeckForceTuning", []() { return new Sk8::Physics::DeckForceTuning(); }},
    {"Sk8::Physics::PhysicsControllerData", []() { return new Sk8::Physics::PhysicsControllerData(); }},
    {"Sk8::Physics::SkeletonBoneData", []() { return new Sk8::Physics::SkeletonBoneData(); }},
    {"Sk8::Physics::SkeletonDriveData", []() { return new Sk8::Physics::SkeletonDriveData(); }},
    {"Sk8::Physics::SkeletonJointData", []() { return new Sk8::Physics::SkeletonJointData(); }},
    {"Sk8::Physics::SkeletonJointData::JointIndex", []() { return new Sk8::Physics::SkeletonJointData::JointIndex(); }},
    {"Sk8::BE::eUNLOCK_CATEGORY", []() { return new Sk8::BE::eUNLOCK_CATEGORY(); }},
    {"Sk8::Progression::TeamBrandStampType", []() { return new Sk8::Progression::TeamBrandStampType(); }},
    {"Sk8::Particle::tSkaterParticleEffect", []() { return new Sk8::Particle::tSkaterParticleEffect(); }},
    {"Sk8::Render::cDirectionalLightData", []() { return new Sk8::Render::cDirectionalLightData(); }},
    {"Sk8::Render::cSimpleLightData", []() { return new Sk8::Render::cSimpleLightData(); }},
    {"Sk8::Render::eLightControl", []() { return new Sk8::Render::eLightControl(); }},
    {"Sk8::Render::eLightSpace", []() { return new Sk8::Render::eLightSpace(); }},
    {"Sk8::Render::PhotoEffectFontAlign", []() { return new Sk8::Render::PhotoEffectFontAlign(); }},
    {"Sk8::Render::PhotoEffectFontType", []() { return new Sk8::Render::PhotoEffectFontType(); }},
    {"Sk8::Render::PhotoEffectLayer", []() { return new Sk8::Render::PhotoEffectLayer(); }},
    {"Sk8::Render::PhotoEffectOperation", []() { return new Sk8::Render::PhotoEffectOperation(); }},
    {"Sk8::Render::tStringCouple", []() { return new Sk8::Render::tStringCouple(); }},
    {"Sk8::Render::tTechniqueData", []() { return new Sk8::Render::tTechniqueData(); }},
    {"Sk8::Render::tViewportData", []() { return new Sk8::Render::tViewportData(); }},
    {"Sk8::Render::tVTShaderData", []() { return new Sk8::Render::tVTShaderData(); }},
    {"Sk8::Scene::eNISChallengeNotification", []() { return new Sk8::Scene::eNISChallengeNotification(); }},
    {"Sk8::Scene::eSceneType", []() { return new Sk8::Scene::eSceneType(); }},
    {"Sk8::BE::eSk8ControllerGesture", []() { return new Sk8::BE::eSk8ControllerGesture(); }},
    {"Sk8::Physics::SkeletonDataBase", []() { return new Sk8::Physics::SkeletonDataBase(); }},
    {"Sk8::Score::EEntityDMOCategory", []() { return new Sk8::Score::EEntityDMOCategory(); }},
    {"Sk8::Score::EEntityGroup", []() { return new Sk8::Score::EEntityGroup(); }},
    {"Sk8::Score::EEntityType", []() { return new Sk8::Score::EEntityType(); }},
    {"Sk8::Score::EMovableObjectType", []() { return new Sk8::Score::EMovableObjectType(); }},
    {"Sk8::Score::EScorableID", []() { return new Sk8::Score::EScorableID(); }},
    {"Sk8::Score::EScorableIDCategory", []() { return new Sk8::Score::EScorableIDCategory(); }},
    {"Sk8::Score::EScoreThreshold", []() { return new Sk8::Score::EScoreThreshold(); }},
    {"Sk8::Score::EScoreThresholdType", []() { return new Sk8::Score::EScoreThresholdType(); }},
    {"Sk8::Score::ESkaterIntent", []() { return new Sk8::Score::ESkaterIntent(); }},
    {"Sk8::Score::ETrickDifficulty", []() { return new Sk8::Score::ETrickDifficulty(); }},
    {"Sk8::Score::ETrickInput", []() { return new Sk8::Score::ETrickInput(); }},
    {"Sk8::Score::ETrickMetricType", []() { return new Sk8::Score::ETrickMetricType(); }},
    {"Sk8::Score::ETrickType", []() { return new Sk8::Score::ETrickType(); }},
    {"Sk8::Score::HoM::BodyTweakAttribData", []() { return new Sk8::Score::HoM::BodyTweakAttribData(); }},
    {"Sk8::Score::HoM::BoneAttribData", []() { return new Sk8::Score::HoM::BoneAttribData(); }},
    {"Sk8::Score::HoM::BoneConnectionData", []() { return new Sk8::Score::HoM::BoneConnectionData(); }},
    {"Sk8::Score::HoM::BoneDamageLevel", []() { return new Sk8::Score::HoM::BoneDamageLevel(); }},
    {"Sk8::Score::HoM::BoneSetAttribData", []() { return new Sk8::Score::HoM::BoneSetAttribData(); }},
    {"Sk8::Score::HoM::EBoneIndex", []() { return new Sk8::Score::HoM::EBoneIndex(); }},
    {"Sk8::Score::HoM::EConnectionDirection", []() { return new Sk8::Score::HoM::EConnectionDirection(); }},
    {"Sk8::Score::HoM::EDamageLevel", []() { return new Sk8::Score::HoM::EDamageLevel(); }},
    {"Sk8::Score::HoM::EntityCollisionAttribData", []() { return new Sk8::Score::HoM::EntityCollisionAttribData(); }},
    {"Sk8::Score::HoM::EntityDMOCollisionAttribData", []() { return new Sk8::Score::HoM::EntityDMOCollisionAttribData(); }},
    {"Sk8::Score::HoM::EWipeoutBodyTweakIndex", []() { return new Sk8::Score::HoM::EWipeoutBodyTweakIndex(); }},
    {"Sk8::Score::ScoreThresholdData", []() { return new Sk8::Score::ScoreThresholdData(); }},
    {"Sk8::Score::ScoreThresholdDataSet", []() { return new Sk8::Score::ScoreThresholdDataSet(); }},
    {"Sk8::Score::SkaterIntentTuple", []() { return new Sk8::Score::SkaterIntentTuple(); }},
    {"Sk8::Score::TrickMetricPoints", []() { return new Sk8::Score::TrickMetricPoints(); }},
    {"Sk8::Score::TrickMetricTypes", []() { return new Sk8::Score::TrickMetricTypes(); }},
    {"Sk8::ShaderSystem::tSamplerAnisotropy", []() { return new Sk8::ShaderSystem::tSamplerAnisotropy(); }},
    {"Sk8::ShaderSystem::tSamplerFilter", []() { return new Sk8::ShaderSystem::tSamplerFilter(); }},
    {"Sk8::ShaderSystem::tSamplerState", []() { return new Sk8::ShaderSystem::tSamplerState(); }},
    {"Sk8::AI::ProfileTrickEntry", []() { return new Sk8::AI::ProfileTrickEntry(); }},
    {"Sk8::Challenge::eChallengeEntityOnStartType", []() { return new Sk8::Challenge::eChallengeEntityOnStartType(); }},
    {"Sk8::Challenge::eDMOResetType", []() { return new Sk8::Challenge::eDMOResetType(); }},
    {"Sk8::Challenge::eFreeskateAccumulationType", []() { return new Sk8::Challenge::eFreeskateAccumulationType(); }},
    {"Sk8::Challenge::eFreeskateSurvivalType", []() { return new Sk8::Challenge::eFreeskateSurvivalType(); }},
    {"Sk8::Challenge::eFreeskateType", []() { return new Sk8::Challenge::eFreeskateType(); }},
    {"Sk8::Challenge::eLivingWorldManagement", []() { return new Sk8::Challenge::eLivingWorldManagement(); }},
    {"Sk8::Challenge::eLivingWorldManagementOperations", []() { return new Sk8::Challenge::eLivingWorldManagementOperations(); }},
    {"Sk8::Challenge::ePresentationIgnoreEventFlags", []() { return new Sk8::Challenge::ePresentationIgnoreEventFlags(); }},
    {"Sk8::Challenge::eProChallengePros", []() { return new Sk8::Challenge::eProChallengePros(); }},
    {"Sk8::Challenge::tCompetitorInfo", []() { return new Sk8::Challenge::tCompetitorInfo(); }},
    {"Sk8::Challenge::tDMOResetInfo", []() { return new Sk8::Challenge::tDMOResetInfo(); }},
    {"Sk8::Challenge::tGlobalSpawnCharacterInfo", []() { return new Sk8::Challenge::tGlobalSpawnCharacterInfo(); }},
    {"Sk8::Challenge::tLivingWorldManagement", []() { return new Sk8::Challenge::tLivingWorldManagement(); }},
    {"Sk8::Challenge::tLivingWorldManagementOperation", []() { return new Sk8::Challenge::tLivingWorldManagementOperation(); }},
    {"Sk8::Challenge::tRoundPaths", []() { return new Sk8::Challenge::tRoundPaths(); }},
    {"Sk8::Challenge::tSpawnLivingWorldOnWaypointInfo", []() { return new Sk8::Challenge::tSpawnLivingWorldOnWaypointInfo(); }},
    {"Sk8::Physics::ePhysicsMode", []() { return new Sk8::Physics::ePhysicsMode(); }},
    {"Sk8::Audio::eSk8Spch_Own_Spots", []() { return new Sk8::Audio::eSk8Spch_Own_Spots(); }},
    {"Sk8::Challenge::tOwnSpotSpeechInfo", []() { return new Sk8::Challenge::tOwnSpotSpeechInfo(); }},
    {"Sk8::Challenge::tSpeechInfo", []() { return new Sk8::Challenge::tSpeechInfo(); }},
    {"CellPhone_Rings", []() { return new CellPhone_Rings(); }},
    {"sk82_cloth_foley", []() { return new sk82_cloth_foley(); }},
    {"Sk82_Whsh_Bys", []() { return new Sk82_Whsh_Bys(); }},
    {"DLC_Cartoon_Collisions", []() { return new DLC_Cartoon_Collisions(); }},
    {"HOM_Set_1", []() { return new HOM_Set_1(); }},
    {"Skate_Collisions", []() { return new Skate_Collisions(); }},
    {"Skate_Metal", []() { return new Skate_Metal(); }},
    {"sk8_menu", []() { return new sk8_menu(); }},
    {"Sk8::UCC::eTerrainVIType", []() { return new Sk8::UCC::eTerrainVIType(); }},
    {"Sk8::UCC::tMergePlane", []() { return new Sk8::UCC::tMergePlane(); }},
    {"Sk8::BE::tUnlock", []() { return new Sk8::BE::tUnlock(); }},
    {"Sk8::BE::tUnlockableItemInfo", []() { return new Sk8::BE::tUnlockableItemInfo(); }},
    {"Math::Vector4", []() { return new Math::Vector4(); }},
    {"Math::Vector3", []() { return new Math::Vector3(); }},
    {"Math::Vector2", []() { return new Math::Vector2(); }},
    {"Sk8::Challenge::eChallengeIndicatorType", []() { return new Sk8::Challenge::eChallengeIndicatorType(); }},
    {"Sk8::Challenge::eSk8ChallengeIndicators", []() { return new Sk8::Challenge::eSk8ChallengeIndicators(); }},
    {"Sk8::Challenge::tKilledItEffect", []() { return new Sk8::Challenge::tKilledItEffect(); }},
    {"Sk8::Challenge::tLocationID", []() { return new Sk8::Challenge::tLocationID(); }},
    {"Sk8::Challenge::tSplineBankObject", []() { return new Sk8::Challenge::tSplineBankObject(); }},
    {"Sk8::Challenge::tSplineInstanceID", []() { return new Sk8::Challenge::tSplineInstanceID(); }},
    {"Sk8::Challenge::tVisualEditorData", []() { return new Sk8::Challenge::tVisualEditorData(); }},
    {"Sk8::Challenge::tVisualIndicatorLocation", []() { return new Sk8::Challenge::tVisualIndicatorLocation(); }},
    {"Sk8::Challenge::tVisualIndicatorVolume", []() { return new Sk8::Challenge::tVisualIndicatorVolume(); }},
    {"WorldPainter::eLayerID", []() { return new WorldPainter::eLayerID(); }},
    {"Attrib::Gen::ClassRefSpec", []() { return new Attrib::Gen::ClassRefSpec(); }} // string has additionally some things
};
