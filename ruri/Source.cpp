
#define _WINSOCK_DEPRECATED_NO_WARNINGS

enum Privileges{
	UserBanned = 0,
	UserPublic = 1,
	UserNormal = 2 << 0,
	UserDonor = 2 << 1,
	AdminAccessRAP = 2 << 2,
	AdminManageUsers = 2 << 3,
	AdminBanUsers = 2 << 4,
	AdminSilenceUsers = 2 << 5,
	AdminWipeUsers = 2 << 6,
	AdminManageBeatmaps = 2 << 7,
	AdminManageServers = 2 << 8,
	AdminManageSettings = 2 << 9,
	AdminManageBetaKeys = 2 << 10,
	AdminManageReports = 2 << 11,
	AdminManageDocs = 2 << 12,
	AdminManageBadges = 2 << 13,
	AdminViewRAPLogs = 2 << 14,
	AdminManagePrivileges = 2 << 15,
	AdminSendAlerts = 2 << 16,
	AdminChatMod = 2 << 17,
	AdminKickUsers = 2 << 18,
	UserPendingVerification = 2 << 19,
	UserTournamentStaff = 2 << 20,
	AdminDev = 2 << 21,
	Premium = 2 << 22,
	AdminQAT = 2 << 23
};
enum UserType
{
	None = 0,
	Normal = 1,
	BAT = 2,
	Supporter = 4,
	Friend = 8,
	Peppy = 16,
	Tournament = 32
};
enum bStatus
{
	sIdle,
	sAfk,
	sPlaying,
	sEditing,
	sModding,
	sMultiplayer,
	sWatching,
	sUnknown,
	sTesting,
	sSubmitting,
	sPaused,
	sLobby,
	sMultiplaying,
	sOsuDirect
};

enum Mods
{
	noMod = 0,
	NoFail = 1 << 0,
	Easy = 1 << 1,
	//NoVideo              = 1 << 2,
	Hidden = 1 << 3,
	HardRock = 1 << 4,
	SuddenDeath = 1 << 5,
	DoubleTime = 1 << 6,
	Relax = 1 << 7,
	HalfTime = 1 << 8,
	Nightcore = 1 << 9,
	Flashlight = 1 << 10,
	Autoplay = 1 << 11,
	SpunOut = 1 << 12,
	Relax2 = 1 << 13,
	Perfect = 1 << 14,
	Key4 = 1 << 15,
	Key5 = 1 << 16,
	Key6 = 1 << 17,
	Key7 = 1 << 18,
	Key8 = 1 << 19,
	FadeIn = 1 << 20,
	Random = 1 << 21,
	Cinema = 1 << 22,
	Target = 1 << 23,
	Key9 = 1 << 24,
	KeyCoop = 1 << 25,
	Key1 = 1 << 26,
	Key3 = 1 << 27,
	Key2 = 1 << 28,
	LastMod = 1 << 29,
	KeyMod = Key1 | Key2 | Key3 | Key4 | Key5 | Key6 | Key7 | Key8 | Key9 | KeyCoop,
	FreeModAllowed = NoFail | Easy | Hidden | HardRock | SuddenDeath | Flashlight | FadeIn | Relax | Relax2 | SpunOut | KeyMod,
	ScoreIncreaseMods = Hidden | HardRock | DoubleTime | Flashlight | FadeIn,
	TimeAltering = DoubleTime | HalfTime | Nightcore
};

#define WIN32_LEAN_AND_MEAN
#define WIN64_LEAN_AND_MEAN

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KGRY  "\x1B[37m"
#define KRESET "\033[0m"
#define BOT_LOCATION 38
#define RURIPORT 420
#define ARIAPORT 421

#define MIRROR_IP "5.9.151.156"
#define MIRROR_PORT 8420
#define OSU_IP "1.1.1.1"

#define MAX_USER_COUNT 256
#define MAX_USERNAME_LENGTH 19
#define MAX_MULTI_COUNT 64

#define CHO_VERSION 19

const int PING_TIMEOUT_OSU = 50000;

//const int PING_INTERVAL_OSU = 24000;

const bool USER_TEST = 0;
//const bool LOW_LATENCY = 0;

const int MAX_PACKET_LENGTH = 1403;

enum OPac {
	NULL_PACKET = 1000,
	client_changeAction = 0,
	client_sendPublicMessage = 1,
	client_logout = 2,
	client_requestStatusUpdate = 3,
	client_pong = 4,
	server_userID = 5,
	server_commandError = 6,
	server_sendMessage = 7,
	server_ping = 8,
	server_handleIRCUsernameChange = 9,
	server_handleIRCQuit = 10,
	server_userStats = 11,
	server_userLogout = 12,
	server_spectatorJoined = 13,
	server_spectatorLeft = 14,
	server_spectateFrames = 15,
	client_startSpectating = 16,
	client_stopSpectating = 17,
	client_spectateFrames = 18,
	server_versionUpdate = 19,
	client_errorReport = 20,
	client_cantSpectate = 21,
	server_spectatorCantSpectate = 22,
	server_getAttention = 23,
	server_notification = 24,
	client_sendPrivateMessage = 25,
	server_updateMatch = 26,
	server_newMatch = 27,
	server_disposeMatch = 28,
	client_partLobby = 29,
	client_joinLobby = 30,
	client_createMatch = 31,
	client_joinMatch = 32,
	client_partMatch = 33,
	server_matchJoinSuccess = 36,
	server_matchJoinFail = 37,
	client_matchChangeSlot = 38,
	client_matchReady = 39,
	client_matchLock = 40,
	client_matchChangeSettings = 41,
	server_fellowSpectatorJoined = 42,
	server_fellowSpectatorLeft = 43,
	client_matchStart = 44,
	AllPlayersLoaded = 45,
	server_matchStart = 46,
	client_matchScoreUpdate = 47,
	server_matchScoreUpdate = 48,
	client_matchComplete = 49,
	server_matchTransferHost = 50,
	client_matchChangeMods = 51,
	client_matchLoadComplete = 52,
	server_matchAllPlayersLoaded = 53,
	client_matchNoBeatmap = 54,
	client_matchNotReady = 55,
	client_matchFailed = 56,
	server_matchPlayerFailed = 57,
	server_matchComplete = 58,
	client_matchHasBeatmap = 59,
	client_matchSkipRequest = 60,
	server_matchSkip = 61,
	server_unauthorised = 62,
	client_channelJoin = 63,
	server_channelJoinSuccess = 64,
	server_channelInfo = 65,
	server_channelKicked = 66,
	server_channelAvailableAutojoin = 67,
	client_beatmapInfoRequest = 68,
	server_beatmapInfoReply = 69,
	client_matchTransferHost = 70,
	server_supporterGMT = 71,
	server_friendsList = 72,
	client_friendAdd = 73,
	client_friendRemove = 74,
	server_protocolVersion = 75,
	server_mainMenuIcon = 76,
	client_matchChangeTeam = 77,
	client_channelPart = 78,
	client_receiveUpdates = 79,
	server_topBotnet = 80,
	server_matchPlayerSkipped = 81,
	client_setAwayMessage = 82,
	server_userPanel = 83,
	IRC_only = 84,
	client_userStatsRequest = 85,
	server_restart = 86,
	client_invite = 87,
	server_invite = 88,
	server_channelInfoEnd = 89,
	client_matchChangePassword = 90,
	server_matchChangePassword = 91,
	server_silenceEnd = 92,
	client_specialMatchInfoRequest = 93,
	server_userSilenced = 94,
	server_userPresenceSingle = 95,
	server_userPresenceBundle = 96,
	client_userPresenceRequest = 97,
	client_userPresenceRequestAll = 98,
	client_userToggleBlockNonFriendPM = 99,
	server_userPMBlocked = 100,
	server_targetIsSilenced = 101,
	server_versionUpdateForced = 102,
	server_switchServer = 103,
	server_accountRestricted = 104,
	server_jumpscare = 105,
	client_matchAbort = 106,
	server_switchTourneyServer = 107,
	client_specialJoinMatchChannel = 108,
	client_specialLeaveMatchChannel = 109
};

enum LoginReply {
	Login_Failed = -1
};

#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

typedef unsigned char byte;

WSADATA wsData;

#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>

const std::string BOT_NAME = "ruri";
const std::string FAKEUSER_NAME((const char*)new char[8]{-30,-128,-115,95,-30,-128,-115,0});

#include <time.h>
#include <thread>

#include <mutex>
#include <shared_mutex>

#include "SQL.h"
#include "BCrypt/BCrypt.hpp"

#include <time.h>
#include <random>

std::vector<std::string> UsernameCache;

std::shared_mutex UsernameCacheLock;

void UpdateUsernameCache(_SQLCon *SQL){

	UsernameCacheLock.lock();

	sql::ResultSet* res(SQL->ExecuteQuery("SELECT id,username FROM users WHERE id >= " + std::to_string(UsernameCache.size() + 1000) + " ORDER BY id DESC"));
	DWORD Count = 0;
	if (res && res->next()){
		Count = 1;

		const DWORD HighestID = res->getUInt(1);
		if (HighestID >= 1000) {

			UsernameCache.resize(HighestID - 999);
			UsernameCache[HighestID-1000] = res->getString(2);

			while (res->next()) {
				const DWORD ID = res->getUInt(1);
				if (ID < 1000)break;
				Count++;
				UsernameCache[ID - 1000] = res->getString(2);
			}
		}
	}if (res)delete res;
	
	UsernameCacheLock.unlock();

	printf("Updated %i usernames in the cache\n", Count);
}

std::string GetUsernameFromCache(const DWORD UID){

	if (UID < 1000)return "";

	std::string Res = "";

	UsernameCacheLock.lock_shared();
	if ((UID-1000) < UsernameCache.size()) {
		Res = UsernameCache[UID - 1000];
	}
	UsernameCacheLock.unlock_shared();

	return Res;
}
void UsernameCacheUpdateName(const DWORD UID, const std::string &s, _SQLCon *SQL) {
	if (UID < 1000)return;

	UsernameCacheLock.lock_shared();

	if (UID - 1000 >= UsernameCache.size()){
		UsernameCacheLock.unlock_shared();
		return UpdateUsernameCache(SQL);
	}
	UsernameCache[UID - 1000] = s;

	UsernameCacheLock.unlock_shared();
}


std::string BEATMAP_PATH;
std::string REPLAY_PATH;
std::string osu_API_KEY;
std::string osu_API_BEATMAP = "api/get_beatmaps?k=" + osu_API_KEY + "&";

struct _RankList {
	DWORD ID;
	DWORD PP;
	_RankList() {
		ID = 0;
		PP = 0;
	}
	_RankList(DWORD I, DWORD P) {
		ID = I;
		PP = P;
	}
}; _RankList RankList[8][USHORT(-1)];//This rank cache in general is very bad and should be rewritten.
DWORD RankListVersion[] = { 1,1,1,1,1,1,1,1 };
std::mutex RankUpdate[8];


DWORD GetRank(const DWORD UserID, const DWORD GameMode){//Could use the cached pp to tell around where its supposed to be?

	if (UserID < 1000 || GameMode >= 8)return 0;

	DWORD Off = 0;
	while(RankList[GameMode][Off].ID){
		if (RankList[GameMode][Off].ID == UserID)
			return Off + 1;
		Off++;
	}

	return 0;
}
bool SortRankCache(const _RankList i, const _RankList j) { return (i.PP > j.PP); }

void UpdateRank(const DWORD UserID, const DWORD GameMode, const DWORD PP) {
	printf("Updating ranks\n");
	if (!PP || UserID < 1000 || GameMode >= 8)return;

	RankUpdate[GameMode].lock();

	DWORD Off = 0;

	bool Direction = 0;

	while (RankList[GameMode][Off].ID) {
		if (RankList[GameMode][Off].ID == UserID){
			Direction = (RankList[GameMode][Off].PP > PP);
			RankList[GameMode][Off].PP = PP;
			break;
		}
		Off++;
	}
	if (!Direction) {
		Off++;
		std::sort(RankList[GameMode], RankList[GameMode] + (Off * sizeof(_RankList)), SortRankCache);//The reason for the offset
	}else std::sort(RankList[GameMode], &RankList[GameMode][USHORT(-1)], SortRankCache);//TODO properly bound this backwards
	RankListVersion[GameMode]++;
	RankUpdate[GameMode].unlock();
	printf("Updated ranks\n");
}


namespace BR {
	std::random_device randomDeviceInit;	
	std::mt19937 mersenneTwister = std::mt19937(randomDeviceInit());

	int GetRand(int min = 0, int max = INT_MAX) {
		return std::uniform_int_distribution<int>{min, max}(mersenneTwister);
	}
	DWORD UGetRand(DWORD min = 0, DWORD max = DWORD(-1)) {
		return std::uniform_int_distribution<DWORD>{min, max}(mersenneTwister);
	}

	double GetRandD(double min, double max) {
		return std::uniform_real_distribution<double>{min, max}(mersenneTwister);
	}

	__inline int GetRand_NormalDis(const int mean, const int standardDeviation) {
		return int(std::normal_distribution<double>(mean, standardDeviation)(mersenneTwister));
	}

};


__forceinline void LogError(int i){
	printf(KRED "ERROR CODE: %i\n" KRESET, i);
}
__forceinline void LogError(const char * t, const char* f = 0){
	if(f)return (void)printf(KMAG "%s> " KRED "ERROR: %s\n" KRESET,f, t);
	printf(KRED "ERROR: %s\n" KRESET, t);
}

__forceinline void LogMessage(const char* t, const char* f = 0) {
	if (f)return (void)printf(KMAG "%s> " KRESET "%s\n" KRESET, f, t);
	printf(KMAG "Log: %s\n" KRESET, t);
}
__forceinline void LogMessage(std::string t) {
	printf(KMAG "Log: %s\n" KRESET, t.c_str());
}


__forceinline void AddInt(std::vector<byte> &v, const int Value) {
	v.resize(v.size() + 4);
	*(int*)&v[v.size() - 4] = Value;
}
__forceinline void AddLong(std::vector<byte> &v, const long long Value) {
	v.resize(v.size() + 8);
	*(long long*)&v[v.size() - 8] = Value;
}
__forceinline void AddByte(std::vector<byte> &v, const byte Value) {
	v.push_back(Value);
}
__forceinline void AddShort(std::vector<byte> &v, const short Value) {
	v.resize(v.size() + 2);
	*(short*)&v[v.size() - 2] = Value;
}
__forceinline void AddVector(std::vector<byte> &v, const std::vector<byte> Value) {
	if (Value.size() == 0)return;
	v.resize(v.size() + Value.size());
	memcpy(&v[v.size() - Value.size()],&Value[0],Value.size());
}
__forceinline void AddMem(std::vector<byte> &v, const void* Value, const DWORD Size) {
	if (Size == 0)return;
	v.resize(v.size() + Size);
	memcpy(&v[v.size() - Size], Value, Size);
}
__forceinline void AddString(std::vector<byte> &v, const std::string &Value) {

	const DWORD Size = Value.size();
	
	if (Size == 0) {
		v.push_back(0);
		return;
	}
	int val = Size;
	v.push_back(0x0b);

		do {
			byte b = val & 0x7f;
			val >>= 7;

			if (val != 0)
				b |= 0x80;  // mark this byte to show that more bytes will follow

			v.push_back(b);
		} while (val != 0);

		v.resize(v.size() + Size);
		memcpy(&v[v.size() - Size], &Value[0], Size);
}
__forceinline void AddInvisString(std::vector<byte> &v){
	v.push_back(0xb);
	v.push_back(2);
	v.push_back(0x12);
	v.push_back(0x12);
}



