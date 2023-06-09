#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerLook::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerLook");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
float SDG_Unturned_PlayerLook::HEIGHT_LOOK_SIT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_SIT");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_LOOK_SIT_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_SIT");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_LOOK_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_LOOK_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_LOOK_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_LOOK_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_LOOK_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_LOOK_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_LOOK_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_CAMERA_SIT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_SIT");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_CAMERA_SIT_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_SIT");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_CAMERA_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_CAMERA_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_CAMERA_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_CAMERA_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::HEIGHT_CAMERA_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::HEIGHT_CAMERA_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "HEIGHT_CAMERA_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_SIT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_SIT");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_SIT_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_SIT");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_SIT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_SIT");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_SIT_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_SIT");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_CLIMB_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_CLIMB");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_CLIMB_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_CLIMB");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_CLIMB_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_CLIMB");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_CLIMB_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_CLIMB");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_SWIM_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_SWIM");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_SWIM_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_SWIM");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_SWIM_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_SWIM");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_SWIM_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_SWIM");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_STAND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_STAND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_STAND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_STAND");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_CROUCH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_CROUCH");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_CROUCH_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_CROUCH");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MIN_ANGLE_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MIN_ANGLE_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MIN_ANGLE_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::MAX_ANGLE_PRONE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_PRONE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::MAX_ANGLE_PRONE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "MAX_ANGLE_PRONE");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLook::onPerspectiveUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "onPerspectiveUpdated");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::onPerspectiveUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "onPerspectiveUpdated");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::_characterCamera_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_characterCamera");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_characterCamera_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_characterCamera");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::_scopeCamera_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_scopeCamera");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_scopeCamera_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_scopeCamera");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::scopeMaterial_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "<scopeMaterial>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::scopeMaterial_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "<scopeMaterial>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::_isScopeActive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_isScopeActive");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_isScopeActive_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_isScopeActive");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isOverlayActive_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isOverlayActive");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isOverlayActive_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isOverlayActive");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::scopeVision_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeVision");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::scopeVision_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeVision");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::scopeNightvisionColor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeNightvisionColor");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::scopeNightvisionColor_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeNightvisionColor");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::scopeNightvisionFogIntensity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeNightvisionFogIntensity");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::scopeNightvisionFogIntensity_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeNightvisionFogIntensity");
Memory::write<float>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::tempVision_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempVision");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::tempVision_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempVision");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::tempNightvisionColor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempNightvisionColor");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::tempNightvisionColor_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempNightvisionColor");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::tempNightvisionFogIntensity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempNightvisionFogIntensity");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::tempNightvisionFogIntensity_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "tempNightvisionFogIntensity");
Memory::write<float>(value, THIS_PTR + _offset);
}
UnityEngine_Transform* SDG_Unturned_PlayerLook::_aim_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_aim");
return Memory::read<UnityEngine_Transform*>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_aim_S(UnityEngine_Transform* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_aim");
Memory::write<UnityEngine_Transform*>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::characterHeight_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "characterHeight");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::characterHeight_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "characterHeight");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::_characterYaw_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_characterYaw");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::_characterYaw_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_characterYaw");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::characterYaw_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "characterYaw");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::characterYaw_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "characterYaw");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::killcam_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "killcam");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::killcam_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "killcam");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::yawInputMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "yawInputMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::yawInputMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "yawInputMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::pitchInputMultiplier_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "pitchInputMultiplier");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::pitchInputMultiplier_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "pitchInputMultiplier");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_pitch_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_pitch");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_pitch_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_pitch");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_yaw_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_yaw");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_yaw_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_yaw");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_look_x_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_look_x");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_look_x_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_look_x");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_look_y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_look_y");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_look_y_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_look_y");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_orbitPitch_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_orbitPitch");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_orbitPitch_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_orbitPitch");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::_orbitYaw_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_orbitYaw");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_orbitYaw_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_orbitYaw");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::orbitSpeed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "orbitSpeed");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::orbitSpeed_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "orbitSpeed");
Memory::write<float>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::lockPosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lockPosition");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::lockPosition_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lockPosition");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::orbitPosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "orbitPosition");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::orbitPosition_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "orbitPosition");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isOrbiting_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isOrbiting");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isOrbiting_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isOrbiting");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isTracking_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isTracking");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isTracking_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isTracking");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isLocking_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isLocking");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isLocking_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isLocking");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isFocusing_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isFocusing");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isFocusing_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isFocusing");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isSmoothing_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isSmoothing");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isSmoothing_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isSmoothing");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::areSpecStatsVisible_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "<areSpecStatsVisible>k__BackingField");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::areSpecStatsVisible_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "<areSpecStatsVisible>k__BackingField");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isIgnoringInput_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isIgnoringInput");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isIgnoringInput_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isIgnoringInput");
Memory::write<bool>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::smoothPosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothPosition");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::smoothPosition_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothPosition");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::smoothRotation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothRotation");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::smoothRotation_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothRotation");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLook::angle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "angle");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::angle_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "angle");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLook::rot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "rot");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::rot_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "rot");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::recoil_x_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "recoil_x");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::recoil_x_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "recoil_x");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::recoil_y_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "recoil_y");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::recoil_y_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "recoil_y");
Memory::write<float>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLook::lastAngle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lastAngle");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::lastAngle_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lastAngle");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerLook::lastRot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lastRot");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::lastRot_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "lastRot");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::flinchLocalRotation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "flinchLocalRotation");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::flinchLocalRotation_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "flinchLocalRotation");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::targetExplosionLocalRotation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "targetExplosionLocalRotation");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::targetExplosionLocalRotation_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "targetExplosionLocalRotation");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::smoothedExplosionLocalRotation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothedExplosionLocalRotation");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::smoothedExplosionLocalRotation_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "smoothedExplosionLocalRotation");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::explosionSmoothingSpeed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "explosionSmoothingSpeed");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::explosionSmoothingSpeed_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "explosionSmoothingSpeed");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::mainCameraZoomFactor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "mainCameraZoomFactor");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::mainCameraZoomFactor_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "mainCameraZoomFactor");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::scopeCameraZoomFactor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeCameraZoomFactor");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::scopeCameraZoomFactor_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "scopeCameraZoomFactor");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::eyes_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "eyes");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::eyes_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "eyes");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerLook::thirdPersonEyeHeight_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "thirdPersonEyeHeight");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::thirdPersonEyeHeight_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "thirdPersonEyeHeight");
Memory::write<float>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::shouldUseZoomFactorForSensitivity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "shouldUseZoomFactorForSensitivity");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::shouldUseZoomFactorForSensitivity_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "shouldUseZoomFactorForSensitivity");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::_perspective_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_perspective");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::_perspective_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "_perspective");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::isZoomed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isZoomed");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::isZoomed_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "isZoomed");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::allowFreecamWithoutAdmin_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowFreecamWithoutAdmin");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::allowFreecamWithoutAdmin_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowFreecamWithoutAdmin");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::allowWorkzoneWithoutAdmin_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowWorkzoneWithoutAdmin");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::allowWorkzoneWithoutAdmin_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowWorkzoneWithoutAdmin");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerLook::allowSpecStatsWithoutAdmin_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowSpecStatsWithoutAdmin");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerLook::allowSpecStatsWithoutAdmin_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "allowSpecStatsWithoutAdmin");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerLook::SendFreecamAllowed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendFreecamAllowed");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::SendFreecamAllowed_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendFreecamAllowed");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLook::SendWorkzoneAllowed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendWorkzoneAllowed");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::SendWorkzoneAllowed_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendWorkzoneAllowed");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLook::SendSpecStatsAllowed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendSpecStatsAllowed");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::SendSpecStatsAllowed_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "SendSpecStatsAllowed");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerLook::sweepHits_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "sweepHits");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::sweepHits_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "sweepHits");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::NEAR_CLIP_SWEEP_RADIUS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "NEAR_CLIP_SWEEP_RADIUS");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerLook::NEAR_CLIP_SWEEP_RADIUS_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerLook", "NEAR_CLIP_SWEEP_RADIUS");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerLook::get_heightLook()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x0600309B));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_heightCamera()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x0600309C));
return _method(this);
}
unknown_type SDG_Unturned_PlayerLook::get_characterCamera()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x0600309D));
return _method(this);
}
unknown_type SDG_Unturned_PlayerLook::get_scopeCamera()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x0600309E));
return _method(this);
}
unknown_type SDG_Unturned_PlayerLook::get_scopeMaterial()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x0600309F));
return _method(this);
}
void SDG_Unturned_PlayerLook::set_scopeMaterial(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A0));
return _method(this, value);
}
bool SDG_Unturned_PlayerLook::get_isScopeActive()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A1));
return _method(this);
}
UnityEngine_Transform* SDG_Unturned_PlayerLook::get_aim()
{
using method_t = UnityEngine_Transform*(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A2));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_pitch()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A3));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_yaw()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A4));
return _method(this);
}
void SDG_Unturned_PlayerLook::TeleportYaw(float newYaw)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A5));
return _method(this, newYaw);
}
float SDG_Unturned_PlayerLook::get_look_x()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A6));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_look_y()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A7));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_orbitPitch()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A8));
return _method(this);
}
float SDG_Unturned_PlayerLook::get_orbitYaw()
{
using method_t = float(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030A9));
return _method(this);
}
bool SDG_Unturned_PlayerLook::get_areSpecStatsVisible()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AA));
return _method(this);
}
void SDG_Unturned_PlayerLook::set_areSpecStatsVisible(bool value)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AB));
return _method(this, value);
}
bool SDG_Unturned_PlayerLook::get_isCam()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AC));
return _method(this);
}
unknown_type SDG_Unturned_PlayerLook::get_perspective()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AD));
return _method(this);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::getEyesPosition()
{
using method_t = UnityEngine_Vector3(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AE));
return _method(this);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::GetEyesPositionWithoutLeaning()
{
using method_t = UnityEngine_Vector3(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030AF));
return _method(this);
}
void SDG_Unturned_PlayerLook::updateScope(unknown_type quality)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B0));
return _method(this, quality);
}
void SDG_Unturned_PlayerLook::enableScope(float zoom, unknown_type sightAsset)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B1));
return _method(this, zoom, sightAsset);
}
void SDG_Unturned_PlayerLook::disableScope()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B2));
return _method(this);
}
void SDG_Unturned_PlayerLook::enableOverlay()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B3));
return _method(this);
}
void SDG_Unturned_PlayerLook::setPerspective(unknown_type newPerspective)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B4));
return _method(this, newPerspective);
}
void SDG_Unturned_PlayerLook::setActivePerspective(unknown_type newPerspective)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B5));
return _method(this, newPerspective);
}
void SDG_Unturned_PlayerLook::enableVision()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B6));
return _method(this);
}
void SDG_Unturned_PlayerLook::disableOverlay()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B7));
return _method(this);
}
void SDG_Unturned_PlayerLook::disableVision()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B8));
return _method(this);
}
void SDG_Unturned_PlayerLook::enableZoom(float zoom)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030B9));
return _method(this, zoom);
}
void SDG_Unturned_PlayerLook::disableZoom()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BA));
return _method(this);
}
void SDG_Unturned_PlayerLook::updateRot()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BB));
return _method(this);
}
void SDG_Unturned_PlayerLook::updateLook()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BC));
return _method(this);
}
void SDG_Unturned_PlayerLook::recoil(float x, float y, float h, float v)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BD));
return _method(this, x, y, h, v);
}
void SDG_Unturned_PlayerLook::simulate(float look_x, float look_y, float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BE));
return _method(this, look_x, look_y, delta);
}
void SDG_Unturned_PlayerLook::clampPitch()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030BF));
return _method(this);
}
void SDG_Unturned_PlayerLook::clampYaw()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C0));
return _method(this);
}
void SDG_Unturned_PlayerLook::updateAim(float delta)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C1));
return _method(this, delta);
}
void SDG_Unturned_PlayerLook::FlinchFromDamage(uint8_t damageAmount, UnityEngine_Vector3 worldDirection)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, uint8_t, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C2));
return _method(this, damageAmount, worldDirection);
}
void SDG_Unturned_PlayerLook::FlinchFromExplosion(UnityEngine_Vector3 position, float radius, float magnitudeDegrees)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, UnityEngine_Vector3, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C3));
return _method(this, position, radius, magnitudeDegrees);
}
void SDG_Unturned_PlayerLook::onVisionUpdated(bool isViewing)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C4));
return _method(this, isViewing);
}
void SDG_Unturned_PlayerLook::onLifeUpdated(bool isDead)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C5));
return _method(this, isDead);
}
void SDG_Unturned_PlayerLook::onSeated(bool isDriver, bool inVehicle, bool wasVehicle, unknown_type oldVehicle, unknown_type newVehicle)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool, bool, bool, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C6));
return _method(this, isDriver, inVehicle, wasVehicle, oldVehicle, newVehicle);
}
bool SDG_Unturned_PlayerLook::get_canUseFreecam()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C7));
return _method(this);
}
bool SDG_Unturned_PlayerLook::get_canUseWorkzone()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C8));
return _method(this);
}
bool SDG_Unturned_PlayerLook::get_canUseSpecStats()
{
using method_t = bool(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030C9));
return _method(this);
}
void SDG_Unturned_PlayerLook::tellFreecamAllowed(unknown_type senderId, bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CA));
return _method(this, senderId, isAllowed);
}
void SDG_Unturned_PlayerLook::ReceiveFreecamAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CB));
return _method(this, isAllowed);
}
void SDG_Unturned_PlayerLook::sendFreecamAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CC));
return _method(this, isAllowed);
}
void SDG_Unturned_PlayerLook::tellWorkzoneAllowed(unknown_type senderId, bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CD));
return _method(this, senderId, isAllowed);
}
void SDG_Unturned_PlayerLook::ReceiveWorkzoneAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CE));
return _method(this, isAllowed);
}
void SDG_Unturned_PlayerLook::sendWorkzoneAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030CF));
return _method(this, isAllowed);
}
void SDG_Unturned_PlayerLook::tellSpecStatsAllowed(unknown_type senderId, bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D0));
return _method(this, senderId, isAllowed);
}
void SDG_Unturned_PlayerLook::ReceiveSpecStatsAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D1));
return _method(this, isAllowed);
}
void SDG_Unturned_PlayerLook::sendSpecStatsAllowed(bool isAllowed)
{
using method_t = void(*)(SDG_Unturned_PlayerLook*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D2));
return _method(this, isAllowed);
}
UnityEngine_Vector3 SDG_Unturned_PlayerLook::sphereCastCamera(UnityEngine_Vector3 origin, UnityEngine_Vector3 direction, float length, int32_t layerMask)
{
using method_t = UnityEngine_Vector3(*)(SDG_Unturned_PlayerLook*, UnityEngine_Vector3, UnityEngine_Vector3, float, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D3));
return _method(this, origin, direction, length, layerMask);
}
void SDG_Unturned_PlayerLook::Update()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D4));
return _method(this);
}
void SDG_Unturned_PlayerLook::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D5));
return _method(this);
}
void SDG_Unturned_PlayerLook::OnDestroy()
{
using method_t = void(*)(SDG_Unturned_PlayerLook*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerLook", 0x060030D6));
return _method(this);
}
};
