#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_SteamChannel::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "SteamChannel");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
int32_t SDG_Unturned_SteamChannel::CHANNEL_ID_HEADER_SIZE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "CHANNEL_ID_HEADER_SIZE");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::CHANNEL_ID_HEADER_SIZE_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "CHANNEL_ID_HEADER_SIZE");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_SteamChannel::RPC_HEADER_SIZE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "RPC_HEADER_SIZE");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::RPC_HEADER_SIZE_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "RPC_HEADER_SIZE");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_SteamChannel::VOICE_HEADER_SIZE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "VOICE_HEADER_SIZE");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::VOICE_HEADER_SIZE_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "VOICE_HEADER_SIZE");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_SteamChannel::VOICE_DATA_OFFSET_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "VOICE_DATA_OFFSET");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::VOICE_DATA_OFFSET_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "VOICE_DATA_OFFSET");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_SteamChannel::calls_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "<calls>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamChannel::calls_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "<calls>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_SteamChannel::id_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "id");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamChannel::id_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "id");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
SDG_Unturned_SteamPlayer* SDG_Unturned_SteamChannel::owner_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "owner");
return Memory::read<SDG_Unturned_SteamPlayer*>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamChannel::owner_S(SDG_Unturned_SteamPlayer* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "owner");
Memory::write<SDG_Unturned_SteamPlayer*>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_SteamChannel::isOwner_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "isOwner");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamChannel::isOwner_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "isOwner");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamChannel::onTriggerReceive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "onTriggerReceive");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::onTriggerReceive_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "onTriggerReceive");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_SteamChannel::warnedAboutTriggerReceive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "warnedAboutTriggerReceive");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::warnedAboutTriggerReceive_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "warnedAboutTriggerReceive");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_SteamChannel::onTriggerSend_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "onTriggerSend");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::onTriggerSend_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "onTriggerSend");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_SteamChannel::warnedAboutTriggerSend_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "warnedAboutTriggerSend");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::warnedAboutTriggerSend_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "warnedAboutTriggerSend");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_SteamChannel::callArrayDirty_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "callArrayDirty");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_SteamChannel::callArrayDirty_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "callArrayDirty");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_SteamChannel::workingCalls_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "workingCalls");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::workingCalls_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "workingCalls");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_SteamChannel::workingComponents_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "workingComponents");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_SteamChannel::workingComponents_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "SteamChannel", "workingComponents");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_SteamChannel::get_calls()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034AD));
return _method(this);
}
void SDG_Unturned_SteamChannel::set_calls(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034AE));
return _method(this, value);
}
unknown_type SDG_Unturned_SteamChannel::GetOwnerTransportConnection()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034AF));
return _method(this);
}
bool SDG_Unturned_SteamChannel::checkServer(unknown_type steamID)
{
using method_t = bool(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B0));
return _method(this, steamID);
}
bool SDG_Unturned_SteamChannel::checkOwner(unknown_type steamID)
{
using method_t = bool(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B1));
return _method(this, steamID);
}
unknown_type SDG_Unturned_SteamChannel::GatherRemoteClientConnectionsExcludingOwner()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B2));
return _method(this);
}
unknown_type SDG_Unturned_SteamChannel::EnumerateClients_RemoteNotOwner()
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B3));
return _method(this);
}
unknown_type SDG_Unturned_SteamChannel::GatherRemoteClientConnectionsWithinSphereExcludingOwner(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B4));
return _method(this, position, radius);
}
unknown_type SDG_Unturned_SteamChannel::EnumerateClients_RemoteNotOwnerWithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B5));
return _method(this, position, radius);
}
unknown_type SDG_Unturned_SteamChannel::GatherOwnerAndClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B6));
return _method(this, position, radius);
}
unknown_type SDG_Unturned_SteamChannel::EnumerateClients_WithinSphereOrOwner(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B7));
return _method(this, position, radius);
}
bool SDG_Unturned_SteamChannel::receive(unknown_type steamID, unknown_type packet, int32_t offset, int32_t size)
{
using method_t = bool(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, int32_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B8));
return _method(this, steamID, packet, offset, size);
}
unknown_type SDG_Unturned_SteamChannel::read(unknown_type type)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034B9));
return _method(this, type);
}
unknown_type SDG_Unturned_SteamChannel::read1(unknown_type type_0, unknown_type type_1, unknown_type type_2)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BA));
return _method(this, type_0, type_1, type_2);
}
unknown_type SDG_Unturned_SteamChannel::read2(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BB));
return _method(this, type_0, type_1, type_2, type_3);
}
unknown_type SDG_Unturned_SteamChannel::read3(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BC));
return _method(this, type_0, type_1, type_2, type_3, type_4, type_5);
}
unknown_type SDG_Unturned_SteamChannel::read4(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5, unknown_type type_6)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BD));
return _method(this, type_0, type_1, type_2, type_3, type_4, type_5, type_6);
}
unknown_type SDG_Unturned_SteamChannel::read5(unknown_type types)
{
using method_t = unknown_type(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BE));
return _method(this, types);
}
void SDG_Unturned_SteamChannel::write(unknown_type objects)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034BF));
return _method(this, objects);
}
void SDG_Unturned_SteamChannel::write1(unknown_type object_0, unknown_type object_1, unknown_type object_2)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C0));
return _method(this, object_0, object_1, object_2);
}
void SDG_Unturned_SteamChannel::write2(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C1));
return _method(this, object_0, object_1, object_2, object_3);
}
void SDG_Unturned_SteamChannel::write3(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C2));
return _method(this, object_0, object_1, object_2, object_3, object_4, object_5);
}
void SDG_Unturned_SteamChannel::write4(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5, unknown_type object_6)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C3));
return _method(this, object_0, object_1, object_2, object_3, object_4, object_5, object_6);
}
void SDG_Unturned_SteamChannel::write5(unknown_type objects)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C4));
return _method(this, objects);
}
bool SDG_Unturned_SteamChannel::get_longBinaryData()
{
using method_t = bool(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C5));
return _method(this);
}
void SDG_Unturned_SteamChannel::set_longBinaryData(bool value)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C6));
return _method(this, value);
}
void SDG_Unturned_SteamChannel::openWrite()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C7));
return _method(this);
}
void SDG_Unturned_SteamChannel::closeWrite(unknown_type name, unknown_type steamID, unknown_type type)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C8));
return _method(this, name, steamID, type);
}
void SDG_Unturned_SteamChannel::closeWrite1(unknown_type name, unknown_type mode, uint8_t bound, unknown_type type)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034C9));
return _method(this, name, mode, bound, type);
}
void SDG_Unturned_SteamChannel::closeWrite2(unknown_type name, unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, uint8_t, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CA));
return _method(this, name, mode, x, y, area, type);
}
void SDG_Unturned_SteamChannel::closeWrite3(unknown_type name, unknown_type mode, unknown_type type)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CB));
return _method(this, name, mode, type);
}
void SDG_Unturned_SteamChannel::send(unknown_type name, unknown_type steamID, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CC));
return _method(this, name, steamID, type, arguments);
}
void SDG_Unturned_SteamChannel::sendAside(unknown_type name, unknown_type steamID, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CD));
return _method(this, name, steamID, type, arguments);
}
void SDG_Unturned_SteamChannel::send1(unknown_type mode, uint8_t bound, unknown_type type, int32_t size, unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, uint8_t, unknown_type, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CE));
return _method(this, mode, bound, type, size, packet);
}
void SDG_Unturned_SteamChannel::send2(unknown_type name, unknown_type mode, uint8_t bound, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, uint8_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034CF));
return _method(this, name, mode, bound, type, arguments);
}
void SDG_Unturned_SteamChannel::send3(unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type, int32_t size, unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, uint8_t, uint8_t, uint8_t, unknown_type, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D0));
return _method(this, mode, x, y, area, type, size, packet);
}
void SDG_Unturned_SteamChannel::send4(unknown_type name, unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D1));
return _method(this, name, mode, x, y, area, type, arguments);
}
void SDG_Unturned_SteamChannel::send5(unknown_type mode, unknown_type type, int32_t size, unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D2));
return _method(this, mode, type, size, packet);
}
void SDG_Unturned_SteamChannel::send6(unknown_type name, unknown_type mode, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D3));
return _method(this, name, mode, type, arguments);
}
void SDG_Unturned_SteamChannel::send7(unknown_type mode, UnityEngine_Vector3 point, float radius, unknown_type type, int32_t size, unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, UnityEngine_Vector3, float, unknown_type, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D4));
return _method(this, mode, point, radius, type, size, packet);
}
void SDG_Unturned_SteamChannel::send8(unknown_type name, unknown_type mode, UnityEngine_Vector3 point, float radius, unknown_type type, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, UnityEngine_Vector3, float, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D5));
return _method(this, name, mode, point, radius, type, arguments);
}
void SDG_Unturned_SteamChannel::markDirty()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D6));
return _method(this);
}
void SDG_Unturned_SteamChannel::buildCallArray()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D7));
return _method(this);
}
void SDG_Unturned_SteamChannel::buildCallArrayIfDirty()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D8));
return _method(this);
}
void SDG_Unturned_SteamChannel::setup()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034D9));
return _method(this);
}
void SDG_Unturned_SteamChannel::encodeChannelId(unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DA));
return _method(this, packet);
}
void SDG_Unturned_SteamChannel::getPacket(unknown_type type, int32_t index, unknown_type size, unknown_type packet)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, int32_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DB));
return _method(this, type, index, size, packet);
}
void SDG_Unturned_SteamChannel::encodeVoicePacket(uint8_t callIndex, unknown_type size, unknown_type packet, unknown_type bytes, uint16_t length, bool usingWalkieTalkie)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, uint8_t, unknown_type, unknown_type, unknown_type, uint16_t, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DC));
return _method(this, callIndex, size, packet, bytes, length, usingWalkieTalkie);
}
void SDG_Unturned_SteamChannel::decodeVoicePacket(unknown_type packet, unknown_type compressedSize, unknown_type usingWalkieTalkie)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DD));
return _method(this, packet, compressedSize, usingWalkieTalkie);
}
void SDG_Unturned_SteamChannel::sendVoicePacket(SDG_Unturned_SteamPlayer* player, unknown_type packet, int32_t packetSize)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, SDG_Unturned_SteamPlayer*, unknown_type, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DE));
return _method(this, player, packet, packetSize);
}
void SDG_Unturned_SteamChannel::getPacket1(unknown_type type, int32_t index, unknown_type size, unknown_type packet, unknown_type arguments)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*, unknown_type, int32_t, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034DF));
return _method(this, type, index, size, packet, arguments);
}
int32_t SDG_Unturned_SteamChannel::getCall(unknown_type name)
{
using method_t = int32_t(*)(SDG_Unturned_SteamChannel*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034E0));
return _method(this, name);
}
void SDG_Unturned_SteamChannel::OnDestroy()
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "SteamChannel", 0x060034E1));
return _method(this);
}
};
