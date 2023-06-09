#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerMovement::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerMovement");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
float SDG_Unturned_PlayerMovement::HEIGHT_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::HEIGHT_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::HEIGHT_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::HEIGHT_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::HEIGHT_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::HEIGHT_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "HEIGHT_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onLanded_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onLanded");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onLanded_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onLanded");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onSeated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onSeated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onSeated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onSeated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onVehicleUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onVehicleUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onVehicleUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onVehicleUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onSafetyUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onSafetyUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onSafetyUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onSafetyUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onRadiationUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onRadiationUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onRadiationUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onRadiationUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onPurchaseUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onPurchaseUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onPurchaseUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onPurchaseUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onRegionUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onRegionUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onRegionUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onRegionUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::onBoundUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onBoundUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::onBoundUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "onBoundUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::PlayerNavChanged_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "PlayerNavChanged");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::PlayerNavChanged_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "PlayerNavChanged");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_CLIMB_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_CLIMB");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_CLIMB_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_CLIMB");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_SWIM_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_SWIM");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_SWIM_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_SWIM");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_SPRINT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_SPRINT");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_SPRINT_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_SPRINT");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SPEED_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SPEED_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SPEED_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::JUMP_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "JUMP");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::JUMP_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "JUMP");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerMovement::SWIM_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SWIM");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SWIM_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SWIM");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::controller_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<controller>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::controller_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<controller>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::_multiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_multiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_multiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_multiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::multiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "multiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::multiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "multiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::itemGravityMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "itemGravityMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::itemGravityMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "itemGravityMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::pluginGravityMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginGravityMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pluginGravityMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginGravityMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::pluginSpeedMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginSpeedMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pluginSpeedMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginSpeedMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::pluginJumpMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginJumpMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pluginJumpMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pluginJumpMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::lastFootstep_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastFootstep");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::lastFootstep_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastFootstep");
Memory::write<float>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::_isGrounded_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isGrounded");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_isGrounded_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isGrounded");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::_isSafe_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isSafe");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_isSafe_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isSafe");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::isSafeInfo_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isSafeInfo");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::isSafeInfo_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isSafeInfo");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::_isRadiated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isRadiated");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_isRadiated_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isRadiated");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::ActiveDeadzone_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<ActiveDeadzone>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::ActiveDeadzone_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<ActiveDeadzone>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::_purchaseNode_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_purchaseNode");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_purchaseNode_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_purchaseNode");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::effectNode_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<effectNode>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::effectNode_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<effectNode>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::inRain_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "inRain");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::inRain_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "inRain");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::inSnow_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "inSnow");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::inSnow_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "inSnow");
Memory::write<bool>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerMovement::WeatherMask_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<WeatherMask>k__BackingField");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::WeatherMask_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "<WeatherMask>k__BackingField");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::materialName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "materialName");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::materialName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "materialName");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::materialIsWater_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "materialIsWater");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::materialIsWater_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "materialIsWater");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::ground_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "ground");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::ground_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "ground");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::height_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "height");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::height_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "height");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::wasSizeAppliedYet_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "wasSizeAppliedYet");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::wasSizeAppliedYet_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "wasSizeAppliedYet");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::_isMoving_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isMoving");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_isMoving_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_isMoving");
Memory::write<bool>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::_move_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_move");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_move_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_move");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_region_x_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_region_x");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_region_x_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_region_x");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_region_y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_region_y");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_region_y_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_region_y");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_bound_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_bound");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_bound_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_bound");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_nav_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_nav");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_nav_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_nav");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::updateRegionOld_X_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionOld_X");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updateRegionOld_X_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionOld_X");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::updateRegionOld_Y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionOld_Y");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updateRegionOld_Y_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionOld_Y");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::updateRegionNew_X_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionNew_X");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updateRegionNew_X_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionNew_X");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::updateRegionNew_Y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionNew_Y");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updateRegionNew_Y_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionNew_Y");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::updateRegionIndex_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionIndex");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updateRegionIndex_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updateRegionIndex");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::_loadedRegions_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_loadedRegions");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_loadedRegions_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_loadedRegions");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::_loadedBounds_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_loadedBounds");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_loadedBounds_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_loadedBounds");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::velocity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "velocity");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::velocity_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "velocity");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::pendingLaunchVelocity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingLaunchVelocity");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingLaunchVelocity_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingLaunchVelocity");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::lastUpdatePos_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastUpdatePos");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::lastUpdatePos_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastUpdatePos");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::snapshot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "snapshot");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::snapshot_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "snapshot");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::nsb_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "nsb");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::nsb_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "nsb");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_horizontal_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_horizontal");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_horizontal_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_horizontal");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::_vertical_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_vertical");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_vertical_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_vertical");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerMovement::warp_x_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "warp_x");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::warp_x_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "warp_x");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerMovement::warp_y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "warp_y");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::warp_y_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "warp_y");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerMovement::input_x_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "input_x");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::input_x_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "input_x");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerMovement::input_y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "input_y");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::input_y_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "input_y");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::_jump_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_jump");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::_jump_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "_jump");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::isAllowed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isAllowed");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::isAllowed_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isAllowed");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::isUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isUpdated");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::isUpdated_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "isUpdated");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::updates_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updates");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::updates_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "updates");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::canAddSimulationResultsToUpdates_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "canAddSimulationResultsToUpdates");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::canAddSimulationResultsToUpdates_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "canAddSimulationResultsToUpdates");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::bypassUndergroundWhitelist_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "bypassUndergroundWhitelist");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::bypassUndergroundWhitelist_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "bypassUndergroundWhitelist");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::hasPendingVehicleChange_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "hasPendingVehicleChange");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::hasPendingVehicleChange_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "hasPendingVehicleChange");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::pendingVehicle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingVehicle");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingVehicle_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingVehicle");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::pendingSeatIndex_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatIndex");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingSeatIndex_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatIndex");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_PlayerMovement::pendingSeatTransform_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatTransform");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingSeatTransform_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatTransform");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::pendingSeatPosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatPosition");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingSeatPosition_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatPosition");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::pendingSeatAngle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatAngle");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::pendingSeatAngle_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "pendingSeatAngle");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::lastStatPos_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastStatPos");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::lastStatPos_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastStatPos");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerMovement::lastStatTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastStatTime");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::lastStatTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "lastStatTime");
Memory::write<float>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::vehicle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "vehicle");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::vehicle_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "vehicle");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerMovement::seat_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "seat");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::seat_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "seat");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::SendPluginGravityMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginGravityMultiplier");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SendPluginGravityMultiplier_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginGravityMultiplier");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::SendPluginJumpMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginJumpMultiplier");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SendPluginJumpMultiplier_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginJumpMultiplier");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::SendPluginSpeedMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginSpeedMultiplier");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerMovement::SendPluginSpeedMultiplier_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "SendPluginSpeedMultiplier");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerMovement::mostRecentControllerColliderHit_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "mostRecentControllerColliderHit");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerMovement::mostRecentControllerColliderHit_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", "mostRecentControllerColliderHit");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerMovement::get_forceTrustClient()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F2));
return _method();
}
void SDG_Unturned_PlayerMovement::set_forceTrustClient(bool value)
{
using method_t = void(*)(bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F3));
return _method(value);
}
void SDG_Unturned_PlayerMovement::add_PlayerNavChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F4));
return _method(this, value);
}
void SDG_Unturned_PlayerMovement::remove_PlayerNavChanged(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F5));
return _method(this, value);
}
void SDG_Unturned_PlayerMovement::TriggerPlayerNavChanged(uint8_t oldNav, uint8_t newNav)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F6));
return _method(this, oldNav, newNav);
}
unknown_type SDG_Unturned_PlayerMovement::get_controller()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F7));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_controller(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F8));
return _method(this, value);
}
float SDG_Unturned_PlayerMovement::get_totalGravityMultiplier()
{
using method_t = float(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030F9));
return _method(this);
}
float SDG_Unturned_PlayerMovement::get_totalSpeedMultiplier()
{
using method_t = float(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FA));
return _method(this);
}
unknown_type SDG_Unturned_PlayerMovement::get_landscapeHoleVolume()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FB));
return _method(this);
}
bool SDG_Unturned_PlayerMovement::get_CanEnterTeleporter()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FC));
return _method(this);
}
void SDG_Unturned_PlayerMovement::DoTeleport(UnityEngine_Transform* inputTransform, UnityEngine_Transform* outputTransform)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FD));
return _method(this, inputTransform, outputTransform);
}
void SDG_Unturned_PlayerMovement::EnterCollisionTeleporter(unknown_type teleporter)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FE));
return _method(this, teleporter);
}
void SDG_Unturned_PlayerMovement::EnterTeleporterVolume(unknown_type entrance, unknown_type exit)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x060030FF));
return _method(this, entrance, exit);
}
bool SDG_Unturned_PlayerMovement::get_isGrounded()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003100));
return _method(this);
}
bool SDG_Unturned_PlayerMovement::get_isSafe()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003101));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_isSafe(bool value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003102));
return _method(this, value);
}
bool SDG_Unturned_PlayerMovement::get_isRadiated()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003103));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_isRadiated(bool value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003104));
return _method(this, value);
}
unknown_type SDG_Unturned_PlayerMovement::get_ActiveDeadzone()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003105));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_ActiveDeadzone(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003106));
return _method(this, value);
}
unknown_type SDG_Unturned_PlayerMovement::get_purchaseNode()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003107));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_purchaseNode(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003108));
return _method(this, value);
}
unknown_type SDG_Unturned_PlayerMovement::get_effectNode()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003109));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_effectNode(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310A));
return _method(this, value);
}
uint32_t SDG_Unturned_PlayerMovement::get_WeatherMask()
{
using method_t = uint32_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310B));
return _method(this);
}
void SDG_Unturned_PlayerMovement::set_WeatherMask(uint32_t value)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310C));
return _method(this, value);
}
void SDG_Unturned_PlayerMovement::setSize(unknown_type newHeight)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310D));
return _method(this, newHeight);
}
void SDG_Unturned_PlayerMovement::applySize()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310E));
return _method(this);
}
bool SDG_Unturned_PlayerMovement::get_isMoving()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600310F));
return _method(this);
}
float SDG_Unturned_PlayerMovement::get_speed()
{
using method_t = float(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003110));
return _method(this);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::get_move()
{
using method_t = UnityEngine_Vector3(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003111));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_region_x()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003112));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_region_y()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003113));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_bound()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003114));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_nav()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003115));
return _method(this);
}
unknown_type SDG_Unturned_PlayerMovement::get_loadedRegions()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003116));
return _method(this);
}
unknown_type SDG_Unturned_PlayerMovement::get_loadedBounds()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003117));
return _method(this);
}
float SDG_Unturned_PlayerMovement::get_fall()
{
using method_t = float(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003118));
return _method(this);
}
UnityEngine_Vector3 SDG_Unturned_PlayerMovement::get_real()
{
using method_t = UnityEngine_Vector3(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003119));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_horizontal()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311A));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::get_vertical()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311B));
return _method(this);
}
bool SDG_Unturned_PlayerMovement::get_jump()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311C));
return _method(this);
}
unknown_type SDG_Unturned_PlayerMovement::getVehicle()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311D));
return _method(this);
}
unknown_type SDG_Unturned_PlayerMovement::getVehicleSeat()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311E));
return _method(this);
}
uint8_t SDG_Unturned_PlayerMovement::getSeat()
{
using method_t = uint8_t(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600311F));
return _method(this);
}
void SDG_Unturned_PlayerMovement::updateVehicle()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003120));
return _method(this);
}
void SDG_Unturned_PlayerMovement::setVehicle(unknown_type newVehicle, uint8_t newSeat, UnityEngine_Transform* newSeatingTransform, UnityEngine_Vector3 newSeatingPosition, uint8_t newSeatingAngle, bool forceUpdate)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type, uint8_t, UnityEngine_Transform*, UnityEngine_Vector3, uint8_t, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003121));
return _method(this, newVehicle, newSeat, newSeatingTransform, newSeatingPosition, newSeatingAngle, forceUpdate);
}
void SDG_Unturned_PlayerMovement::tellPluginGravityMultiplier(unknown_type steamID, float newPluginGravityMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003122));
return _method(this, steamID, newPluginGravityMultiplier);
}
void SDG_Unturned_PlayerMovement::ReceivePluginGravityMultiplier(float newPluginGravityMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003123));
return _method(this, newPluginGravityMultiplier);
}
void SDG_Unturned_PlayerMovement::sendPluginGravityMultiplier(float newPluginGravityMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003124));
return _method(this, newPluginGravityMultiplier);
}
void SDG_Unturned_PlayerMovement::tellPluginJumpMultiplier(unknown_type steamID, float newPluginJumpMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003125));
return _method(this, steamID, newPluginJumpMultiplier);
}
void SDG_Unturned_PlayerMovement::ReceivePluginJumpMultiplier(float newPluginJumpMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003126));
return _method(this, newPluginJumpMultiplier);
}
void SDG_Unturned_PlayerMovement::sendPluginJumpMultiplier(float newPluginJumpMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003127));
return _method(this, newPluginJumpMultiplier);
}
void SDG_Unturned_PlayerMovement::tellPluginSpeedMultiplier(unknown_type steamID, float newPluginSpeedMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003128));
return _method(this, steamID, newPluginSpeedMultiplier);
}
void SDG_Unturned_PlayerMovement::ReceivePluginSpeedMultiplier(float newPluginSpeedMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003129));
return _method(this, newPluginSpeedMultiplier);
}
void SDG_Unturned_PlayerMovement::sendPluginSpeedMultiplier(float newPluginSpeedMultiplier)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312A));
return _method(this, newPluginSpeedMultiplier);
}
void SDG_Unturned_PlayerMovement::tellState(UnityEngine_Vector3 newPosition, uint8_t newPitch, uint8_t newYaw)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, UnityEngine_Vector3, uint8_t, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312B));
return _method(this, newPosition, newPitch, newYaw);
}
void SDG_Unturned_PlayerMovement::updateMovement()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312C));
return _method(this);
}
void SDG_Unturned_PlayerMovement::checkGround(UnityEngine_Vector3 position)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312D));
return _method(this, position);
}
bool SDG_Unturned_PlayerMovement::PlayLandAudioClip()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312E));
return _method(this);
}
void SDG_Unturned_PlayerMovement::PlayFootstepAudioClip()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600312F));
return _method(this);
}
void SDG_Unturned_PlayerMovement::PlaySwimAudioClip()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003130));
return _method(this);
}
void SDG_Unturned_PlayerMovement::onVisionUpdated(bool isViewing)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003131));
return _method(this, isViewing);
}
bool SDG_Unturned_PlayerMovement::forceRemoveFromVehicle()
{
using method_t = bool(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003132));
return _method(this);
}
void SDG_Unturned_PlayerMovement::simulate()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003133));
return _method(this);
}
void SDG_Unturned_PlayerMovement::simulate1(uint32_t simulation, int32_t recov, bool inputBrake, bool inputStamina, UnityEngine_Vector3 point, unknown_type rotation, float speed, float physicsSpeed, int32_t turn, float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, uint32_t, int32_t, bool, bool, UnityEngine_Vector3, unknown_type, float, float, int32_t, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003134));
return _method(this, simulation, recov, inputBrake, inputStamina, point, rotation, speed, physicsSpeed, turn, delta);
}
void SDG_Unturned_PlayerMovement::simulate2(uint32_t simulation, int32_t recov, int32_t input_x, int32_t input_y, float look_x, float look_y, bool inputJump, bool inputSprint, float deltaTime)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, uint32_t, int32_t, int32_t, int32_t, float, float, bool, bool, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003135));
return _method(this, simulation, recov, input_x, input_y, look_x, look_y, inputJump, inputSprint, deltaTime);
}
void SDG_Unturned_PlayerMovement::Update()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003136));
return _method(this);
}
void SDG_Unturned_PlayerMovement::updateRegionAndBound()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003137));
return _method(this);
}
void SDG_Unturned_PlayerMovement::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003138));
return _method(this);
}
void SDG_Unturned_PlayerMovement::OnControllerColliderHit(unknown_type hit)
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x06003139));
return _method(this, hit);
}
void SDG_Unturned_PlayerMovement::OnDrawGizmos()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600313A));
return _method(this);
}
void SDG_Unturned_PlayerMovement::OnDestroy()
{
using method_t = void(*)(SDG_Unturned_PlayerMovement*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerMovement", 0x0600313B));
return _method(this);
}
};