struct _BanchoPacket {
	short Type;
	byte Compression;
	std::vector<byte> Data;

	std::vector<byte> GetBytes(){
		std::vector<byte> Bytes;
		AddShort(Bytes, Type);
		Bytes.push_back(Compression);
		AddInt(Bytes, Data.size());
		AddVector(Bytes, Data);
		return Bytes;
	}

	void GetBytes(std::vector<byte> &Bytes){
		Bytes.reserve(Bytes.size() + 7 + Data.size());
		AddShort(Bytes, Type);
		Bytes.push_back(Compression);
		AddInt(Bytes, Data.size());
		AddVector(Bytes, Data);
	}

	_BanchoPacket() {
		Type = 0;
		Compression = 0;
	}
	_BanchoPacket(short ID) {
		Type = ID;
		Compression = 0;
	}
};
const _BanchoPacket erPacket(NULL_PACKET);

struct _DelayedBanchoPacket{
	int Time;
	_BanchoPacket b;

	_DelayedBanchoPacket() {
		Time = 0;
	}
	_DelayedBanchoPacket(const int t, const _BanchoPacket a) {
		Time = t;
		b = a;
	}

};
bool SortDelayPacket(const _DelayedBanchoPacket i, const _DelayedBanchoPacket j) { return (i.Time < j.Time); }

struct _UserStats {

private:
	DWORD RankVersion;
	DWORD GameRank;
public:

	unsigned long long tScore;
	unsigned long long rScore;
	int pp;
	float Acc;
	int PlayCount;

	DWORD getRank(const DWORD GameMode, const DWORD UID) {
		if (GameMode >= 8)return 0;
		const DWORD cVersion = RankListVersion[GameMode];

		if (cVersion != RankVersion) {
			RankVersion = cVersion;
			GameRank = GetRank(UID, GameMode);
		}

		return GameRank;
	}

	_UserStats() {
		tScore = 0;
		rScore = 0;
		pp = 0;
		Acc = 0;
		PlayCount = 0;
		GameRank = 0;
		RankVersion = 0;
	}

};

std::vector<std::vector<byte>> Explode(const void *p,const DWORD Size, const char D, const int MAX = INT_MAX){

	std::vector<std::vector<byte>> Output;
	std::vector<byte> t;
	t.reserve(Size);

	const char* in = (char*)p;

	int c = 0;
	for (DWORD i = 0; i < Size; i++) {
		if (MAX > c && in[i] == D) {
			Output.push_back(t);
			t.clear();
			c++;
		}
		else t.push_back(in[i]);

	}
	Output.push_back(t);

	return Output;
}
std::vector<std::vector<byte>> Explode(const void *p, const DWORD Size, const std::string delim) {

	std::vector<std::vector<byte>> Output;
	std::vector<byte> t;
	t.reserve(Size);
	const DWORD dSize = delim.size();
	
	const char* in = (char*)p;

	for (DWORD i = 0; i < Size; i++){

		if (i + dSize > Size) {
			t.push_back(in[i]);
			continue;
		}
		if (!memcmp(&in[i], &delim[0], dSize)){
			Output.push_back(t);
			t.clear();
			i += dSize - 1;
		}else t.push_back(in[i]);
	}
	Output.push_back(t);

	return Output;
}

__forceinline std::vector<std::string> Explode(const std::string &Input, const char Delimiter) {

	std::vector<std::string> Output;

	std::string TempString;

	for (DWORD i = 0; i < Input.size(); i++) {
		if (Input[i] == Delimiter) {
			Output.push_back(TempString);
			TempString.clear();
		}
		else TempString += Input[i];

	}
	Output.push_back(TempString);

	return Output;
}

__forceinline std::string MenuClickButton(const std::string Command, const std::string Desc) {
	return "[osump://0/" + Command + "|" + FAKEUSER_NAME + " " + Desc + "]";
}

__forceinline bool PasswordCheck(const void* Pass1, const void* Pass2){
	return memcmp(Pass1,Pass2,32) == 0;
}


__inline void AddStringToVector(std::vector<byte> &v, const std::string s){
	if (s.size() == 0)return;
	v.resize(v.size() + s.size());
	memcpy(&v[v.size() - s.size()], &s[0], s.size());
}
__inline void AddVectorToString(std::string s, const std::vector<byte> &v) {
	if (v.size() == 0)return;
	s.resize(v.size() + s.size());
	memcpy(&s[s.size() - v.size()], &v[0], v.size());
}

#include "Connection.h"

std::vector<_HttpHeader> Empty_Headers;
std::vector<byte> Empty_Byte;


bool UpdateUserStatsFromDB(_SQLCon *SQL,const DWORD UserID, DWORD GameMode, _UserStats &stats){

	if (GameMode >= 8)return 0;
	const DWORD RawGameMode = GameMode;
	std::string ScoreTableName = "scores";
	std::string StatsTableName = "users_stats";
	
	std::string AccColName[] = {"avg_accuracy_std","avg_accuracy_taiko","avg_accuracy_ctb","avg_accuracy_mania"};
	std::string ppColName[] = { "pp_std","pp_taiko","pp_ctb","pp_mania" };

	if (GameMode >= 4) {
		ScoreTableName = "scores_relax";
		StatsTableName = "rx_stats";
		GameMode -= 4;
	}


	sql::ResultSet *res = SQL->ExecuteQuery("SELECT accuracy,pp FROM " + ScoreTableName + " WHERE userid = " + std::to_string(UserID) + " AND play_mode = " + std::to_string(GameMode) + " AND completed = 3 AND pp > 0 ORDER BY pp DESC LIMIT 100");
	DWORD Count = 0;
	double TotalAcc = 0.;
	double TotalPP = 0.;

	while (res && res->next()){
		if(Count < 50)
			TotalAcc += res->getDouble(1);
		TotalPP += res->getDouble(2) * std::pow(0.95,double(Count));
		Count++;
	}
	if (res)delete res;

	const double ACC = (TotalAcc / double((Count > 50) ? 50 : Count));
	
	float acc = ACC / 100.f;
	int pp = (int)round(TotalPP);

	if (acc != stats.Acc || pp != stats.pp){

		if (pp != stats.pp)
			UpdateRank(UserID, RawGameMode, pp);

		stats.pp = pp;
		stats.Acc = acc;

		//TODO: Might want to make a sql update pool thread.
		SQL->ExecuteUPDATE("UPDATE " + StatsTableName + " SET " + AccColName[GameMode] + " = " + std::to_string(ACC) + ", "
			+ ppColName[GameMode] + " = " + std::to_string(TotalPP)
			+ " WHERE id = " + std::to_string(UserID) + " LIMIT 1");
	}

	return 1;
}

enum MenuStates {
	Menu_None,
	Menu_ChooseScore

};

struct _Menu {
	DWORD State;
	int PreviousMap;
	int ChangePage;
	int LastPage;
	int aux1;
	std::string saux1;
	bool BanchoLoaded;
	bool ForceReDraw;

	_Menu() {
		State = 0;
		BanchoLoaded = 0;
		PreviousMap = 0;
		aux1 = 0;
		LastPage = 0;
		ChangePage = 0;
		ForceReDraw = 0;
	}
};

bool StringCompareStart(const std::string &a, const std::string b) {

	if (a.size() < b.size())return 0;

	for (DWORD i = 0; i < b.size(); i++)
		if (a[i] != b[i])return 0;


	return 1;
}

#include "Achievement.h"

struct _User {
public:
	std::vector<_BanchoPacket> Que;
	std::vector<_DelayedBanchoPacket> dQue;
	std::mutex qLock;

	DWORD choToken;
	DWORD UserID;
	DWORD privileges;
	char UserName[MAX_USERNAME_LENGTH + 1];
	char UserName_Safe[MAX_USERNAME_LENGTH + 1];
	char Password[33];//Could be half the size but who cares
	char ActionMD5[33];
	DWORD actionMods;
	int BeatmapID;
	byte timeOffset;
	byte country;
	byte GameMode;
	byte actionID;
	float lat;
	float lon;

	std::mutex StatsAdd;

	_UserStats Stats[8];//4 normal modes + 4 more relax ones

	//int Rank;
	std::string ActionText;
	int LastPacketTime;
	_User* CurrentlySpectating;
	
	int LoginTime;
	bool SendToken;
	bool inLobby;
	byte comMatchPage;
	int LastReplayBundleTime;
	int TotalDelta;
	int Delta;
	std::mutex SpecLock;
	std::vector<_User*> Spectators;
	//std::mutex MultiLock;
	USHORT CurrentMatchID;
	bool HyperMode;
	int LastSentBeatmap;
	_Menu Menu;
	DWORD Friends[256];
	_Achievement Ach;//TODO: thread this.

	__forceinline DWORD GetStatsOffset()const{

		if (GameMode > 3)return 3;
		
		if (actionMods & Mods::Relax)return GameMode + 4;

		return GameMode;
	}

	void SendToSpecs(const _BanchoPacket b, int Privs) {

		SpecLock.lock();

		for (DWORD i = 0; i < Spectators.size(); i++){

			_User* Spec = Spectators[i];

			if (Spec && Spec->privileges & Privs)
				Spec->addQue(b);		
		}

		SpecLock.unlock();
	}
	bool isFriend(const DWORD ID) const{

		if (UserID == ID)
			return 1;//Always friends with your self :)

		for (DWORD i = 0; i < 256; i++)
			if (Friends[i] == ID)
				return 1;

		return 0;
	}

	_User(){

		TotalDelta = 0; Delta = 0;

		choToken = 0;
		UserID = 0;
		SendToken = 0;
		privileges = 0;
		ZeroMemory(UserName, MAX_USERNAME_LENGTH + 1);
		ZeroMemory(UserName_Safe, MAX_USERNAME_LENGTH + 1);
		ZeroMemory(Password, 33);
		ZeroMemory(ActionMD5, 33);
		actionMods = 0;
		BeatmapID = 0;
		timeOffset = 0;
		country = 0;
		GameMode = 0;
		lat = 0.f;
		lon = 0.f;
		ActionText.clear();
		LastPacketTime = 0;
		LoginTime = 0;
		LastReplayBundleTime = 0;
		CurrentlySpectating = 0;
		CurrentMatchID = 0;
		inLobby = 0;
		Spectators.reserve(16);
		Que.reserve(512);
		comMatchPage = 0;
		HyperMode = 0;
		LastSentBeatmap = 0;
		ZeroMemory(Friends, 256);
	}
	void reset() {

		TotalDelta = 0; Delta = 0;

		choToken = 0;
		UserID = 0;
		SendToken = 0;
		privileges = 0;
		ZeroMemory(UserName, MAX_USERNAME_LENGTH + 1);
		ZeroMemory(Password, 33);
		ZeroMemory(ActionMD5, 33);
		actionMods = 0;
		BeatmapID = 0;
		timeOffset = 0;
		country = 0;
		GameMode = 0;
		lat = 0.f;
		lon = 0.f;
		ActionText.clear();
		LastPacketTime = 0;
		LoginTime = 0;
		LastReplayBundleTime = 0;
		CurrentlySpectating = 0;
		CurrentMatchID = 0;
		inLobby = 0;
		Spectators.reserve(16);
		Que.reserve(1024);
		comMatchPage = 0;
		HyperMode = 0;
		LastSentBeatmap = 0;
		Menu = _Menu();
		ZeroMemory(Friends, 256);
	}

	void addQue(const _BanchoPacket b) {
		if (b.Type == NULL_PACKET || !choToken)return;

		qLock.lock();
		if(choToken)Que.push_back(b);
		qLock.unlock();
	}
	void addQueDelay(const _DelayedBanchoPacket b) {

		if (b.b.Type == NULL_PACKET || b.Time == 0 || !choToken)return;
		
		qLock.lock();
		if(choToken)dQue.push_back(b);
		qLock.unlock();
	}

	void addQueNonLocking(const _BanchoPacket b) {

		if (b.Type == NULL_PACKET || !choToken)return;
		Que.push_back(b);
	}
	void addQueDelayNonLocking(const _DelayedBanchoPacket b) {

		if (b.b.Type == NULL_PACKET || b.Time == 0 || !choToken)return;
		dQue.push_back(b);
	}

	void doQue(_Con s){

		if (Que.size() == 0 && dQue.size() == 0){
		FORCEPACKET:
			s.SendData(ConstructResponse("HTTP/1.0 200 OK", Empty_Headers, Empty_Byte));
			return;
		}

		std::vector<_HttpHeader> Headers = std::vector<_HttpHeader>();
		std::vector<byte> SendBytes;

		qLock.lock();

		for (DWORD i = 0; i < Que.size(); i++)
			Que[i].GetBytes(SendBytes);

		if (dQue.size() != 0){

			std::sort(dQue.begin(), dQue.end(), SortDelayPacket);
			int cTime = clock();

			for (int i = int(dQue.size()) - 1; i >= 0; i--){
				if (dQue[i].Time == 1){//means do the next bancho frame.
					dQue[i].Time = 0;
					continue;
				}
				if(dQue[i].Time <= cTime){
					dQue[i].b.GetBytes(SendBytes);
					dQue.pop_back();
				}else break;
			}
		}

		Que.clear();
		qLock.unlock();

		if (SendBytes.size() == 0)
			goto FORCEPACKET;

		if (SendToken){
			Headers.push_back(_HttpHeader("cho-token", std::to_string(choToken).c_str()));
			SendToken = 0;
		}

		s.SendData(ConstructResponse("HTTP/1.0 200 OK", Headers, SendBytes));
	}

}; _User User[MAX_USER_COUNT];

void DisconnectUser(_User *u);

std::mutex LoginMutex;

void debug_LogOutUser(_User *p);

_User *GetPlayerSlot(const char *UserName){

	LoginMutex.lock();

	for (DWORD i = 0; i < MAX_USER_COUNT; i++) {

		if (strcmp(UserName, User[i].UserName))continue;

		LoginMutex.unlock();
		return &User[i];
	}

	for (DWORD i = 0; i < MAX_USER_COUNT; i++) {

		if (User[i].choToken)continue;

		User[i].reset();
		LoginMutex.unlock();

		return &User[i];
	}

	LoginMutex.unlock();

	return 0;
}



