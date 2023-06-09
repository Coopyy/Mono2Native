#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerInteract::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerInteract");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
UnityEngine_Transform* SDG_Unturned_PlayerInteract::focus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "focus");
return Memory::read<UnityEngine_Transform*>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::focus_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "focus");
Memory::write<UnityEngine_Transform*>(value, StaticInstance() + _offset);
}
UnityEngine_Transform* SDG_Unturned_PlayerInteract::target_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "target");
return Memory::read<UnityEngine_Transform*>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::target_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "target");
Memory::write<UnityEngine_Transform*>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::purchaseAsset_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "purchaseAsset");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::purchaseAsset_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "purchaseAsset");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::_interactable_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "_interactable");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::_interactable_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "_interactable");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::_interactable2_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "_interactable2");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::_interactable2_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "_interactable2");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::hit_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "hit");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::hit_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "hit");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInteract::lastInteract_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "lastInteract");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::lastInteract_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "lastInteract");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInteract::salvageHeldTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "salvageHeldTime");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::salvageHeldTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "salvageHeldTime");
Memory::write<float>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_PlayerInteract::isHoldingKey_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "isHoldingKey");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::isHoldingKey_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "isHoldingKey");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_PlayerInteract::shouldOverrideSalvageTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "shouldOverrideSalvageTime");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInteract::shouldOverrideSalvageTime_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "shouldOverrideSalvageTime");
Memory::write<bool>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInteract::overrideSalvageTimeValue_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "overrideSalvageTimeValue");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInteract::overrideSalvageTimeValue_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "overrideSalvageTimeValue");
Memory::write<float>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::SendSalvageTimeOverride_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendSalvageTimeOverride");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::SendSalvageTimeOverride_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendSalvageTimeOverride");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::SendInspectRequest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendInspectRequest");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::SendInspectRequest_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendInspectRequest");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::SendPlayInspect_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendPlayInspect");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInteract::SendPlayInspect_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "SendPlayInspect");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
UnityEngine_Transform* SDG_Unturned_PlayerInteract::highlightedTransform_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "highlightedTransform");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInteract::highlightedTransform_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "highlightedTransform");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInteract::didHaveFocus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "didHaveFocus");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInteract::didHaveFocus_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", "didHaveFocus");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInteract::get_interactable()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F4D));
return _method();
}
unknown_type SDG_Unturned_PlayerInteract::get_interactable2()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F4E));
return _method();
}
float SDG_Unturned_PlayerInteract::get_salvageTime()
{
using method_t = float(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F4F));
return _method(this);
}
float SDG_Unturned_PlayerInteract::get_interactableSalvageTime()
{
using method_t = float(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F50));
return _method(this);
}
void SDG_Unturned_PlayerInteract::tellSalvageTimeOverride(unknown_type senderId, float overrideValue)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F51));
return _method(this, senderId, overrideValue);
}
void SDG_Unturned_PlayerInteract::ReceiveSalvageTimeOverride(float overrideValue)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F52));
return _method(this, overrideValue);
}
void SDG_Unturned_PlayerInteract::sendSalvageTimeOverride(float overrideValue)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F53));
return _method(this, overrideValue);
}
void SDG_Unturned_PlayerInteract::hotkey(uint8_t button)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F54));
return _method(this, button);
}
void SDG_Unturned_PlayerInteract::askInspect(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F55));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInteract::ReceiveInspectRequest()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F56));
return _method(this);
}
void SDG_Unturned_PlayerInteract::tellInspect(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F57));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInteract::ReceivePlayInspect()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F58));
return _method(this);
}
void SDG_Unturned_PlayerInteract::localInspect()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F59));
return _method(this);
}
void SDG_Unturned_PlayerInteract::onPurchaseUpdated(unknown_type node)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5A));
return _method(this, node);
}
void SDG_Unturned_PlayerInteract::OnLifeUpdated(bool isDead)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5B));
return _method(this, isDead);
}
void SDG_Unturned_PlayerInteract::Update()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5C));
return _method(this);
}
void SDG_Unturned_PlayerInteract::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5D));
return _method(this);
}
void SDG_Unturned_PlayerInteract::clearHighlight()
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5E));
return _method(this);
}
void SDG_Unturned_PlayerInteract::setHighlight(UnityEngine_Transform* newHighlightedTransform, unknown_type color)
{
using method_t = void(*)(SDG_Unturned_PlayerInteract*, UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInteract", 0x06002F5F));
return _method(this, newHighlightedTransform, color);
}
};
