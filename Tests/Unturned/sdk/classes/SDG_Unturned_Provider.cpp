#include "../../sdk.h"
namespace SDK
{
uintptr_t SDG_Unturned_Provider::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("Assembly-CSharp", "SDG.Unturned", "Provider");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
unknown_type SDG_Unturned_Provider::STEAM_IC_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_IC");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::STEAM_IC_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_IC");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::STEAM_DC_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_DC");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::STEAM_DC_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_DC");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::APP_ID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_ID");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::APP_ID_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_ID");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::PRO_ID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "PRO_ID");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::PRO_ID_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "PRO_ID");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::APP_VERSION_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<APP_VERSION>k__BackingField");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::APP_VERSION_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<APP_VERSION>k__BackingField");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::APP_VERSION_PACKED_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<APP_VERSION_PACKED>k__BackingField");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::APP_VERSION_PACKED_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<APP_VERSION_PACKED>k__BackingField");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::APP_NAME_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_NAME");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::APP_NAME_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_NAME");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::APP_AUTHOR_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_AUTHOR");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::APP_AUTHOR_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "APP_AUTHOR");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::CLIENT_TIMEOUT_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "CLIENT_TIMEOUT");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::CLIENT_TIMEOUT_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "CLIENT_TIMEOUT");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::PING_REQUEST_INTERVAL_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "PING_REQUEST_INTERVAL");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::PING_REQUEST_INTERVAL_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "PING_REQUEST_INTERVAL");
Memory::write<float>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isCapturingScreenshot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isCapturingScreenshot");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isCapturingScreenshot_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isCapturingScreenshot");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::screenshotBlitMaterial_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "screenshotBlitMaterial");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::screenshotBlitMaterial_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "screenshotBlitMaterial");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::screenshotRequestedCallback_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "screenshotRequestedCallback");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::screenshotRequestedCallback_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "screenshotRequestedCallback");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::privateLanguage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "privateLanguage");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::privateLanguage_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "privateLanguage");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::languageIsEnglish_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "languageIsEnglish");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::languageIsEnglish_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "languageIsEnglish");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_path_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_path");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_path_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_path");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::localizationRoot_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<localizationRoot>k__BackingField");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::localizationRoot_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<localizationRoot>k__BackingField");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::localization_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "localization");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::localization_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "localization");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::streamerNames_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<streamerNames>k__BackingField");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::streamerNames_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<streamerNames>k__BackingField");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
intptr_t SDG_Unturned_Provider::battlEyeClientHandle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientHandle");
return Memory::read<intptr_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeClientHandle_S(intptr_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientHandle");
Memory::write<intptr_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::battlEyeClientInitData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientInitData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeClientInitData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientInitData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::battlEyeClientRunData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientRunData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeClientRunData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeClientRunData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::battlEyeHasRequiredRestart_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeHasRequiredRestart");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeHasRequiredRestart_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeHasRequiredRestart");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::battlEyeBufferSize_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeBufferSize");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeBufferSize_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeBufferSize");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
intptr_t SDG_Unturned_Provider::battlEyeServerHandle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerHandle");
return Memory::read<intptr_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeServerHandle_S(intptr_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerHandle");
Memory::write<intptr_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::battlEyeServerInitData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerInitData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeServerInitData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerInitData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::battlEyeServerRunData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerRunData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::battlEyeServerRunData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "battlEyeServerRunData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onBattlEyeKick_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBattlEyeKick");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onBattlEyeKick_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBattlEyeKick");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_bytesSent_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_bytesSent");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_bytesSent_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_bytesSent");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_bytesReceived_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_bytesReceived");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_bytesReceived_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_bytesReceived");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_packetsSent_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_packetsSent");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_packetsSent_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_packetsSent");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_packetsReceived_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_packetsReceived");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_packetsReceived_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_packetsReceived");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_currentServerInfo_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_currentServerInfo");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_currentServerInfo_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_currentServerInfo");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_server_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_server");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_server_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_server");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_client_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_client");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_client_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_client");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_user_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_user");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_user_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_user");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_clientHash_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clientHash");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_clientHash_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clientHash");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_clientName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clientName");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_clientName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clientName");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_clients_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clients");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_clients_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_clients");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::pending_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pending");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::pending_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pending");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::_isServer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isServer");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_isServer_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isServer");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::_isClient_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isClient");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_isClient_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isClient");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::_isPro_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isPro");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_isPro_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isPro");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::_isConnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isConnected");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_isConnected_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isConnected");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isWaitingForWorkshopResponse_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForWorkshopResponse");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isWaitingForWorkshopResponse_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForWorkshopResponse");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isWaitingForAuthenticationResponse_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForAuthenticationResponse");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isWaitingForAuthenticationResponse_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForAuthenticationResponse");
Memory::write<bool>(value, StaticInstance() + _offset);
}
double SDG_Unturned_Provider::sentAuthenticationRequestTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "sentAuthenticationRequestTime");
return Memory::read<double>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::sentAuthenticationRequestTime_S(double value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "sentAuthenticationRequestTime");
Memory::write<double>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::waitingForExpectedWorkshopItems_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "waitingForExpectedWorkshopItems");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::waitingForExpectedWorkshopItems_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "waitingForExpectedWorkshopItems");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::authorityHoliday_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "authorityHoliday");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::authorityHoliday_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "authorityHoliday");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::currentServerWorkshopResponse_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "currentServerWorkshopResponse");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::currentServerWorkshopResponse_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "currentServerWorkshopResponse");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_serverWorkshopFileIDs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverWorkshopFileIDs");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_serverWorkshopFileIDs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverWorkshopFileIDs");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::serverRequiredWorkshopFiles_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "serverRequiredWorkshopFiles");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::serverRequiredWorkshopFiles_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "serverRequiredWorkshopFiles");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isLoadingUGC_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isLoadingUGC");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isLoadingUGC_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isLoadingUGC");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isLoadingInventory_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isLoadingInventory");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isLoadingInventory_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isLoadingInventory");
Memory::write<bool>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::nextPlayerChannelId_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "nextPlayerChannelId");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::nextPlayerChannelId_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "nextPlayerChannelId");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_connectionFailureInfo_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureInfo");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_connectionFailureInfo_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureInfo");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_connectionFailureReason_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureReason");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_connectionFailureReason_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureReason");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_connectionFailureDuration_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureDuration");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_connectionFailureDuration_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_connectionFailureDuration");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_receivers_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_receivers");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_receivers_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_receivers");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::buffer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "buffer");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::buffer_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "buffer");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::critMods_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "critMods");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::critMods_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "critMods");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::modBuilder_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "modBuilder");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::modBuilder_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "modBuilder");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::nextBattlEyePlayerId_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "nextBattlEyePlayerId");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::nextBattlEyePlayerId_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "nextBattlEyePlayerId");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onLoginSpawning_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onLoginSpawning");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onLoginSpawning_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onLoginSpawning");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isWaitingForConnectResponse_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForConnectResponse");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isWaitingForConnectResponse_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWaitingForConnectResponse");
Memory::write<bool>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::sentConnectRequestTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "sentConnectRequestTime");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::sentConnectRequestTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "sentConnectRequestTime");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::MAX_SKINS_LENGTH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "MAX_SKINS_LENGTH");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::MAX_SKINS_LENGTH_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "MAX_SKINS_LENGTH");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::clientTransport_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientTransport");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::clientTransport_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientTransport");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::serverTransport_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "serverTransport");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::serverTransport_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "serverTransport");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onCommenceShutdown_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCommenceShutdown");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onCommenceShutdown_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCommenceShutdown");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::countShutdownTimer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "countShutdownTimer");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::countShutdownTimer_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "countShutdownTimer");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::shutdownMessage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "shutdownMessage");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::shutdownMessage_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "shutdownMessage");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::lastTimerMessage_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastTimerMessage");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::lastTimerMessage_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastTimerMessage");
Memory::write<float>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::didServerShutdownTimerReachZero_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "didServerShutdownTimerReachZero");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::didServerShutdownTimerReachZero_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "didServerShutdownTimerReachZero");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isServerConnectedToSteam_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isServerConnectedToSteam");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isServerConnectedToSteam_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isServerConnectedToSteam");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::autoShutdownManager_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "autoShutdownManager");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::autoShutdownManager_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "autoShutdownManager");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::dswUpdateMonitor_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "dswUpdateMonitor");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::dswUpdateMonitor_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "dswUpdateMonitor");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isDedicatedUGCInstalled_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isDedicatedUGCInstalled");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isDedicatedUGCInstalled_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isDedicatedUGCInstalled");
Memory::write<bool>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::STEAM_KEYVALUE_MAX_VALUE_LENGTH_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_KEYVALUE_MAX_VALUE_LENGTH");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::STEAM_KEYVALUE_MAX_VALUE_LENGTH_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_KEYVALUE_MAX_VALUE_LENGTH");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onServerWritingPacket_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerWritingPacket");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerWritingPacket_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerWritingPacket");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::workshopRequests_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "workshopRequests");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::workshopRequests_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "workshopRequests");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::cachedWorkshopResponses_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cachedWorkshopResponses");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::cachedWorkshopResponses_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cachedWorkshopResponses");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::netIgnoredSteamIDs_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "netIgnoredSteamIDs");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::netIgnoredSteamIDs_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "netIgnoredSteamIDs");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_constNetEvents_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_constNetEvents");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_constNetEvents_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_constNetEvents");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onServerReadingPacket_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerReadingPacket");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerReadingPacket_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerReadingPacket");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::clientsWithBadConnecion_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientsWithBadConnecion");
return Memory::read<unknown_type>(THIS_PTR + _offset);
}
void SDG_Unturned_Provider::clientsWithBadConnecion_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientsWithBadConnecion");
Memory::write<unknown_type>(value, THIS_PTR + _offset);
}
unknown_type SDG_Unturned_Provider::onServerConnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerConnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerConnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerConnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onServerDisconnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerDisconnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerDisconnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerDisconnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onServerHosted_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerHosted");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerHosted_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerHosted");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onServerShutdown_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerShutdown");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onServerShutdown_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onServerShutdown");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::p2pSessionConnectFail_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "p2pSessionConnectFail");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::p2pSessionConnectFail_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "p2pSessionConnectFail");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onCheckValid_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckValid");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onCheckValid_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckValid");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onCheckValidWithExplanation_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckValidWithExplanation");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onCheckValidWithExplanation_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckValidWithExplanation");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onCheckBanStatus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckBanStatus");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onCheckBanStatus_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckBanStatus");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onCheckBanStatusWithHWID_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckBanStatusWithHWID");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onCheckBanStatusWithHWID_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onCheckBanStatusWithHWID");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onBanPlayerRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBanPlayerRequested");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onBanPlayerRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBanPlayerRequested");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onBanPlayerRequestedV2_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBanPlayerRequestedV2");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onBanPlayerRequestedV2_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBanPlayerRequestedV2");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onUnbanPlayerRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onUnbanPlayerRequested");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onUnbanPlayerRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onUnbanPlayerRequested");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::validateAuthTicketResponse_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "validateAuthTicketResponse");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::validateAuthTicketResponse_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "validateAuthTicketResponse");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::clientGroupStatus_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientGroupStatus");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::clientGroupStatus_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientGroupStatus");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::clMaxPlayersLimit_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clMaxPlayersLimit");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::clMaxPlayersLimit_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clMaxPlayersLimit");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_Provider::_maxPlayers_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_maxPlayers");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_maxPlayers_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_maxPlayers");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_Provider::queueSize_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "queueSize");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::queueSize_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "queueSize");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
uint8_t SDG_Unturned_Provider::_queuePosition_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_queuePosition");
return Memory::read<uint8_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_queuePosition_S(uint8_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_queuePosition");
Memory::write<uint8_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onQueuePositionUpdated_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onQueuePositionUpdated");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onQueuePositionUpdated_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onQueuePositionUpdated");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_serverName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverName");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_serverName_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverName");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::ip_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "ip");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::ip_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "ip");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::bindAddress_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "bindAddress");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::bindAddress_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "bindAddress");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
uint16_t SDG_Unturned_Provider::port_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "port");
return Memory::read<uint16_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::port_S(uint16_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "port");
Memory::write<uint16_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_serverPasswordHash_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverPasswordHash");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_serverPasswordHash_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverPasswordHash");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_serverPassword_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverPassword");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_serverPassword_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_serverPassword");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::map_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "map");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::map_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "map");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isPvP_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isPvP");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isPvP_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isPvP");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isWhitelisted_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWhitelisted");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isWhitelisted_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isWhitelisted");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::hideAdmins_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "hideAdmins");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::hideAdmins_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "hideAdmins");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::hasCheats_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "hasCheats");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::hasCheats_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "hasCheats");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::filterName_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "filterName");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::filterName_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "filterName");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::mode_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "mode");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::mode_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "mode");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isGold_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isGold");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isGold_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "isGold");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::gameMode_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameMode");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::gameMode_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameMode");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::cameraMode_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cameraMode");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::cameraMode_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cameraMode");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_statusData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_statusData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_statusData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_statusData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_preferenceData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_preferenceData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_preferenceData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_preferenceData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_configData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_configData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_configData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_configData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::_modeConfigData_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_modeConfigData");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_modeConfigData_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_modeConfigData");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onRejectingPlayer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onRejectingPlayer");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onRejectingPlayer_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onRejectingPlayer");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::clientsKickedForTransportConnectionFailureCount_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientsKickedForTransportConnectionFailureCount");
return Memory::read<int32_t>(THIS_PTR + _offset);
}
void SDG_Unturned_Provider::clientsKickedForTransportConnectionFailureCount_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "clientsKickedForTransportConnectionFailureCount");
Memory::write<int32_t>(value, THIS_PTR + _offset);
}
uint32_t SDG_Unturned_Provider::STEAM_FAVORITE_FLAG_FAVORITE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_FAVORITE_FLAG_FAVORITE");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::STEAM_FAVORITE_FLAG_FAVORITE_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_FAVORITE_FLAG_FAVORITE");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::STEAM_FAVORITE_FLAG_HISTORY_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_FAVORITE_FLAG_HISTORY");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::STEAM_FAVORITE_FLAG_HISTORY_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "STEAM_FAVORITE_FLAG_HISTORY");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::cachedFavorites_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cachedFavorites");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::cachedFavorites_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "cachedFavorites");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onClientConnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onClientConnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onClientConnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onClientConnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onClientDisconnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onClientDisconnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onClientDisconnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onClientDisconnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onEnemyConnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onEnemyConnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onEnemyConnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onEnemyConnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onEnemyDisconnected_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onEnemyDisconnected");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onEnemyDisconnected_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onEnemyDisconnected");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::personaStateChange_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "personaStateChange");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::personaStateChange_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "personaStateChange");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::gameServerChangeRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameServerChangeRequested");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::gameServerChangeRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameServerChangeRequested");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::gameRichPresenceJoinRequested_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameRichPresenceJoinRequested");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::gameRichPresenceJoinRequested_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "gameRichPresenceJoinRequested");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::ticketHandle_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "ticketHandle");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::ticketHandle_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "ticketHandle");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::lastPingRequestTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastPingRequestTime");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::lastPingRequestTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastPingRequestTime");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::lastQueueNotificationTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastQueueNotificationTime");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::lastQueueNotificationTime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "lastQueueNotificationTime");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::timeLastPacketWasReceivedFromServer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<timeLastPacketWasReceivedFromServer>k__BackingField");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::timeLastPacketWasReceivedFromServer_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<timeLastPacketWasReceivedFromServer>k__BackingField");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::timeLastPingRequestWasSentToServer_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "timeLastPingRequestWasSentToServer");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::timeLastPingRequestWasSentToServer_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "timeLastPingRequestWasSentToServer");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::EPSILON_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "EPSILON");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::EPSILON_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "EPSILON");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::UPDATE_TIME_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_TIME");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::UPDATE_TIME_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_TIME");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::UPDATE_DELAY_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_DELAY");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::UPDATE_DELAY_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_DELAY");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::UPDATE_DISTANCE_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_DISTANCE");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::UPDATE_DISTANCE_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATE_DISTANCE");
Memory::write<float>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::UPDATES_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATES");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::UPDATES_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "UPDATES");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::LERP_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "LERP");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::LERP_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "LERP");
Memory::write<float>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::INTERP_SPEED_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "INTERP_SPEED");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::INTERP_SPEED_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "INTERP_SPEED");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::pings_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pings");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::pings_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pings");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::_ping_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_ping");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_ping_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_ping");
Memory::write<float>(value, StaticInstance() + _offset);
}
SDG_Unturned_Provider* SDG_Unturned_Provider::steam_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "steam");
return Memory::read<SDG_Unturned_Provider*>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::steam_S(SDG_Unturned_Provider* value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "steam");
Memory::write<SDG_Unturned_Provider*>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::provider_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<provider>k__BackingField");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::provider_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<provider>k__BackingField");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::_isInitialized_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isInitialized");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_isInitialized_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_isInitialized");
Memory::write<bool>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::timeOffset_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "timeOffset");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::timeOffset_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "timeOffset");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::_time_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_time");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::_time_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "_time");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
uint32_t SDG_Unturned_Provider::initialBackendRealtimeSeconds_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "initialBackendRealtimeSeconds");
return Memory::read<uint32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::initialBackendRealtimeSeconds_S(uint32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "initialBackendRealtimeSeconds");
Memory::write<uint32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::initialLocalRealtime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "initialLocalRealtime");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::initialLocalRealtime_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "initialLocalRealtime");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::unixEpochDateTime_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "unixEpochDateTime");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::unixEpochDateTime_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "unixEpochDateTime");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::onBackendRealtimeAvailable_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBackendRealtimeAvailable");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::onBackendRealtimeAvailable_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "onBackendRealtimeAvailable");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::apiWarningMessageHook_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "apiWarningMessageHook");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::apiWarningMessageHook_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "apiWarningMessageHook");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::debugUpdates_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugUpdates");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugUpdates_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugUpdates");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::debugUPS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugUPS");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugUPS_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugUPS");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::debugLastUpdate_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugLastUpdate");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugLastUpdate_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugLastUpdate");
Memory::write<float>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::debugTicks_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugTicks");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugTicks_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugTicks");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
int32_t SDG_Unturned_Provider::debugTPS_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugTPS");
return Memory::read<int32_t>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugTPS_S(int32_t value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugTPS");
Memory::write<int32_t>(value, StaticInstance() + _offset);
}
float SDG_Unturned_Provider::debugLastTick_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugLastTick");
return Memory::read<float>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::debugLastTick_S(float value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "debugLastTick");
Memory::write<float>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::downloadedIconCache_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "downloadedIconCache");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::downloadedIconCache_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "downloadedIconCache");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::pendingCachableIconRequests_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pendingCachableIconRequests");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::pendingCachableIconRequests_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "pendingCachableIconRequests");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::allowWebRequests_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "allowWebRequests");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::allowWebRequests_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "allowWebRequests");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::isApplicationQuitting_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<isApplicationQuitting>k__BackingField");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::isApplicationQuitting_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "<isApplicationQuitting>k__BackingField");
Memory::write<bool>(value, StaticInstance() + _offset);
}
bool SDG_Unturned_Provider::wasQuitGameCalled_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "wasQuitGameCalled");
return Memory::read<bool>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::wasQuitGameCalled_S(bool value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "wasQuitGameCalled");
Memory::write<bool>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::shouldCheckForGoldUpgrade_G()
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "shouldCheckForGoldUpgrade");
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void SDG_Unturned_Provider::shouldCheckForGoldUpgrade_S(unknown_type value)
{
static uintptr_t _offset = Mono::field_offset("Assembly-CSharp", "SDG.Unturned", "Provider", "shouldCheckForGoldUpgrade");
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type SDG_Unturned_Provider::get_APP_VERSION()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003395));
return _method();
}
void SDG_Unturned_Provider::set_APP_VERSION(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003396));
return _method(value);
}
uint32_t SDG_Unturned_Provider::get_APP_VERSION_PACKED()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003397));
return _method();
}
void SDG_Unturned_Provider::set_APP_VERSION_PACKED(uint32_t value)
{
using method_t = void(*)(uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003398));
return _method(value);
}
unknown_type SDG_Unturned_Provider::CaptureScreenshot()
{
using method_t = unknown_type(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003399));
return _method(this);
}
void SDG_Unturned_Provider::RequestScreenshot()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339A));
return _method();
}
void SDG_Unturned_Provider::OnSteamScreenshotRequested(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339B));
return _method(callback);
}
unknown_type SDG_Unturned_Provider::get_language()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339C));
return _method();
}
void SDG_Unturned_Provider::set_language(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339D));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_path()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339E));
return _method();
}
unknown_type SDG_Unturned_Provider::get_localizationRoot()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600339F));
return _method();
}
void SDG_Unturned_Provider::set_localizationRoot(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A0));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_streamerNames()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A1));
return _method();
}
void SDG_Unturned_Provider::set_streamerNames(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A2));
return _method(value);
}
void SDG_Unturned_Provider::battlEyeClientPrintMessage(unknown_type message)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A3));
return _method(message);
}
void SDG_Unturned_Provider::battlEyeClientRequestRestart(int32_t reason)
{
using method_t = void(*)(int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A4));
return _method(reason);
}
void SDG_Unturned_Provider::battlEyeClientSendPacket(intptr_t packetHandle, int32_t length)
{
using method_t = void(*)(intptr_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A5));
return _method(packetHandle, length);
}
void SDG_Unturned_Provider::battlEyeServerPrintMessage(unknown_type message)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A6));
return _method(message);
}
void SDG_Unturned_Provider::add_onBattlEyeKick(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A7));
return _method(value);
}
void SDG_Unturned_Provider::remove_onBattlEyeKick(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A8));
return _method(value);
}
void SDG_Unturned_Provider::broadcastBattlEyeKick(SDG_Unturned_SteamPlayer* client, unknown_type reason)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033A9));
return _method(client, reason);
}
void SDG_Unturned_Provider::battlEyeServerKickPlayer(int32_t playerID, unknown_type reason)
{
using method_t = void(*)(int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AA));
return _method(playerID, reason);
}
void SDG_Unturned_Provider::battlEyeServerSendPacket(int32_t playerID, intptr_t packetHandle, int32_t length)
{
using method_t = void(*)(int32_t, intptr_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AB));
return _method(playerID, packetHandle, length);
}
void SDG_Unturned_Provider::updateRichPresence()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AC));
return _method();
}
void SDG_Unturned_Provider::updateSteamRichPresence()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AD));
return _method();
}
uint32_t SDG_Unturned_Provider::get_bytesSent()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AE));
return _method();
}
uint32_t SDG_Unturned_Provider::get_bytesReceived()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033AF));
return _method();
}
uint32_t SDG_Unturned_Provider::get_packetsSent()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B0));
return _method();
}
uint32_t SDG_Unturned_Provider::get_packetsReceived()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B1));
return _method();
}
unknown_type SDG_Unturned_Provider::get_currentServerInfo()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B2));
return _method();
}
unknown_type SDG_Unturned_Provider::get_server()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B3));
return _method();
}
unknown_type SDG_Unturned_Provider::get_client()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B4));
return _method();
}
unknown_type SDG_Unturned_Provider::get_user()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B5));
return _method();
}
unknown_type SDG_Unturned_Provider::get_clientHash()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B6));
return _method();
}
unknown_type SDG_Unturned_Provider::get_clientName()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B7));
return _method();
}
unknown_type SDG_Unturned_Provider::get_clients()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B8));
return _method();
}
unknown_type SDG_Unturned_Provider::GatherClientConnections()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033B9));
return _method();
}
unknown_type SDG_Unturned_Provider::EnumerateClients()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BA));
return _method();
}
unknown_type SDG_Unturned_Provider::GatherClientConnectionsMatchingPredicate(unknown_type predicate)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BB));
return _method(predicate);
}
unknown_type SDG_Unturned_Provider::EnumerateClients_Predicate(unknown_type predicate)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BC));
return _method(predicate);
}
unknown_type SDG_Unturned_Provider::GatherClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BD));
return _method(position, radius);
}
unknown_type SDG_Unturned_Provider::EnumerateClients_WithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BE));
return _method(position, radius);
}
unknown_type SDG_Unturned_Provider::GatherRemoteClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033BF));
return _method(position, radius);
}
unknown_type SDG_Unturned_Provider::EnumerateClients_RemoteWithinSphere(UnityEngine_Vector3 position, float radius)
{
using method_t = unknown_type(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C0));
return _method(position, radius);
}
unknown_type SDG_Unturned_Provider::GatherRemoteClientConnections()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C1));
return _method();
}
unknown_type SDG_Unturned_Provider::EnumerateClients_Remote()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C2));
return _method();
}
unknown_type SDG_Unturned_Provider::GatherRemoteClientConnectionsMatchingPredicate(unknown_type predicate)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C3));
return _method(predicate);
}
unknown_type SDG_Unturned_Provider::EnumerateClients_RemotePredicate(unknown_type predicate)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C4));
return _method(predicate);
}
unknown_type SDG_Unturned_Provider::get_players()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C5));
return _method();
}
bool SDG_Unturned_Provider::get_isServer()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C6));
return _method();
}
bool SDG_Unturned_Provider::get_isClient()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C7));
return _method();
}
bool SDG_Unturned_Provider::get_isPro()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C8));
return _method();
}
bool SDG_Unturned_Provider::get_isConnected()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033C9));
return _method();
}
bool SDG_Unturned_Provider::doServerItemsMatchAdvertisement(unknown_type pendingWorkshopItems)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CA));
return _method(pendingWorkshopItems);
}
void SDG_Unturned_Provider::receiveWorkshopResponse(unknown_type response)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CB));
return _method(response);
}
unknown_type SDG_Unturned_Provider::getServerWorkshopFileIDs()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CC));
return _method();
}
void SDG_Unturned_Provider::registerServerUsingWorkshopFileId(uint64_t id)
{
using method_t = void(*)(uint64_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CD));
return _method(id);
}
void SDG_Unturned_Provider::registerServerUsingWorkshopFileId1(uint64_t id, uint32_t timestamp)
{
using method_t = void(*)(uint64_t, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CE));
return _method(id, timestamp);
}
bool SDG_Unturned_Provider::get_isLoading()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033CF));
return _method();
}
int32_t SDG_Unturned_Provider::get_channels()
{
using method_t = int32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D0));
return _method();
}
int32_t SDG_Unturned_Provider::allocPlayerChannelId()
{
using method_t = int32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D1));
return _method();
}
unknown_type SDG_Unturned_Provider::get_connectionFailureInfo()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D2));
return _method();
}
void SDG_Unturned_Provider::set_connectionFailureInfo(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D3));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_connectionFailureReason()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D4));
return _method();
}
void SDG_Unturned_Provider::set_connectionFailureReason(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D5));
return _method(value);
}
uint32_t SDG_Unturned_Provider::get_connectionFailureDuration()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D6));
return _method();
}
unknown_type SDG_Unturned_Provider::get_receivers()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D7));
return _method();
}
int32_t SDG_Unturned_Provider::allocBattlEyePlayerId()
{
using method_t = int32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D8));
return _method();
}
void SDG_Unturned_Provider::resetConnectionFailure()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033D9));
return _method();
}
void SDG_Unturned_Provider::LogNetChannel(unknown_type format, unknown_type args)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DA));
return _method(format, args);
}
void SDG_Unturned_Provider::openChannel(SDG_Unturned_SteamChannel* receiver)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DB));
return _method(receiver);
}
void SDG_Unturned_Provider::closeChannel(SDG_Unturned_SteamChannel* receiver)
{
using method_t = void(*)(SDG_Unturned_SteamChannel*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DC));
return _method(receiver);
}
SDG_Unturned_SteamChannel* SDG_Unturned_Provider::findChannelComponent(int32_t id)
{
using method_t = SDG_Unturned_SteamChannel*(*)(int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DD));
return _method(id);
}
bool SDG_Unturned_Provider::get_hasRoomForNewConnection()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DE));
return _method();
}
unknown_type SDG_Unturned_Provider::findPendingPlayer(unknown_type transportConnection)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033DF));
return _method(transportConnection);
}
unknown_type SDG_Unturned_Provider::findPendingPlayerBySteamId(unknown_type steamId)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E0));
return _method(steamId);
}
SDG_Unturned_SteamPlayer* SDG_Unturned_Provider::findPlayer(unknown_type transportConnection)
{
using method_t = SDG_Unturned_SteamPlayer*(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E1));
return _method(transportConnection);
}
unknown_type SDG_Unturned_Provider::findTransportConnection(unknown_type steamId)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E2));
return _method(steamId);
}
unknown_type SDG_Unturned_Provider::findTransportConnectionSteamId(unknown_type transportConnection)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E3));
return _method(transportConnection);
}
unknown_type SDG_Unturned_Provider::ClaimNetIdBlockForNewPlayer()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E4));
return _method();
}
SDG_Unturned_SteamPlayer* SDG_Unturned_Provider::addPlayer(unknown_type transportConnection, unknown_type netId, SDG_Unturned_SteamPlayerID* playerID, UnityEngine_Vector3 point, uint8_t angle, bool isPro, bool isAdmin, int32_t channel, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID, unknown_type clientPlatform)
{
using method_t = SDG_Unturned_SteamPlayer*(*)(unknown_type, unknown_type, SDG_Unturned_SteamPlayerID*, UnityEngine_Vector3, uint8_t, bool, bool, int32_t, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type, unknown_type, bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E5));
return _method(transportConnection, netId, playerID, point, angle, isPro, isAdmin, channel, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID, clientPlatform);
}
void SDG_Unturned_Provider::removePlayer(uint8_t index)
{
using method_t = void(*)(uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E6));
return _method(index);
}
void SDG_Unturned_Provider::replicateRemovePlayer(unknown_type skipSteamID, uint8_t removalIndex)
{
using method_t = void(*)(unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E7));
return _method(skipSteamID, removalIndex);
}
void SDG_Unturned_Provider::verifyNextPlayerInQueue()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E8));
return _method();
}
bool SDG_Unturned_Provider::isUnreliable(unknown_type type)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033E9));
return _method(type);
}
bool SDG_Unturned_Provider::isChunk(unknown_type packet)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033EA));
return _method(packet);
}
bool SDG_Unturned_Provider::isUpdate(unknown_type packet)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033EB));
return _method(packet);
}
void SDG_Unturned_Provider::resetChannels()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033EC));
return _method();
}
void SDG_Unturned_Provider::loadPlayerSpawn(SDG_Unturned_SteamPlayerID* playerID, UnityEngine_Vector3& point, unknown_type angle, unknown_type initialStance)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, UnityEngine_Vector3&, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033ED));
return _method(playerID, point, angle, initialStance);
}
void SDG_Unturned_Provider::onLevelLoaded(int32_t level)
{
using method_t = void(*)(int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033EE));
return _method(level);
}
void SDG_Unturned_Provider::connect(unknown_type info, unknown_type password, unknown_type expectedWorkshopItems)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033EF));
return _method(info, password, expectedWorkshopItems);
}
void SDG_Unturned_Provider::onClientTransportReady()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F0));
return _method();
}
void SDG_Unturned_Provider::onClientTransportFailure(unknown_type message)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F1));
return _method(message);
}
bool SDG_Unturned_Provider::CompareClientAndServerWorkshopFileTimestamps()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F2));
return _method();
}
void SDG_Unturned_Provider::launch()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F3));
return _method();
}
void SDG_Unturned_Provider::loadGameMode()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F4));
return _method();
}
void SDG_Unturned_Provider::unloadGameMode()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F5));
return _method();
}
void SDG_Unturned_Provider::singleplayer(unknown_type singleplayerMode, bool singleplayerCheats)
{
using method_t = void(*)(unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F6));
return _method(singleplayerMode, singleplayerCheats);
}
void SDG_Unturned_Provider::host()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F7));
return _method();
}
void SDG_Unturned_Provider::add_onCommenceShutdown(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F8));
return _method(value);
}
void SDG_Unturned_Provider::remove_onCommenceShutdown(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033F9));
return _method(value);
}
void SDG_Unturned_Provider::broadcastCommenceShutdown()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FA));
return _method();
}
void SDG_Unturned_Provider::shutdown()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FB));
return _method();
}
void SDG_Unturned_Provider::shutdown1(int32_t timer)
{
using method_t = void(*)(int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FC));
return _method(timer);
}
void SDG_Unturned_Provider::shutdown2(int32_t timer, unknown_type explanation)
{
using method_t = void(*)(int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FD));
return _method(timer, explanation);
}
bool SDG_Unturned_Provider::get_IsBattlEyeEnabled()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FE));
return _method();
}
void SDG_Unturned_Provider::RequestDisconnect(unknown_type reason)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x060033FF));
return _method(reason);
}
void SDG_Unturned_Provider::disconnect()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003400));
return _method();
}
void SDG_Unturned_Provider::sendGUIDTable(unknown_type player)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003401));
return _method(player);
}
bool SDG_Unturned_Provider::initializeBattlEyeServer()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003402));
return _method();
}
void SDG_Unturned_Provider::handleServerReady()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003403));
return _method();
}
void SDG_Unturned_Provider::initializeDedicatedUGC()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003404));
return _method();
}
unknown_type SDG_Unturned_Provider::getModeTagAbbreviation(unknown_type gm)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003405));
return _method(gm);
}
unknown_type SDG_Unturned_Provider::getCameraModeTagAbbreviation(unknown_type cm)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003406));
return _method(cm);
}
unknown_type SDG_Unturned_Provider::GetMonetizationTagAbbreviation(unknown_type monetization)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003407));
return _method(monetization);
}
void SDG_Unturned_Provider::maybeLogCuratedMapFallback(unknown_type attemptedMap)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003408));
return _method(attemptedMap);
}
void SDG_Unturned_Provider::onDedicatedUGCInstalled()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003409));
return _method();
}
void SDG_Unturned_Provider::AdvertiseFullDescription(unknown_type message)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340A));
return _method(message);
}
void SDG_Unturned_Provider::AdvertiseConfig()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340B));
return _method();
}
void SDG_Unturned_Provider::send(unknown_type steamID, unknown_type type, unknown_type packet, int32_t size, int32_t channel)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type, int32_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340C));
return _method(steamID, type, packet, size, channel);
}
bool SDG_Unturned_Provider::remapSteamPacketType(unknown_type type)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340D));
return _method(type);
}
void SDG_Unturned_Provider::sendToClient(unknown_type transportConnection, unknown_type type, unknown_type packet, int32_t size)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340E));
return _method(transportConnection, type, packet, size);
}
bool SDG_Unturned_Provider::shouldNetIgnoreSteamId(unknown_type id)
{
using method_t = bool(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600340F));
return _method(id);
}
void SDG_Unturned_Provider::refuseGarbageConnection(unknown_type remoteId, unknown_type reason)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003410));
return _method(remoteId, reason);
}
void SDG_Unturned_Provider::refuseGarbageConnection1(unknown_type transportConnection, unknown_type reason)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003411));
return _method(transportConnection, reason);
}
bool SDG_Unturned_Provider::get_useConstNetEvents()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003412));
return _method();
}
bool SDG_Unturned_Provider::hasNetBufferChanged(unknown_type original, unknown_type copy, int32_t offset, int32_t size)
{
using method_t = bool(*)(unknown_type, unknown_type, int32_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003413));
return _method(original, copy, offset, size);
}
bool SDG_Unturned_Provider::getChannelHeader(unknown_type packet, int32_t size, int32_t offset, unknown_type channel)
{
using method_t = bool(*)(unknown_type, int32_t, int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003414));
return _method(packet, size, offset, channel);
}
bool SDG_Unturned_Provider::canClientVersionJoinServer(uint32_t version)
{
using method_t = bool(*)(uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003415));
return _method(version);
}
void SDG_Unturned_Provider::legacyReceiveClient(unknown_type packet, int32_t offset, int32_t size)
{
using method_t = void(*)(unknown_type, int32_t, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003416));
return _method(packet, offset, size);
}
void SDG_Unturned_Provider::listenServer()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003417));
return _method();
}
void SDG_Unturned_Provider::listenClient()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003418));
return _method();
}
void SDG_Unturned_Provider::SendPingRequestToAllClients()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003419));
return _method(this);
}
void SDG_Unturned_Provider::NotifyClientsInQueueOfPosition()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341A));
return _method(this);
}
void SDG_Unturned_Provider::KickClientsWithBadConnection()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341B));
return _method(this);
}
void SDG_Unturned_Provider::KickClientsBlockingUpQueue()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341C));
return _method(this);
}
void SDG_Unturned_Provider::listen()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341D));
return _method();
}
void SDG_Unturned_Provider::broadcastServerDisconnected(unknown_type steamID)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341E));
return _method(steamID);
}
void SDG_Unturned_Provider::broadcastServerHosted()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600341F));
return _method();
}
void SDG_Unturned_Provider::broadcastServerShutdown()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003420));
return _method();
}
void SDG_Unturned_Provider::onP2PSessionConnectFail(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003421));
return _method(callback);
}
void SDG_Unturned_Provider::checkBanStatus(SDG_Unturned_SteamPlayerID* playerID, uint32_t remoteIP, unknown_type isBanned, unknown_type banReason, unknown_type banRemainingDuration)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, uint32_t, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003422));
return _method(playerID, remoteIP, isBanned, banReason, banRemainingDuration);
}
bool SDG_Unturned_Provider::requestBanPlayer(unknown_type instigator, unknown_type playerToBan, uint32_t ipToBan, unknown_type reason, uint32_t duration)
{
using method_t = bool(*)(unknown_type, unknown_type, uint32_t, unknown_type, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003423));
return _method(instigator, playerToBan, ipToBan, reason, duration);
}
bool SDG_Unturned_Provider::requestBanPlayer1(unknown_type instigator, unknown_type playerToBan, uint32_t ipToBan, unknown_type hwidsToBan, unknown_type reason, uint32_t duration)
{
using method_t = bool(*)(unknown_type, unknown_type, uint32_t, unknown_type, unknown_type, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003424));
return _method(instigator, playerToBan, ipToBan, hwidsToBan, reason, duration);
}
bool SDG_Unturned_Provider::requestUnbanPlayer(unknown_type instigator, unknown_type playerToUnban)
{
using method_t = bool(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003425));
return _method(instigator, playerToUnban);
}
void SDG_Unturned_Provider::handleValidateAuthTicketResponse(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003426));
return _method(callback);
}
void SDG_Unturned_Provider::onValidateAuthTicketResponse(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003427));
return _method(callback);
}
void SDG_Unturned_Provider::handleClientGroupStatus(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003428));
return _method(callback);
}
void SDG_Unturned_Provider::onClientGroupStatus(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003429));
return _method(callback);
}
uint8_t SDG_Unturned_Provider::get_maxPlayers()
{
using method_t = uint8_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342A));
return _method();
}
void SDG_Unturned_Provider::set_maxPlayers(uint8_t value)
{
using method_t = void(*)(uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342B));
return _method(value);
}
uint8_t SDG_Unturned_Provider::get_queuePosition()
{
using method_t = uint8_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342C));
return _method();
}
unknown_type SDG_Unturned_Provider::get_serverName()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342D));
return _method();
}
void SDG_Unturned_Provider::set_serverName(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342E));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_serverID()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600342F));
return _method();
}
void SDG_Unturned_Provider::set_serverID(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003430));
return _method(value);
}
uint16_t SDG_Unturned_Provider::GetServerConnectionPort()
{
using method_t = uint16_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003431));
return _method();
}
unknown_type SDG_Unturned_Provider::get_serverPasswordHash()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003432));
return _method();
}
unknown_type SDG_Unturned_Provider::get_serverPassword()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003433));
return _method();
}
void SDG_Unturned_Provider::set_serverPassword(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003434));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_statusData()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003435));
return _method();
}
unknown_type SDG_Unturned_Provider::get_preferenceData()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003436));
return _method();
}
unknown_type SDG_Unturned_Provider::get_configData()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003437));
return _method();
}
unknown_type SDG_Unturned_Provider::get_modeConfigData()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003438));
return _method();
}
void SDG_Unturned_Provider::resetConfig()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003439));
return _method();
}
void SDG_Unturned_Provider::applyLevelConfigOverride(unknown_type field, unknown_type targetObject, unknown_type defaultTargetObject, unknown_type levelOverride)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343A));
return _method(field, targetObject, defaultTargetObject, levelOverride);
}
void SDG_Unturned_Provider::applyLevelModeConfigOverrides()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343B));
return _method();
}
void SDG_Unturned_Provider::accept(unknown_type player)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343C));
return _method(player);
}
void SDG_Unturned_Provider::WriteConnectedMessage(unknown_type writer, SDG_Unturned_SteamPlayer* aboutPlayer, SDG_Unturned_SteamPlayer* forPlayer)
{
using method_t = void(*)(unknown_type, SDG_Unturned_SteamPlayer*, SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343D));
return _method(writer, aboutPlayer, forPlayer);
}
void SDG_Unturned_Provider::SendInitialGlobalState(SDG_Unturned_SteamPlayer* client)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343E));
return _method(client);
}
void SDG_Unturned_Provider::accept1(SDG_Unturned_SteamPlayerID* playerID, bool isPro, bool isAdmin, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, bool, bool, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type, unknown_type, bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600343F));
return _method(playerID, isPro, isAdmin, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID);
}
void SDG_Unturned_Provider::accept2(SDG_Unturned_SteamPlayerID* playerID, bool isPro, bool isAdmin, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID, unknown_type clientPlatform)
{
using method_t = void(*)(SDG_Unturned_SteamPlayerID*, bool, bool, uint8_t, uint8_t, uint8_t, unknown_type, unknown_type, unknown_type, bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003440));
return _method(playerID, isPro, isAdmin, face, hair, beard, skin, color, markerColor, hand, shirtItem, pantsItem, hatItem, backpackItem, vestItem, maskItem, glassesItem, skinItems, skinTags, skinDynamicProps, skillset, language, lobbyID, clientPlatform);
}
void SDG_Unturned_Provider::add_onRejectingPlayer(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003441));
return _method(value);
}
void SDG_Unturned_Provider::remove_onRejectingPlayer(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003442));
return _method(value);
}
void SDG_Unturned_Provider::broadcastRejectingPlayer(unknown_type steamID, unknown_type rejection, unknown_type explanation)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003443));
return _method(steamID, rejection, explanation);
}
void SDG_Unturned_Provider::reject(unknown_type steamID, unknown_type rejection)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003444));
return _method(steamID, rejection);
}
void SDG_Unturned_Provider::reject1(unknown_type steamID, unknown_type rejection, unknown_type explanation)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003445));
return _method(steamID, rejection, explanation);
}
void SDG_Unturned_Provider::reject2(unknown_type transportConnection, unknown_type rejection)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003446));
return _method(transportConnection, rejection);
}
void SDG_Unturned_Provider::reject3(unknown_type transportConnection, unknown_type rejection, unknown_type explanation)
{
using method_t = void(*)(unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003447));
return _method(transportConnection, rejection, explanation);
}
void SDG_Unturned_Provider::notifyClientPending(unknown_type transportConnection)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003448));
return _method(transportConnection);
}
bool SDG_Unturned_Provider::findClientForKickBanDismiss(unknown_type steamID, SDG_Unturned_SteamPlayer*& foundClient, unknown_type foundIndex)
{
using method_t = bool(*)(unknown_type, SDG_Unturned_SteamPlayer*&, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003449));
return _method(steamID, foundClient, foundIndex);
}
void SDG_Unturned_Provider::validateDisconnectedMaintainedIndex(unknown_type steamID, uint8_t index)
{
using method_t = void(*)(unknown_type, uint8_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344A));
return _method(steamID, index);
}
void SDG_Unturned_Provider::notifyKickedInternal(unknown_type transportConnection, unknown_type reason)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344B));
return _method(transportConnection, reason);
}
void SDG_Unturned_Provider::kick(unknown_type steamID, unknown_type reason)
{
using method_t = void(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344C));
return _method(steamID, reason);
}
void SDG_Unturned_Provider::notifyBannedInternal(unknown_type transportConnection, unknown_type reason, uint32_t duration)
{
using method_t = void(*)(unknown_type, unknown_type, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344D));
return _method(transportConnection, reason, duration);
}
void SDG_Unturned_Provider::ban(unknown_type steamID, unknown_type reason, uint32_t duration)
{
using method_t = void(*)(unknown_type, unknown_type, uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344E));
return _method(steamID, reason, duration);
}
void SDG_Unturned_Provider::dismiss(unknown_type steamID)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600344F));
return _method(steamID);
}
void SDG_Unturned_Provider::OnServerTransportConnectionFailure(unknown_type transportConnection, unknown_type debugString, bool isError)
{
using method_t = void(*)(unknown_type, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003450));
return _method(transportConnection, debugString, isError);
}
bool SDG_Unturned_Provider::verifyTicket(unknown_type steamID, unknown_type ticket)
{
using method_t = bool(*)(unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003451));
return _method(steamID, ticket);
}
void SDG_Unturned_Provider::openGameServer()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003452));
return _method();
}
void SDG_Unturned_Provider::closeGameServer()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003453));
return _method();
}
bool SDG_Unturned_Provider::GetServerIsFavorited(uint32_t ip, uint16_t queryPort)
{
using method_t = bool(*)(uint32_t, uint16_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003454));
return _method(ip, queryPort);
}
void SDG_Unturned_Provider::SetServerIsFavorited(uint32_t ip, uint16_t connectionPort, uint16_t queryPort, bool newFavorited)
{
using method_t = void(*)(uint32_t, uint16_t, uint16_t, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003455));
return _method(ip, connectionPort, queryPort, newFavorited);
}
void SDG_Unturned_Provider::openURL(unknown_type url)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003456));
return _method(url);
}
bool SDG_Unturned_Provider::get_isCurrentServerFavorited()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003457));
return _method();
}
void SDG_Unturned_Provider::toggleCurrentServerFavorited()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003458));
return _method();
}
void SDG_Unturned_Provider::broadcastEnemyConnected(SDG_Unturned_SteamPlayer* player)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003459));
return _method(player);
}
void SDG_Unturned_Provider::broadcastEnemyDisconnected(SDG_Unturned_SteamPlayer* player)
{
using method_t = void(*)(SDG_Unturned_SteamPlayer*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345A));
return _method(player);
}
void SDG_Unturned_Provider::onPersonaStateChange(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345B));
return _method(callback);
}
void SDG_Unturned_Provider::onGameServerChangeRequested(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345C));
return _method(callback);
}
void SDG_Unturned_Provider::onGameRichPresenceJoinRequested(unknown_type callback)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345D));
return _method(callback);
}
float SDG_Unturned_Provider::get_timeLastPacketWasReceivedFromServer()
{
using method_t = float(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345E));
return _method();
}
void SDG_Unturned_Provider::set_timeLastPacketWasReceivedFromServer(float value)
{
using method_t = void(*)(float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600345F));
return _method(value);
}
float SDG_Unturned_Provider::get_ping()
{
using method_t = float(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003460));
return _method();
}
void SDG_Unturned_Provider::lag(float value)
{
using method_t = void(*)(float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003461));
return _method(value);
}
unknown_type SDG_Unturned_Provider::openTicket(unknown_type serverIdentity)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003462));
return _method(serverIdentity);
}
void SDG_Unturned_Provider::closeTicket()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003463));
return _method();
}
unknown_type SDG_Unturned_Provider::get_provider()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003464));
return _method();
}
void SDG_Unturned_Provider::set_provider(unknown_type value)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003465));
return _method(value);
}
bool SDG_Unturned_Provider::get_isInitialized()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003466));
return _method();
}
uint32_t SDG_Unturned_Provider::get_time()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003467));
return _method();
}
void SDG_Unturned_Provider::set_time(uint32_t value)
{
using method_t = void(*)(uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003468));
return _method(value);
}
uint32_t SDG_Unturned_Provider::get_backendRealtimeSeconds()
{
using method_t = uint32_t(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003469));
return _method();
}
void SDG_Unturned_Provider::set_backendRealtimeSeconds(uint32_t value)
{
using method_t = void(*)(uint32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346A));
return _method(value);
}
unknown_type SDG_Unturned_Provider::get_backendRealtimeDate()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346B));
return _method();
}
bool SDG_Unturned_Provider::get_isBackendRealtimeAvailable()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346C));
return _method();
}
unknown_type SDG_Unturned_Provider::QuitAfterDelay(float seconds)
{
using method_t = unknown_type(*)(SDG_Unturned_Provider*, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346D));
return _method(this, seconds);
}
void SDG_Unturned_Provider::onAPIWarningMessage(int32_t severity, unknown_type warning)
{
using method_t = void(*)(int32_t, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346E));
return _method(severity, warning);
}
void SDG_Unturned_Provider::updateDebug()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600346F));
return _method(this);
}
void SDG_Unturned_Provider::tickDebug()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003470));
return _method(this);
}
unknown_type SDG_Unturned_Provider::downloadIcon(unknown_type iconQueryParams)
{
using method_t = unknown_type(*)(SDG_Unturned_Provider*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003471));
return _method(this, iconQueryParams);
}
void SDG_Unturned_Provider::destroyCachedIcon(unknown_type url)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003472));
return _method(url);
}
void SDG_Unturned_Provider::refreshIcon(unknown_type iconQueryParams)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003473));
return _method(iconQueryParams);
}
void SDG_Unturned_Provider::Update()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003474));
return _method(this);
}
void SDG_Unturned_Provider::FixedUpdate()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003475));
return _method(this);
}
void SDG_Unturned_Provider::initAutoSubscribeMaps()
{
using method_t = void(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003476));
return _method();
}
void SDG_Unturned_Provider::WriteSteamAppIdFileAndEnvironmentVariables()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003477));
return _method(this);
}
unknown_type SDG_Unturned_Provider::LoadStatusData()
{
using method_t = unknown_type(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003478));
return _method();
}
void SDG_Unturned_Provider::LoadPreferences()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003479));
return _method(this);
}
void SDG_Unturned_Provider::awake()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347A));
return _method(this);
}
void SDG_Unturned_Provider::start()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347B));
return _method(this);
}
void SDG_Unturned_Provider::LogSystemInfo()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347C));
return _method(this);
}
bool SDG_Unturned_Provider::get_isApplicationQuitting()
{
using method_t = bool(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347D));
return _method();
}
void SDG_Unturned_Provider::set_isApplicationQuitting(bool value)
{
using method_t = void(*)(bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347E));
return _method(value);
}
void SDG_Unturned_Provider::onApplicationQuitting()
{
using method_t = void(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x0600347F));
return _method(this);
}
void SDG_Unturned_Provider::QuitGame(unknown_type reason)
{
using method_t = void(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003480));
return _method(reason);
}
bool SDG_Unturned_Provider::onApplicationWantsToQuit()
{
using method_t = bool(*)(SDG_Unturned_Provider*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("Assembly-CSharp", "SDG.Unturned", "Provider", 0x06003481));
return _method(this);
}
};