_User* GetUserFromID(DWORD ID) {

	if (int(ID) <= 0)return 0;

	for (DWORD i = 0; i < MAX_USER_COUNT; i++)
		if (User[i].UserID == ID){

			return &User[i];
		}

	printf("Failed to get userID %i\n", ID);

	return 0;
}
_User* GetUserFromToken(DWORD Token) {

	if (Token == 0)return 0;

	for (DWORD i = 0; i < MAX_USER_COUNT; i++)
		if (User[i].choToken == Token){
			return &User[i];
		}
	
	return 0;
}
_User* GetUserFromName(const std::string &Name, const bool Force = 0){

	if (Name.size() == 0)return 0;

	const char *c = Name.c_str();
	for (DWORD i = 0; i < MAX_USER_COUNT; i++) {
		if (User[i].choToken == 0 && !Force)continue;
		
		if (!strcmp(c, User[i].UserName))
			return &User[i];

	}
	return 0;
}
_User* GetUserFromNameSafe(const std::string &Name, const bool Force = 0) {
	//TODO: fix this

	if (Name.size() == 0)return 0;
	const char *c = Name.c_str();
	for (DWORD i = 0; i < MAX_USER_COUNT; i++) {
		if (User[i].choToken == 0 && !Force)continue;

		if (!strcmp(c, User[i].UserName_Safe))
			return &User[i];

	}
	return 0;
}

DWORD GetIDFromName(std::string Name) {

	if (Name.size() == 0)return 0;

	for (DWORD i = 0; i < MAX_USER_COUNT; i++){
		if (User[i].UserName == Name)
			return User[i].UserID;
	}
	return 0;
}

__inline byte GetUserType(const DWORD Priv){

	if (Priv & Privileges::AdminDev)//dev
		return UserType::Peppy;
	else if (Priv & Privileges::AdminBanUsers)//admin
		return UserType::Friend;
	else if (Priv & (Privileges::AdminChatMod | Privileges::AdminManageBeatmaps | Privileges::AdminQAT))//chat mod
		return UserType::BAT;
	else if (Priv & (Privileges::Premium | Privileges::UserDonor))//supporter/premium
		return UserType::Supporter;

	return UserType::Normal;
}


namespace bPacket {

	__forceinline _BanchoPacket Message(const std::string &senderName, const std::string &targetname, const std::string &message, const int senderId) {

		_BanchoPacket b(OPac::server_sendMessage);

		AddString(b.Data, senderName);
		AddString(b.Data, message);
		AddString(b.Data, targetname);
		AddInt(b.Data, senderId);

		return b;
	}
	__forceinline _BanchoPacket BotMessage(const std::string &Target, const std::string &message, const std::string &Name = BOT_NAME, const DWORD ID = 999) {

		_BanchoPacket b(OPac::server_sendMessage);

		AddString(b.Data, Name);
		AddString(b.Data, message);
		AddString(b.Data, Target);
		AddInt(b.Data, ID);

		return b;
	}
}

#include "Channel.h"

namespace bPacket {

	__forceinline _BanchoPacket Notification(const char *Mes) {

		_BanchoPacket b(OPac::server_notification);

		AddString(b.Data, Mes);

		return b;
	}
	__forceinline _BanchoPacket ChannelInfo(const _Channel* c, const bool AutoJoin) {

		_BanchoPacket b((AutoJoin) ? OPac::server_channelAvailableAutojoin : OPac::server_channelInfo);

		AddString(b.Data, c->ChannelName);
		AddString(b.Data, c->ChannelDesc);
		AddShort(b.Data, c->ChannelCount);

		return b;
	}
	__forceinline _BanchoPacket ChannelInfo(const std::string Name, const std::string Desc, USHORT Count) {

		_BanchoPacket b(OPac::server_channelInfo);

		AddString(b.Data, Name);
		AddString(b.Data, Desc);
		AddShort(b.Data, Count);

		return b;
	}

	__forceinline _BanchoPacket GenericInt32(short ID, const int Value) {

		_BanchoPacket b(ID);

		AddInt(b.Data, Value);

		return b;
	}
	__forceinline _BanchoPacket RawData(short ID, const byte* Value, const DWORD Size) {

		_BanchoPacket b(ID);

		b.Data.resize(Size);

		memcpy(&b.Data[0], Value, Size);

		return b;
	}

	__forceinline _BanchoPacket GenericString(short ID, const std::string &Value) {

		_BanchoPacket b(ID);

		AddString(b.Data, Value);

		return b;
	}

	__forceinline _BanchoPacket GenericInt32List(short ID, const std::vector<int> &Value, const bool BigHeader) {

		_BanchoPacket b(ID);

		if (BigHeader)
			AddInt(b.Data, Value.size());
		else
			AddShort(b.Data, Value.size());

		for (DWORD i = 0; i<Value.size(); i++)
			AddInt(b.Data, Value[i]);

		return b;
	}
	__forceinline _BanchoPacket GenericDWORDList(short ID, const std::vector<DWORD> &Value, const bool BigHeader){

		_BanchoPacket b(ID);

		if (BigHeader)
			AddInt(b.Data, Value.size());
		else
			AddShort(b.Data, Value.size());

		for (DWORD i = 0; i<Value.size(); i++)
			AddInt(b.Data, Value[i]);

		return b;
	}


	__forceinline _BanchoPacket UserPanel(const DWORD UserID, const DWORD AskerID) {

		if (UserID < 1000){
			_BanchoPacket b(OPac::server_userPanel);
			AddInt(b.Data, UserID);

			switch (UserID){
			case 999:
				AddString(b.Data, BOT_NAME);
				break;
			case 998:
				AddString(b.Data, FAKEUSER_NAME);
				break;
			default:
				AddString(b.Data, "Not Set");
				break;
			}

			b.Data.push_back(0);//timezone
			b.Data.push_back(BOT_LOCATION);//country
			b.Data.push_back(UserType::Peppy);//userank
			AddInt(b.Data, 0);//long
			AddInt(b.Data, 0);//lat
			AddInt(b.Data, 0);//gamerank
			return b;
		}

		_User *tP = GetUserFromID(UserID);

		if (!tP || !tP->UserID || (UserID != AskerID && !(tP->privileges & UserPublic)))return erPacket;

		_BanchoPacket b(OPac::server_userPanel);

		AddInt(b.Data, UserID);
		AddString(b.Data, tP->UserName);
		b.Data.push_back(24 + tP->timeOffset);
		b.Data.push_back(tP->country);
		b.Data.push_back((UserID != AskerID) ? GetUserType(tP->privileges) : UserType::Supporter);
		AddInt(b.Data, *(int*)&tP->lon);
		AddInt(b.Data, *(int*)&tP->lat);
		const DWORD sOff = tP->GetStatsOffset();
		AddInt(b.Data, tP->Stats[sOff].getRank(sOff,tP->UserID));

		return b;
	}
	__forceinline _BanchoPacket UserPanel(_User *tP) {

		_BanchoPacket b(OPac::server_userPanel);

		AddInt(b.Data, tP->UserID);
		AddString(b.Data, tP->UserName);
		b.Data.push_back(24 + tP->timeOffset);
		b.Data.push_back(tP->country);
		b.Data.push_back(GetUserType(tP->privileges));
		AddInt(b.Data, *(int*)&tP->lon);
		AddInt(b.Data, *(int*)&tP->lat);
		const DWORD sOff = tP->GetStatsOffset();
		AddInt(b.Data, tP->Stats[sOff].getRank(sOff,tP->UserID));

		return b;
	}

	__forceinline _BanchoPacket UserStats(const DWORD UserID, const DWORD AskerID) {

		if (UserID < 1000){//Hard Coded bot stats

			_BanchoPacket b(OPac::server_userStats);

			AddInt(b.Data, UserID);
			b.Data.push_back(0);//actionID
			AddString(b.Data, "");//actiontext
			AddString(b.Data, "");//md5
			AddInt(b.Data, 0);//mods
			b.Data.push_back(0);//gamemode
			AddInt(b.Data, 0);//beatmapid
			AddLong(b.Data, 0);//rankedscore
			AddInt(b.Data, 0);//acc
			AddInt(b.Data, 0);//playcount
			AddLong(b.Data, 0);//total score
			AddInt(b.Data, 0);//gamerank
			AddShort(b.Data, 0);//pp

			return b;
		}

		_User *tP = GetUserFromID(UserID);
		if (!tP || !tP->choToken || (!(tP->privileges & UserPublic) && UserID != AskerID))return bPacket::GenericInt32(OPac::server_userLogout,UserID);

		_BanchoPacket b(OPac::server_userStats);

		const DWORD Off = tP->GetStatsOffset();

		AddInt(b.Data, UserID);
		b.Data.push_back(tP->actionID);
		AddString(b.Data, tP->ActionText);
		AddString(b.Data, tP->ActionMD5);
		AddInt(b.Data, tP->actionMods);
		b.Data.push_back(tP->GameMode);
		AddInt(b.Data, tP->BeatmapID);
		AddLong(b.Data, tP->Stats[Off].rScore);
		AddInt(b.Data, *(int*)&tP->Stats[Off].Acc);
		AddInt(b.Data, (tP->Stats[Off].pp > USHORT(-1)) ? (tP->Stats[Off].pp) : tP->Stats[Off].PlayCount);
		AddLong(b.Data, tP->Stats[Off].tScore);
		AddInt(b.Data, tP->Stats[Off].getRank(Off,tP->UserID));
		AddShort(b.Data, USHORT(tP->Stats[Off].pp));

		return b;
	}

	__forceinline _BanchoPacket UserStats(_User *tP){

		if (!tP)return erPacket;

		if (!tP->choToken || (!(tP->privileges & UserPublic)))
			return bPacket::GenericInt32(OPac::server_userLogout, tP->UserID);
		
		const DWORD Off = tP->GetStatsOffset();

		_BanchoPacket b(OPac::server_userStats);

		AddInt(b.Data, tP->UserID);
		b.Data.push_back(tP->actionID);
		AddString(b.Data, tP->ActionText);
		AddString(b.Data, tP->ActionMD5);
		AddInt(b.Data, tP->actionMods);
		b.Data.push_back(tP->GameMode);
		AddInt(b.Data, tP->BeatmapID);
		AddLong(b.Data, tP->Stats[Off].rScore);
		AddInt(b.Data, *(int*)&tP->Stats[Off].Acc);
		AddInt(b.Data, (tP->Stats[Off].pp > USHORT(-1)) ? (tP->Stats[Off].pp) : tP->Stats[Off].PlayCount);
		AddLong(b.Data, tP->Stats[Off].tScore);
		AddInt(b.Data, tP->Stats[Off].getRank(Off,tP->UserID));
		AddShort(b.Data, USHORT(tP->Stats[Off].pp));

		return b;
	}


}


void debug_SendOnlineToAll(_User *p) {

	//can pre make and cache the request

	if (!(p->privileges & UserPublic))return;//Do not even care about restricted users for now.

	_BanchoPacket Panel = bPacket::UserPanel(p->UserID, 0);
	_BanchoPacket Stats = bPacket::UserStats(p->UserID, 0);

	for (DWORD i = 0; i < MAX_USER_COUNT; i++) {

		if (!User[i].choToken || &User[i] == p)continue;

		User[i].qLock.lock();

		User[i].addQueNonLocking(Panel);
		User[i].addQueNonLocking(Stats);

		User[i].qLock.unlock();
	}
}

void Event_client_stopSpectating(_User *tP){
	
	tP->addQue(bPacket::GenericString(OPac::server_channelKicked, "#spectator"));

	_User *SpecTarget = tP->CurrentlySpectating;

	if (!SpecTarget)return;

	SpecTarget->SpecLock.lock();

	for (DWORD i = 0; i < SpecTarget->Spectators.size(); i++) {
		if (SpecTarget->Spectators[i] == tP){
			SpecTarget->Spectators[i] = 0;
			break;
		}
	}

	bool AllEmptySpecs = 1;

	const _BanchoPacket b = bPacket::GenericInt32(OPac::server_fellowSpectatorLeft, tP->UserID);

	for (DWORD i = 0; i < SpecTarget->Spectators.size(); i++){

		_User* FellowSpec = SpecTarget->Spectators[i];

		if (FellowSpec){
			AllEmptySpecs = 0;
			FellowSpec->addQue(b);
		}
	}

	if (AllEmptySpecs)SpecTarget->Spectators.clear();

	SpecTarget->SpecLock.unlock();

	SpecTarget->addQue(bPacket::GenericInt32(OPac::server_spectatorLeft, tP->UserID));

	if (AllEmptySpecs)
		SpecTarget->addQue(bPacket::GenericString(OPac::server_channelKicked,"#spectator"));

	tP->CurrentlySpectating = 0;
}

void Event_client_cantSpectate(_User *tP) {

	_User *SpecHost = tP->CurrentlySpectating;

	if (!SpecHost)
		return;

	const _BanchoPacket b = bPacket::GenericInt32(OPac::server_spectatorCantSpectate, tP->UserID);
	SpecHost->SendToSpecs(b, Privileges::UserPublic);
	SpecHost->addQue(b);
}

DWORD COUNT_REQUESTS = 0;
DWORD COUNT_MULTIPLAYER = 0;

void RenderHTMLPage(_Con s, _HttpRes &res) {
	std::vector<_HttpHeader> Headers;
	std::vector<byte> Body;

	std::string Response = //"<iframe src=\"https://classic.minecraft.net\" style=\"position:fixed; top:0; left:0; bottom:0; right:0; width:100%; height:100%; border:none; margin:0; padding:0; overflow:hidden; z-index:999999;\"></iframe>";
		"<HTML><img src=\"https://cdn.discordapp.com/attachments/385279293007200258/567292020104888320/unknown.png\">"
		"<br>ruri uptime : " + std::to_string(double(clock()) / 86400000.) + " days. With " + std::to_string(COUNT_REQUESTS) + " connections handled."
		"<br>"+ std::to_string(COUNT_MULTIPLAYER) + " currently active multiplayer games.";
	Response += "</HTML>";

	AddStringToVector(Body, Response);

	Headers.push_back(_HttpHeader("Content-Type", "text/html; charset=utf-8"));

	s.SendData(ConstructResponse("HTTP/1.0 405 Method Not Allowed", Headers, Body));
}

int GenerateChoToken(){

	DWORD Token = 0;

	byte* TokenPointer = (byte*)&Token;

	TokenPointer[0] = BR::GetRand(0, 255);
	TokenPointer[1] = BR::GetRand(1, 255);//never get that one in 4 billion chance of these all getting 0...
	TokenPointer[2] = BR::GetRand(0, 255);
RETRY:
	TokenPointer[3] = BR::GetRand(0, 255);

	for (DWORD i = 0; i < MAX_USER_COUNT; i++)
		if (Token == User[i].choToken)goto RETRY;

	return Token;
}
__forceinline std::string ReadUleb(size_t &O, const size_t Max) {

	if(O >= Max)return "";

	if (*(byte*)O != 0) {
		O++;
		if (O >= Max)return "";
		byte tB = *(byte*)O; O++;
		int sLength = tB & 0x7F;
		for (int i = 1; tB & 0x80; ++i){
			if (O >= Max)return "";
			tB = *(byte*)O; O++;
			sLength |= (tB & 0x7F) << 7 * i;
		}

		if (size_t(O) + sLength > Max)return "";

		std::string ReturnS(sLength, 0);
		for (int i = 0; i < sLength; i++) {
			ReturnS[i] = *(char*)O; O++;
		}
		return ReturnS;

	}else O++;

	return "";
}

