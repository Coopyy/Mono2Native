#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerLife::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerLife");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
uint8_t SDG_Unturned_PlayerLife::SAVEDATA_VERSION_LATEST_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION_LATEST");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SAVEDATA_VERSION_LATEST_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION_LATEST");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerLife::SAVEDATA_VERSION_WITH_OXYGEN_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION_WITH_OXYGEN");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SAVEDATA_VERSION_WITH_OXYGEN_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION_WITH_OXYGEN");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_PlayerLife::SAVEDATA_VERSION_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SAVEDATA_VERSION_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SAVEDATA_VERSION");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLife::COMBAT_COOLDOWN_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "COMBAT_COOLDOWN");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::COMBAT_COOLDOWN_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "COMBAT_COOLDOWN");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onPlayerLifeUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onPlayerLifeUpdated");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::onPlayerLifeUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onPlayerLifeUpdated");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnPreDeath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnPreDeath");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnPreDeath_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnPreDeath");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onPlayerDied_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onPlayerDied");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::onPlayerDied_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onPlayerDied");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellHealth_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellHealth_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellHealth_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellHealth_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellFood_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellFood_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellFood_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellFood_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellWater_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellWater_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellWater_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellWater_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellVirus_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellVirus_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellVirus_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellVirus_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellBleeding_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellBleeding_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellBleeding_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellBleeding_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnTellBroken_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellBroken_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnTellBroken_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnTellBroken_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::RocketLegacyOnDeath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "RocketLegacyOnDeath");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::RocketLegacyOnDeath_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "RocketLegacyOnDeath");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnRevived_Global_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnRevived_Global");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnRevived_Global_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnRevived_Global");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnSelectingRespawnPoint_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnSelectingRespawnPoint");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::OnSelectingRespawnPoint_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnSelectingRespawnPoint");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onLifeUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onLifeUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onLifeUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onLifeUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onHealthUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onHealthUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onHealthUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onHealthUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onFoodUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onFoodUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onFoodUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onFoodUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onWaterUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onWaterUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onWaterUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onWaterUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onVirusUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onVirusUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onVirusUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onVirusUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onStaminaUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onStaminaUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onStaminaUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onStaminaUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onVisionUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onVisionUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onVisionUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onVisionUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onOxygenUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onOxygenUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onOxygenUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onOxygenUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onBleedingUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onBleedingUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onBleedingUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onBleedingUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onBrokenUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onBrokenUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onBrokenUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onBrokenUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onTemperatureUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onTemperatureUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onTemperatureUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onTemperatureUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onDamaged_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onDamaged");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onDamaged_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onDamaged");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::onHurt_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onHurt");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::onHurt_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "onHurt");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::wasPvPDeath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "<wasPvPDeath>k__BackingField");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::wasPvPDeath_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "<wasPvPDeath>k__BackingField");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::_deathCause_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathCause");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::_deathCause_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathCause");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::_deathLimb_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathLimb");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::_deathLimb_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathLimb");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::_deathKiller_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathKiller");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::_deathKiller_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_deathKiller");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::recentKiller_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "recentKiller");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::recentKiller_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "recentKiller");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::lastTimeAggressive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeAggressive");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastTimeAggressive_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeAggressive");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::lastTimeTookDamage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeTookDamage");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastTimeTookDamage_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeTookDamage");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::lastTimeCausedDamage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeCausedDamage");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastTimeCausedDamage_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTimeCausedDamage");
Memory::write<float>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::_isDead_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isDead");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_isDead_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isDead");
Memory::write<bool>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::lastHealth_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastHealth");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastHealth_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastHealth");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_health_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_health");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_health_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_health");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_food_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_food");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_food_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_food");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_water_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_water");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_water_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_water");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_virus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_virus");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_virus_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_virus");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_vision_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_vision");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_vision_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_vision");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::_warmth_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_warmth");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_warmth_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_warmth");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_stamina_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_stamina");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_stamina_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_stamina");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLife::_oxygen_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_oxygen");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_oxygen_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_oxygen");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::_isBleeding_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isBleeding");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_isBleeding_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isBleeding");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::_isBroken_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isBroken");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_isBroken_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_isBroken");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::_temperature_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_temperature");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_temperature_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_temperature");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastStarve_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastStarve");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastStarve_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastStarve");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastDehydrate_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastDehydrate");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastDehydrate_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastDehydrate");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastUncleaned_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastUncleaned");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastUncleaned_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastUncleaned");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastView_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastView");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastView_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastView");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastTire_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTire");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastTire_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastTire");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastSuffocate_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastSuffocate");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastSuffocate_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastSuffocate");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastRest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRest");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastRest_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRest");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastBreath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBreath");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastBreath_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBreath");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastInfect_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastInfect");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastInfect_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastInfect");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastBleed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBleed");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastBleed_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBleed");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastBleeding_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBleeding");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastBleeding_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBleeding");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastBroken_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBroken");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastBroken_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBroken");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastFreeze_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastFreeze");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastFreeze_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastFreeze");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastWarm_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastWarm");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastWarm_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastWarm");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastBurn_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBurn");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastBurn_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastBurn");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastCovered_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastCovered");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastCovered_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastCovered");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastRegenerate_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRegenerate");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastRegenerate_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRegenerate");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerLife::lastRadiate_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRadiate");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastRadiate_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastRadiate");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::wasWarm_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasWarm");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::wasWarm_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasWarm");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::wasCovered_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasCovered");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::wasCovered_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasCovered");
Memory::write<bool>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::_lastRespawn_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_lastRespawn");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_lastRespawn_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_lastRespawn");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::_lastDeath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_lastDeath");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::_lastDeath_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "_lastDeath");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::lastSuicide_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastSuicide");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastSuicide_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastSuicide");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLife::lastAlive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastAlive");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::lastAlive_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "lastAlive");
Memory::write<float>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLife::ragdoll_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "ragdoll");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::ragdoll_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "ragdoll");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::ragdollEffect_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "ragdollEffect");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::ragdollEffect_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "ragdollEffect");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::spawnpoint_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "spawnpoint");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::spawnpoint_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "spawnpoint");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendDeath_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDeath");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendDeath_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDeath");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendDead_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDead");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendDead_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDead");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendRevive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendRevive");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendRevive_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendRevive");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendLifeStats_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendLifeStats");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendLifeStats_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendLifeStats");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendHealth_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendHealth");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendHealth_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendHealth");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendDamagedEvent_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDamagedEvent");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendDamagedEvent_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendDamagedEvent");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendFood_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendFood");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendFood_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendFood");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendWater_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendWater");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendWater_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendWater");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendVirus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendVirus");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendVirus_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendVirus");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendBleeding_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendBleeding");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendBleeding_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendBleeding");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendBroken_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendBroken");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendBroken_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendBroken");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendModifyStamina_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyStamina");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendModifyStamina_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyStamina");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendModifyHallucination_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyHallucination");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendModifyHallucination_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyHallucination");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendModifyWarmth_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyWarmth");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendModifyWarmth_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendModifyWarmth");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendRespawnRequest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendRespawnRequest");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendRespawnRequest_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendRespawnRequest");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::SendSuicideRequest_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendSuicideRequest");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::SendSuicideRequest_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "SendSuicideRequest");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_PlayerLife::isAsphyxiating_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "isAsphyxiating");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::isAsphyxiating_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "isAsphyxiating");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnIsAsphyxiatingChanged_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnIsAsphyxiatingChanged");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::OnIsAsphyxiatingChanged_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnIsAsphyxiatingChanged");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLife::BonesRef_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "BonesRef");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLife::BonesRef_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "BonesRef");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLife::OnFallDamageRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnFallDamageRequested");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::OnFallDamageRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "OnFallDamageRequested");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLife::wasLoadCalled_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasLoadCalled");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::wasLoadCalled_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLife", "wasLoadCalled");
Memory::write<bool>(value, THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLife::add_OnPreDeath(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600301D));
return _method(value);
}
void SDG_Unturned_PlayerLife::remove_OnPreDeath(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600301E));
return _method(value);
}
void SDG_Unturned_PlayerLife::add_onPlayerDied(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600301F));
return _method(value);
}
void SDG_Unturned_PlayerLife::remove_onPlayerDied(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003020));
return _method(value);
}
void SDG_Unturned_PlayerLife::broadcastPlayerDied(SDG_Unturned_PlayerLife* sender, unknown_type cause, unknown_type limb, unknown_type instigator)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003021));
return _method(sender, cause, limb, instigator);
}
void SDG_Unturned_PlayerLife::add_OnSelectingRespawnPoint(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003022));
return _method(value);
}
void SDG_Unturned_PlayerLife::remove_OnSelectingRespawnPoint(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003023));
return _method(value);
}
void SDG_Unturned_PlayerLife::add_onHurt(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003024));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::remove_onHurt(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003025));
return _method(this, value);
}
bool SDG_Unturned_PlayerLife::get_wasPvPDeath()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003026));
return _method(this);
}
void SDG_Unturned_PlayerLife::set_wasPvPDeath(bool value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003027));
return _method(this, value);
}
unknown_type SDG_Unturned_PlayerLife::get_deathCause()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003028));
return _method();
}
unknown_type SDG_Unturned_PlayerLife::get_deathLimb()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003029));
return _method();
}
unknown_type SDG_Unturned_PlayerLife::get_deathKiller()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302A));
return _method();
}
bool SDG_Unturned_PlayerLife::get_isAggressor()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302B));
return _method(this);
}
void SDG_Unturned_PlayerLife::markAggressive(bool force, bool spreadToGroup)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302C));
return _method(this, force, spreadToGroup);
}
bool SDG_Unturned_PlayerLife::get_isDead()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302D));
return _method(this);
}
bool SDG_Unturned_PlayerLife::get_IsAlive()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302E));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_health()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600302F));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_food()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003030));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_water()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003031));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_virus()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003032));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_vision()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003033));
return _method(this);
}
uint32_t SDG_Unturned_PlayerLife::get_warmth()
{
using method_t = uint32_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003034));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_stamina()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003035));
return _method(this);
}
uint8_t SDG_Unturned_PlayerLife::get_oxygen()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003036));
return _method(this);
}
bool SDG_Unturned_PlayerLife::get_isBleeding()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003037));
return _method(this);
}
bool SDG_Unturned_PlayerLife::get_isBroken()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003038));
return _method(this);
}
unknown_type SDG_Unturned_PlayerLife::get_temperature()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003039));
return _method(this);
}
float SDG_Unturned_PlayerLife::get_lastRespawn()
{
using method_t = float(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303A));
return _method(this);
}
float SDG_Unturned_PlayerLife::get_lastDeath()
{
using method_t = float(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303B));
return _method(this);
}
void SDG_Unturned_PlayerLife::tellDeath(unknown_type steamID, uint8_t newCause, uint8_t newLimb, unknown_type newKiller)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t, uint8_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303C));
return _method(this, steamID, newCause, newLimb, newKiller);
}
void SDG_Unturned_PlayerLife::ReceiveDeath(unknown_type newCause, unknown_type newLimb, unknown_type newKiller)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303D));
return _method(this, newCause, newLimb, newKiller);
}
void SDG_Unturned_PlayerLife::tellDead(unknown_type steamID, UnityEngine_Vector3 newRagdoll, uint8_t newRagdollEffect)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303E));
return _method(this, steamID, newRagdoll, newRagdollEffect);
}
void SDG_Unturned_PlayerLife::ReceiveDead(UnityEngine_Vector3 newRagdoll, unknown_type newRagdollEffect)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, UnityEngine_Vector3, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600303F));
return _method(this, newRagdoll, newRagdollEffect);
}
void SDG_Unturned_PlayerLife::tellRevive(unknown_type steamID, UnityEngine_Vector3 position, uint8_t angle)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003040));
return _method(this, steamID, position, angle);
}
void SDG_Unturned_PlayerLife::ReceiveRevive(UnityEngine_Vector3 position, uint8_t angle)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, UnityEngine_Vector3, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003041));
return _method(this, position, angle);
}
void SDG_Unturned_PlayerLife::tellLife(unknown_type steamID, uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, bool newBleeding, bool newBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003042));
return _method(this, steamID, newHealth, newFood, newWater, newVirus, newBleeding, newBroken);
}
void SDG_Unturned_PlayerLife::tellLifeWithOxygen(unknown_type steamID, uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, uint8_t newOxygen, bool newBleeding, bool newBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003043));
return _method(this, steamID, newHealth, newFood, newWater, newVirus, newOxygen, newBleeding, newBroken);
}
void SDG_Unturned_PlayerLife::ReceiveLifeStats(uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, uint8_t newOxygen, bool newBleeding, bool newBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003044));
return _method(this, newHealth, newFood, newWater, newVirus, newOxygen, newBleeding, newBroken);
}
void SDG_Unturned_PlayerLife::askLife(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003045));
return _method(this, steamID);
}
void SDG_Unturned_PlayerLife::SendInitialPlayerState(SDG_Unturned_SteamPlayer* client)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003046));
return _method(this, client);
}
void SDG_Unturned_PlayerLife::SendInitialPlayerState1(unknown_type transportConnections)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003047));
return _method(this, transportConnections);
}
void SDG_Unturned_PlayerLife::tellHealth(unknown_type steamID, uint8_t newHealth)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003048));
return _method(this, steamID, newHealth);
}
void SDG_Unturned_PlayerLife::ReceiveHealth(uint8_t newHealth)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003049));
return _method(this, newHealth);
}
void SDG_Unturned_PlayerLife::ReceiveDamagedEvent(uint8_t damageAmount, UnityEngine_Vector3 damageDirection)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304A));
return _method(this, damageAmount, damageDirection);
}
void SDG_Unturned_PlayerLife::tellFood(unknown_type steamID, uint8_t newFood)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304B));
return _method(this, steamID, newFood);
}
void SDG_Unturned_PlayerLife::ReceiveFood(uint8_t newFood)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304C));
return _method(this, newFood);
}
void SDG_Unturned_PlayerLife::tellWater(unknown_type steamID, uint8_t newWater)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304D));
return _method(this, steamID, newWater);
}
void SDG_Unturned_PlayerLife::ReceiveWater(uint8_t newWater)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304E));
return _method(this, newWater);
}
void SDG_Unturned_PlayerLife::tellVirus(unknown_type steamID, uint8_t newVirus)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600304F));
return _method(this, steamID, newVirus);
}
void SDG_Unturned_PlayerLife::ReceiveVirus(uint8_t newVirus)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003050));
return _method(this, newVirus);
}
void SDG_Unturned_PlayerLife::tellBleeding(unknown_type steamID, bool newBleeding)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003051));
return _method(this, steamID, newBleeding);
}
void SDG_Unturned_PlayerLife::ReceiveBleeding(bool newBleeding)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003052));
return _method(this, newBleeding);
}
void SDG_Unturned_PlayerLife::tellBroken(unknown_type steamID, bool newBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003053));
return _method(this, steamID, newBroken);
}
void SDG_Unturned_PlayerLife::ReceiveBroken(bool newBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003054));
return _method(this, newBroken);
}
void SDG_Unturned_PlayerLife::askDamage(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003055));
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill);
}
void SDG_Unturned_PlayerLife::askDamage1(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3, unknown_type, unknown_type, unknown_type, unknown_type, bool, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003056));
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect);
}
void SDG_Unturned_PlayerLife::askDamage2(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3, unknown_type, unknown_type, unknown_type, unknown_type, bool, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003057));
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding);
}
void SDG_Unturned_PlayerLife::askDamage3(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding, bool bypassSafezone)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3, unknown_type, unknown_type, unknown_type, unknown_type, bool, unknown_type, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003058));
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding, bypassSafezone);
}
bool SDG_Unturned_PlayerLife::InternalCanDamage()
{
using method_t = bool(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003059));
return _method(this);
}
void SDG_Unturned_PlayerLife::doDamage(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, UnityEngine_Vector3, unknown_type, unknown_type, unknown_type, unknown_type, bool, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305A));
return _method(this, amount, newRagdoll, newCause, newLimb, newKiller, kill, trackKill, newRagdollEffect, canCauseBleeding);
}
void SDG_Unturned_PlayerLife::askHeal(uint8_t amount, bool healBleeding, bool healBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t, bool, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305B));
return _method(this, amount, healBleeding, healBroken);
}
void SDG_Unturned_PlayerLife::serverSetBleeding(bool newBleeding)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305C));
return _method(this, newBleeding);
}
void SDG_Unturned_PlayerLife::serverSetLegsBroken(bool newLegsBroken)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305D));
return _method(this, newLegsBroken);
}
void SDG_Unturned_PlayerLife::askStarve(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305E));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askEat(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600305F));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askDehydrate(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003060));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askDrink(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003061));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askInfect(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003062));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askRadiate(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003063));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askDisinfect(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003064));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::internalSetStamina(uint8_t value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003065));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::askTire(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003066));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askRest(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003067));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::simulatedModifyStamina(int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003068));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::simulatedModifyStamina1(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003069));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::clientModifyStamina(unknown_type senderId, int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306A));
return _method(this, senderId, delta);
}
void SDG_Unturned_PlayerLife::ReceiveModifyStamina(int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306B));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyStamina(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306C));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::askView(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306D));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::clientModifyHallucination(unknown_type senderId, int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306E));
return _method(this, senderId, delta);
}
void SDG_Unturned_PlayerLife::ReceiveModifyHallucination(int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600306F));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyHallucination(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003070));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::tellHallucinate(unknown_type senderId, uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003071));
return _method(this, senderId, amount);
}
void SDG_Unturned_PlayerLife::sendHallucination(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003072));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::simulatedModifyWarmth(int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003073));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::clientModifyWarmth(unknown_type senderId, int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003074));
return _method(this, senderId, delta);
}
void SDG_Unturned_PlayerLife::ReceiveModifyWarmth(int16_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003075));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyWarmth(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003076));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::askBlind(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003077));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askSuffocate(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003078));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::askBreath(uint8_t amount)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003079));
return _method(this, amount);
}
void SDG_Unturned_PlayerLife::simulatedModifyOxygen(int8_t delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, int8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307A));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::simulatedModifyOxygen1(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307B));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyHealth(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307C));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyFood(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307D));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyWater(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307E));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::serverModifyVirus(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600307F));
return _method(this, delta);
}
void SDG_Unturned_PlayerLife::askRespawn(unknown_type steamID, bool atHome)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003080));
return _method(this, steamID, atHome);
}
void SDG_Unturned_PlayerLife::ServerRespawn(bool atHome)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003081));
return _method(this, atHome);
}
void SDG_Unturned_PlayerLife::ReceiveRespawnRequest(bool atHome)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003082));
return _method(this, atHome);
}
void SDG_Unturned_PlayerLife::askSuicide(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003083));
return _method(this, steamID);
}
void SDG_Unturned_PlayerLife::ReceiveSuicideRequest()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003084));
return _method(this);
}
void SDG_Unturned_PlayerLife::sendRevive()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003085));
return _method(this);
}
void SDG_Unturned_PlayerLife::sendRespawn(bool atHome)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003086));
return _method(this, atHome);
}
void SDG_Unturned_PlayerLife::sendSuicide()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003087));
return _method(this);
}
void SDG_Unturned_PlayerLife::SimulateStaminaFrame(uint32_t simulation)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003088));
return _method(this, simulation);
}
void SDG_Unturned_PlayerLife::SetIsAsphyxiating(bool newIsAsphyxiating)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003089));
return _method(this, newIsAsphyxiating);
}
void SDG_Unturned_PlayerLife::add_OnIsAsphyxiatingChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308A));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::remove_OnIsAsphyxiatingChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308B));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::SimulateOxygenFrame(uint32_t simulation)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308C));
return _method(this, simulation);
}
void SDG_Unturned_PlayerLife::simulate(uint32_t simulation)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308D));
return _method(this, simulation);
}
void SDG_Unturned_PlayerLife::breakLegs()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308E));
return _method(this);
}
void SDG_Unturned_PlayerLife::add_OnFallDamageRequested(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x0600308F));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::remove_OnFallDamageRequested(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003090));
return _method(this, value);
}
void SDG_Unturned_PlayerLife::onLanded(float velocity)
{
using method_t = void(*)(SDG_Unturned_PlayerLife*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003091));
return _method(this, velocity);
}
void SDG_Unturned_PlayerLife::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003092));
return _method(this);
}
void SDG_Unturned_PlayerLife::load()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003093));
return _method(this);
}
void SDG_Unturned_PlayerLife::save()
{
using method_t = void(*)(SDG_Unturned_PlayerLife*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLife", 0x06003094));
return _method(this);
}
};
