#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_SteamPlayer::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "SteamPlayer");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
unknown_type SDG_Unturned_SteamPlayer::_netId_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_netId");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_netId_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_netId");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_SteamPlayerID* SDG_Unturned_SteamPlayer::_playerID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_playerID");
return Memory::read<SDG_Unturned_SteamPlayerID*>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_playerID_S(SDG_Unturned_SteamPlayerID* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_playerID");
Memory::write<SDG_Unturned_SteamPlayerID*>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_SteamPlayer::_model_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_model");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_model_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_model");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
SDG_Unturned_Player* SDG_Unturned_SteamPlayer::_player_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_player");
return Memory::read<SDG_Unturned_Player*>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_player_S(SDG_Unturned_Player* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_player");
Memory::write<SDG_Unturned_Player*>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::_isPro_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_isPro");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_isPro_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_isPro");
Memory::write<bool>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::_channel_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_channel");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_channel_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_channel");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::battlEyeId_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "battlEyeId");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::battlEyeId_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "battlEyeId");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::_isAdmin_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_isAdmin");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_isAdmin_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_isAdmin");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::pings_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "pings");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::pings_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "pings");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::_ping_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_ping");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_ping_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_ping");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::_joined_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_joined");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_joined_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_joined");
Memory::write<float>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_SteamPlayer::face_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "face");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::face_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "face");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_SteamPlayer::_hair_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_hair");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_hair_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_hair");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_SteamPlayer::_beard_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_beard");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_beard_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_beard");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::_skin_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_skin");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_skin_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_skin");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::_color_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_color");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_color_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_color");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::_markerColor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_markerColor");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_markerColor_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_markerColor");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::_hand_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_hand");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_hand_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_hand");
Memory::write<bool>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::shirtItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "shirtItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::shirtItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "shirtItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::pantsItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "pantsItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::pantsItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "pantsItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::hatItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "hatItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::hatItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "hatItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::backpackItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "backpackItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::backpackItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "backpackItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::vestItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "vestItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::vestItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "vestItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::maskItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "maskItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::maskItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "maskItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamPlayer::glassesItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "glassesItem");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::glassesItem_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "glassesItem");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::skinItems_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinItems");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::skinItems_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinItems");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::skinTags_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinTags");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::skinTags_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinTags");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::skinDynamicProps_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinDynamicProps");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::skinDynamicProps_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "skinDynamicProps");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::itemSkins_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "itemSkins");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::itemSkins_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "itemSkins");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::vehicleSkins_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "vehicleSkins");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::vehicleSkins_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "vehicleSkins");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::modifiedItems_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "modifiedItems");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::modifiedItems_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "modifiedItems");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::submittedModifiedItems_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "submittedModifiedItems");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::submittedModifiedItems_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "submittedModifiedItems");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::_skillset_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_skillset");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_skillset_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_skillset");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::_language_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_language");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::_language_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "_language");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::lobbyID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "<lobbyID>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::lobbyID_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "<lobbyID>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::timeLastPacketWasReceivedFromClient_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "timeLastPacketWasReceivedFromClient");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::timeLastPacketWasReceivedFromClient_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "timeLastPacketWasReceivedFromClient");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::timeLastPingRequestWasSentToClient_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "timeLastPingRequestWasSentToClient");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::timeLastPingRequestWasSentToClient_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "timeLastPingRequestWasSentToClient");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::lastChat_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "lastChat");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::lastChat_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "lastChat");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::nextVote_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "nextVote");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::nextVote_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "nextVote");
Memory::write<float>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::isMuted_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "isMuted");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::isMuted_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "isMuted");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamPlayer::IsLocalPlayer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "<IsLocalPlayer>k__BackingField");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::IsLocalPlayer_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "<IsLocalPlayer>k__BackingField");
Memory::write<bool>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::rpcCredits_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcCredits");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::rpcCredits_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcCredits");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_SteamPlayer::lastReceivedPingRequestRealtime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "lastReceivedPingRequestRealtime");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::lastReceivedPingRequestRealtime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "lastReceivedPingRequestRealtime");
Memory::write<float>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::rpcAllowedTimes_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcAllowedTimes");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::rpcAllowedTimes_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcAllowedTimes");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::rpcHitCount_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcHitCount");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::rpcHitCount_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "rpcHitCount");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::clientPlatform_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "clientPlatform");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::clientPlatform_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "clientPlatform");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::validatedGuids_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "validatedGuids");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayer::validatedGuids_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", "validatedGuids");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayer::GetNetId()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003535));
return _method(this);
}
SDG_Unturned_SteamPlayerID* SDG_Unturned_SteamPlayer::get_playerID()
{
using method_t = SDG_Unturned_SteamPlayerID*(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003536));
return _method(this);
}
UnityEngine_Transform* SDG_Unturned_SteamPlayer::get_model()
{
using method_t = UnityEngine_Transform*(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003537));
return _method(this);
}
SDG_Unturned_Player* SDG_Unturned_SteamPlayer::get_player()
{
using method_t = SDG_Unturned_Player*(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003538));
return _method(this);
}
bool SDG_Unturned_SteamPlayer::get_isPro()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003539));
return _method(this);
}
int32_t SDG_Unturned_SteamPlayer::get_channel()
{
using method_t = int32_t(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353A));
return _method(this);
}
bool SDG_Unturned_SteamPlayer::get_isAdmin()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353B));
return _method(this);
}
void SDG_Unturned_SteamPlayer::set_isAdmin(bool value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353C));
return _method(this, value);
}
float SDG_Unturned_SteamPlayer::get_ping()
{
using method_t = float(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353D));
return _method(this);
}
float SDG_Unturned_SteamPlayer::get_joined()
{
using method_t = float(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353E));
return _method(this);
}
uint8_t SDG_Unturned_SteamPlayer::get_hair()
{
using method_t = uint8_t(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600353F));
return _method(this);
}
uint8_t SDG_Unturned_SteamPlayer::get_beard()
{
using method_t = uint8_t(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003540));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_skin()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003541));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_color()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003542));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_markerColor()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003543));
return _method(this);
}
bool SDG_Unturned_SteamPlayer::get_IsLeftHanded()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003544));
return _method(this);
}
bool SDG_Unturned_SteamPlayer::get_hand()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003545));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_skillset()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003546));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_language()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003547));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::get_lobbyID()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003548));
return _method(this);
}
void SDG_Unturned_SteamPlayer::set_lobbyID(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003549));
return _method(this, value);
}
bool SDG_Unturned_SteamPlayer::get_IsLocalPlayer()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354A));
return _method(this);
}
void SDG_Unturned_SteamPlayer::set_IsLocalPlayer(bool value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354B));
return _method(this, value);
}
bool SDG_Unturned_SteamPlayer::getItemSkinItemDefID(uint16_t itemID, unknown_type itemdefid)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354C));
return _method(this, itemID, itemdefid);
}
bool SDG_Unturned_SteamPlayer::getVehicleSkinItemDefID(uint16_t vehicleID, unknown_type itemdefid)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354D));
return _method(this, vehicleID, itemdefid);
}
bool SDG_Unturned_SteamPlayer::getTagsAndDynamicPropsForItem(int32_t item, unknown_type tags, unknown_type dynamic_props)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, int32_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354E));
return _method(this, item, tags, dynamic_props);
}
bool SDG_Unturned_SteamPlayer::getDynamicEconDetails(uint16_t itemID, unknown_type details)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600354F));
return _method(this, itemID, details);
}
bool SDG_Unturned_SteamPlayer::getDynamicEconDetailsForItemDef(int32_t itemdefid, unknown_type details)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003550));
return _method(this, itemdefid, details);
}
bool SDG_Unturned_SteamPlayer::getStatTrackerValue(uint16_t itemID, unknown_type type, unknown_type kills)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003551));
return _method(this, itemID, type, kills);
}
bool SDG_Unturned_SteamPlayer::getRagdollEffect(uint16_t itemID, unknown_type effect)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003552));
return _method(this, itemID, effect);
}
uint16_t SDG_Unturned_SteamPlayer::getParticleEffectForItemDef(int32_t itemdefid)
{
using method_t = uint16_t(*)(SDG_Unturned_SteamPlayer*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003553));
return _method(this, itemdefid);
}
void SDG_Unturned_SteamPlayer::incrementStatTrackerValue(uint16_t itemID, unknown_type stat)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003554));
return _method(this, itemID, stat);
}
void SDG_Unturned_SteamPlayer::commitModifiedDynamicProps()
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003555));
return _method(this);
}
void SDG_Unturned_SteamPlayer::lag(float value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003556));
return _method(this, value);
}
bool SDG_Unturned_SteamPlayer::isMemberOfSameGroupAs(SDG_Unturned_Player* other)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003557));
return _method(this, other);
}
bool SDG_Unturned_SteamPlayer::isMemberOfSameGroupAs1(SDG_Unturned_SteamPlayer* other)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003558));
return _method(this, other);
}
bool SDG_Unturned_SteamPlayer::getIPv4Address(unknown_type address)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003559));
return _method(this, address);
}
uint32_t SDG_Unturned_SteamPlayer::getIPv4AddressOrZero()
{
using method_t = uint32_t(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355A));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::getAddress()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355B));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::getAddressString(bool withPort)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355C));
return _method(this, withPort);
}
bool SDG_Unturned_SteamPlayer::Equals(SDG_Unturned_SteamPlayer* otherClient)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355D));
return _method(this, otherClient);
}
bool SDG_Unturned_SteamPlayer::Equals1(unknown_type obj)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayer*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355E));
return _method(this, obj);
}
int32_t SDG_Unturned_SteamPlayer::GetHashCode()
{
using method_t = int32_t(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x0600355F));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayer::GetLocalDisplayName()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayer", 0x06003560));
return _method(this);
}
};