__forceinline void Event_client_channelJoin(_User *tP,const byte* Packet, const DWORD Size){

	if (Size <= 2)
		return;

	size_t O = (size_t)&Packet[0];

	std::string ChannelName = ReadUleb(O,O + Size + 1);


	_Channel *c = GetChannelByName(ChannelName);

	/*if(!c && tP->CurrentlySpectating && ChannelName != "#spectator") {
		tP->addQue(bPacket::GenericString(OPac::server_channelJoinSuccess, ChannelName.c_str()));
		return;
	}*/
	
	if (!c) {
		tP->addQue(bPacket::GenericString(OPac::server_channelKicked, ChannelName.c_str()));
		return;
	}

	c->JoinChannel(tP);

	tP->addQue(bPacket::GenericString(OPac::server_channelJoinSuccess, ChannelName.c_str()));

}
__forceinline void Event_client_channelPart(_User *tP, const byte* Packet, const DWORD Size){

	if (Size <= 2)return;

	size_t O = (size_t)&Packet[0];

	std::string ChannelName = ReadUleb(O,O + Size + 1);

	_Channel *c = GetChannelByName(ChannelName);

	if (!c)return;

	c->PartChannel(tP);
}

__forceinline void Event_client_userStatsRequest(_User *tP, const byte* Packet, const DWORD Size){

	if (Size <= 2)return;

	const USHORT Count = min(*(USHORT*)&Packet[0],64);

	if ((Count << 2) + 2 > Size)return;

	tP->qLock.lock();

	for (DWORD i = 0; i < Count; i++) {

		const DWORD UID = *(DWORD*)&Packet[2 + (i << 2)];

		_BanchoPacket b = bPacket::UserStats(UID,tP->UserID);

		if (b.Type == NULL_PACKET)continue;

		tP->addQueNonLocking(b);

	}
	tP->qLock.unlock();

}
__forceinline void Event_client_changeAction(_User *tP, const byte* Packet, const DWORD Size){
	if (Size < 12)return;

	size_t O = (size_t)&Packet[0];
	size_t End = O + Size + 1;

	byte n_actionID = *(byte*)O; O++;
	std::string n_ActionText = ReadUleb(O, End);
	std::string n_CheckSum = ReadUleb(O, End);
	if (O + 4 > End)return;
	DWORD n_Mods = *(DWORD*)O; O += 4;
	if (O + 1 > End)return;
	byte n_GameMode = *(byte*)O; O++;
	if (O + 4 > End)return;
	int n_BeatmapID = *(int*)O;

	//TODO: Multiplayer
	//TODO: Spectating
	tP->actionID = n_actionID;
	tP->ActionText = n_ActionText;

	PrepareSQLString(n_CheckSum);

	if (n_CheckSum.size() == 32)
		memcpy(tP->ActionMD5, &n_CheckSum[0], 32);
	//else ZeroMemory(tP->ActionMD5, 32);

	tP->actionMods = n_Mods;
	tP->GameMode = n_GameMode;
	if(n_BeatmapID)tP->BeatmapID = n_BeatmapID;

	tP->addQue(bPacket::UserStats(tP));
}


#include "BotCommands.h"
#include "Match.h"


std::string GetOsuPage(std::string Input){

	SOCKET Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	SOCKADDR_IN SockAddr;
	struct hostent *host;
	host = gethostbyname("old.ppy.sh");
	SockAddr.sin_port = htons(80);
	SockAddr.sin_family = AF_INET;
	SockAddr.sin_addr.s_addr = *((unsigned long*)host->h_addr);

	if (connect(Socket, (SOCKADDR*)(&SockAddr), sizeof(SockAddr)) != 0) {
		printf("WARNING: peppy might have blocked our IP\n");
		closesocket(Socket);
		return "";
	}

	Input = "GET /" + Input + " HTTP/1.1\r\nHost: old.ppy.sh\r\nConnection: close\r\n\r\n";

	if (send(Socket, &Input[0], Input.size(), 0) == SOCKET_ERROR) {
		closesocket(Socket);
		return "";
	}

	char buffer[1400];
	int nDataLength;
	std::string Return = "";

	do{
		nDataLength = recv(Socket, buffer, 1400, 0);

		if (nDataLength == SOCKET_ERROR){
			closesocket(Socket);
			return "";
		}

		if (nDataLength){
			Return.resize(Return.size() + nDataLength);
			memcpy(&Return[Return.size() - nDataLength], buffer, nDataLength);
		}

	} while (nDataLength);

	closesocket(Socket);
	return Return;
}

#include <fstream>

__forceinline bool FileExistCheck(const std::string &filename) {
	std::ifstream ifs(filename, std::ios::binary | std::ios::ate);
	if (ifs.is_open()) {
		ifs.close();

		return 1;
	}
	return 0;
}

__forceinline bool WriteAllBytes(const std::string &filename, const std::string &res) {

	std::ofstream ifs;
	ifs.open(filename);

	if (!ifs.is_open())return 0;


	ifs.write((char*)&res[0], res.size());
	ifs.close();

	return 1;
}
__forceinline bool WriteAllBytes(const std::string &filename, const void* data, const DWORD Size){

	std::ofstream ifs;
	ifs.open(filename,std::ofstream::binary);

	if (!ifs.is_open())return 0;
	
	ifs.write((char*)data, Size);
	ifs.close();

	return 1;
}


__forceinline int CharHexToDecimal(const char c){

	if (c >= '0' && c <= '9')
		return c - '0';

	if (c >= 'A' && c <= 'F')
		return 10 + (c - 'A');

	if (c >= 'a' && c <= 'f')
		return 10 + (c - 'a');

	return 0;
}

void UnChunk(std::string &S) {

	if (S.size() == 0)return;
	
	const byte NewLine[] = {'\r','\n'};

	std::string Ret;
	Ret.reserve(S.size());

	DWORD Start = S.find("\r\n\r\n");

	if (Start == std::string::npos)return S.clear();
	
	for (DWORD i = Start + 4; i < S.size(); i++){
		//Read header hex
		Start = i;
		while (*(USHORT*)&S[i] != *(USHORT*)NewLine)
			i++;

		DWORD ChunkSize = 0;

		for (DWORD z = Start; z < i; z++) {
			ChunkSize = ChunkSize << 4;
			ChunkSize += CharHexToDecimal(S[z]);
		}
		if (ChunkSize == 0)break;
		i += 2;

		if (ChunkSize + i > S.size())
			return S.clear();

		//Copy data
		Ret.resize(Ret.size() + ChunkSize);
		memcpy(&Ret[Ret.size() - ChunkSize], &S[i], ChunkSize);

		i += ChunkSize + 1;
	}

	S = std::string();
	S = Ret;
}

int getSetID_fHash(const std::string &H, _SQLCon* c){//Could combine getbeatmapid and getsetid into one

	if (H.size() != 32)
		return 0;

	if (c){
		sql::ResultSet* res = c->ExecuteQuery("SELECT beatmapset_id FROM beatmaps WHERE beatmap_md5 = '" + H + "' LIMIT 1");

		if (res && res->next()) {
			const int ID = res->getInt(1);
			delete res;
			return ID;
		}

		if (res)
			delete res;
	}	

	std::string BeatmapData = GetOsuPage(osu_API_BEATMAP + "h=" + H);
	UnChunk(BeatmapData);

	if (BeatmapData.size() <= 25)return 0;

	DWORD Off = BeatmapData.find("\"beatmapset_id\"");

	if (Off == std::string::npos)return 0;

	Off += 17;

	std::string t;

	while (BeatmapData[Off] != '"') {
		t.push_back(BeatmapData[Off]);
		Off++;
	}

	//TODO add to database
	return Safe_atoi(t.c_str());
}

int getBeatmapID_fHash(std::string &H, _SQLCon* c) {

	if (H.size() != 32)return 0;


	if (c){

		PrepareSQLString(H);

		sql::ResultSet* res = c->ExecuteQuery("SELECT beatmap_id FROM beatmaps WHERE beatmap_md5 = '" + H + "' LIMIT 1");

		if (res && res->next()){
			const int ID = res->getInt(1);
			delete res;
			return ID;
		}
		if (res)
			delete res;

	}

	std::string BeatmapData = GetOsuPage(osu_API_BEATMAP + "h=" + H);
	UnChunk(BeatmapData);

	if (BeatmapData.size() <= 25)return 0;

	DWORD Off = BeatmapData.find("\"beatmap_id\"");

	if (Off == std::string::npos)return 0;

	Off += 14;

	std::string t;

	while (BeatmapData[Off] != '"') {
		t.push_back(BeatmapData[Off]);
		Off++;
	}

	//TODO add to database

	return Safe_atoi(t.c_str());
}

bool DownloadMapFromOsu(const int ID){

	if (ID < 0 || ID > 6000000)
		return 0;

	std::string bFile = GetOsuPage("osu/" + std::to_string(ID));

	UnChunk(bFile);

	if (bFile.size() == 0 || bFile.find("[HitObjects]") == std::string::npos)return 0;

	//ReplaceAll(bFile, "\r\n", "\n");//Could save diskspace

	WriteAllBytes(BEATMAP_PATH + std::to_string(ID) + ".osu",(void*)&bFile[0],bFile.size());

	return 1;
}



#include "oppai.h"

bool OppaiCheckMapDownload(ezpp_t ez, const DWORD BID){

	const std::string MapPath = BEATMAP_PATH + std::to_string(BID) + ".osu";

	if (!FileExistCheck(MapPath) && !DownloadMapFromOsu(BID)) {
		printf(KRED "Failed to download %i.osu\n" KRESET,BID);
		return 0;
	}

	int res = ezpp(ez, (char*)MapPath.c_str());

	if (res < 0){
		printf(KMAG "oppai> " KRED "Failed with errorcode %i\n" KRESET, res);
		return 0;
	}

	return 1;
}



std::string RoundTo2(float Input) {
	Input *= 100;
	Input = round(Input);
	Input /= 100;

	std::string Output = std::to_string(Input);

	Output.resize(Output.find_first_of('.') + 3);

	return Output;
}

void BotMessaged(_User *tP, std::string Message){

	auto BotMessage = Explode(Message, ' ');

	int mapID = 0;
	int Mods = 0;
	float Acc = 0.f;
	int Combo = 0;

	if (BotMessage.size() < 2)
		return;

	if (BotMessage.size() >= 5) {

		if (BotMessage[0] == "\x1""ACTION") {

			const DWORD BeatmapOffset = (BotMessage[2] == "listening") ? 4:3;

			const DWORD mSize = BotMessage[BeatmapOffset].size();

			if(BotMessage[BeatmapOffset].find("/s/") != std::string::npos || mSize < 5)//mSize check is just to make it safe.
				return tP->addQue(bPacket::BotMessage(tP->UserName, "This appears to be a Beatmapset - Which is not currently supported sorry!"));

			char* Temp = new char[mSize]();

			size_t pos = BotMessage[BeatmapOffset].find_last_of('/');

			if (pos != std::string::npos && pos != mSize - 1)
				memcpy(Temp, &BotMessage[BeatmapOffset][pos + 1], mSize - (pos + 1));

			Temp[(mSize > 0) ? mSize - 1 : 0] = 0;//Just incase there is some mallice.

			mapID = Safe_atoi(Temp,1);
			delete[] Temp;
		}

		if (mapID){

			for (DWORD i = BotMessage.size() - 1; i > 5; i--){
				ReplaceAll(BotMessage[i], "\x1", "");
				if (BotMessage[i] == "+DoubleTime"){
					Mods |= DoubleTime;
					continue;
				}
				if (BotMessage[i] == "+Nightcore") {
					Mods |= DoubleTime;
					continue;
				}
				if (BotMessage[i] == "+Hidden") {
					Mods |= Hidden;
					continue;
				}
				if (BotMessage[i] == "+HardRock") {
					Mods |= HardRock;
					continue;
				}
				if (BotMessage[i] == "+Flashlight") {
					Mods |= Flashlight;
					continue;
				}
				if (BotMessage[i] == "-SpunOut") {
					Mods |= SpunOut;
					continue;
				}
				if (BotMessage[i] == "-Easy") {
					Mods |= Easy;
					continue;
				}
				if (BotMessage[i] == "-NoFail") {
					Mods |= NoFail;
					continue;
				}
				if (BotMessage[i] == "-HalfTime") {
					Mods |= HalfTime;
					continue;
				}
				if (BotMessage[i] == "~Relax~") {
					Mods |= Relax;
					continue;
				}

				break;
			}

		}

	}

	if (!mapID){
		if (BotMessage.size() >= 2){

			if (BotMessage[0] == "!mods" || BotMessage[0] == "!acc")
				return tP->addQue(bPacket::BotMessage(tP->UserName, "This is now in !with. Here are some examples of the usage.\n!with HDDT 95\n!with 98.5 HD HR"));

			if (BotMessage[0] == "!with"){

				Mods = 0;
				std::string AllMods;
				for (DWORD i = 1; i < BotMessage.size(); i++){
					AllMods += BotMessage[i];
					if (Acc == 0.f || Combo == 0){
						byte Com = 0;
						std::string tNum;

						for (DWORD z = 0; z < BotMessage[i].size(); z++){
							const char C = BotMessage[i][z];
							if ((C >= '0' && C <= '9'))
								tNum.push_back(BotMessage[i][z]);
							else if (C == '.' && tNum.size() != 0 && Com != 2){
								Com = 2;
								tNum.push_back(BotMessage[i][z]);
							}else if ((C == 'x' || C == 'X') && Com != 2)
								Com = 1;
						}

						if (tNum.size()){
							if (Com == 1)Combo = std::stoi(tNum);
							else Acc = std::stof(tNum);
						}
					}
				}

				for (DWORD i = 0; i < AllMods.size(); i++) {
					const char c = AllMods[i];
					if (c >= 'A' && c <= 'Z')AllMods[i] = c + ('a' - 'A');
				}

				if (AllMods.find("hd") != std::string::npos)
					Mods += Hidden;
				if (AllMods.find("dt") != std::string::npos || BotMessage[1].find("nc") != std::string::npos)
					Mods += DoubleTime;
				if (AllMods.find("fl") != std::string::npos)
					Mods += Flashlight;
				if (AllMods.find("ez") != std::string::npos)
					Mods += Easy;
				if (AllMods.find("ht") != std::string::npos)
					Mods += HalfTime;
				if (AllMods.find("rx") != std::string::npos)
					Mods += Relax;
				if (AllMods.find("so") != std::string::npos)
					Mods += SpunOut;
				if (AllMods.find("hr") != std::string::npos)
					Mods += HardRock;

				mapID = tP->LastSentBeatmap;

				if (!mapID)return;

				goto WITHMODS;
			}
		}
		 return;
	}

WITHMODS:
	int sTime = clock();
	std::string Return;

	ezpp_t ez = ezpp_new();
	if (!ez) {
		Return = "Fatal PP error.";
		goto END;
	}

	ezpp_set_mods(ez, Mods);
	ezpp_set_accuracy_percent(ez, (Acc == 0.f) ? 95.f : Acc);

	if (Combo)ezpp_set_combo(ez, Combo);

	if (!OppaiCheckMapDownload(ez, mapID)){
		Return = "Sorry. I failed to get that map.";
		goto END;
	}

	tP->LastSentBeatmap = mapID;

	const float PP = ezpp_pp(ez);
	
	if (Acc != 0.f || Combo != 0){
		Return = RoundTo2(PP) + "pp";
		goto END;
	}
	Return = "95%: " + RoundTo2(PP);
	ezpp_set_accuracy_percent(ez, 98.f);
	calc(ez);
	Return += " pp\n98%: " + RoundTo2(ezpp_pp(ez));
	ezpp_set_accuracy_percent(ez, 99.f);
	calc(ez);
	Return += " pp\n99%: " + RoundTo2(ezpp_pp(ez));
	ezpp_set_accuracy_percent(ez, 100.f);
	calc(ez);
	Return += " pp\n100%: " + RoundTo2(ezpp_pp(ez)) + " pp";

END:
	ezpp_free(ez);
	tP->addQue(bPacket::BotMessage(tP->UserName, Return));
}

