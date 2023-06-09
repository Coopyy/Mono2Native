#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_Player::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "Player");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
uint8_t SDG_Unturned_Player::SAVEDATA_VERSION_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SAVEDATA_VERSION");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SAVEDATA_VERSION_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SAVEDATA_VERSION");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::onPlayerCreated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerCreated");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::onPlayerCreated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerCreated");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::onPlayerTeleported_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerTeleported");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::onPlayerTeleported_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerTeleported");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::onPlayerSpyReady_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerSpyReady");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::onPlayerSpyReady_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerSpyReady");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::onSpyReady_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onSpyReady");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::onSpyReady_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onSpyReady");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::onPlayerStatIncremented_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerStatIncremented");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::onPlayerStatIncremented_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onPlayerStatIncremented");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::onLocalPluginWidgetFlagsChanged_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onLocalPluginWidgetFlagsChanged");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::onLocalPluginWidgetFlagsChanged_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "onLocalPluginWidgetFlagsChanged");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_Player::isLoadingInventory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingInventory");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::isLoadingInventory_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingInventory");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Player::isLoadingLife_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingLife");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::isLoadingLife_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingLife");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Player::isLoadingClothing_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingClothing");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::isLoadingClothing_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "isLoadingClothing");
Memory::write<bool>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Player::agro_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "agro");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::agro_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "agro");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
SDG_Unturned_Player* SDG_Unturned_Player::_player_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_player");
return Memory::read<SDG_Unturned_Player*>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::_player_S(SDG_Unturned_Player* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_player");
Memory::write<SDG_Unturned_Player*>(value, StaticInstance() + _offset);
}
SDG_Unturned_SteamChannel* SDG_Unturned_Player::_channel_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_channel");
return Memory::read<SDG_Unturned_SteamChannel*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_channel_S(SDG_Unturned_SteamChannel* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_channel");
Memory::write<SDG_Unturned_SteamChannel*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_animator_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_animator");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_animator_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_animator");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_clothing_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_clothing");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_clothing_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_clothing");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerInventory* SDG_Unturned_Player::_inventory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_inventory");
return Memory::read<SDG_Unturned_PlayerInventory*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_inventory_S(SDG_Unturned_PlayerInventory* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_inventory");
Memory::write<SDG_Unturned_PlayerInventory*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_equipment_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_equipment");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_equipment_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_equipment");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerLife* SDG_Unturned_Player::_life_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_life");
return Memory::read<SDG_Unturned_PlayerLife*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_life_S(SDG_Unturned_PlayerLife* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_life");
Memory::write<SDG_Unturned_PlayerLife*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_crafting_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_crafting");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_crafting_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_crafting");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_skills_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_skills");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_skills_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_skills");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerMovement* SDG_Unturned_Player::_movement_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_movement");
return Memory::read<SDG_Unturned_PlayerMovement*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_movement_S(SDG_Unturned_PlayerMovement* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_movement");
Memory::write<SDG_Unturned_PlayerMovement*>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerLook* SDG_Unturned_Player::_look_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_look");
return Memory::read<SDG_Unturned_PlayerLook*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_look_S(SDG_Unturned_PlayerLook* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_look");
Memory::write<SDG_Unturned_PlayerLook*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_stance_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_stance");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_stance_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_stance");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerInput* SDG_Unturned_Player::_input_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_input");
return Memory::read<SDG_Unturned_PlayerInput*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_input_S(SDG_Unturned_PlayerInput* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_input");
Memory::write<SDG_Unturned_PlayerInput*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_voice_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_voice");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_voice_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_voice");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
SDG_Unturned_PlayerInteract* SDG_Unturned_Player::_interact_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_interact");
return Memory::read<SDG_Unturned_PlayerInteract*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_interact_S(SDG_Unturned_PlayerInteract* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_interact");
Memory::write<SDG_Unturned_PlayerInteract*>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_workzone_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_workzone");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_workzone_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_workzone");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_quests_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_quests");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_quests_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_quests");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_Player::_first_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_first");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_first_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_first");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_Player::_third_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_third");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_third_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_third");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_Player::_character_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_character");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_character_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_character");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_Player::firstSpot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "firstSpot");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::firstSpot_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "firstSpot");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_Player::thirdSpot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "thirdSpot");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::thirdSpot_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "thirdSpot");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_Player::itemOn_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "itemOn");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::itemOn_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "itemOn");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::itemLightConfig_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "itemLightConfig");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::itemLightConfig_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "itemLightConfig");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_Player::headlampOn_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "headlampOn");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::headlampOn_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "headlampOn");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::headlampLightConfig_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "headlampLightConfig");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::headlampLightConfig_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "headlampLightConfig");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_Player::screenshotsExpected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsExpected");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::screenshotsExpected_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsExpected");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::screenshotsDestination_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsDestination");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::screenshotsDestination_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsDestination");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::screenshotsCallbacks_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsCallbacks");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::screenshotsCallbacks_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotsCallbacks");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::SendScreenshotDestination_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendScreenshotDestination");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendScreenshotDestination_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendScreenshotDestination");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendScreenshotRelay_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendScreenshotRelay");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendScreenshotRelay_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendScreenshotRelay");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::screenshotFinal_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotFinal");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::screenshotFinal_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "screenshotFinal");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::SendTakeScreenshot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTakeScreenshot");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendTakeScreenshot_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTakeScreenshot");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendBrowserRequest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendBrowserRequest");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendBrowserRequest_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendBrowserRequest");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendHintMessage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendHintMessage");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendHintMessage_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendHintMessage");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendRelayToServer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendRelayToServer");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendRelayToServer_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendRelayToServer");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::pluginWidgetFlags_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<pluginWidgetFlags>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::pluginWidgetFlags_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<pluginWidgetFlags>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::SendSetPluginWidgetFlags_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendSetPluginWidgetFlags");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendSetPluginWidgetFlags_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendSetPluginWidgetFlags");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Player::wantsBattlEyeLogs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<wantsBattlEyeLogs>k__BackingField");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::wantsBattlEyeLogs_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<wantsBattlEyeLogs>k__BackingField");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::SendBattlEyeLogsRequest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendBattlEyeLogsRequest");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendBattlEyeLogsRequest_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendBattlEyeLogsRequest");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendTerminalRelay_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTerminalRelay");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendTerminalRelay_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTerminalRelay");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Player::TELEPORT_VERTICAL_OFFSET_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "TELEPORT_VERTICAL_OFFSET");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::TELEPORT_VERTICAL_OFFSET_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "TELEPORT_VERTICAL_OFFSET");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendTeleport_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTeleport");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendTeleport_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendTeleport");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendStat_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendStat");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendStat_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendStat");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendAchievementUnlocked_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendAchievementUnlocked");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendAchievementUnlocked_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendAchievementUnlocked");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Player::SendUIMessage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendUIMessage");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Player::SendUIMessage_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "SendUIMessage");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Player::maxRateLimitedActionsPerSecond_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "maxRateLimitedActionsPerSecond");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::maxRateLimitedActionsPerSecond_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "maxRateLimitedActionsPerSecond");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
float SDG_Unturned_Player::rateLimitedActionsCredits_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<rateLimitedActionsCredits>k__BackingField");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::rateLimitedActionsCredits_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "<rateLimitedActionsCredits>k__BackingField");
Memory::write<float>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Player::_netId_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_netId");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Player::_netId_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Player", "_netId");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
void SDG_Unturned_Player::add_onPlayerStatIncremented(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D09));
return _method(value);
}
void SDG_Unturned_Player::remove_onPlayerStatIncremented(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0A));
return _method(value);
}
void SDG_Unturned_Player::add_onLocalPluginWidgetFlagsChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0B));
return _method(this, value);
}
void SDG_Unturned_Player::remove_onLocalPluginWidgetFlagsChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0C));
return _method(this, value);
}
bool SDG_Unturned_Player::get_isLoading()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0D));
return _method();
}
SDG_Unturned_Player* SDG_Unturned_Player::get_player()
{
using method_t = SDG_Unturned_Player*(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0E));
return _method();
}
SDG_Unturned_Player* SDG_Unturned_Player::get_instance()
{
using method_t = SDG_Unturned_Player*(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D0F));
return _method();
}
SDG_Unturned_SteamChannel* SDG_Unturned_Player::get_channel()
{
using method_t = SDG_Unturned_SteamChannel*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D10));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_animator()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D11));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_clothing()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D12));
return _method(this);
}
SDG_Unturned_PlayerInventory* SDG_Unturned_Player::get_inventory()
{
using method_t = SDG_Unturned_PlayerInventory*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D13));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_equipment()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D14));
return _method(this);
}
SDG_Unturned_PlayerLife* SDG_Unturned_Player::get_life()
{
using method_t = SDG_Unturned_PlayerLife*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D15));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_crafting()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D16));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_skills()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D17));
return _method(this);
}
SDG_Unturned_PlayerMovement* SDG_Unturned_Player::get_movement()
{
using method_t = SDG_Unturned_PlayerMovement*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D18));
return _method(this);
}
SDG_Unturned_PlayerLook* SDG_Unturned_Player::get_look()
{
using method_t = SDG_Unturned_PlayerLook*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D19));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_stance()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1A));
return _method(this);
}
SDG_Unturned_PlayerInput* SDG_Unturned_Player::get_input()
{
using method_t = SDG_Unturned_PlayerInput*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1B));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_voice()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1C));
return _method(this);
}
SDG_Unturned_PlayerInteract* SDG_Unturned_Player::get_interact()
{
using method_t = SDG_Unturned_PlayerInteract*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1D));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_workzone()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1E));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_quests()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D1F));
return _method(this);
}
UnityEngine_Transform* SDG_Unturned_Player::get_first()
{
using method_t = UnityEngine_Transform*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D20));
return _method(this);
}
UnityEngine_Transform* SDG_Unturned_Player::get_third()
{
using method_t = UnityEngine_Transform*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D21));
return _method(this);
}
UnityEngine_Transform* SDG_Unturned_Player::get_character()
{
using method_t = UnityEngine_Transform*(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D22));
return _method(this);
}
bool SDG_Unturned_Player::get_isSpotOn()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D23));
return _method(this);
}
unknown_type SDG_Unturned_Player::get_lightConfig()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D24));
return _method(this);
}
unknown_type SDG_Unturned_Player::PlayAudioReference(unknown_type audioReference)
{
using method_t = unknown_type(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D25));
return _method(this, audioReference);
}
unknown_type SDG_Unturned_Player::playSound(unknown_type clip, float volume, float pitch, float deviation)
{
using method_t = unknown_type(*)(SDG_Unturned_Player*, unknown_type, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D26));
return _method(this, clip, volume, pitch, deviation);
}
unknown_type SDG_Unturned_Player::playSound1(unknown_type clip, float pitch, float deviation)
{
using method_t = unknown_type(*)(SDG_Unturned_Player*, unknown_type, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D27));
return _method(this, clip, pitch, deviation);
}
unknown_type SDG_Unturned_Player::playSound2(unknown_type clip, float volume)
{
using method_t = unknown_type(*)(SDG_Unturned_Player*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D28));
return _method(this, clip, volume);
}
unknown_type SDG_Unturned_Player::playSound3(unknown_type clip)
{
using method_t = unknown_type(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D29));
return _method(this, clip);
}
void SDG_Unturned_Player::tellScreenshotDestination(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2A));
return _method(this, steamID);
}
void SDG_Unturned_Player::ReceiveScreenshotDestination(unknown_type context)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2B));
return _method(this, context);
}
void SDG_Unturned_Player::HandleScreenshotData(unknown_type data)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2C));
return _method(this, data);
}
void SDG_Unturned_Player::tellScreenshotRelay(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2D));
return _method(this, steamID);
}
void SDG_Unturned_Player::ReceiveScreenshotRelay(unknown_type context)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2E));
return _method(this, context);
}
unknown_type SDG_Unturned_Player::takeScreenshot()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D2F));
return _method(this);
}
void SDG_Unturned_Player::askScreenshot(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D30));
return _method(this, steamID);
}
void SDG_Unturned_Player::ReceiveTakeScreenshot()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D31));
return _method(this);
}
void SDG_Unturned_Player::sendScreenshot(unknown_type destination, unknown_type callback)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D32));
return _method(this, destination, callback);
}
void SDG_Unturned_Player::askBrowserRequest(unknown_type steamID, unknown_type msg, unknown_type url)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D33));
return _method(this, steamID, msg, url);
}
void SDG_Unturned_Player::ReceiveBrowserRequest(unknown_type msg, unknown_type url)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D34));
return _method(this, msg, url);
}
void SDG_Unturned_Player::sendBrowserRequest(unknown_type msg, unknown_type url)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D35));
return _method(this, msg, url);
}
void SDG_Unturned_Player::ReceiveHintMessage(unknown_type message, float durationSeconds)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D36));
return _method(this, message, durationSeconds);
}
void SDG_Unturned_Player::ServerShowHint(unknown_type message, float durationSeconds)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D37));
return _method(this, message, durationSeconds);
}
void SDG_Unturned_Player::askRelayToServer(unknown_type steamID, uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, uint32_t, uint16_t, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D38));
return _method(this, steamID, ip, port, password, shouldShowMenu);
}
void SDG_Unturned_Player::ReceiveRelayToServer(uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu)
{
using method_t = void(*)(SDG_Unturned_Player*, uint32_t, uint16_t, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D39));
return _method(this, ip, port, password, shouldShowMenu);
}
void SDG_Unturned_Player::sendRelayToServer(uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu)
{
using method_t = void(*)(SDG_Unturned_Player*, uint32_t, uint16_t, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3A));
return _method(this, ip, port, password, shouldShowMenu);
}
void SDG_Unturned_Player::sendRelayToServer1(uint32_t ip, uint16_t port, unknown_type password)
{
using method_t = void(*)(SDG_Unturned_Player*, uint32_t, uint16_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3B));
return _method(this, ip, port, password);
}
bool SDG_Unturned_Player::get_inPluginModal()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3C));
return _method(this);
}
bool SDG_Unturned_Player::isPluginWidgetFlagActive(unknown_type flag)
{
using method_t = bool(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3D));
return _method(this, flag);
}
unknown_type SDG_Unturned_Player::get_pluginWidgetFlags()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3E));
return _method(this);
}
void SDG_Unturned_Player::set_pluginWidgetFlags(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D3F));
return _method(this, value);
}
void SDG_Unturned_Player::clientsideSetPluginWidgetFlags(unknown_type steamID, uint32_t newFlags)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D40));
return _method(this, steamID, newFlags);
}
void SDG_Unturned_Player::ReceiveSetPluginWidgetFlags(uint32_t newFlags)
{
using method_t = void(*)(SDG_Unturned_Player*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D41));
return _method(this, newFlags);
}
void SDG_Unturned_Player::setAllPluginWidgetFlags(unknown_type newFlags)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D42));
return _method(this, newFlags);
}
void SDG_Unturned_Player::enablePluginWidgetFlag(unknown_type flag)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D43));
return _method(this, flag);
}
void SDG_Unturned_Player::disablePluginWidgetFlag(unknown_type flag)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D44));
return _method(this, flag);
}
void SDG_Unturned_Player::setPluginWidgetFlag(unknown_type flag, bool active)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D45));
return _method(this, flag, active);
}
void SDG_Unturned_Player::serversideSetPluginModal(bool enableModal)
{
using method_t = void(*)(SDG_Unturned_Player*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D46));
return _method(this, enableModal);
}
bool SDG_Unturned_Player::get_wantsBattlEyeLogs()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D47));
return _method(this);
}
void SDG_Unturned_Player::set_wantsBattlEyeLogs(bool value)
{
using method_t = void(*)(SDG_Unturned_Player*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D48));
return _method(this, value);
}
void SDG_Unturned_Player::askRequestBattlEyeLogs(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D49));
return _method(this, steamID);
}
void SDG_Unturned_Player::ReceiveBattlEyeLogsRequest()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4A));
return _method(this);
}
void SDG_Unturned_Player::tellTerminalRelay(unknown_type steamID, unknown_type internalMessage)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4B));
return _method(this, steamID, internalMessage);
}
void SDG_Unturned_Player::ReceiveTerminalRelay(unknown_type internalMessage)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4C));
return _method(this, internalMessage);
}
void SDG_Unturned_Player::sendTerminalRelay(unknown_type internalMessage, unknown_type internalCategory, unknown_type displayCategory)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4D));
return _method(this, internalMessage, internalCategory, displayCategory);
}
void SDG_Unturned_Player::sendTerminalRelay1(unknown_type internalMessage)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4E));
return _method(this, internalMessage);
}
void SDG_Unturned_Player::PostTeleport()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D4F));
return _method(this);
}
void SDG_Unturned_Player::askTeleport(unknown_type steamID, UnityEngine_Vector3 position, uint8_t angle)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D50));
return _method(this, steamID, position, angle);
}
void SDG_Unturned_Player::ReceiveTeleport(UnityEngine_Vector3 position, uint8_t angle)
{
using method_t = void(*)(SDG_Unturned_Player*, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D51));
return _method(this, position, angle);
}
void SDG_Unturned_Player::sendTeleport(UnityEngine_Vector3 position, uint8_t angle)
{
using method_t = void(*)(SDG_Unturned_Player*, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D52));
return _method(this, position, angle);
}
bool SDG_Unturned_Player::teleportToPlayer(SDG_Unturned_Player* otherPlayer)
{
using method_t = bool(*)(SDG_Unturned_Player*, SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D53));
return _method(this, otherPlayer);
}
bool SDG_Unturned_Player::teleportToLocation(UnityEngine_Vector3 position, float yaw)
{
using method_t = bool(*)(SDG_Unturned_Player*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D54));
return _method(this, position, yaw);
}
bool SDG_Unturned_Player::teleportToRandomSpawnPoint()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D55));
return _method(this);
}
bool SDG_Unturned_Player::teleportToBed()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D56));
return _method(this);
}
bool SDG_Unturned_Player::adjustStanceOrTeleportIfStuck()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D57));
return _method(this);
}
void SDG_Unturned_Player::teleportToLocationUnsafe(UnityEngine_Vector3 position, float yaw)
{
using method_t = void(*)(SDG_Unturned_Player*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D58));
return _method(this, position, yaw);
}
void SDG_Unturned_Player::tellStat(unknown_type steamID, uint8_t newStat)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D59));
return _method(this, steamID, newStat);
}
void SDG_Unturned_Player::ReceiveStat(unknown_type stat)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5A));
return _method(this, stat);
}
void SDG_Unturned_Player::tellAchievementUnlocked(unknown_type steamID, unknown_type id)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5B));
return _method(this, steamID, id);
}
void SDG_Unturned_Player::ReceiveAchievementUnlocked(unknown_type id)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5C));
return _method(this, id);
}
void SDG_Unturned_Player::trackStat(unknown_type stat)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5D));
return _method(this, stat);
}
void SDG_Unturned_Player::sendStat(unknown_type kill)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5E));
return _method(this, kill);
}
void SDG_Unturned_Player::sendStat1(unknown_type stat)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D5F));
return _method(this, stat);
}
void SDG_Unturned_Player::sendAchievementUnlocked(unknown_type id)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D60));
return _method(this, id);
}
void SDG_Unturned_Player::askMessage(unknown_type steamID, uint8_t message)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D61));
return _method(this, steamID, message);
}
void SDG_Unturned_Player::ReceiveUIMessage(unknown_type message)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D62));
return _method(this, message);
}
void SDG_Unturned_Player::sendMessage(unknown_type message)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D63));
return _method(this, message);
}
void SDG_Unturned_Player::enableItemSpotLight(unknown_type config)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D64));
return _method(this, config);
}
void SDG_Unturned_Player::disableItemSpotLight()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D65));
return _method(this);
}
void SDG_Unturned_Player::updateGlassesLights(bool on)
{
using method_t = void(*)(SDG_Unturned_Player*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D66));
return _method(this, on);
}
void SDG_Unturned_Player::enableHeadlamp(unknown_type config)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D67));
return _method(this, config);
}
void SDG_Unturned_Player::disableHeadlamp()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D68));
return _method(this);
}
void SDG_Unturned_Player::updateLights()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D69));
return _method(this);
}
void SDG_Unturned_Player::onPerspectiveUpdated(unknown_type newPerspective)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6A));
return _method(this, newPerspective);
}
float SDG_Unturned_Player::get_rateLimitedActionsCredits()
{
using method_t = float(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6B));
return _method(this);
}
void SDG_Unturned_Player::set_rateLimitedActionsCredits(float value)
{
using method_t = void(*)(SDG_Unturned_Player*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6C));
return _method(this, value);
}
bool SDG_Unturned_Player::tryToPerformRateLimitedAction()
{
using method_t = bool(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6D));
return _method(this);
}
void SDG_Unturned_Player::updateRateLimiting()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6E));
return _method(this);
}
void SDG_Unturned_Player::Update()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D6F));
return _method(this);
}
void SDG_Unturned_Player::InitializePlayerStart()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D70));
return _method(this);
}
void SDG_Unturned_Player::AssignNetIdBlock(unknown_type baseId)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D71));
return _method(this, baseId);
}
void SDG_Unturned_Player::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D72));
return _method(this);
}
void SDG_Unturned_Player::SendInitialPlayerState(SDG_Unturned_SteamPlayer* client)
{
using method_t = void(*)(SDG_Unturned_Player*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D73));
return _method(this, client);
}
void SDG_Unturned_Player::SendInitialPlayerState1(unknown_type transportConnections)
{
using method_t = void(*)(SDG_Unturned_Player*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D74));
return _method(this, transportConnections);
}
void SDG_Unturned_Player::ReleaseNetIdBlock()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D75));
return _method(this);
}
void SDG_Unturned_Player::Awake()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D76));
return _method(this);
}
void SDG_Unturned_Player::OnDestroy()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D77));
return _method(this);
}
void SDG_Unturned_Player::save()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D78));
return _method(this);
}
void SDG_Unturned_Player::savePositionAndRotation()
{
using method_t = void(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D79));
return _method(this);
}
unknown_type SDG_Unturned_Player::GetNetId()
{
using method_t = unknown_type(*)(SDG_Unturned_Player*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Player", 0x06002D7A));
return _method(this);
}
};
