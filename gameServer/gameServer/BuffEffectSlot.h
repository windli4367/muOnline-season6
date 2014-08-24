#pragma once

#include "user.h"

enum eBuffEffectType
{
	AT_NULL_BUFF_EFFECT = 0,
	AT_INCREASE_ATTACK = 1,
	AT_INCREASE_DEFENSE = 2,
	AT_NPC_HELP = 3,
	AT_WIZARD_DEFENSE = 4,
	AT_INCREASE_CRITICAL_DMG = 5,
	AT_INFINITY_ARROW = 6,
	AT_INCREASE_AG_SPEED = 7,
	AT_SWELL_LIFE = 8,
	AT_SWELL_MANA = 9,
	AT_POTION_OF_BLESS = 10,
	AT_POTION_OF_SOUL = 11,
	AT_CANCEL_MAGIC = 12,
	AT_CASTLE_GATE_STATUS = 13,
	AT_WATCHING_TOWER = 14,
	AT_ATTACKING_GUILD1 = 15,
	AT_ATTACKING_GUILD2 = 16,
	AT_ATTACKING_GUILD3 = 17,
	AT_INVISIBILITY = 18,
	AT_DARK_ROD_SKILL = 19,
	AT_CASTLE_CROWN_STATUS = 20,
	AT_CW_ALTAR_ACTIVE = 21,
	AT_CW_ALTAR_INACTIVE = 22,
	AT_CW_ALTAR_STATUS = 23,
	AT_CW_ALTAR_ATTEMPT = 24,
	AT_CW_ALTAR_ATTACKING_STATUS = 25,
	AT_CW_ALTAR_HERO_STATUS = 26,
	AT_CW_NPC_TRANSPARENCY = 27,
	AT_GAMEMASTER_LOGO = 28,
	AT_PCBANG_SEAL_OF_ASCENSION = 29,
	AT_PCBANG_SEAL_OF_WEALTH = 30,
	AT_PCBANG_SEAL_OF_SUSTENANCE = 31,
	AT_ILLUSION_SPELL1 = 32,
	AT_ILLUSION_SPELL2 = 33,
	AT_ILLUSION_SHIELD_SPELL = 34,
	AT_HALLOWEEN_BLESSING = 35,
	AT_HALLOWEEN_RAGE = 36,
	AT_HALLOWEEN_SCREAM = 37,
	AT_HALLOWEEN_FOOD = 38,
	AT_HALLOWEEN_DRINK = 39,
	AT_CSHOP_SEAL_OF_ASCENSION = 40,
	AT_CSHOP_SEAL_OF_WEALTH = 41,
	AT_CSHOP_SEAL_OF_SUSTENANCE = 42,
	AT_CSHOP_SEAL_OF_MOBILITY = 43,
	AT_CSHOP_SCROLL_OF_QUICKNESS = 44,
	AT_CSHOP_SCROLL_OF_DEFENSE = 45,
	AT_CSHOP_SCROLL_OF_WRATH = 46,
	AT_CSHOP_SCROLL_OF_WIZARDRY = 47,
	AT_CSHOP_SCROLL_OF_HEALTH = 48,
	AT_CSHOP_SCROLL_OF_MANA = 49,
	AT_CSHOP_LEAP_OF_STRENGTH = 50,
	AT_CSHOP_LEAP_OF_QUICKNESS = 51,
	AT_CSHOP_LEAP_OF_HEALTH = 52,
	AT_CSHOP_LEAP_OF_ENERGY = 53,
	AT_CSHOP_LEAP_OF_CONTROL = 54,
	AT_POISON = 55,
	AT_ICE = 56,
	AT_ICE_ARROW = 57,
	AT_REDUCE_DEFENSE = 58,
	AT_REDUCE_ATTACK = 59,
	AT_REDUCE_MAGIC = 60,
	AT_STUN = 61,
	AT_MAGIC_DEFENSE = 62,
	AT_IMMUNE_MAGIC = 63,
	AT_IMMUNE_HARM = 64,
	AT_ILLUSION_RESTRICTION_SPELL = 65,
	AT_CRYWOLF_PROTECTION1 = 66,
	AT_CRYWOLF_PROTECTION2 = 67,
	AT_CRYWOLF_PROTECTION3 = 68,
	AT_CRYWOLF_PROTECTION4 = 69,
	AT_CRYWOLF_PROTECTION5 = 70,
	AT_DAMAGE_REFLECTION = 71,
	AT_SLEEP = 72,
	AT_BLIND = 73,
	AT_REQUIEM = 74,
	AT_EXPLOSION = 75,
	AT_WEAKNESS = 76,
	AT_INNOVATION = 77,
	AT_CHERRYBLOSSOM_STAMEN = 78,
	AT_CHERRYBLOSSOM_RICECAKE = 79,
	AT_CHERRYBLOSSOM_FLOWERPETAL = 80,
	AT_BERSERKER = 81,
	AT_EXPANSION_WIZARDRY = 82,
	AT_FLAME_STRIKE = 83,
	AT_GIGANTIC_STORM = 84,
	AT_LIGHTNING_SHOCK = 85,
	AT_DESTRUCTION = 86,
	AT_CSHOP_SEAL_OF_HEALING = 87,
	AT_CSHOP_SEAL_OF_DIVINITY = 88,
	AT_CSHOP_SCROLL_OF_BATTLE = 89,
	AT_CSHOP_SCROLL_OF_STRENGTHENER = 90,
	AT_XMASS_REWARD = 91,
	AT_XMASS_HEALTH = 92,
	AT_XMASS_MANA = 93,
	AT_XMASS_ATTACK = 94,
	AT_XMASS_DEFENSE = 95,
	AT_XMASS_DEXTERITY = 96,
	AT_XMASS_AG_RECOVERY = 97,
	AT_NEWPVPSYSTEM_WATCH_DUEL = 98,
	AT_CSHOP_GUARDIAN_AMULET = 99,
	AT_CSHOP_PROTECT_AMULET = 100,
	AT_CSHOP_MASTER_SEAL_OF_ASCENSION = 101,
	AT_CSHOP_MASTER_SEAL_OF_WEALTH = 102,
	AT_NEWPVPSYSTEM_REWARD = 103,
	AT_PCBANG_SEAL_OF_BALANCE = 104,
	AT_PARTY_EXP_BONUS = 112,
	AT_RFVITALITY = 130,
};