__forceinline void Event_client_sendPrivateMessage(_User *tP, const byte* Packet, const DWORD Size){

	if (Size < 7)return;

	uint64_t O = (uint64_t)&Packet[0];
	uint64_t End = O + Size + 1;

	std::string Sender = ReadUleb(O, End);
	std::string Message = ReadUleb(O, End);
	std::string Target = ReadUleb(O, End);
	if (O + 4 > End)return;
	int ID = *(DWORD*)O;

	if (Message.size() == 0)return;

	if (Target == BOT_NAME)
		return BotMessaged(tP,Message);

	_User* u = GetUserFromName(Target);

	if (!u) {

		DWORD ID = GetIDFromName(Target);//User might be in the cache of the server still.
		if(ID)
			tP->addQue(bPacket::GenericInt32(OPac::server_userLogout, ID));

		return;
	}

	u->addQue(bPacket::Message(tP->UserName, Target.c_str(), Message.c_str(), tP->UserID));

}

__forceinline void Event_client_sendPublicMessage(_User *tP, const byte* Packet, const DWORD Size) {

	if (Size < 7)return;

	uint64_t O = (uint64_t)&Packet[0];
	uint64_t End = O + Size + 1;

	std::string Sender = ReadUleb(O, End);
	std::string Message = ReadUleb(O, End);
	std::string Target = ReadUleb(O, End);
	if (O + 4 > End)return;
	int ID = *(DWORD*)O;

	if (Message.size() == 0 || Target == "#highlight" || Target == "#userlog")return;

	_Channel *c = 0;
	
	if (Target == "#multiplayer"){
		USHORT MultiID = tP->CurrentMatchID;
		if (MultiID){
			_Match *m = getMatchFromID(MultiID);
			if (m){
				DWORD C = 0;
				std::string s = ProcessCommandMultiPlayer(tP, Message,C, m);

				if (s.size() == 0){
					m->Lock.lock();
					m->sendUpdate(bPacket::Message(tP->UserName, Target.c_str(), Message.c_str(), tP->UserID), tP);
					m->Lock.unlock();
				}else{

					if (C)
						tP->addQue(bPacket::BotMessage("#multiplayer", s.c_str()));
					else{
						m->Lock.lock();
						m->sendUpdate(bPacket::BotMessage("#multiplayer", s.c_str()), 0);
						m->Lock.unlock();
					}

				}
			}
		}
		return;
	}else if ((tP->CurrentlySpectating || tP->Spectators.size()) && Target == "#spectator"){

		_User *SpecHost = (tP->Spectators.size()) ? tP : tP->CurrentlySpectating;

		const _BanchoPacket b = bPacket::Message(tP->UserName, Target.c_str(), Message.c_str(), tP->UserID);

		if (SpecHost){

			SpecHost->SpecLock.lock();

			for (DWORD i = 0; i < SpecHost->Spectators.size(); i++) {

				_User *s = SpecHost->Spectators[i];

				if (s && s != tP)
					s->addQue(b);

			}
			if (SpecHost != tP)
				SpecHost->addQue(b);

			SpecHost->SpecLock.unlock();
		}

		return;
	}else c = GetChannelByName(Target);

	if (!c){
		printf("Failed to find channel with the name %s\n",Target.c_str());
		tP->addQue(bPacket::GenericString(OPac::server_channelKicked, Target.c_str()));
		return;
	}

	if (Message[0] == '!'){

		DWORD SendSelf = 0;
		std::string Res = ProcessCommand(tP, Message, SendSelf);

		if (Res.size()){
			if (SendSelf){
				tP->addQue(bPacket::BotMessage(c->ChannelName.c_str(), Res.c_str()));
			}else c->Bot_SendMessage(BOT_NAME, 999, Res);
		}

		return;
	}

	const _BanchoPacket b = bPacket::Message(tP->UserName, Target.c_str(), Message.c_str(), tP->UserID);

	c->SendPublicMessage(tP, b);
}

__forceinline void Event_client_startSpectating(_User *tP, const byte* Packet, const DWORD Size){

	if (Size < 4)return;

	DWORD ID = *(DWORD*)&Packet[0];

	if (ID < 1000){
		tP->addQue(bPacket::Notification("What are you doing spectating bots?"));
		return;
	}

	_User *SpecTarget = GetUserFromID(ID);

	if (!SpecTarget || tP == SpecTarget){
		tP->addQue(bPacket::Notification("Failed to find user."));
		return;
	}

	bool Add = (tP->CurrentlySpectating != SpecTarget);

	tP->CurrentlySpectating = SpecTarget;

	tP->addQue(bPacket::GenericString(OPac::server_channelJoinSuccess,"#spectator"));

	const _BanchoPacket b = bPacket::GenericInt32(OPac::server_fellowSpectatorJoined, tP->UserID);
	
	SpecTarget->SpecLock.lock();

	if(SpecTarget->Spectators.size() == 0)
		SpecTarget->addQue(bPacket::GenericString(OPac::server_channelJoinSuccess, "#spectator"));

	for (DWORD i = 0; i < SpecTarget->Spectators.size(); i++){

		_User* fSpec = SpecTarget->Spectators[i];

		if (fSpec && fSpec != tP){
			fSpec->addQue(b);
			tP->addQue(bPacket::GenericInt32(OPac::server_fellowSpectatorJoined, fSpec->UserID));
		}
		if (!fSpec && Add) {
			Add = 0;
			SpecTarget->Spectators[i] = tP;
		}
	}

	if (Add)SpecTarget->Spectators.push_back(tP);
	
	SpecTarget->SpecLock.unlock();	

	SpecTarget->qLock.lock();

	SpecTarget->addQueNonLocking(bPacket::UserPanel(tP));
	SpecTarget->addQueNonLocking(bPacket::UserStats(tP));
	SpecTarget->addQueNonLocking(bPacket::GenericInt32(OPac::server_spectatorJoined, tP->UserID));

	SpecTarget->qLock.unlock();

}


struct _ReplayFrame {
	int time;
	float x, y;
	byte ButtonState;
	byte bt;
};

__forceinline void Event_client_spectateFrames(_User *tP, const byte* Packet, const DWORD Size){

	/*if (tP->SuspectedCheater){

		DWORD O = (DWORD)&Packet[0];

		DWORD Extra = *(DWORD*)O; O += 4;

		USHORT frameCount = *(USHORT*)O; O += 2;

		_ReplayFrame *Frames = new _ReplayFrame[frameCount];
		for (USHORT i = 0; i < frameCount; i++){
			Frames[i].ButtonState = *(byte*)O; O++;
			Frames[i].bt = *(byte*)O; O++;
			Frames[i].x = *(float*)O; O+=4;
			Frames[i].y = *(float*)O; O+=4;
			Frames[i].time = *(int*)O; O+=4;
		}
		byte Action = *(byte*)O;

		if (!Action && frameCount > 25 && Frames[0].time > 5000){
			if (tP->LastReplayBundleTime){

				tP->qLock.lock();

				int TotalDelta = 0;
				for (USHORT i = 1; i < frameCount; i++)
					TotalDelta += Frames[i].time - Frames[i - 1].time;

				const int Delta = clock() - tP->LastReplayBundleTime;

				tP->TotalDelta += TotalDelta;
				//tP->Delta += Delta;

				double TimeWarp = double(tP->TotalDelta) / double(Delta);

				std::string Mes = std::to_string(TimeWarp) + "	|" + std::to_string(tP->TotalDelta) + "-" + std::to_string(Delta);

				printf("%s\n", Mes.c_str());
				
				tP->qLock.unlock();
			}else{
				tP->LastReplayBundleTime = clock();
				tP->TotalDelta = 0;
				tP->Delta = 0;

			}
		}else{
			tP->TotalDelta = 0;
			tP->Delta = 0;

			tP->LastReplayBundleTime = 0;
		}

		delete[] Frames;
	}*/

	if (tP->Spectators.size() == 0)return;

	_BanchoPacket b = bPacket::RawData(OPac::server_spectateFrames, Packet, Size);
	_BanchoPacket u = bPacket::UserStats(tP);

	tP->SpecLock.lock();
	for (DWORD i = 0; i < tP->Spectators.size(); i++){

		_User *s = tP->Spectators[i];

		if (!s)continue;

		s->qLock.lock();

		s->addQueNonLocking(u);
		s->addQueNonLocking(b);

		s->qLock.unlock();
	}
	tP->SpecLock.unlock();
}

__forceinline void ReadMatchData(_Match *m, const byte* Packet,const DWORD Size, bool Safe = 0){

	uint64_t O = (uint64_t)&Packet[0];
	uint64_t End = O + Size + 1;

	/*m->MatchId = *(USHORT*)O;*/ O += 2;
	/*m->inProgress = *(byte*)O;*/ O++;

	if (O + 1 > End)return;
	m->Settings.MatchType = *(byte*)O; O++;
	if (O + 4 > End)return;
	m->Settings.Mods = *(DWORD*)O; O += 4;
	m->Settings.Name = ReadUleb(O,End);
	if (!Safe){
		m->Settings.Password = ReadUleb(O,End);
		ReplaceAll(m->Settings.Password," ","_");
	}
	else ReadUleb(O,End);
	m->Settings.BeatmapName = ReadUleb(O,End);
	if (O + 4 > End)return;
	m->Settings.BeatmapID = *(DWORD*)O; O += 4;
	m->Settings.BeatmapChecksum = ReadUleb(O,End);

	byte tSlotStatus[NORMALMATCH_MAX_COUNT];
	byte tSlotTeam[NORMALMATCH_MAX_COUNT];
	if (O + NORMALMATCH_MAX_COUNT > End)return;
	if (!Safe)memcpy(tSlotStatus, (void*)O, NORMALMATCH_MAX_COUNT); O += NORMALMATCH_MAX_COUNT;
	if (O + NORMALMATCH_MAX_COUNT > End)return;
	if (!Safe)memcpy(tSlotTeam, (void*)O, NORMALMATCH_MAX_COUNT); O += NORMALMATCH_MAX_COUNT;
	if (!Safe)m->HostID = *(DWORD*)O; O += 4;
	
	if (!Safe){
		for (DWORD i = 0; i < NORMALMATCH_MAX_COUNT; i++) {
			m->Slot[i].SlotStatus = tSlotStatus[i];
			m->Slot[i].SlotTeam = tSlotTeam[i];
		}
	}

	for (DWORD i = 0; i < NORMALMATCH_MAX_COUNT; i++){
		if (m->Slot[i].SlotStatus & SlotStatus::HasPlayer) {
			/*m->SlotID[i] = *(DWORD*)O;*/ O += 4;
		}
	}
	if (O + 4 > End)return;
	m->Settings.PlayMode = *(byte*)O; O++;
	m->Settings.ScoringType = *(byte*)O; O++;
	m->Settings.TeamType = *(byte*)O; O++;
	m->Settings.FreeMod = *(byte*)O; O++;

	if (m->Settings.FreeMod){
		if (O + (NORMALMATCH_MAX_COUNT * 4) > End)return;
		int tCurrentMods[NORMALMATCH_MAX_COUNT];
		memcpy(tCurrentMods, (void*)O, NORMALMATCH_MAX_COUNT * 4);

		for (DWORD i = 0; i < NORMALMATCH_MAX_COUNT; i++)
			m->Slot[i].CurrentMods = tCurrentMods[i];		

		O += NORMALMATCH_MAX_COUNT * 4;
	}
	if (O + 4 > End)return;
	m->Seed = *(DWORD*)O;
}

__forceinline void Event_client_createMatch(_User *tP, const byte* Packet, const DWORD Size) {

	if (tP->CurrentMatchID){//already in a match?
		//Might want to kick them from the old one
		tP->addQue(_BanchoPacket(OPac::server_matchJoinFail));
		return;
	}
	_Match *m = getEmptyMatch();

	if(!m)return tP->addQue(_BanchoPacket(OPac::server_matchJoinFail));

	tP->inLobby = 0;

	ReadMatchData(m, Packet,Size);
	m->HostID = tP->UserID;
	m->inProgress = 0;
	m->PlayersLoading = 0;
	m->Settings.Mods = 0;
	m->PlayerCount = 1;
	m->Slot[0].SlotStatus = SlotStatus::NotReady;
	m->Slot[0].User = tP;
	tP->CurrentMatchID = m->MatchId;
	m->Tournament = 0;


	tP->qLock.lock();
	tP->addQueNonLocking(bPacket::GenericString(OPac::server_channelJoinSuccess,"#multiplayer"));
	tP->addQueNonLocking(bPacket::bMatch(OPac::server_matchJoinSuccess,m,1));
	tP->qLock.unlock();
}

__forceinline void SendMatchList(_User *tP, const bool New) {

	if(!tP->inLobby)return;


	for (DWORD i = 0; i < MAX_MULTI_COUNT; i++){

		if (Match[i].PlayerCount && !Match[i].Tournament)
			if (Match[i].LobbyCache.Type == 0) {//TODO might want to improve this. Could cause pipeline issues.
				Match[i].Lock.lock();
				tP->addQue(bPacket::bMatch((New) ? OPac::server_newMatch : OPac::server_updateMatch, &Match[i], 0));
				Match[i].Lock.unlock();
			} else tP->addQue(Match[i].LobbyCache);
	}
}

__forceinline void Event_client_partMatch(_User *tP){
	if (!tP->CurrentMatchID)return;
	_Match *m = getMatchFromID(tP->CurrentMatchID);
	if (!m)return;
	m->Lock.lock();
	m->removeUser(tP, 0);
	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));
	m->Lock.unlock();
}

