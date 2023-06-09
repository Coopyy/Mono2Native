#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_SteamPlayerID::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
unknown_type SDG_Unturned_SteamPlayerID::_steamID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_steamID");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::_steamID_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_steamID");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_SteamPlayerID::characterID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "characterID");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::characterID_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "characterID");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::_playerName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_playerName");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::_playerName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_playerName");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::_characterName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_characterName");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::_characterName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_characterName");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::_nickName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_nickName");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::_nickName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "_nickName");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::group_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "group");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::group_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "group");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::hwids_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "hwids");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamPlayerID::hwids_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", "hwids");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamPlayerID::get_steamID()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003562));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayerID::get_streamerName()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003563));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayerID::get_playerName()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003564));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayerID::get_characterName()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003565));
return _method(this);
}
void SDG_Unturned_SteamPlayerID::set_characterName(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003566));
return _method(this, value);
}
unknown_type SDG_Unturned_SteamPlayerID::get_nickName()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003567));
return _method(this);
}
void SDG_Unturned_SteamPlayerID::set_nickName(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003568));
return _method(this, value);
}
unknown_type SDG_Unturned_SteamPlayerID::get_hwid()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003569));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayerID::GetHwids()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x0600356A));
return _method(this);
}
bool SDG_Unturned_SteamPlayerID::get_BypassIntegrityChecks()
{
using method_t = bool(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x0600356B));
return _method(this);
}
unknown_type SDG_Unturned_SteamPlayerID::ToString()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x0600356F));
return _method(this);
}
bool SDG_Unturned_SteamPlayerID::op_Equality(SDG_Unturned_SteamPlayerID* playerID_0, SDG_Unturned_SteamPlayerID* playerID_1)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayerID*, SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003570));
return _method(playerID_0, playerID_1);
}
bool SDG_Unturned_SteamPlayerID::op_Inequality(SDG_Unturned_SteamPlayerID* playerID_0, SDG_Unturned_SteamPlayerID* playerID_1)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayerID*, SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003571));
return _method(playerID_0, playerID_1);
}
unknown_type SDG_Unturned_SteamPlayerID::op_Addition(SDG_Unturned_SteamPlayerID* playerID, unknown_type text)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamPlayerID*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003572));
return _method(playerID, text);
}
bool SDG_Unturned_SteamPlayerID::Equals(SDG_Unturned_SteamPlayerID* otherPlayerID)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayerID*, SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003573));
return _method(this, otherPlayerID);
}
int32_t SDG_Unturned_SteamPlayerID::GetHashCode()
{
using method_t = int32_t(*)(SDG_Unturned_SteamPlayerID*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003574));
return _method(this);
}
bool SDG_Unturned_SteamPlayerID::Equals1(unknown_type obj)
{
using method_t = bool(*)(SDG_Unturned_SteamPlayerID*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamPlayerID", 0x06003575));
return _method(this, obj);
}
};
