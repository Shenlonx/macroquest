namespace MQ2Globals
{
/* BENCHMARK HANDLES */

EQLIB_API DWORD bmWriteChatColor;
EQLIB_API DWORD bmPluginsIncomingChat;
EQLIB_API DWORD bmPluginsPulse;
EQLIB_API DWORD bmPluginsOnZoned;
EQLIB_API DWORD bmPluginsCleanUI;
EQLIB_API DWORD bmPluginsReloadUI;
EQLIB_API DWORD bmPluginsDrawHUD;
EQLIB_API DWORD bmPluginsSetGameState;
EQLIB_API DWORD bmParseMacroParameter;
/*
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
EQLIB_API DWORD bm;
/**/

/* OTHER */

EQLIB_API CHAR gszVersion[32];

EQLIB_API DWORD gGameState;

EQLIB_VAR BOOL g_Loaded;
EQLIB_VAR DWORD ThreadID;

EQLIB_VAR HMODULE ghModule;
EQLIB_VAR HINSTANCE ghInstance;
EQLIB_VAR BOOL gbEQWLoaded;
EQLIB_VAR PHOTKEY pHotkey;
EQLIB_VAR BOOL gbUnload;
EQLIB_VAR DWORD gpHook;
EQLIB_VAR PMACROBLOCK gMacroBlock;
EQLIB_VAR PMACROSTACK gMacroStack;
EQLIB_VAR PEVENTSTACK gEventStack;
EQLIB_VAR PMACROBLOCK gEventFunc[NUM_EVENTS];
EQLIB_VAR UCHAR gLastFind;
EQLIB_VAR BOOL gInClick;
EQLIB_VAR DOUBLE gZFilter;
EQLIB_VAR DOUBLE gFaceAngle;
EQLIB_VAR DOUBLE gLookAngle;
EQLIB_VAR PVARSTRINGS gMacroStr;
EQLIB_VAR PVARARRAYS gArray;
EQLIB_VAR CHAR gszEQPath[MAX_STRING];
EQLIB_VAR CHAR gszMacroPath[MAX_STRING];
EQLIB_VAR CHAR gszLogPath[MAX_STRING];
EQLIB_VAR CHAR gszINIPath[MAX_STRING];
EQLIB_VAR CHAR gszINIFilename[MAX_STRING];
EQLIB_VAR CHAR gszItemDB[MAX_STRING];
EQLIB_VAR CHAR gszMacroName[MAX_STRING];
EQLIB_VAR CHAR szLastCommand[MAX_STRING];
EQLIB_VAR DWORD gEventChat;
EQLIB_VAR DWORD gRunning;
EQLIB_VAR BOOL gbMoving;
EQLIB_VAR DWORD gMaxTurbo;

EQLIB_VAR PCHATBUF gDelayedCommands;

EQLIB_VAR BOOL gZoning;
EQLIB_VAR BOOL WereWeZoning;
EQLIB_VAR BOOL gbInDInput;
EQLIB_VAR BOOL gbInDState;
EQLIB_VAR BOOL gbInDAcquire;
EQLIB_VAR BOOL gbInChat;
EQLIB_VAR BOOL gFilterSkillsAll;
EQLIB_VAR BOOL gFilterSkillsIncrease;
EQLIB_VAR BOOL gFilterTarget;
EQLIB_VAR BOOL gFilterDebug;
EQLIB_VAR BOOL gFilterMoney;
EQLIB_VAR BOOL gFilterFood;
EQLIB_VAR DWORD gUseMQChatWnd;
EQLIB_VAR BOOL gFilterMacro;
EQLIB_VAR BOOL gFilterEncumber;
EQLIB_VAR BOOL gFilterCustom;
EQLIB_VAR BOOL gSpewToFile;
EQLIB_VAR BOOL gbDoAutoRun;
EQLIB_VAR BOOL gMQPauseOnChat;
EQLIB_VAR BOOL gKeepKeys;
EQLIB_VAR SWHOFILTER gFilterSWho;

EQLIB_VAR DOUBLE DegToRad;
EQLIB_VAR DOUBLE PI;


EQLIB_VAR PKEYPRESS gKeyStack;
EQLIB_VAR PTIMER gTimer;
EQLIB_VAR LONG gDelay;
EQLIB_VAR PALERTLIST gpAlertList;
EQLIB_VAR BOOL gMacroPause;
EQLIB_VAR SPAWNINFO EnviroTarget;
EQLIB_VAR ACTORINFO EnviroActor;
EQLIB_VAR PGROUNDITEM pGroundTarget;
EQLIB_VAR SPAWNINFO DoorEnviroTarget;
EQLIB_VAR PDOOR pDoorTarget;
EQLIB_VAR PITEMDB gItemDB;
EQLIB_VAR BOOL bRunNextCommand;
EQLIB_VAR BOOL gTurbo;
EQLIB_VAR PDEFINE pDefines;
EQLIB_VAR PEVENTLIST pEventList;
EQLIB_VAR CHAR gLastFindSlot[MAX_STRING];
EQLIB_VAR CHAR gLastError[MAX_STRING];
EQLIB_VAR HWND ghWnd;
EQLIB_VAR PFILTER gpFilters;

EQLIB_VAR BOOL g_bInDXMouse;
EQLIB_VAR PMOUSESPOOF gMouseData;

EQLIB_VAR DIKEYID gDiKeyID[];


EQLIB_VAR DWORD ManaGained;
EQLIB_VAR DWORD HealthGained;

EQLIB_VAR DWORD gGameState;


EQLIB_VAR DWORD EQADDR_CONVERTITEMTAGS;

EQLIB_VAR DWORD EQADDR_MEMCHECK;
EQLIB_VAR DWORD EQADDR_MEMCHECK2;
EQLIB_VAR DWORD EQADDR_MEMCHECKADDR1;
EQLIB_VAR DWORD EQADDR_MEMCHECKADDR2;
EQLIB_VAR DWORD EQADDR_MEMCHECK3;
EQLIB_VAR PCHAR EQADDR_SERVERHOST;
EQLIB_VAR PCHAR EQADDR_SERVERNAME;
EQLIB_VAR DWORD EQADDR_HWND;

EQLIB_VAR PCMDLIST EQADDR_CMDLIST;

EQLIB_VAR PBYTE EQADDR_ATTACK;
EQLIB_VAR PBYTE EQADDR_NOTINCHATMODE;
EQLIB_VAR PCHAR EQADDR_LASTTELL;
EQLIB_VAR PBYTE EQADDR_GROUPCOUNT;
EQLIB_VAR PVOID EQADDR_GWORLD;
EQLIB_VAR DWORD EQADDR_GUILDLIST;
EQLIB_VAR PDWORD EQADDR_DOABILITYLIST;
EQLIB_VAR PBYTE EQADDR_DOABILITYAVAILABLE;

EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD2;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD3;

EQLIB_VAR PMOUSEINFO EQADDR_MOUSE;
EQLIB_VAR PMOUSECLICK EQADDR_MOUSECLICK;

EQLIB_VAR DWORD EQADDR_DIMAIN;
EQLIB_VAR IDirectInputDevice8A **EQADDR_DIKEYBOARD;
EQLIB_VAR IDirectInputDevice8A **EQADDR_DIMOUSE;

EQLIB_VAR DWORD EQADDR_EQLABELS;

EQLIB_VAR BOOL gMouseLeftClickInProgress;
EQLIB_VAR BOOL gMouseRightClickInProgress;
EQLIB_VAR BOOL bDetMouse;

// ***************************************************************************
// String arrays
// ***************************************************************************
EQLIB_VAR PCHAR szHeading[];
EQLIB_VAR PCHAR szHeadingShort[];
EQLIB_VAR PCHAR szSize[];
EQLIB_VAR PCHAR szSpawnType[];
EQLIB_VAR PCHAR szGuildStatus[];
EQLIB_VAR PCHAR szGender[];
EQLIB_VAR PCHAR szDeityTeam[];
EQLIB_VAR PCHAR szLights[];
EQLIB_VAR BYTE LightBrightness[];
EQLIB_VAR PCHAR szSkills[];
EQLIB_VAR PCHAR szCombineTypes[];
EQLIB_VAR PCHAR szItemTypes[];

EQLIB_VAR PCHAR szWornLoc[];


EQLIB_VAR fEQCommand         cmdHelp;
EQLIB_VAR fEQCommand         cmdWho;
EQLIB_VAR fEQCommand         cmdWhoTarget;
EQLIB_VAR fEQCommand         cmdLocation;
EQLIB_VAR fEQCommand         cmdFace;
EQLIB_VAR fEQCommand         cmdTarget;
EQLIB_VAR fEQCommand         cmdCharInfo;
EQLIB_VAR fEQCommand         cmdFilter;
EQLIB_VAR fEQCommand         cmdDoAbility;
EQLIB_VAR fEQCommand         cmdCast;


EQLIB_VAR fEQNewUIINI        NewUIINI;
EQLIB_VAR fEQProcGameEvts    ProcessGameEvents;
EQLIB_VAR fEQSendMessage     send_message;

EQLIB_VAR PCHAR szItemName[];
EQLIB_VAR PCHAR szItemName4xx[];
EQLIB_VAR PCHAR szTheme[]; 
EQLIB_VAR PCHAR szDmgBonusType[];
EQLIB_VAR PCHAR szBaneDmgType[];
EQLIB_VAR PCHAR szAugRestrictions[];

EQLIB_VAR PALIAS pAliases;
EQLIB_VAR PMQCOMMAND pCommands;
EQLIB_VAR PMQPLUGIN pPlugins;
EQLIB_VAR PMQXMLFILE pXMLFiles;

EQLIB_VAR EQPlayer **ppEQP_IDArray;
//#define ppEQP_IDArray (*pppEQP_IDArray)

EQLIB_VAR CEverQuest **ppEverQuest;
#define pEverQuest (*ppEverQuest)
EQLIB_VAR CDisplay **ppDisplay;
#define pDisplay (*ppDisplay)
EQLIB_VAR EQ_PC **ppPCData;
#define pPCData (*ppPCData)
EQLIB_VAR EQ_Character **ppCharData;
#define pCharData (*ppCharData)
EQLIB_VAR EQPlayer **ppCharSpawn;
#define pCharSpawn (*ppCharSpawn)
EQLIB_VAR EQPlayer **ppActiveMerchant;
#define pActiveMerchant (*ppActiveMerchant)
EQLIB_VAR EQPlayer **ppSpawnList;
#define pSpawnList (*ppSpawnList)
EQLIB_VAR EQPlayer **ppSpawnListTail;
#define pSpawnListTail (*ppSpawnListTail)
EQLIB_VAR EQWorldData **ppWorldData;
#define pWorldData (*ppWorldData)
EQLIB_VAR SpellManager **ppSpellMgr;
#define pSpellMgr (*ppSpellMgr)
EQLIB_VAR CInvSlot **ppSelectedItem;
#define pSelectedItem (*ppSelectedItem)
EQLIB_VAR EQPlayer **ppGroup;
#define pGroup (*ppGroup)
EQLIB_VAR EQPlayer **ppTarget;
#define pTarget (*ppTarget)
EQLIB_VAR EqSwitchManager **ppSwitchMgr;
#define pSwitchMgr (*ppSwitchMgr)
EQLIB_VAR EQItemList **ppItemList;
#define pItemList (*ppItemList)
EQLIB_VAR EQZoneInfo *pZoneInfo;

EQLIB_VAR CSidlManager **ppSidlMgr;
#define pSidlMgr (*ppSidlMgr)

EQLIB_VAR DWORD *pScreenX;
#define ScreenX (*pScreenX)
EQLIB_VAR DWORD *pScreenY;
#define ScreenY (*pScreenY)


EQLIB_VAR SPELLFAVORITE *pSpellSets;

/* WINDOW INSTANCES */ 
EQLIB_VAR CContextMenuManager **ppContextMenuManager;
EQLIB_VAR CCursorAttachment **ppCursorAttachment;
EQLIB_VAR CSocialEditWnd **ppSocialEditWnd;
EQLIB_VAR CContainerMgr **ppContainerMgr;
EQLIB_VAR CChatManager **ppChatManager;
EQLIB_VAR CConfirmationDialog **ppConfirmationDialog;
EQLIB_VAR CFacePick **ppFacePick;
EQLIB_VAR CInvSlotMgr **ppInvSlotMgr;
//EQLIB_VAR CPopupWndManager **ppPopupWndManager;
EQLIB_VAR CNoteWnd **ppNoteWnd;
EQLIB_VAR CHelpWnd **ppHelpWnd;
EQLIB_VAR CTipWnd **ppTipWnd;
EQLIB_VAR CTipWnd **ppTipWnd;
EQLIB_VAR CBookWnd **ppBookWnd;
EQLIB_VAR CFriendsWnd **ppFriendsWnd;
EQLIB_VAR CMusicPlayerWnd **ppMusicPlayerWnd;
EQLIB_VAR CAlarmWnd **ppAlarmWnd;
EQLIB_VAR CLoadskinWnd **ppLoadskinWnd;
EQLIB_VAR CPetInfoWnd **ppPetInfoWnd;
EQLIB_VAR CTrainWnd **ppTrainWnd;
EQLIB_VAR CSkillsWnd **ppSkillsWnd;
EQLIB_VAR CSkillsSelectWnd **ppSkillsSelectWnd;
//EQLIB_VAR CCombatSkillSelectWnd **ppCombatSkillSelectWnd;
EQLIB_VAR CAAWnd **ppAAWnd;
EQLIB_VAR CGroupWnd **ppGroupWnd;
//EQLIB_VAR CSystemInfoDialogBox **ppSystemInfoDialogBox;
EQLIB_VAR CGroupSearchWnd **ppGroupSearchWnd;
EQLIB_VAR CGroupSearchFiltersWnd **ppGroupSearchFiltersWnd;
EQLIB_VAR CRaidWnd **ppRaidWnd;
EQLIB_VAR CRaidOptionsWnd **ppRaidOptionsWnd;
EQLIB_VAR CBreathWnd **ppBreathWnd;
EQLIB_VAR CMapToolbarWnd **ppMapToolbarWnd;
EQLIB_VAR CMapViewWnd **ppMapViewWnd;
EQLIB_VAR CEditLabelWnd **ppEditLabelWnd;
EQLIB_VAR COptionsWnd **ppOptionsWnd;
EQLIB_VAR CBuffWindow **ppBuffWindow;
EQLIB_VAR CBuffWindow **ppBuffWindow;
EQLIB_VAR CTargetWnd **ppTargetWnd;
EQLIB_VAR CColorPickerWnd **ppColorPickerWnd;
EQLIB_VAR CHotButtonWnd **ppHotButtonWnd;
EQLIB_VAR CPlayerWnd **ppPlayerWnd;
EQLIB_VAR CCastingWnd **ppCastingWnd;
EQLIB_VAR CCastSpellWnd **ppCastSpellWnd;
EQLIB_VAR CSpellBookWnd **ppSpellBookWnd;
EQLIB_VAR CInventoryWnd **ppInventoryWnd;
EQLIB_VAR CBankWnd **ppBankWnd;
EQLIB_VAR CQuantityWnd **ppQuantityWnd;
EQLIB_VAR CTextEntryWnd **ppTextEntryWnd;
EQLIB_VAR CFileSelectionWnd **ppFileSelectionWnd;
EQLIB_VAR CLootWnd **ppLootWnd;
EQLIB_VAR CActionsWnd **ppActionsWnd;
//EQLIB_VAR CCombatAbilityWnd **ppCombatAbilityWnd;
EQLIB_VAR CMerchantWnd **ppMerchantWnd;
EQLIB_VAR CTradeWnd **ppTradeWnd;
EQLIB_VAR CBazaarWnd **ppBazaarWnd;
EQLIB_VAR CBazaarSearchWnd **ppBazaarSearchWnd;
EQLIB_VAR CGiveWnd **ppGiveWnd;
EQLIB_VAR CSelectorWnd **ppSelectorWnd;
EQLIB_VAR CTrackingWnd **ppTrackingWnd;
EQLIB_VAR CInspectWnd **ppInspectWnd;
EQLIB_VAR CFeedbackWnd **ppFeedbackWnd;
EQLIB_VAR CBugReportWnd **ppBugReportWnd;
EQLIB_VAR CVideoModesWnd **ppVideoModesWnd;
EQLIB_VAR CCompassWnd **ppCompassWnd;
EQLIB_VAR CPlayerNotesWnd **ppPlayerNotesWnd;
EQLIB_VAR CGemsGameWnd **ppGemsGameWnd;
EQLIB_VAR CStoryWnd **ppStoryWnd;
//EQLIB_VAR CFindLocationWnd **ppFindLocationWnd;
//EQLIB_VAR CAdventureRequestWnd **ppAdventureRequestWnd;
//EQLIB_VAR CAdventureMerchantWnd **ppAdventureMerchantWnd;
//EQLIB_VAR CAdventureStatsWnd **ppAdventureStatsWnd;
//EQLIB_VAR CAdventureLeaderboardWnd **ppAdventureLeaderboardWnd;
//EQLIB_VAR CLeadershipWindow **ppLeadershipWindow;
EQLIB_VAR CBodyTintWnd **ppBodyTintWnd;
EQLIB_VAR CGuildMgmtWnd **ppGuildMgmtWnd;
EQLIB_VAR CJournalTextWnd **ppJournalTextWnd;
EQLIB_VAR CJournalCatWnd **ppJournalCatWnd;
//EQLIB_VAR CTributeBenefitWnd **ppTributeBenefitWnd;
//EQLIB_VAR CTributeMasterWnd **ppTributeMasterWnd;
EQLIB_VAR CPetitionQWnd **ppPetitionQWnd;
EQLIB_VAR CSoulmarkWnd **ppSoulmarkWnd;
EQLIB_VAR CTimeLeftWnd **ppTimeLeftWnd;


#define pContextMenuManager (*ppContextMenuManager)
#define pCursorAttachment (*ppCursorAttachment)
#define pSocialEditWnd (*ppSocialEditWnd)
#define pContainerMgr (*ppContainerMgr)
#define pChatManager (*ppChatManager)
#define pConfirmationDialog (*ppConfirmationDialog)
#define pFacePick (*ppFacePick)
#define pInvSlotMgr (*ppInvSlotMgr)
#define pPopupWndManager (*ppPopupWndManager)
#define pNoteWnd (*ppNoteWnd)
#define pHelpWnd (*ppHelpWnd)
#define pTipWnd (*ppTipWnd)
#define pTipWnd (*ppTipWnd)
#define pBookWnd (*ppBookWnd)
#define pFriendsWnd (*ppFriendsWnd)
#define pMusicPlayerWnd (*ppMusicPlayerWnd)
#define pAlarmWnd (*ppAlarmWnd)
#define pLoadskinWnd (*ppLoadskinWnd)
#define pPetInfoWnd (*ppPetInfoWnd)
#define pTrainWnd (*ppTrainWnd)
#define pSkillsWnd (*ppSkillsWnd)
#define pSkillsSelectWnd (*ppSkillsSelectWnd)
#define pCombatSkillSelectWnd (*ppCombatSkillSelectWnd)
#define pAAWnd (*ppAAWnd)
#define pGroupWnd (*ppGroupWnd)
#define pSystemInfoDialogBox (*ppSystemInfoDialogBox)
#define pGroupSearchWnd (*ppGroupSearchWnd)
#define pGroupSearchFiltersWnd (*ppGroupSearchFiltersWnd)
#define pRaidWnd (*ppRaidWnd)
#define pRaidOptionsWnd (*ppRaidOptionsWnd)
#define pBreathWnd (*ppBreathWnd)
#define pMapToolbarWnd (*ppMapToolbarWnd)
#define pMapViewWnd (*ppMapViewWnd)
#define pEditLabelWnd (*ppEditLabelWnd)
#define pOptionsWnd (*ppOptionsWnd)
#define pBuffWindow (*ppBuffWindow)
#define pBuffWindow (*ppBuffWindow)
#define pTargetWnd (*ppTargetWnd)
#define pColorPickerWnd (*ppColorPickerWnd)
#define pHotButtonWnd (*ppHotButtonWnd)
#define pPlayerWnd (*ppPlayerWnd)
#define pCastingWnd (*ppCastingWnd)
#define pCastSpellWnd (*ppCastSpellWnd)
#define pSpellBookWnd (*ppSpellBookWnd)
#define pInventoryWnd (*ppInventoryWnd)
#define pBankWnd (*ppBankWnd)
#define pQuantityWnd (*ppQuantityWnd)
#define pTextEntryWnd (*ppTextEntryWnd)
#define pFileSelectionWnd (*ppFileSelectionWnd)
#define pLootWnd (*ppLootWnd)
#define pActionsWnd (*ppActionsWnd)
#define pCombatAbilityWnd (*ppCombatAbilityWnd)
#define pMerchantWnd (*ppMerchantWnd)
#define pTradeWnd (*ppTradeWnd)
#define pBazaarWnd (*ppBazaarWnd)
#define pBazaarSearchWnd (*ppBazaarSearchWnd)
#define pGiveWnd (*ppGiveWnd)
#define pSelectorWnd (*ppSelectorWnd)
#define pTrackingWnd (*ppTrackingWnd)
#define pInspectWnd (*ppInspectWnd)
#define pFeedbackWnd (*ppFeedbackWnd)
#define pBugReportWnd (*ppBugReportWnd)
#define pVideoModesWnd (*ppVideoModesWnd)
#define pCompassWnd (*ppCompassWnd)
#define pPlayerNotesWnd (*ppPlayerNotesWnd)
#define pGemsGameWnd (*ppGemsGameWnd)
#define pStoryWnd (*ppStoryWnd)
#define pFindLocationWnd (*ppFindLocationWnd)
#define pAdventureRequestWnd (*ppAdventureRequestWnd)
#define pAdventureMerchantWnd (*ppAdventureMerchantWnd)
#define pAdventureStatsWnd (*ppAdventureStatsWnd)
#define pAdventureLeaderboardWnd (*ppAdventureLeaderboardWnd)
#define pLeadershipWindow (*ppLeadershipWindow)
#define pBodyTintWnd (*ppBodyTintWnd)
#define pGuildMgmtWnd (*ppGuildMgmtWnd)
#define pJournalTextWnd (*ppJournalTextWnd)
#define pJournalCatWnd (*ppJournalCatWnd)
#define pTributeBenefitWnd (*ppTributeBenefitWnd)
#define pTributeMasterWnd (*ppTributeMasterWnd)
#define pPetitionQWnd (*ppPetitionQWnd)
#define pSoulmarkWnd (*ppSoulmarkWnd)
#define pTimeLeftWnd (*ppTimeLeftWnd)

/*
#define pContextMenuManager (*ppContextMenuManager)
#define pCursorAttachment (*ppCursorAttachment)
#define pSocialEditWnd (*ppSocialEditWnd)
#define pInvSlotMgr (*ppInvSlotMgr)
#define pContainerMgr (*ppContainerMgr)
#define pChatManager (*ppChatManager)
#define pConfirmationDialog (*ppConfirmationDialog)
#define pFacePick (*ppFacePick)
#define pItemDisplayMgr (*ppItemDisplayMgr)
#define pSpellDisplayMgr (*ppSpellDisplayMgr)
#define pNoteWnd (*ppNoteWnd)
#define pHelpWnd (*ppHelpWnd)
#define pTipWnd (*ppTipWnd)
#define pTipWnd (*ppTipWnd)
#define pBookWnd (*ppBookWnd)
#define pFriendsWnd (*ppFriendsWnd)
#define pMusicPlayerWnd (*ppMusicPlayerWnd)
#define pAlarmWnd (*ppAlarmWnd)
#define pLoadskinWnd (*ppLoadskinWnd)
#define pPetInfoWnd (*ppPetInfoWnd)
#define pTrainWnd (*ppTrainWnd)
#define pSkillsWnd (*ppSkillsWnd)
#define pSkillsSelectWnd (*ppSkillsSelectWnd)
#define pAAWnd (*ppAAWnd)
#define pGroupWnd (*ppGroupWnd)
#define pJournalNPCWnd (*ppJournalNPCWnd)
#define pGroupSearchWnd (*ppGroupSearchWnd)
#define pGroupSearchFiltersWnd (*ppGroupSearchFiltersWnd)
#define pRaidWnd (*ppRaidWnd)
#define pRaidOptionsWnd (*ppRaidOptionsWnd)
#define pBreathWnd (*ppBreathWnd)
#define pMapToolbarWnd (*ppMapToolbarWnd)
#define pMapViewWnd (*ppMapViewWnd)
#define pEditLabelWnd (*ppEditLabelWnd)
#define pOptionsWnd (*ppOptionsWnd)
#define pBuffWindow (*ppBuffWindow)
#define pBuffWindow (*ppBuffWindow)
#define pTargetWnd (*ppTargetWnd)
#define pColorPickerWnd (*ppColorPickerWnd)
#define pHotButtonWnd (*ppHotButtonWnd)
#define pPlayerWnd (*ppPlayerWnd)
#define pCastingWnd (*ppCastingWnd)
#define pCastSpellWnd (*ppCastSpellWnd)
#define pSpellBookWnd (*ppSpellBookWnd)
#define pInventoryWnd (*ppInventoryWnd)
#define pBankWnd (*ppBankWnd)
#define pQuantityWnd (*ppQuantityWnd)
#define pTextEntryWnd (*ppTextEntryWnd)
#define pFileSelectionWnd (*ppFileSelectionWnd)
#define pLootWnd (*ppLootWnd)
#define pActionsWnd (*ppActionsWnd)
#define pMerchantWnd (*ppMerchantWnd)
#define pTradeWnd (*ppTradeWnd)
#define pBazaarWnd (*ppBazaarWnd)
#define pBazaarSearchWnd (*ppBazaarSearchWnd)
#define pGiveWnd (*ppGiveWnd)
#define pSelectorWnd (*ppSelectorWnd)
#define pTrackingWnd (*ppTrackingWnd)
#define pInspectWnd (*ppInspectWnd)
#define pFeedbackWnd (*ppFeedbackWnd)
#define pBugReportWnd (*ppBugReportWnd)
#define pVideoModesWnd (*ppVideoModesWnd)
#define pCompassWnd (*ppCompassWnd)
#define pPlayerNotesWnd (*ppPlayerNotesWnd)
#define pGemsGameWnd (*ppGemsGameWnd)
#define pStoryWnd (*ppStoryWnd)
#define pFindLocationWnd (*ppFindLocationWnd)
#define pAdventureRequestWnd (*ppAdventureRequestWnd)
#define pAdventureStatsWnd (*ppAdventureStatsWnd)
#define pAdventureLeaderboardWnd (*ppAdventureLeaderboardWnd)
#define pBodyTintWnd (*ppBodyTintWnd)
#define pGuildMgmtWnd (*ppGuildMgmtWnd)
#define pJournalTextWnd (*ppJournalTextWnd)
#define pJournalCatWnd (*ppJournalCatWnd)
#define pPetitionQWnd (*ppPetitionQWnd)
#define pSoulmarkWnd (*ppSoulmarkWnd)
#define pTimeLeftWnd (*ppTimeLeftWnd)
/**/
}
using namespace MQ2Globals;