__forceinline void Event_client_matchChangeSlot(_User *tP, const byte* Packet, const DWORD Size) {


	if (Size < 4)return;

	if (!tP->CurrentMatchID)return;//not in a match currently

	DWORD NewSlot = *(DWORD*)&Packet[0];

	if (NewSlot >= 16)NewSlot = 15;

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;
	
	m->Lock.lock();

	DWORD OldSlot = 16;

	for (DWORD i = 0; i < 16; i++) {

		if (m->Slot[i].User == tP) {
			OldSlot = i;
			break;
		}
	}
	
	if (OldSlot != 16 && OldSlot != NewSlot && !(m->Slot[NewSlot].SlotStatus & SlotStatus::Locked)&& !(m->Slot[OldSlot].SlotStatus & SlotStatus::Ready) && !m->Slot[NewSlot].User){

		m->Slot[NewSlot] = m->Slot[OldSlot];
		m->Slot[OldSlot] = _Slot();
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch,m,1));
	m->Lock.unlock();

}

__forceinline void Event_client_joinLobby(_User *tP){

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (m){
		m->Lock.lock();
		m->removeUser(tP, 0);
		m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));//tell the other people that they left.
		m->Lock.unlock();
	}

	if (!tP->inLobby){
		//chan_Lobby.JoinChannel(tP);
		tP->inLobby = 1;
	}
}

__forceinline void Event_client_matchChangeSettings(_User *tP, const byte* Packet, const DWORD Size){

	if (!tP->CurrentMatchID)return;

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	if (m->HostID != tP->UserID){//Non host trying to change settings
		m->Lock.unlock();
		return;
	}

	byte PreviousFree = m->Settings.FreeMod;
	int PreviousBeatmapID = m->Settings.BeatmapID;
	int PreviousMods = m->Settings.Mods;

	byte pMatchType = m->Settings.MatchType;
	byte pScoringType = m->Settings.ScoringType;
	byte pTeamType = m->Settings.TeamType;

	ReadMatchData(m, Packet,Size, 1);

	bool unReadyUsers = (PreviousMods != m->Settings.Mods || pMatchType != m->Settings.MatchType || pScoringType != m->Settings.ScoringType || pTeamType != m->Settings.TeamType);

	if (PreviousFree != m->Settings.FreeMod){

		const DWORD TimeMods = m->Settings.Mods & TimeAltering;
		const DWORD NonTimeMods = m->Settings.Mods - TimeMods;

		if (m->Settings.FreeMod){
			for (DWORD i = 0; i < 16; i++){
				if (m->Slot[i].User)m->Slot[i].CurrentMods = NonTimeMods;
				else m->Slot[i].CurrentMods = 0;
			}
			m->Settings.Mods = TimeMods;
		}
		else {
			for (DWORD i = 0; i < 16; i++) {
				if (m->Slot[i].User == tP)
					m->Settings.Mods = m->Slot[i].CurrentMods + TimeMods;
				
				m->Slot[i].CurrentMods = 0;
			}
		}
		unReadyUsers = 1;
	}

	if (PreviousBeatmapID != m->Settings.BeatmapID) {
		unReadyUsers = 1;

		if (m->Settings.BeatmapID != -1){

			m->sendUpdate(bPacket::BotMessage("#multiplayer",
				"\nDirect is still being worked on\n(Akatsuki)[https://akatsuki.pw/d/" + std::to_string(m->Settings.BeatmapID) + "]   (Bloodcat)[https://bloodcat.com/osu?q=" + std::to_string(m->Settings.BeatmapID) + "]\n"
				,FAKEUSER_NAME));
		}
	}

	if (unReadyUsers){
		m->ClearPlaying();
		m->UnreadyUsers();
	}


	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchLock(_User *tP, const byte* Packet, const DWORD Size){

	if (Size != 4)return;

	DWORD SlotID = *(DWORD*)&Packet[0];

	if (SlotID >= 16)return;

	if (!tP->CurrentMatchID)return;
	
	_Match *m = getMatchFromID(tP->CurrentMatchID);
	if (!m)return;

	m->Lock.lock();

	if (m->HostID != tP->UserID){//Non host trying to change settings
		m->Lock.unlock();
		return;
	}

	if (m->Slot[SlotID].SlotStatus & SlotStatus::HasPlayer) {
		if(m->Slot[SlotID].User != tP)
			m->removeUser(m->Slot[SlotID].User, 1);
	}else m->Slot[SlotID].SlotStatus = (m->Slot[SlotID].SlotStatus & SlotStatus::Open) ? SlotStatus::Locked : SlotStatus::Open;

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchChangeMods(_User *tP, const byte* Packet, const DWORD Size){

	if (Size != 4)return;

	if (!tP->CurrentMatchID)return;

	_Match *m = getMatchFromID(tP->CurrentMatchID);
	if (!m)return;

	DWORD Mods = *(DWORD*)&Packet[0];

	m->Lock.lock();

	const bool isHost = (m->HostID == tP->UserID);

	if (!m->Settings.FreeMod) {

		if (!isHost){
			m->Lock.unlock();
			return;
		}

		m->Settings.Mods = Mods;
	}else{

		int SlotID = -1;

		for (int i = 0; i < NORMALMATCH_MAX_COUNT; i++){
			if (m->Slot[i].User == tP) {
				SlotID = i;
				break;
			}
		}

		if (SlotID != -1){

			if(isHost)
				m->Settings.Mods = Mods & TimeAltering;

			Mods -= Mods & TimeAltering;
			m->Slot[SlotID].CurrentMods = Mods;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));
	m->Lock.unlock();
}

__forceinline void Event_client_joinMatch(_User *tP, const byte* Packet, const DWORD Size) {

	uint64_t O = (uint64_t)&Packet[0];
	uint64_t End = O + Size + 1;
	
	if (O + 4 > End)return;
	USHORT MatchID = USHORT(*(DWORD*)O); O += 4;
	std::string Password = ReadUleb(O,End);

	if (!MatchID){//Clickable menu hack

		if (Password.size() == 0 || !tP->Menu.State)
			return tP->addQue(_BanchoPacket(OPac::server_matchJoinFail));;
		
		auto menuCommands = Explode(Password, '|');

		bool Auth = 0;


		for (DWORD i = 0; i < menuCommands.size(); i++) {

			if(menuCommands[i] == "next")
				tP->Menu.ChangePage = 1;
			else if (menuCommands[i] == "back") {
				tP->Menu.ChangePage = -1;
			}
			else if (menuCommands[i] == "exit") {
				tP->Menu.State = 0;
				tP->Menu.ChangePage = 0;
			}
			else if (StringCompareStart(menuCommands[i], "iaux1=")) {
				auto s = Explode(menuCommands[i], '=');
				if (s.size() == 2)tP->Menu.aux1 = Safe_atoi(s[1].c_str());
			}
			else if (StringCompareStart(menuCommands[i], "saux1=")) {
				auto s = Explode(menuCommands[i], '=');
				if (s.size() == 2)tP->Menu.saux1 = s[1];
			}

		}
		tP->Menu.ForceReDraw = 1;

		return tP->addQue(_BanchoPacket(OPac::server_matchJoinFail));;
	}


	_Match *m = getMatchFromID(MatchID);

	bool Failed = 1;

	if (m){

		m->Lock.lock();

		if (m->Settings.Password.size() == 0 || m->Settings.Password == Password && m->PlayerCount){//Dont let players join empty matchs.

			for (DWORD i = 0; i < 16; i++){

				if (m->Slot[i].SlotStatus == SlotStatus::Open && !m->Slot[i].User){

					m->Slot[i].User = tP;
					m->Slot[i].SlotStatus = SlotStatus::NotReady;
					m->Slot[i].CurrentMods = 0;
					m->Slot[i].Completed = 0;
					m->Slot[i].Failed = 0;
					m->Slot[i].Loaded = 0;
					m->Slot[i].Skipped = 0;

					tP->qLock.lock();

					tP->CurrentMatchID = m->MatchId;

					tP->addQueNonLocking(bPacket::GenericString(OPac::server_channelJoinSuccess, "#multiplayer"));
					//tP->addQueNonLocking(bPacket::GenericString(OPac::server_channelKicked, "#lobby"));
					/*if (m->PlayerCount == 0) {
						m->HostID = tP->UserID;
						tP->addQueNonLocking(bPacket::bMatch(OPac::server_matchJoinSuccess, m, 1));
						tP->addQueNonLocking(_BanchoPacket(OPac::server_matchTransferHost));
					}else*/
					tP->addQueNonLocking(bPacket::bMatch(OPac::server_matchJoinSuccess, m, 1));

					tP->qLock.unlock();

					m->PlayerCount++;

					m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1),tP);
					Failed = 0;
					break;
				}
			}
		}	
		m->Lock.unlock();
	}
	else tP->addQueNonLocking(bPacket::GenericInt32(OPac::server_disposeMatch, MatchID));// could be a disbanded match - send this to clear it out.

	

	if (Failed)
		tP->addQue(_BanchoPacket(OPac::server_matchJoinFail));
	else tP->inLobby = 0;
}

__forceinline void Event_client_matchChangeTeam(_User *tP) {

	if (!tP->CurrentMatchID)return;
	
	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++) {

		if (m->Slot[i].User == tP) {
			m->Slot[i].SlotTeam = !m->Slot[i].SlotTeam;
			break;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchNoBeatmap(_User *tP) {

	if (!tP->CurrentMatchID)return;

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			m->Slot[i].SlotStatus = SlotStatus::NoMap;
			break;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchHasBeatmap(_User *tP){

	if (!tP->CurrentMatchID)return;

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			if(m->Slot[i].SlotStatus = SlotStatus::NoMap)
				m->Slot[i].SlotStatus = SlotStatus::NotReady;
			break;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchTransferHost(_User *tP, const byte* Packet, const DWORD Size){

	if (Size != 4)return;

	DWORD SlotID = *(DWORD*)&Packet[0];

	if (SlotID >= 16)return;

	if (!tP->CurrentMatchID)return;

	_Match *m = getMatchFromID(tP->CurrentMatchID);
	if (!m)return;

	m->Lock.lock();

	if (m->HostID != tP->UserID || !m->Slot[SlotID].User|| !m->Slot[SlotID].User->choToken) {//Non host trying to set the host..
		m->Lock.unlock();
		return;
	}

	m->HostID = m->Slot[SlotID].User->UserID;

	m->Slot[SlotID].User->addQue(_BanchoPacket(OPac::server_matchTransferHost));

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchReady(_User *tP) {

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++) {

		if (m->Slot[i].User == tP) {

			m->Slot[i].SlotStatus = SlotStatus::Ready;

			break;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchNotReady(_User *tP){

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++) {

		if (m->Slot[i].User == tP) {

			m->Slot[i].SlotStatus = SlotStatus::NotReady;

			break;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchStart(_User *tP) {

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	if (m->HostID != tP->UserID || m->Settings.BeatmapID == -1) {
		m->Lock.unlock();
		return;
	}
	
	m->ClearPlaying();

	for (DWORD i = 0; i < 16; i++){

		if (m->Slot[i].SlotStatus == SlotStatus::Ready || m->Slot[i].SlotStatus == SlotStatus::NotReady) {
			m->Slot[i].SlotStatus = SlotStatus::Playing;
			m->Slot[i].Loaded = 0;
			m->Slot[i].Failed = 0;
			m->Slot[i].Skipped = 0;
			m->Slot[i].Completed = 0;
		}
	}

	m->sendUpdate(bPacket::bMatch(OPac::server_matchStart, m, 1));

	m->Lock.unlock();
}

__forceinline void Event_client_matchLoadComplete(_User *tP) {

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){

		if (m->Slot[i].User == tP){

			m->Slot[i].Loaded = 1;
			break;
		}
	}

	bool AllLoaded = 1;

	for (DWORD i = 0; i < 16; i++) {
		if (m->Slot[i].SlotStatus == SlotStatus::Playing && m->Slot[i].Loaded == 0){
			AllLoaded = 0;
			break;
		}
	}

	if (AllLoaded){

		const std::vector<_BanchoPacket> b = { _BanchoPacket(OPac::server_matchAllPlayersLoaded),bPacket::bMatch(OPac::server_updateMatch, m, 1) };
		m->sendUpdates(b);
		//m->sendUpdate(_BanchoPacket(OPac::server_matchAllPlayersLoaded));
		//m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));
	}

	m->Lock.unlock();
}

__forceinline void event_client_matchScoreUpdate(_User *tP, const byte* Packet, const DWORD Size){

	if (Size < 10)return;
	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	_BanchoPacket b(OPac::server_matchScoreUpdate);
	AddMem(b.Data, Packet, Size);

	m->Lock.lock();

	byte Slot = 0;

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			Slot = i;
			break;
		}
	}
	
	b.Data[4] = Slot;

	m->sendUpdate(b);

	m->Lock.unlock();
}

__forceinline void Event_client_matchComplete(_User *tP) {

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			m->Slot[i].Completed = 1;
		}
	}

	bool AllFinished = 1;

	for (DWORD i = 0; i < 16; i++) {
		if (m->Slot[i].SlotStatus == SlotStatus::Playing && m->Slot[i].Loaded == 0){
			AllFinished = 0;
			break;
		}
	}

	if (AllFinished){

		m->ClearPlaying();

		const std::vector<_BanchoPacket> b = {
			_BanchoPacket(OPac::server_matchComplete),
			bPacket::bMatch(OPac::server_updateMatch, m, 1)
		};

		m->sendUpdates(b);
	}

	m->Lock.unlock();
}

__forceinline void Event_client_matchFailed(_User *tP) {

	if (!tP->CurrentMatchID)return;//not in a match currently

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			m->sendUpdate(bPacket::GenericInt32(OPac::server_matchPlayerFailed,i));
			break;
		}
	}	

	m->Lock.unlock();
}

__forceinline void Event_client_matchSkipRequest(_User* tP) {
	const USHORT MID = tP->CurrentMatchID;
	if (!MID)return;//not in a match currently

	_Match *m = getMatchFromID(MID);
	if (!m)return;

	m->Lock.lock();

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].User == tP){
			m->Slot[i].Skipped = 1;
			m->sendUpdate(bPacket::GenericInt32(OPac::server_matchPlayerSkipped, i));
			break;
		}
	}

	bool AllPlayersSkipped = 1;

	for (DWORD i = 0; i < 16; i++){
		if (m->Slot[i].SlotStatus == SlotStatus::Playing && !m->Slot[i].Skipped) {
			AllPlayersSkipped = 0;
			break;
		}
	}

	if(AllPlayersSkipped)
		m->sendUpdate(_BanchoPacket(OPac::server_matchSkip));

	m->Lock.unlock();
}