enum eBuffClearType
{
	CLEAR_TYPE_DIEREGEN				= 1,
	CLEAR_TYPE_LOGOUT				= 2,
	CLEAR_TYPE_MONSTERREGEN			= 3,
	CLEAR_TYPE_CHAOSCASTLE_ENTER	= 4,
	CLEAR_TYPE_PCBANG_SEAL_FINISH	= 5,
	CLEAR_TYPE_NON_PCS_ITEM_EFFECT	= 6,
	CLEAR_TYPE_CASTLESIEGE			= 7,
};

struct PMSG_SEND_BUFF_ICON
{
	PBMSG_HEAD h;	// C1:2D
	WORD wOptionType;
	WORD wEffectType;
	BYTE byEffectOption;
	int iLeftTime;
	BYTE btEffectIndex;
};

class CBuffEffectSlot
{
public:
	CBuffEffectSlot();
	virtual ~CBuffEffectSlot();


	int SetEffect(LPOBJ lpObj,int iBuffIndex,BYTE btEffectType1,BYTE btEffectType2,int iEffectValue1,int iEffectValue2,int iDuration);
	bool RemoveEffect(LPOBJ lpObj,int iBuffIndex);
	bool CheckUsedEffect(LPOBJ lpObj,int iBuffIndex);
	void RemoveBuffVariable(LPOBJ lpObj,int iBuffIndex);
	int ClearEffect(LPOBJ lpObj,enum eBuffClearType ClearType);
	BUFF_EFFECT_DATE* GetEffectData(int iBuffIndex);
	BUFF_EFFECT_DATE* GetEffectDataFromItemCode(WORD wItemCode);
	int GetBuffClearType(int iBuffIndex);
};

void gObjCheckBuffEffectList(LPOBJ lpObj);
bool gObjAddBuffEffect(LPOBJ lpObj,int iBuffIndex);
bool gObjAddBuffEffect(LPOBJ lpObj,int iBuffIndex,BYTE EffectType1,int EffectValue1,BYTE EffectType2,int EffectValue2,int Duration);
bool gObjAddBuffEffect(LPOBJ lpObj,int iBuffIndex,int Duration);
bool gObjAddBuffEffectForInGameShop(LPOBJ lpObj,WORD wItemCode,int iDuration);
bool gObjRemoveBuffEffect(LPOBJ lpObj,int iBuffIndex);
bool gObjClearBuffEffect(LPOBJ lpObj,enum eBuffClearType ClearType);
bool gObjCheckUsedBuffEffect(LPOBJ lpObj,int iBuffIndex);
bool gObjChangeBuffValidTime(LPOBJ lpObj,int iBuffIndex,int iTime);
void gObjSetActiveEffectAtTick(LPOBJ lpObj);
int gObjMakeViewportState(LPOBJ lpObj,BYTE* lpBuffer);
bool gObjCheckPowerfulEffect(LPOBJ lpObj,int iBuffIndex,int EffectValue1,int EffectValue2);
int gObjGetTotalValueOfEffect(LPOBJ lpObj,int EffectType);
bool gObjCheckUsedBuffEffect(LPOBJ lpObj,int iBuffIndex,int * EffectValue1,int * EffectValue2);
void GCUseBuffEffect(LPOBJ lpObj, BYTE btEffectIndex, BYTE btEffectUseOption, WORD wOptionType, WORD wEffectType, int iLeftTime);
void gObjSendBuffList(LPOBJ lpObj);
int gObjAddBuffEffectWideArea(LPOBJ lpTargetObj,int nDistance,int & nAffectedCount,int iBuffIndex,BYTE EffectType1,int EffectValue1,BYTE EffectType2,int EffectValue2,int Duration);
void CheckItemOptForGetExpEx(LPOBJ lpObj,__int64 & iExp,int bRewardExp);

extern CBuffEffectSlot g_BuffEffectSlot;