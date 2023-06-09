#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_PlayerInput::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "PlayerInput");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
uint32_t SDG_Unturned_PlayerInput::SAMPLES_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SAMPLES");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::SAMPLES_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SAMPLES");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInput::RATE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "RATE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::RATE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "RATE");
Memory::write<float>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_PlayerInput::TOCK_PER_SECOND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "TOCK_PER_SECOND");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::TOCK_PER_SECOND_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "TOCK_PER_SECOND");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_PlayerInput::VANILLA_DIGITAL_KEYS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "VANILLA_DIGITAL_KEYS");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::VANILLA_DIGITAL_KEYS_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "VANILLA_DIGITAL_KEYS");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInput::onPluginKeyTick_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "onPluginKeyTick");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::onPluginKeyTick_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "onPluginKeyTick");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInput::_tick_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_tick");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::_tick_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_tick");
Memory::write<float>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::buffer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "buffer");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::buffer_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "buffer");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::consumed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "consumed");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::consumed_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "consumed");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::count_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "count");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::count_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "count");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::_simulation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_simulation");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::_simulation_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_simulation");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::_clock_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_clock");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::_clock_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "_clock");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::keys_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "<keys>k__BackingField");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::keys_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "<keys>k__BackingField");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::pendingPrimaryAttackInput_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "pendingPrimaryAttackInput");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::pendingPrimaryAttackInput_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "pendingPrimaryAttackInput");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::pendingSecondaryAttackInput_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "pendingSecondaryAttackInput");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::pendingSecondaryAttackInput_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "pendingSecondaryAttackInput");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::flags_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "flags");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::flags_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "flags");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInput::hasDoneOcclusionCheck_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "hasDoneOcclusionCheck");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::hasDoneOcclusionCheck_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "hasDoneOcclusionCheck");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::inputs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "inputs");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::inputs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "inputs");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::clientPendingInput_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientPendingInput");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientPendingInput_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientPendingInput");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::clientInputHistory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientInputHistory");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientInputHistory_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientInputHistory");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::serversidePackets_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serversidePackets");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::serversidePackets_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serversidePackets");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::serverLastReceivedSimulationFrameNumber_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serverLastReceivedSimulationFrameNumber");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::serverLastReceivedSimulationFrameNumber_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serverLastReceivedSimulationFrameNumber");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInput::recov_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "recov");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::recov_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "recov");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::obstruction_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "obstruction");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::obstruction_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "obstruction");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInput::lastInputed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "lastInputed");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::lastInputed_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "lastInputed");
Memory::write<float>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInput::hasInputed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "hasInputed");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::hasInputed_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "hasInputed");
Memory::write<bool>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInput::isDismissed_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "isDismissed");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::isDismissed_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "isDismissed");
Memory::write<bool>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInput::EXPECTED_ASKINPUT_PER_SECOND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "EXPECTED_ASKINPUT_PER_SECOND");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::EXPECTED_ASKINPUT_PER_SECOND_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "EXPECTED_ASKINPUT_PER_SECOND");
Memory::write<float>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_PlayerInput::MAX_ASKINPUT_PER_SECOND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "MAX_ASKINPUT_PER_SECOND");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::MAX_ASKINPUT_PER_SECOND_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "MAX_ASKINPUT_PER_SECOND");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_PlayerInput::KICK_ASKINPUT_PER_SECOND_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "KICK_ASKINPUT_PER_SECOND");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::KICK_ASKINPUT_PER_SECOND_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "KICK_ASKINPUT_PER_SECOND");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_PlayerInput::serversideAskInputCount_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serversideAskInputCount");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::serversideAskInputCount_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "serversideAskInputCount");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInput::initialServersideAskInputTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "initialServersideAskInputTime");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::initialServersideAskInputTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "initialServersideAskInputTime");
Memory::write<float>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInput::latestAskInputDismissTestTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "latestAskInputDismissTestTime");
return Memory::read<float>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::latestAskInputDismissTestTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "latestAskInputDismissTestTime");
Memory::write<float>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInput::ASKINPUT_WINDOW_LENGTH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "ASKINPUT_WINDOW_LENGTH");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::ASKINPUT_WINDOW_LENGTH_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "ASKINPUT_WINDOW_LENGTH");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInput::rollingWindow_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "rollingWindow");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::rollingWindow_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "rollingWindow");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInput::rollingWindowIndex_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "rollingWindowIndex");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::rollingWindowIndex_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "rollingWindowIndex");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInput::clientHasPendingResimulation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientHasPendingResimulation");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientHasPendingResimulation_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientHasPendingResimulation");
Memory::write<bool>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_PlayerInput::clientResimulationFrameNumber_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationFrameNumber");
return Memory::read<uint32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationFrameNumber_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationFrameNumber");
Memory::write<uint32_t>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::clientResimulationStance_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationStance");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationStance_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationStance");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerInput::clientResimulationPosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationPosition");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationPosition_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationPosition");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
UnityEngine_Vector3 SDG_Unturned_PlayerInput::clientResimulationVelocity_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationVelocity");
return Memory::read<UnityEngine_Vector3>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationVelocity_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationVelocity");
Memory::write<UnityEngine_Vector3>(value, THIS_PTR + _offset);
}
uint8_t SDG_Unturned_PlayerInput::clientResimulationStamina_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationStamina");
return Memory::read<uint8_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationStamina_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationStamina");
Memory::write<uint8_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInput::clientResimulationLastTireOffset_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationLastTireOffset");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationLastTireOffset_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationLastTireOffset");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
int32_t SDG_Unturned_PlayerInput::clientResimulationLastRestOffset_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationLastRestOffset");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::clientResimulationLastRestOffset_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "clientResimulationLastRestOffset");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
bool SDG_Unturned_PlayerInput::isResimulating_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "isResimulating");
return Memory::read<bool>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::isResimulating_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "isResimulating");
Memory::write<bool>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_PlayerInput::SendSimulateMispredictedInputs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendSimulateMispredictedInputs");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::SendSimulateMispredictedInputs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendSimulateMispredictedInputs");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInput::SendAckGoodInputs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendAckGoodInputs");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::SendAckGoodInputs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendAckGoodInputs");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_PlayerInput::SendInputs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendInputs");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::SendInputs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "SendInputs");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInput::MIN_FAKE_LAG_THRESHOLD_SECONDS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "MIN_FAKE_LAG_THRESHOLD_SECONDS");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::MIN_FAKE_LAG_THRESHOLD_SECONDS_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "MIN_FAKE_LAG_THRESHOLD_SECONDS");
Memory::write<float>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_PlayerInput::fakeLagPenaltyFrames_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "fakeLagPenaltyFrames");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_PlayerInput::fakeLagPenaltyFrames_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "fakeLagPenaltyFrames");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
float SDG_Unturned_PlayerInput::FAKE_LAG_PENALTY_DAMAGE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "FAKE_LAG_PENALTY_DAMAGE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_PlayerInput::FAKE_LAG_PENALTY_DAMAGE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "PlayerInput", "FAKE_LAG_PENALTY_DAMAGE");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_PlayerInput::get_tick()
{
using method_t = float(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F31));
return _method(this);
}
uint32_t SDG_Unturned_PlayerInput::get_simulation()
{
using method_t = uint32_t(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F32));
return _method(this);
}
bool SDG_Unturned_PlayerInput::get_IsUnderFakeLagPenalty()
{
using method_t = bool(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F33));
return _method(this);
}
uint32_t SDG_Unturned_PlayerInput::get_clock()
{
using method_t = uint32_t(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F34));
return _method(this);
}
bool SDG_Unturned_PlayerInput::IsPluginKeyHeld(int32_t index)
{
using method_t = bool(*)(SDG_Unturned_PlayerInput*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F35));
return _method(this, index);
}
unknown_type SDG_Unturned_PlayerInput::get_keys()
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F36));
return _method(this);
}
void SDG_Unturned_PlayerInput::set_keys(unknown_type value)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F37));
return _method(this, value);
}
bool SDG_Unturned_PlayerInput::hasInputs()
{
using method_t = bool(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F38));
return _method(this);
}
int32_t SDG_Unturned_PlayerInput::getInputCount()
{
using method_t = int32_t(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F39));
return _method(this);
}
unknown_type SDG_Unturned_PlayerInput::getInput(bool doOcclusionCheck, unknown_type usage)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInput*, bool, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3A));
return _method(this, doOcclusionCheck, usage);
}
unknown_type SDG_Unturned_PlayerInput::getInput1(bool doOcclusionCheck)
{
using method_t = unknown_type(*)(SDG_Unturned_PlayerInput*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3B));
return _method(this, doOcclusionCheck);
}
bool SDG_Unturned_PlayerInput::isRaycastInvalid(unknown_type info)
{
using method_t = bool(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3C));
return _method(this, info);
}
void SDG_Unturned_PlayerInput::sendRaycast(unknown_type info, unknown_type usage)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3D));
return _method(this, info, usage);
}
void SDG_Unturned_PlayerInput::advanceRollingWindowIndex(int32_t newIndex)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3E));
return _method(this, newIndex);
}
void SDG_Unturned_PlayerInput::internalDismiss()
{
using method_t = void(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F3F));
return _method(this);
}
void SDG_Unturned_PlayerInput::ClientRemoveInputHistory(uint32_t frameNumber)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F40));
return _method(this, frameNumber);
}
void SDG_Unturned_PlayerInput::ClientResimulate()
{
using method_t = void(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F41));
return _method(this);
}
void SDG_Unturned_PlayerInput::ReceiveSimulateMispredictedInputs(uint32_t frameNumber, unknown_type stance, UnityEngine_Vector3 position, UnityEngine_Vector3 velocity, uint8_t stamina, int32_t lastTireOffset, int32_t lastRestOffset)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, uint32_t, unknown_type, UnityEngine_Vector3, UnityEngine_Vector3, uint8_t, int32_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F42));
return _method(this, frameNumber, stance, position, velocity, stamina, lastTireOffset, lastRestOffset);
}
void SDG_Unturned_PlayerInput::ReceiveAckGoodInputs(uint32_t frameNumber)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F43));
return _method(this, frameNumber);
}
void SDG_Unturned_PlayerInput::askInput(unknown_type steamID)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F44));
return _method(this, steamID);
}
void SDG_Unturned_PlayerInput::ReceiveInputs(unknown_type context)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F45));
return _method(this, context);
}
void SDG_Unturned_PlayerInput::onLifeUpdated(bool isDead)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F46));
return _method(this, isDead);
}
void SDG_Unturned_PlayerInput::FixedUpdate()
{
using method_t = void(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F47));
return _method(this);
}
void SDG_Unturned_PlayerInput::InitializePlayer()
{
using method_t = void(*)(SDG_Unturned_PlayerInput*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F48));
return _method(this);
}
bool SDG_Unturned_PlayerInput::getInputg__IsObstructionHitValid31_0(unknown_type )
{
using method_t = bool(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F4B));
return _method(this, );
}
void SDG_Unturned_PlayerInput::FixedUpdateb__74_0(unknown_type writer)
{
using method_t = void(*)(SDG_Unturned_PlayerInput*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "PlayerInput", 0x06002F4C));
return _method(this, writer);
}
};