__forceinline void Event_client_invite(_User *tP, const byte* Packet, const DWORD Size){

	if (Size != 4);

	_Match *m = getMatchFromID(tP->CurrentMatchID);

	if (!m)return;//not in a match currently

	const DWORD TID = *(DWORD*)&Packet[0];

	if (TID < 1000)
		return tP->addQue(bPacket::BotMessage("#multiplayer", "Why would a bot want to join your match? You dirty shaved monkey."));;

	_User* Target = GetUserFromID(TID);

	if (!Target){
		tP->addQue(bPacket::BotMessage("#multiplayer", "Could not find player."));
		return;
	}

	const std::string FromName(tP->UserName);
	const std::string ToName(Target->UserName);

	tP->addQue(bPacket::BotMessage("#multiplayer", "Invited " + ToName + " to your match."));

	_BanchoPacket b = bPacket::Message(FromName,ToName,"I have invited you to the multiplayer lobby \"[osump://" + std::to_string(m->MatchId) + "/" + m->Settings.Password +" " + m->Settings.Name + "]\".",tP->UserID);
	//Users could fuck with the client [] url construction but its not dangerous in anyway so who cares.

	b.Type = OPac::server_invite;

	Target->addQue(b);
}

__forceinline void PacketLengthWrong(const USHORT Type, const DWORD Size){
	printf("Packet ID %i was wrong length %i\n", Type, Size);
}


__forceinline void debug_LogOutUser(_User *tP){

	const DWORD UID = tP->UserID;

	DisconnectUser(tP);

	if (!UID)return;

	const _BanchoPacket b = bPacket::GenericInt32(OPac::server_userLogout, UID);

	for(DWORD i = 0; i < MAX_USER_COUNT; i++){
		if (!User[i].choToken)continue;
		User[i].addQue(b);
	}
}

#define BANCHO_THREAD_COUNT 4
_SQLCon SQL_BanchoThread[BANCHO_THREAD_COUNT];

void IngameMenu(_User* u, _Con s){

	if (!u->Menu.State || !u->choToken)return;

	std::string Res;

	if (u->Menu.State == MenuStates::Menu_ChooseScore) {


		if (u->Menu.aux1) {
			const int ID = u->Menu.aux1;
			std::string bMD5 = u->Menu.saux1;
			u->Menu.aux1 = 0;
			u->Menu.saux1.clear();

			PrepareSQLString(bMD5);

			SQL_BanchoThread[s.ID].ExecuteUPDATE("UPDATE scores SET completed = 2 WHERE userid = " + std::to_string(u->UserID) + " AND beatmap_md5 = '" + bMD5 + "' AND completed = 3 LIMIT 1");//TODO see if i can just slap a ; and do two in one
			SQL_BanchoThread[s.ID].ExecuteUPDATE("UPDATE scores SET completed = 3 WHERE id = " + std::to_string(ID) + " AND userid = " + std::to_string(u->UserID) + " LIMIT 1");

		}

		DWORD BID = u->BeatmapID;

		if (BID && (u->Menu.ForceReDraw || BID != u->Menu.PreviousMap)) {
			//TODO add relax
			const std::string bMD5 = std::string(u->ActionMD5);

			sql::ResultSet *res = SQL_BanchoThread[s.ID].ExecuteQuery("SELECT id,score,max_combo,mods,accuracy,pp,completed FROM scores WHERE userid = "
				+ std::to_string(u->UserID) + " AND beatmap_md5 = '" + bMD5 + "' AND completed = 2 ORDER BY pp DESC");

			DWORD Count = 0;
			Res += "This will also affect your total pp.\n";

			while (res && res->next()) {
				if (Count > 8)break;
				
				Res += MenuClickButton("iaux1=" + res->getString(1) + "|saux1=" + bMD5, "[Set as Top]");

				Res += "   Score: " + res->getString(2) + " | Acc: " + RoundTo2(res->getDouble(5)) + " | pp: " + RoundTo2(res->getDouble(6)) + "\n";

				Count++;
			}
			delete res;
			u->Menu.PreviousMap = BID;

			if (Count == 0)
				Res += "You do not appear to have any scores on this map\n";

			Res += MenuClickButton("exit", "Exit Menu");
		}
	}
	if (u->Menu.ForceReDraw)Res += " ";
	u->Menu.ForceReDraw = 0;
	if (Res.size()){
		if (!u->Menu.BanchoLoaded) {
			u->Menu.BanchoLoaded = 1;
			u->addQueNonLocking(bPacket::UserPanel(998, 0));
			u->addQueNonLocking(bPacket::UserStats(998, 0));
		}else u->addQue(bPacket::GenericInt32(94, 998));

		u->addQueDelay(_DelayedBanchoPacket(1, bPacket::BotMessage(u->UserName, Res,FAKEUSER_NAME, 998)));
	}

}

void DoBanchoPacket(_Con s,const int choToken,std::vector<byte> &PacketBundle){

	_User *tP = GetUserFromToken(choToken);

	if (!tP || !tP->UserID){//No user online with that token
		
		_BanchoPacket rC(OPac::server_restart);
		AddInt(rC.Data, 1);//Restart Time

		s.SendData(ConstructResponse("HTTP/1.0 200 OK", Empty_Headers, rC.GetBytes()));
		printf("Request relogin\n");
		return;
	}

	tP->LastPacketTime = clock();

	DWORD In = 0;

	while (In <= PacketBundle.size() - 7){

		const USHORT PacketID = *(USHORT*)&PacketBundle[In]; In += 3;
		const DWORD PacketSize = *(DWORD*)&PacketBundle[In]; In += 4;

		if (In + PacketSize > PacketBundle.size()) {
			printf("%s> PACKET OUT OF RANGE\n	%i|%i|%i\n", tP->UserName, PacketID, (In + PacketSize), PacketBundle.size());
			tP->doQue(s);
			return;
		}

		const byte* Packet = (byte*)&PacketBundle[In];
		In += PacketSize;

		switch (PacketID){

		case OPac::client_pong:
			break;

		case OPac::client_requestStatusUpdate:
			tP->addQue(bPacket::UserStats(tP));
			break;

		case OPac::client_changeAction:
			Event_client_changeAction(tP, Packet, PacketSize);
			break;

		case OPac::client_userStatsRequest:
			Event_client_userStatsRequest(tP, Packet, PacketSize);
			break;

		case OPac::client_channelJoin:
			Event_client_channelJoin(tP, Packet, PacketSize);
			break;

		case OPac::client_channelPart:
			Event_client_channelPart(tP, Packet, PacketSize);
			break;

		case::OPac::client_sendPublicMessage:
			Event_client_sendPublicMessage(tP, Packet, PacketSize);
			break;

		case OPac::client_sendPrivateMessage:
			Event_client_sendPrivateMessage(tP, Packet, PacketSize);
			break;

		case OPac::client_logout:
			if (tP->LoginTime + 5000 > clock())break;
			debug_LogOutUser(tP);
			break;

		case OPac::client_startSpectating:
			Event_client_startSpectating(tP, Packet, PacketSize);
			break;

		case OPac::client_stopSpectating:
			Event_client_stopSpectating(tP);
			break;
		case OPac::client_cantSpectate:
			if (PacketSize != 0)PacketLengthWrong(PacketID, PacketSize);
			Event_client_cantSpectate(tP);
			break;

		case OPac::client_spectateFrames://always safe
			Event_client_spectateFrames(tP,Packet,PacketSize);
			break;

		case OPac::client_createMatch:
			Event_client_createMatch(tP, Packet, PacketSize);
			break;

		case OPac::client_partMatch:
			Event_client_partMatch(tP);
			break;

		case OPac::client_matchChangeSlot:
			Event_client_matchChangeSlot(tP,Packet, PacketSize);
			break;

		case OPac::client_joinLobby:
			Event_client_joinLobby(tP);
			break;

		case OPac::client_partLobby:
			tP->inLobby = 0;
			break;

		case OPac::client_matchChangeSettings:
			Event_client_matchChangeSettings(tP,Packet, PacketSize);
			break;

		case OPac::client_matchLock:
			Event_client_matchLock(tP, Packet, PacketSize);
			break;

		case OPac::client_matchChangeMods:
			Event_client_matchChangeMods(tP, Packet, PacketSize);
			break;

		case OPac::client_joinMatch:
			Event_client_joinMatch(tP, Packet, PacketSize);
			break;

		case client_matchChangeTeam:
			Event_client_matchChangeTeam(tP);
			break;

		case client_matchNoBeatmap:
			Event_client_matchNoBeatmap(tP);
			break;

		case client_matchHasBeatmap:
			Event_client_matchHasBeatmap(tP);
			break;

		case client_matchTransferHost:
			Event_client_matchTransferHost(tP, Packet, PacketSize);
			break;
		
		case client_matchReady:
			Event_client_matchReady(tP);
			break;

		case client_matchNotReady:
			Event_client_matchNotReady(tP);
			break;

		case client_matchStart:
			Event_client_matchStart(tP);
			break;

		case client_matchLoadComplete:
			Event_client_matchLoadComplete(tP);
			break;

		case client_matchScoreUpdate:
			event_client_matchScoreUpdate(tP, Packet, PacketSize);
			break;
		case client_matchComplete:
			Event_client_matchComplete(tP);
			break;
		case client_matchFailed:
			Event_client_matchFailed(tP);
			break;
		case client_matchSkipRequest:
			Event_client_matchSkipRequest(tP);
			break;
		case client_invite:
			Event_client_invite(tP, Packet, PacketSize);
			break;

		default:
			printf("PacketID:%i | Length:%i\n", PacketID, PacketSize);
			break;
		}
	}

	SendMatchList(tP, 0);//Sends multiplayer data if they are in the lobby.
	IngameMenu(tP,s);//Handles all the cool new clickable menus

	//if (tP->HyperMode)
		//tP->addQue(_BanchoPacket(server_ping));

	tP->LastPacketTime = clock();
	
	tP->doQue(s);

}

const std::vector<byte> PingPacket = _BanchoPacket(OPac::server_ping).GetBytes();

const char* countryCodes[] = {
	"--","AP","EU","AD","AE","AF","AG","AI","AL","AM","AN","AO","AQ","AR",
	"AS","AT","AU","AW","AZ","BA","BB","BD","BE","BF","BG","BH","BI","BJ",
	"BM","BN","BO","BR","BS","BT","BV","BW","BY","BZ","CA","CC","CD","CF",
	"CG","CH","CI","CK","CL","CM","CN","CO","CR","CU","CV","CX","CY","CZ",
	"DE","DJ","DK","DM","DO","DZ","EC","EE","EG","EH","ER","ES","ET","FI",
	"FJ","FK","FM","FO","FR","FX","GA","GB","GD","GE","GF","GH","GI","GL",
	"GM","GN","GP","GQ","GR","GS","GT","GU","GW","GY","HK","HM","HN","HR",
	"HT","HU","ID","IE","IL","IN","IO","IQ","IR","IS","IT","JM","JO","JP",
	"KE","KG","KH","KI","KM","KN","KP","KR","KW","KY","KZ","LA","LB","LC",
	"LI","LK","LR","LS","LT","LU","LV","LY","MA","MC","MD","MG","MH","MK",
	"ML","MM","MN","MO","MP","MQ","MR","MS","MT","MU","MV","MW","MX","MY",
	"MZ","NA","NC","NE","NF","NG","NI","NL","NO","NP","NR","NU","NZ","OM",
	"PA","PE","PF","PG","PH","PK","PL","PM","PN","PR","PS","PT","PW","PY",
	"QA","RE","RO","RU","RW","SA","SB","SC","SD","SE","SG","SH","SI","SJ",
	"SK","SL","SM","SN","SO","SR","ST","SV","SY","SZ","TC","TD","TF","TG",
	"TH","TJ","TK","TM","TN","TO","TL","TR","TT","TV","TW","TZ","UA","UG",
	"UM","US","UY","UZ","VA","VC","VE","VG","VI","VN","VU","WF","WS","YE",
	"YT","RS","ZA","ZM","ME","ZW","A1","A2","O1","AX","GG","IM","JE","BL",
	"MF" };

__forceinline byte getCountryNum(const char *isoCode){
	if (isoCode[0] == 0 || isoCode[0] == '0')return 0;

	for (byte i = 0; i < 253; i++){
		if (isoCode[0] == countryCodes[i][0] && isoCode[1] == countryCodes[i][1])
			return i;
	}	
	return 0;
}

