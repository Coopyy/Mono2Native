#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerInventory::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerInventory");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
unknown_type SDG_Unturned_PlayerInventory::LOADOUT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "LOADOUT");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::LOADOUT_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "LOADOUT");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::HORDE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "HORDE");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::HORDE_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "HORDE");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SKILLSETS_SERVER_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_SERVER");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SKILLSETS_SERVER_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_SERVER");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SKILLSETS_CLIENT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_CLIENT");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SKILLSETS_CLIENT_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_CLIENT");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SKILLSETS_HERO_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_HERO");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SKILLSETS_HERO_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SKILLSETS_HERO");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::SAVEDATA_VERSION_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SAVEDATA_VERSION");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SAVEDATA_VERSION_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SAVEDATA_VERSION");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::SLOTS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SLOTS");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SLOTS_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SLOTS");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::PAGES_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "PAGES");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::PAGES_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "PAGES");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::BACKPACK_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "BACKPACK");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::BACKPACK_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "BACKPACK");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::VEST_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "VEST");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::VEST_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "VEST");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::SHIRT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SHIRT");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SHIRT_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SHIRT");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::PANTS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "PANTS");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::PANTS_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "PANTS");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::STORAGE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "STORAGE");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::STORAGE_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "STORAGE");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerInventory::AREA_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "AREA");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::AREA_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "AREA");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::loadout_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "loadout");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::loadout_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "loadout");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::skillsets_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "skillsets");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::skillsets_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "skillsets");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::items_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "<items>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::items_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "<items>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInventory::receivedUpdateIndex_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "receivedUpdateIndex");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::receivedUpdateIndex_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "receivedUpdateIndex");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInventory::isStoring_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "isStoring");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::isStoring_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "isStoring");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInventory::isStorageTrunk_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "isStorageTrunk");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::isStorageTrunk_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "isStorageTrunk");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::storage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "storage");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::storage_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "storage");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInventory::ownerHasInventory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "ownerHasInventory");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::ownerHasInventory_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "ownerHasInventory");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryResized_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryResized");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryResized_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryResized");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryAdded_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryAdded");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryAdded_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryAdded");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryRemoved_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryRemoved");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryRemoved_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryRemoved");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryStored_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryStored");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryStored_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryStored");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onInventoryStateUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryStateUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onInventoryStateUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onInventoryStateUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::onDropItemRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onDropItemRequested");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::onDropItemRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "onDropItemRequested");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendDragItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendDragItem");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendDragItem_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendDragItem");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendSwapItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendSwapItem");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendSwapItem_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendSwapItem");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendDropItem_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendDropItem");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendDropItem_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendDropItem");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendUpdateAmount_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateAmount");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendUpdateAmount_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateAmount");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendUpdateQuality_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateQuality");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendUpdateQuality_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateQuality");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendUpdateInvState_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateInvState");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendUpdateInvState_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendUpdateInvState");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendItemAdd_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendItemAdd");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendItemAdd_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendItemAdd");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendItemRemove_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendItemRemove");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendItemRemove_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendItemRemove");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendSize_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendSize");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendSize_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendSize");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendStoraging_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendStoraging");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendStoraging_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendStoraging");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::SendInventory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendInventory");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInventory::SendInventory_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "SendInventory");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_PlayerInventory::wasLoadCalled_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "wasLoadCalled");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInventory::wasLoadCalled_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", "wasLoadCalled");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInventory::get_items()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F7E));
return _method(this);
}
void SDG_Unturned_PlayerInventory::set_items(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F7F));
return _method(this, value);
}
void SDG_Unturned_PlayerInventory::incrementUpdateIndex()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F80));
return _method(this);
}
bool SDG_Unturned_PlayerInventory::doesSearchNeedRefresh(unknown_type index)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F81));
return _method(this, index);
}
bool SDG_Unturned_PlayerInventory::get_shouldInventoryStopGestureCloseStorage()
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F82));
return _method(this);
}
bool SDG_Unturned_PlayerInventory::get_shouldInteractCloseStorage()
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F83));
return _method(this);
}
bool SDG_Unturned_PlayerInventory::get_shouldStorageOpenDashboard()
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F84));
return _method(this);
}
uint8_t SDG_Unturned_PlayerInventory::getWidth(uint8_t page)
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerInventory*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F85));
return _method(this, page);
}
uint8_t SDG_Unturned_PlayerInventory::getHeight(uint8_t page)
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerInventory*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F86));
return _method(this, page);
}
uint8_t SDG_Unturned_PlayerInventory::getItemCount(uint8_t page)
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerInventory*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F87));
return _method(this, page);
}
unknown_type SDG_Unturned_PlayerInventory::getItem(uint8_t page, uint8_t index)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F88));
return _method(this, page, index);
}
uint8_t SDG_Unturned_PlayerInventory::getIndex(uint8_t page, uint8_t x, uint8_t y)
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F89));
return _method(this, page, x, y);
}
uint8_t SDG_Unturned_PlayerInventory::findIndex(uint8_t page, uint8_t x, uint8_t y, unknown_type find_x, unknown_type find_y)
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8A));
return _method(this, page, x, y, find_x, find_y);
}
void SDG_Unturned_PlayerInventory::updateAmount(uint8_t page, uint8_t index, uint8_t newAmount)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8B));
return _method(this, page, index, newAmount);
}
void SDG_Unturned_PlayerInventory::updateQuality(uint8_t page, uint8_t index, uint8_t newQuality)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8C));
return _method(this, page, index, newQuality);
}
void SDG_Unturned_PlayerInventory::updateState(uint8_t page, uint8_t index, unknown_type newState)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8D));
return _method(this, page, index, newState);
}
unknown_type SDG_Unturned_PlayerInventory::search(unknown_type type)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8E));
return _method(this, type);
}
void SDG_Unturned_PlayerInventory::search1(unknown_type search, unknown_type type)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F8F));
return _method(this, search, type);
}
unknown_type SDG_Unturned_PlayerInventory::search2(unknown_type type, unknown_type calibers)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F90));
return _method(this, type, calibers);
}
unknown_type SDG_Unturned_PlayerInventory::search3(unknown_type type, unknown_type calibers, bool allowZeroCaliber)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F91));
return _method(this, type, calibers, allowZeroCaliber);
}
void SDG_Unturned_PlayerInventory::search4(unknown_type search, unknown_type type, uint16_t caliber)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type, uint16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F92));
return _method(this, search, type, caliber);
}
void SDG_Unturned_PlayerInventory::search5(unknown_type search, unknown_type type, uint16_t caliber, bool allowZeroCaliber)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type, uint16_t, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F93));
return _method(this, search, type, caliber, allowZeroCaliber);
}
unknown_type SDG_Unturned_PlayerInventory::search6(uint16_t id, bool findEmpty, bool findHealthy)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, uint16_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F94));
return _method(this, id, findEmpty, findHealthy);
}
void SDG_Unturned_PlayerInventory::search7(unknown_type search, uint16_t id, bool findEmpty, bool findHealthy)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint16_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F95));
return _method(this, search, id, findEmpty, findHealthy);
}
unknown_type SDG_Unturned_PlayerInventory::search8(unknown_type search)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F96));
return _method(this, search);
}
unknown_type SDG_Unturned_PlayerInventory::has(uint16_t id)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInventory*, uint16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F97));
return _method(this, id);
}
bool SDG_Unturned_PlayerInventory::tryAddItem(unknown_type item, uint8_t x, uint8_t y, uint8_t page, uint8_t rot)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F98));
return _method(this, item, x, y, page, rot);
}
bool SDG_Unturned_PlayerInventory::tryAddItem1(unknown_type item, bool auto_)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F99));
return _method(this, item, auto_);
}
bool SDG_Unturned_PlayerInventory::tryAddItem2(unknown_type item, bool auto_, bool playEffect)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9A));
return _method(this, item, auto_, playEffect);
}
bool SDG_Unturned_PlayerInventory::tryAddItemEquip(unknown_type item, uint8_t page)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9B));
return _method(this, item, page);
}
bool SDG_Unturned_PlayerInventory::tryAddItemAuto(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing, bool playEffect)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool, bool, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9C));
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing, playEffect);
}
void SDG_Unturned_PlayerInventory::forceAddItem(unknown_type item, bool auto_)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9D));
return _method(this, item, auto_);
}
void SDG_Unturned_PlayerInventory::forceAddItemAuto(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9E));
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing);
}
void SDG_Unturned_PlayerInventory::forceAddItem1(unknown_type item, bool auto_, bool playEffect)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002F9F));
return _method(this, item, auto_, playEffect);
}
void SDG_Unturned_PlayerInventory::forceAddItemAuto1(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing, bool playEffect)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, bool, bool, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA0));
return _method(this, item, autoEquipWeapon, autoEquipUseable, autoEquipClothing, playEffect);
}
void SDG_Unturned_PlayerInventory::replaceItems(uint8_t page, unknown_type replacement)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA1));
return _method(this, page, replacement);
}
void SDG_Unturned_PlayerInventory::removeItem(uint8_t page, uint8_t index)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA2));
return _method(this, page, index);
}
bool SDG_Unturned_PlayerInventory::checkSpaceEmpty(uint8_t page, uint8_t x, uint8_t y, uint8_t size_x, uint8_t size_y, uint8_t rot)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA3));
return _method(this, page, x, y, size_x, size_y, rot);
}
bool SDG_Unturned_PlayerInventory::checkSpaceDrag(uint8_t page, uint8_t old_x, uint8_t old_y, uint8_t oldRot, uint8_t new_x, uint8_t new_y, uint8_t newRot, uint8_t size_x, uint8_t size_y, bool checkSame)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA4));
return _method(this, page, old_x, old_y, oldRot, new_x, new_y, newRot, size_x, size_y, checkSame);
}
bool SDG_Unturned_PlayerInventory::checkSpaceSwap(uint8_t page, uint8_t x, uint8_t y, uint8_t oldSize_X, uint8_t oldSize_Y, uint8_t oldRot, uint8_t newSize_X, uint8_t newSize_Y, uint8_t newRot)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA5));
return _method(this, page, x, y, oldSize_X, oldSize_Y, oldRot, newSize_X, newSize_Y, newRot);
}
bool SDG_Unturned_PlayerInventory::tryFindSpace(uint8_t page, uint8_t size_x, uint8_t size_y, unknown_type x, unknown_type y, unknown_type rot)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA6));
return _method(this, page, size_x, size_y, x, y, rot);
}
bool SDG_Unturned_PlayerInventory::tryFindSpace1(uint8_t size_x, uint8_t size_y, unknown_type page, unknown_type x, unknown_type y, unknown_type rot)
{
using method_t = bool(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA7));
return _method(this, size_x, size_y, page, x, y, rot);
}
void SDG_Unturned_PlayerInventory::askDragItem(unknown_type steamID, uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA8));
return _method(this, steamID, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::ReceiveDragItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FA9));
return _method(this, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::askSwapItem(unknown_type steamID, uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAA));
return _method(this, steamID, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::ReceiveSwapItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAB));
return _method(this, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::sendDragItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAC));
return _method(this, page_0, x_0, y_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::sendSwapItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAD));
return _method(this, page_0, x_0, y_0, rot_0, page_1, x_1, y_1, rot_1);
}
void SDG_Unturned_PlayerInventory::askDropItem(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAE));
return _method(this, steamID, page, x, y);
}
void SDG_Unturned_PlayerInventory::ReceiveDropItem(uint8_t page, uint8_t x, uint8_t y)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FAF));
return _method(this, page, x, y);
}
void SDG_Unturned_PlayerInventory::sendDropItem(uint8_t page, uint8_t x, uint8_t y)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB0));
return _method(this, page, x, y);
}
void SDG_Unturned_PlayerInventory::tellUpdateAmount(unknown_type steamID, uint8_t page, uint8_t index, uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB1));
return _method(this, steamID, page, index, amount);
}
void SDG_Unturned_PlayerInventory::ReceiveUpdateAmount(uint8_t page, uint8_t index, uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB2));
return _method(this, page, index, amount);
}
void SDG_Unturned_PlayerInventory::tellUpdateQuality(unknown_type steamID, uint8_t page, uint8_t index, uint8_t quality)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB3));
return _method(this, steamID, page, index, quality);
}
void SDG_Unturned_PlayerInventory::ReceiveUpdateQuality(uint8_t page, uint8_t index, uint8_t quality)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB4));
return _method(this, page, index, quality);
}
void SDG_Unturned_PlayerInventory::tellUpdateInvState(unknown_type steamID, uint8_t page, uint8_t index, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB5));
return _method(this, steamID, page, index, state);
}
void SDG_Unturned_PlayerInventory::ReceiveUpdateInvState(uint8_t page, uint8_t index, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB6));
return _method(this, page, index, state);
}
void SDG_Unturned_PlayerInventory::tellItemAdd(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y, uint8_t rot, uint16_t id, uint8_t amount, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t, uint16_t, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB7));
return _method(this, steamID, page, x, y, rot, id, amount, quality, state);
}
void SDG_Unturned_PlayerInventory::ReceiveItemAdd(uint8_t page, uint8_t x, uint8_t y, uint8_t rot, uint16_t id, uint8_t amount, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t, uint16_t, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB8));
return _method(this, page, x, y, rot, id, amount, quality, state);
}
void SDG_Unturned_PlayerInventory::tellItemRemove(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FB9));
return _method(this, steamID, page, x, y);
}
void SDG_Unturned_PlayerInventory::ReceiveItemRemove(uint8_t page, uint8_t x, uint8_t y)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBA));
return _method(this, page, x, y);
}
void SDG_Unturned_PlayerInventory::tellSize(unknown_type steamID, uint8_t page, uint8_t newWidth, uint8_t newHeight)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBB));
return _method(this, steamID, page, newWidth, newHeight);
}
void SDG_Unturned_PlayerInventory::ReceiveSize(uint8_t page, uint8_t newWidth, uint8_t newHeight)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBC));
return _method(this, page, newWidth, newHeight);
}
void SDG_Unturned_PlayerInventory::tellStoraging(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBD));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInventory::ReceiveStoraging(unknown_type context)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBE));
return _method(this, context);
}
void SDG_Unturned_PlayerInventory::tellInventory(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FBF));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInventory::ReceiveInventory(unknown_type context)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC0));
return _method(this, context);
}
void SDG_Unturned_PlayerInventory::askInventory(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC1));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInventory::SendInitialPlayerState(SDG_Unturned_SteamPlayer* client)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC2));
return _method(this, client);
}
void SDG_Unturned_PlayerInventory::sendStorage()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC3));
return _method(this);
}
void SDG_Unturned_PlayerInventory::updateItems(uint8_t page, unknown_type newItems)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC4));
return _method(this, page, newItems);
}
void SDG_Unturned_PlayerInventory::sendUpdateAmount(uint8_t page, uint8_t x, uint8_t y, uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC5));
return _method(this, page, x, y, amount);
}
void SDG_Unturned_PlayerInventory::sendUpdateQuality(uint8_t page, uint8_t x, uint8_t y, uint8_t quality)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC6));
return _method(this, page, x, y, quality);
}
void SDG_Unturned_PlayerInventory::sendUpdateInvState(uint8_t page, uint8_t x, uint8_t y, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC7));
return _method(this, page, x, y, state);
}
void SDG_Unturned_PlayerInventory::sendItemAdd(uint8_t page, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC8));
return _method(this, page, jar);
}
void SDG_Unturned_PlayerInventory::sendItemRemove(uint8_t page, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FC9));
return _method(this, page, jar);
}
void SDG_Unturned_PlayerInventory::bestowLoadout()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCA));
return _method(this);
}
void SDG_Unturned_PlayerInventory::onShirtUpdated(uint16_t id, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint16_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCB));
return _method(this, id, quality, state);
}
void SDG_Unturned_PlayerInventory::onPantsUpdated(uint16_t id, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint16_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCC));
return _method(this, id, quality, state);
}
void SDG_Unturned_PlayerInventory::onBackpackUpdated(uint16_t id, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint16_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCD));
return _method(this, id, quality, state);
}
void SDG_Unturned_PlayerInventory::onVestUpdated(uint16_t id, uint8_t quality, unknown_type state)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint16_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCE));
return _method(this, id, quality, state);
}
void SDG_Unturned_PlayerInventory::closeDistantStorage()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FCF));
return _method(this);
}
void SDG_Unturned_PlayerInventory::openStorage(unknown_type newStorage)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD0));
return _method(this, newStorage);
}
void SDG_Unturned_PlayerInventory::openTrunk(unknown_type trunkItems)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD1));
return _method(this, trunkItems);
}
void SDG_Unturned_PlayerInventory::closeTrunk()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD2));
return _method(this);
}
void SDG_Unturned_PlayerInventory::closeStorage()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD3));
return _method(this);
}
void SDG_Unturned_PlayerInventory::closeStorageAndNotifyClient()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD4));
return _method(this);
}
void SDG_Unturned_PlayerInventory::onLifeUpdated(bool isDead)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD5));
return _method(this, isDead);
}
void SDG_Unturned_PlayerInventory::onItemsResized(uint8_t page, uint8_t newWidth, uint8_t newHeight)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD6));
return _method(this, page, newWidth, newHeight);
}
void SDG_Unturned_PlayerInventory::onItemUpdated(uint8_t page, uint8_t index, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD7));
return _method(this, page, index, jar);
}
void SDG_Unturned_PlayerInventory::onItemAdded(uint8_t page, uint8_t index, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD8));
return _method(this, page, index, jar);
}
void SDG_Unturned_PlayerInventory::onItemRemoved(uint8_t page, uint8_t index, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FD9));
return _method(this, page, index, jar);
}
void SDG_Unturned_PlayerInventory::onItemDiscarded(uint8_t page, uint8_t index, unknown_type jar)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDA));
return _method(this, page, index, jar);
}
void SDG_Unturned_PlayerInventory::onItemStateUpdated()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDB));
return _method(this);
}
void SDG_Unturned_PlayerInventory::OnDestroy()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDC));
return _method(this);
}
void SDG_Unturned_PlayerInventory::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDD));
return _method(this);
}
void SDG_Unturned_PlayerInventory::load()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDE));
return _method(this);
}
void SDG_Unturned_PlayerInventory::save()
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FDF));
return _method(this);
}
void SDG_Unturned_PlayerInventory::LogRPCFailure(unknown_type format, unknown_type args)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FE0));
return _method(this, format, args);
}
void SDG_Unturned_PlayerInventory::SendInitialPlayerStateb__112_0(unknown_type writer)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FE3));
return _method(this, writer);
}
void SDG_Unturned_PlayerInventory::sendStorageb__113_0(unknown_type writer)
{
using method_t = void(*)(SDG_Unturned_PlayerInventory*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInventory", 0x06002FE4));
return _method(this, writer);
}
};