void HandleBanchoPacket(_Con s, _HttpRes &res,const int choToken) {

	if (res.Body.size() <= 1){
		printf("Empty packet! (%s)\n",(char*)&res.Host[0]);
		return;
	}

	if (!choToken){//No token sent - Assume its the login request which only ever comes in once
		int sTime = clock();
		res.Body.pop_back();

		auto LoginData = Explode(&res.Body[0], res.Body.size(), '\n');

		if (LoginData.size() != 3){

		INCORRECTLOGIN:
			{
				LogError("Incorrect login");

				std::vector<_HttpHeader> Headers;
				Headers.push_back(_HttpHeader("cho-token", "0"));

				_BanchoPacket eLog(OPac::server_userID);
				AddInt(eLog.Data, Login_Failed);

				s.SendData(ConstructResponse("HTTP/1.0 200 OK", Headers, eLog.GetBytes()));
				return;
			}
		SERVERFULL:
			{
				LogError("Server Full");

				std::vector<_HttpHeader> Headers;
				Headers.push_back(_HttpHeader("cho-token", "0"));

				std::vector<byte> loginResp = _BanchoPacket(OPac::server_userID).GetBytes();

				AddVector(loginResp, bPacket::Notification("Server is currenly full").GetBytes());

				s.SendData(ConstructResponse("HTTP/1.0 200 OK", Headers, loginResp));

				return;
			}
		}

		LoginData[1].push_back(0);//Password
		LoginData[2].push_back(0);//HWID

		std::string Username(LoginData[0].begin(), LoginData[0].end());
		char* Password = (char*)&LoginData[1][0];
		
		if(Username.size() > MAX_USERNAME_LENGTH || strlen(Password) != 32)goto INCORRECTLOGIN;

		PrepareSQLString(Username);
		std::string Username_Safe = Username;
		UserNameSafe(Username_Safe);

		PrepareSQLString(Password);


		_User* u = GetUserFromName(Username,1);

		int UserID = 0;
		int Priv = 0;
		if (u && u->Password[0] != 0 && !strcmp(u->Password, Password)){
			UserID = u->UserID;
			Priv = u->privileges;//TODO make this able to be updated.
			goto LOGGEDIN;
		}

		{
			_SQLCon *con = &SQL_BanchoThread[s.ID];

			sql::ResultSet *res = con->ExecuteQuery("SELECT id, password_md5, username, privileges FROM users WHERE username_safe = '" + Username_Safe + "' LIMIT 1");

			if (!res || !res->next())goto INCORRECTLOGIN;

			if(!u)u = GetPlayerSlot(Username.c_str());
			if (!u)
				goto SERVERFULL;

			UserID = res->getInt(1);

			std::string Password_Hash = res->getString(2);


			if (bcrypt_checkpw(Password, Password_Hash.c_str()) != 0)
				goto INCORRECTLOGIN;//Might want to add a brute force lock out

			Username = res->getString(3);//get the database captialization for consistencies sake
			Priv = res->getInt(4);

			const std::string TableName[] = {"users_stats","rx_stats"};

			for (DWORD z = 0; z < 2; z++) {
				if (res)delete res;
				res = con->ExecuteQuery("SELECT ranked_score_std, playcount_std, total_score_std, avg_accuracy_std,pp_std,"
					"ranked_score_taiko, playcount_taiko, total_score_taiko, avg_accuracy_taiko, pp_taiko,"
					"ranked_score_ctb, playcount_ctb, total_score_ctb, avg_accuracy_ctb, pp_ctb,"
					"ranked_score_mania, playcount_mania, total_score_mania, avg_accuracy_mania, pp_mania FROM " + TableName[z] + " WHERE id = " + std::to_string(UserID) + " LIMIT 1");

				if (res && res->next()){

					DWORD Offset = 0;

					for (DWORD i = 0; i < 4; i++){

						const DWORD Slot = i + (z * 4);

						u->Stats[Slot].rScore = res->getInt64(++Offset);
						u->Stats[Slot].PlayCount = res->getInt(++Offset);
						u->Stats[Slot].tScore = res->getInt64(++Offset);
						u->Stats[Slot].Acc = res->getDouble(++Offset) * 0.01f;
						u->Stats[Slot].pp = res->getInt(++Offset);

						if (u->Stats[Slot].Acc > 100.f) u->Stats[Slot].Acc = 100.f;  else if (u->Stats[Slot].Acc < 0.f)u->Stats[Slot].Acc = 0.f;
					}
				}
			}
			if (res) delete res;

			res = con->ExecuteQuery("SELECT user2 FROM users_relationships WHERE user1 = " + std::to_string(UserID) + " LIMIT 256");
			DWORD fCount = 0;
			while (res && res->next()) {
				if (fCount >= 256)break;
				u->Friends[fCount] = res->getInt(1);
				fCount++;
			}
			if (res) delete res;

			//Todo HWID
		}
	LOGGEDIN:
		printf("%s Logged in\n", Username.c_str());
		{

			if (!u){
				u = GetPlayerSlot(Username.c_str());
				if (!u)goto SERVERFULL;				
			}
			
			DisconnectUser(u);

			u->privileges = Priv;

			u->choToken = GenerateChoToken();

			u->qLock.lock();

			u->country = 0;// getCountryNum(res.GetHeaderValue("CF-IPCountry")); the nature of private servers disallow this.. i guess bancho could use this :(
						   // Best course of action would to resolve it from cloudflare on registration, not verification.

			u->LoginTime = clock();
			u->LastPacketTime = u->LoginTime;
			u->UserID = UserID;

			if (Username != GetUsernameFromCache(UserID))
				UsernameCacheUpdateName(UserID, Username, &SQL_BanchoThread[s.ID]);

			ZeroMemory(u->UserName, MAX_USERNAME_LENGTH + 1);
			strcpy_s((char*)&u->UserName[0], MAX_USERNAME_LENGTH, Username.c_str());
			ZeroMemory(u->UserName_Safe, MAX_USERNAME_LENGTH + 1);
			strcpy_s((char*)&u->UserName_Safe[0], MAX_USERNAME_LENGTH, Username_Safe.c_str());
						
			memcpy(&u->Password[0], &Password[0], 32);

			u->addQueNonLocking(bPacket::Notification("Welcome to ruri."));
			u->addQueNonLocking(bPacket::GenericInt32(OPac::server_silenceEnd, 0));
			u->addQueNonLocking(bPacket::GenericInt32(OPac::server_userID, UserID));
			u->addQueNonLocking(bPacket::GenericInt32(OPac::server_protocolVersion, 19));
			u->addQueNonLocking(bPacket::GenericInt32(OPac::server_supporterGMT, Supporter));
			u->addQueNonLocking(bPacket::UserPanel(u));
			u->addQueNonLocking(bPacket::UserStats(u));

			u->addQueNonLocking(bPacket::ChannelInfo(&chan_Akatsuki, 1));

			//u->addQueNonLocking(bPacket::ChannelInfo(&chan_Lobby, 0));
			
			u->addQueNonLocking(bPacket::GenericString(OPac::server_channelJoinSuccess, chan_Akatsuki.ChannelName));
			chan_Akatsuki.JoinChannel(u);

			u->addQueNonLocking(bPacket::GenericString(OPac::server_channelKicked, "#osu"));
			//u->addQueNonLocking(bPacket::GenericString(OPac::server_channelInfo, "#osu"));


			u->addQueNonLocking(bPacket::GenericInt32(OPac::server_channelInfoEnd, 0));

			std::vector<DWORD> FriendsList;
			FriendsList.reserve(256);
			FriendsList.push_back(999);//Bot is always their friend.
			FriendsList.push_back(UserID);//Shows self in the friend ranking.

			for (DWORD i = 0; i < 256; i++) {
				if (u->Friends[i])
					FriendsList.push_back(u->Friends[i]);
				else break;
			}
			u->addQueNonLocking(bPacket::GenericDWORDList(OPac::server_friendsList, FriendsList, 0));

			u->addQueNonLocking(bPacket::UserPanel(999, 0));
			u->addQueNonLocking(bPacket::UserStats(999, 0));

			bool FriendAdded = 0;
			for (DWORD i = 0; i < MAX_USER_COUNT; i++){
				if (!User[i].choToken || &User[i] == u)continue;				
				u->addQueNonLocking(bPacket::UserPanel(User[i].UserID, UserID));
				u->addQueNonLocking(bPacket::UserStats(User[i].UserID, UserID));
			}

			//if(OnlineList.size())
				//u->addQueNonLocking(bPacket::GenericDWORDList(OPac::server_userPresenceBundle, OnlineList, 0));

			u->SendToken = 1;
			u->qLock.unlock();
			u->doQue(s);

			debug_SendOnlineToAll(u);

		}
		printf("LoginTime: %i\n", clock() - sTime);
		return;
	}
	else DoBanchoPacket(s,choToken,res.Body);

}


void DisconnectUser(_User *u){

	u->choToken = 0;
	u->inLobby = 0;

	if (u->CurrentMatchID){

		_Match *m = getMatchFromID(u->CurrentMatchID);

		if (m) {
			m->Lock.lock();
			m->removeUser(u, 0);
			m->sendUpdate(bPacket::bMatch(OPac::server_updateMatch, m, 1));
			m->Lock.unlock();
		}
		u->CurrentMatchID = 0;
	}

	Event_client_stopSpectating(u);
	
	u->Spectators.clear();

	u->qLock.lock();
	u->Que.clear();
	u->dQue.clear();
	u->qLock.unlock();
}

void HandlePacket(_Con s){

	DWORD TimeOut = 2500;
	DWORD MPL = MAX_PACKET_LENGTH;

	setsockopt(s.s, SOL_SOCKET, SO_RCVTIMEO, (char*)&TimeOut, 4);
	setsockopt(s.s, SOL_SOCKET, SO_SNDTIMEO, (char*)&TimeOut, 4);
	setsockopt(s.s, SOL_SOCKET, SO_RCVBUF, (char*)&MPL, 4);

	_HttpRes res;

	bool Suc = s.RecvData(res);

	if (!Suc){
		s.close();
		LogMessage(KRED "Connection lost");
		return;
	}


	char *UserAgent = res.GetHeaderValue("User-Agent",1);

	int choToken = Safe_atoui(res.GetHeaderValue("osu-token"));

	if (UserAgent[0] == '0') {
		LogMessage("No user agent set.");

		s.SendData(ConstructResponse("HTTP/1.0 200 OK", Empty_Headers,bPacket::Notification("If there is anything that seems wrong make sure to contact rumoi.").GetBytes()));
		s.close();
		return;
	}

	if (strcmp(UserAgent,"osu!") && !choToken){//If it is not found
		RenderHTMLPage(s,res);
		LogMessage("HTML page served");
		s.close();
		return;
	}

	HandleBanchoPacket(s, res, choToken);
	s.close();
}

#include "Aria.h"

//Used to logout dropped users and other house keeping
void LazyThread(){
	printf("LazyThread running.\n");

	while (1){

		Sleep(250);

		const int cTime = clock();
		
		for (DWORD i = 0; i < MAX_USER_COUNT; i++){//TODO: Could batch this to cut down on sends

			if (User[i].choToken && User[i].LastPacketTime + PING_TIMEOUT_OSU < cTime){
				//DisconnectUser(&User[i]);
				debug_LogOutUser(&User[i]);
			}
		}
		Sleep(250);

		DWORD ActiveLobbies = 0;

		for (DWORD i = 0; i < MAX_MULTI_COUNT; i++)
			if (Match[i].PlayerCount)
				ActiveLobbies++;

		COUNT_MULTIPLAYER = ActiveLobbies;

	}
}


const std::string PPColNames[] = { "pp_std","pp_taiko","pp_ctb","pp_mania" };
const std::string UserTableNames[] = { "users_stats","rx_stats" };

void DoFillRank(DWORD I, bool TableName){

	sql::ResultSet *res = SQL_BanchoThread[I].ExecuteQuery("SELECT id, " + PPColNames[I] + " FROM " + UserTableNames[TableName] + " WHERE " + PPColNames[I] + " > 0 ORDER BY " + PPColNames[I] + " DESC");

	DWORD cOffset = 0;

	if (TableName)
		I += 4;
	while (res && res->next()) {
		RankList[I][cOffset] = _RankList(res->getInt(1), res->getInt(2));
		cOffset++;
	}
	if (res)delete res;
}


void FillRankCache(){

		printf("Filling rank cache (std)\n");
		{
			std::thread t[] = { std::thread(DoFillRank,0,0),std::thread(DoFillRank,1,0),std::thread(DoFillRank,2,0),std::thread(DoFillRank,3,0) };
			for (DWORD i = 0; i < 4; i++)t[i].join();
		}

		printf("Filling rank cache (relax)\n");

		{
			std::thread t[] = { std::thread(DoFillRank,0,1),std::thread(DoFillRank,1,1),std::thread(DoFillRank,2,1),std::thread(DoFillRank,3,1) };
			for (DWORD i = 0; i < 4; i++)t[i].join();
		}

		printf("Completed both.\n");
}


std::mutex BanchoWorkLock[BANCHO_THREAD_COUNT];
std::vector<_Con> BanchoConnectionQue[BANCHO_THREAD_COUNT];
void BanchoWork(const DWORD ID){
	while(1){

		DWORD Count = 0;
		_Con* Req = 0;

		Count = BanchoConnectionQue[ID].size();

		if (Count){
			BanchoWorkLock[ID].lock();

			Count = BanchoConnectionQue[ID].size();

			Req = new _Con[Count];

			if(Req)memcpy(&Req[0], &BanchoConnectionQue[ID][0], Count * sizeof(_Con));

			BanchoConnectionQue[ID].clear();

			BanchoWorkLock[ID].unlock();
		}
		for (DWORD i = 0; i < Count; i++)
			HandlePacket(Req[i]);

		if(Req)delete[] Req;

		Sleep(1);//It being 0 literally hogs an entire core so.. No?
	}
}



void receiveConnections(){

	printf("Starting BanchoThreads\n");

	{
		for (DWORD i = 0; i < BANCHO_THREAD_COUNT; i++){
			BanchoConnectionQue[i].reserve(64);
			printf("BanchoThread%i: %i\n", i, int(SQL_BanchoThread[i].Connect()));
			std::thread a(BanchoWork, i);
			a.detach();
		}
	}


	FillRankCache();

	{
		std::thread a(Aria_Main);
		a.detach();
	}

	while(!ARIALOADED)
		Sleep(100);

	UpdateUsernameCache(&SQL_BanchoThread[0]);
	
	{
		std::thread a(LazyThread);
		a.detach();
	}

	SOCKET listening = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (listening == INVALID_SOCKET)
	{
		printf("Failed to load listening socket.\n");
		return;
	}

	std::printf(KGRN "Created Socket\n" KRESET);

	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(RURIPORT);
	hint.sin_addr.S_un.S_addr = INADDR_ANY;

	::bind(listening, (sockaddr*)&hint, sizeof(hint));
	listen(listening, SOMAXCONN);

	sockaddr_in client;

	DWORD Time = 5000;
	DWORD MPL = MAX_PACKET_LENGTH;

	setsockopt(listening, SOL_SOCKET, SO_RCVTIMEO, (char*)&Time, 4);
	setsockopt(listening, SOL_SOCKET, SO_SNDTIMEO, (char*)&Time, 4);
	setsockopt(listening, SOL_SOCKET, SO_RCVBUF, (char*)&MPL, 4);


	DWORD ID = 0;

	while(1){

		int clientSize = sizeof(client);
		ZeroMemory(&client, clientSize);

		SOCKET s = accept(listening, (sockaddr*)&client, &clientSize);

		if (s == INVALID_SOCKET)continue;		
		COUNT_REQUESTS++;

		BanchoWorkLock[ID].lock();

		BanchoConnectionQue[ID].push_back(_Con(s,ID));

		BanchoWorkLock[ID].unlock();

		ID++;
		if (ID >= BANCHO_THREAD_COUNT)ID = 0;

	}
}



std::string ExtractConfigValue(const std::vector<byte> &Input){

	DWORD Start = 0;
	DWORD End = 0;

	for (DWORD i = 0; i < Input.size(); i++){
		if (!Start){
			if (Input[i] == '"')
				Start = i+1;
		}
		else if (Input[i] == '"') {
			End = i;
			break;
		}
	}


	if (!Start || !End)
		return "";

	return std::string(Input.begin() + Start, Input.begin() + End);
}



int main(){
	
	std::vector<byte> ConfigBytes;

	if (!ReadAllBytes("config.ini", ConfigBytes)) {
		printf("\nconfig.ini missing.\n");
		return 0;
	}
	
	auto Config = Explode(&ConfigBytes[0], ConfigBytes.size(), '\n');

	for (DWORD i = 0; i < Config.size(); i++){

		if (SafeStartCMP(Config[i], "osu_API_Key"))
			osu_API_KEY = ExtractConfigValue(Config[i]);
		else if (SafeStartCMP(Config[i], "SQL_Password"))
			SQL_Password = ExtractConfigValue(Config[i]);
		else if (SafeStartCMP(Config[i], "SQL_Username"))
			SQL_Username = ExtractConfigValue(Config[i]);
		else if (SafeStartCMP(Config[i], "SQL_Schema"))
			SQL_Schema = ExtractConfigValue(Config[i]);
		else if (SafeStartCMP(Config[i], "BeatmapPath"))
			BEATMAP_PATH = ExtractConfigValue(Config[i]);
		else if (SafeStartCMP(Config[i], "ReplayPath"))
			REPLAY_PATH = ExtractConfigValue(Config[i]);

	}

	
	if (BANCHO_THREAD_COUNT < 4 || ARIA_THREAD_COUNT < 4) {

		printf("BANCHO_THREAD_COUNT or ARIA_THREAD_COUNT can not be below 4\n");

		return 0;
	}

	if (WSAStartup(MAKEWORD(2, 2), &wsData)){
		printf("Failed to load WSA.\n");
		return 0;
	}

	receiveConnections();
	
	return 1;
}