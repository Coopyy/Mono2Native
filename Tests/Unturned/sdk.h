// Generated: 06/08/2023 10:16 PM
// Mono2SDK - https://github.com/Coopyy/Mono2Native

#include "sdk/mono/mono.h"
#define THIS_PTR reinterpret_cast<uintptr_t>(this)
typedef uintptr_t unknown_type;
namespace SDK
{
class SDG_Unturned_Player;
class SDG_Unturned_PlayerInput;
class SDG_Unturned_PlayerInteract;
class SDG_Unturned_PlayerInventory;
class SDG_Unturned_PlayerLife;
class SDG_Unturned_PlayerLook;
class SDG_Unturned_PlayerMovement;
class SDG_Unturned_Provider;
class SDG_Unturned_SteamChannel;
class SDG_Unturned_SteamPlayer;
class SDG_Unturned_SteamPlayerID;
class UnityEngine_Vector3;
class UnityEngine_Component;
class UnityEngine_GameObject;
class UnityEngine_Transform;
class SDG_Unturned_Player
{
static uintptr_t StaticInstance();
public:
static uint8_t SAVEDATA_VERSION_G();                                            // System.Byte
static void SAVEDATA_VERSION_S(uint8_t value);
static unknown_type onPlayerCreated_G();                                        // SDG.Unturned.PlayerCreated
static void onPlayerCreated_S(unknown_type value);
unknown_type onPlayerTeleported_G();                                            // SDG.Unturned.PlayerTeleported
void onPlayerTeleported_S(unknown_type value);
unknown_type onPlayerSpyReady_G();                                              // SDG.Unturned.PlayerSpyReady
void onPlayerSpyReady_S(unknown_type value);
static unknown_type onSpyReady_G();                                             // SDG.Unturned.PlayerSpyReady
static void onSpyReady_S(unknown_type value);
static unknown_type onPlayerStatIncremented_G();                                // SDG.Unturned.Player/PlayerStatIncremented
static void onPlayerStatIncremented_S(unknown_type value);
unknown_type onLocalPluginWidgetFlagsChanged_G();                               // SDG.Unturned.Player/PluginWidgetFlagsChanged
void onLocalPluginWidgetFlagsChanged_S(unknown_type value);
static bool isLoadingInventory_G();                                             // System.Boolean
static void isLoadingInventory_S(bool value);
static bool isLoadingLife_G();                                                  // System.Boolean
static void isLoadingLife_S(bool value);
static bool isLoadingClothing_G();                                              // System.Boolean
static void isLoadingClothing_S(bool value);
int32_t agro_G();                                                               // System.Int32
void agro_S(int32_t value);
static SDG_Unturned_Player* _player_G();                                        // SDG.Unturned.Player
static void _player_S(SDG_Unturned_Player* value);
SDG_Unturned_SteamChannel* _channel_G();                                        // SDG.Unturned.SteamChannel
void _channel_S(SDG_Unturned_SteamChannel* value);
unknown_type _animator_G();                                                     // SDG.Unturned.PlayerAnimator
void _animator_S(unknown_type value);
unknown_type _clothing_G();                                                     // SDG.Unturned.PlayerClothing
void _clothing_S(unknown_type value);
SDG_Unturned_PlayerInventory* _inventory_G();                                   // SDG.Unturned.PlayerInventory
void _inventory_S(SDG_Unturned_PlayerInventory* value);
unknown_type _equipment_G();                                                    // SDG.Unturned.PlayerEquipment
void _equipment_S(unknown_type value);
SDG_Unturned_PlayerLife* _life_G();                                             // SDG.Unturned.PlayerLife
void _life_S(SDG_Unturned_PlayerLife* value);
unknown_type _crafting_G();                                                     // SDG.Unturned.PlayerCrafting
void _crafting_S(unknown_type value);
unknown_type _skills_G();                                                       // SDG.Unturned.PlayerSkills
void _skills_S(unknown_type value);
SDG_Unturned_PlayerMovement* _movement_G();                                     // SDG.Unturned.PlayerMovement
void _movement_S(SDG_Unturned_PlayerMovement* value);
SDG_Unturned_PlayerLook* _look_G();                                             // SDG.Unturned.PlayerLook
void _look_S(SDG_Unturned_PlayerLook* value);
unknown_type _stance_G();                                                       // SDG.Unturned.PlayerStance
void _stance_S(unknown_type value);
SDG_Unturned_PlayerInput* _input_G();                                           // SDG.Unturned.PlayerInput
void _input_S(SDG_Unturned_PlayerInput* value);
unknown_type _voice_G();                                                        // SDG.Unturned.PlayerVoice
void _voice_S(unknown_type value);
SDG_Unturned_PlayerInteract* _interact_G();                                     // SDG.Unturned.PlayerInteract
void _interact_S(SDG_Unturned_PlayerInteract* value);
unknown_type _workzone_G();                                                     // SDG.Unturned.PlayerWorkzone
void _workzone_S(unknown_type value);
unknown_type _quests_G();                                                       // SDG.Unturned.PlayerQuests
void _quests_S(unknown_type value);
UnityEngine_Transform* _first_G();                                              // UnityEngine.Transform
void _first_S(UnityEngine_Transform* value);
UnityEngine_Transform* _third_G();                                              // UnityEngine.Transform
void _third_S(UnityEngine_Transform* value);
UnityEngine_Transform* _character_G();                                          // UnityEngine.Transform
void _character_S(UnityEngine_Transform* value);
UnityEngine_Transform* firstSpot_G();                                           // UnityEngine.Transform
void firstSpot_S(UnityEngine_Transform* value);
UnityEngine_Transform* thirdSpot_G();                                           // UnityEngine.Transform
void thirdSpot_S(UnityEngine_Transform* value);
bool itemOn_G();                                                                // System.Boolean
void itemOn_S(bool value);
unknown_type itemLightConfig_G();                                               // SDG.Unturned.PlayerSpotLightConfig
void itemLightConfig_S(unknown_type value);
bool headlampOn_G();                                                            // System.Boolean
void headlampOn_S(bool value);
unknown_type headlampLightConfig_G();                                           // SDG.Unturned.PlayerSpotLightConfig
void headlampLightConfig_S(unknown_type value);
int32_t screenshotsExpected_G();                                                // System.Int32
void screenshotsExpected_S(int32_t value);
unknown_type screenshotsDestination_G();                                        // Steamworks.CSteamID
void screenshotsDestination_S(unknown_type value);
unknown_type screenshotsCallbacks_G();                                          // System.Collections.Generic.Queue`1<SDG.Unturned.PlayerSpyReady>
void screenshotsCallbacks_S(unknown_type value);
static unknown_type SendScreenshotDestination_G();                              // SDG.Unturned.ClientInstanceMethod
static void SendScreenshotDestination_S(unknown_type value);
static unknown_type SendScreenshotRelay_G();                                    // SDG.Unturned.ServerInstanceMethod
static void SendScreenshotRelay_S(unknown_type value);
unknown_type screenshotFinal_G();                                               // UnityEngine.Texture2D
void screenshotFinal_S(unknown_type value);
static unknown_type SendTakeScreenshot_G();                                     // SDG.Unturned.ClientInstanceMethod
static void SendTakeScreenshot_S(unknown_type value);
static unknown_type SendBrowserRequest_G();                                     // SDG.Unturned.ClientInstanceMethod`2<System.String,System.String>
static void SendBrowserRequest_S(unknown_type value);
static unknown_type SendHintMessage_G();                                        // SDG.Unturned.ClientInstanceMethod`2<System.String,System.Single>
static void SendHintMessage_S(unknown_type value);
static unknown_type SendRelayToServer_G();                                      // SDG.Unturned.ClientInstanceMethod`4<System.UInt32,System.UInt16,System.String,System.Boolean>
static void SendRelayToServer_S(unknown_type value);
unknown_type pluginWidgetFlags_G();                                             // SDG.Unturned.EPluginWidgetFlags
void pluginWidgetFlags_S(unknown_type value);
static unknown_type SendSetPluginWidgetFlags_G();                               // SDG.Unturned.ClientInstanceMethod`1<System.UInt32>
static void SendSetPluginWidgetFlags_S(unknown_type value);
bool wantsBattlEyeLogs_G();                                                     // System.Boolean
void wantsBattlEyeLogs_S(bool value);
static unknown_type SendBattlEyeLogsRequest_G();                                // SDG.Unturned.ServerInstanceMethod
static void SendBattlEyeLogsRequest_S(unknown_type value);
static unknown_type SendTerminalRelay_G();                                      // SDG.Unturned.ClientInstanceMethod`1<System.String>
static void SendTerminalRelay_S(unknown_type value);
static float TELEPORT_VERTICAL_OFFSET_G();                                      // System.Single
static void TELEPORT_VERTICAL_OFFSET_S(float value);
static unknown_type SendTeleport_G();                                           // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,System.Byte>
static void SendTeleport_S(unknown_type value);
static unknown_type SendStat_G();                                               // SDG.Unturned.ClientInstanceMethod`1<SDG.Unturned.EPlayerStat>
static void SendStat_S(unknown_type value);
static unknown_type SendAchievementUnlocked_G();                                // SDG.Unturned.ClientInstanceMethod`1<System.String>
static void SendAchievementUnlocked_S(unknown_type value);
static unknown_type SendUIMessage_G();                                          // SDG.Unturned.ClientInstanceMethod`1<SDG.Unturned.EPlayerMessage>
static void SendUIMessage_S(unknown_type value);
uint32_t maxRateLimitedActionsPerSecond_G();                                    // System.UInt32
void maxRateLimitedActionsPerSecond_S(uint32_t value);
float rateLimitedActionsCredits_G();                                            // System.Single
void rateLimitedActionsCredits_S(float value);
unknown_type _netId_G();                                                        // SDG.Unturned.NetId
void _netId_S(unknown_type value);
static void add_onPlayerStatIncremented(unknown_type value);
static void remove_onPlayerStatIncremented(unknown_type value);
void add_onLocalPluginWidgetFlagsChanged(unknown_type value);
void remove_onLocalPluginWidgetFlagsChanged(unknown_type value);
static bool get_isLoading();
static SDG_Unturned_Player* get_player();
static SDG_Unturned_Player* get_instance();
SDG_Unturned_SteamChannel* get_channel();
unknown_type get_animator();
unknown_type get_clothing();
SDG_Unturned_PlayerInventory* get_inventory();
unknown_type get_equipment();
SDG_Unturned_PlayerLife* get_life();
unknown_type get_crafting();
unknown_type get_skills();
SDG_Unturned_PlayerMovement* get_movement();
SDG_Unturned_PlayerLook* get_look();
unknown_type get_stance();
SDG_Unturned_PlayerInput* get_input();
unknown_type get_voice();
SDG_Unturned_PlayerInteract* get_interact();
unknown_type get_workzone();
unknown_type get_quests();
UnityEngine_Transform* get_first();
UnityEngine_Transform* get_third();
UnityEngine_Transform* get_character();
bool get_isSpotOn();
unknown_type get_lightConfig();
unknown_type PlayAudioReference(unknown_type audioReference);
unknown_type playSound(unknown_type clip, float volume, float pitch, float deviation);
unknown_type playSound1(unknown_type clip, float pitch, float deviation);
unknown_type playSound2(unknown_type clip, float volume);
unknown_type playSound3(unknown_type clip);
void tellScreenshotDestination(unknown_type steamID);
void ReceiveScreenshotDestination(unknown_type context);
void HandleScreenshotData(unknown_type data);
void tellScreenshotRelay(unknown_type steamID);
void ReceiveScreenshotRelay(unknown_type context);
unknown_type takeScreenshot();
void askScreenshot(unknown_type steamID);
void ReceiveTakeScreenshot();
void sendScreenshot(unknown_type destination, unknown_type callback);
void askBrowserRequest(unknown_type steamID, unknown_type msg, unknown_type url);
void ReceiveBrowserRequest(unknown_type msg, unknown_type url);
void sendBrowserRequest(unknown_type msg, unknown_type url);
void ReceiveHintMessage(unknown_type message, float durationSeconds);
void ServerShowHint(unknown_type message, float durationSeconds);
void askRelayToServer(unknown_type steamID, uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu);
void ReceiveRelayToServer(uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu);
void sendRelayToServer(uint32_t ip, uint16_t port, unknown_type password, bool shouldShowMenu);
void sendRelayToServer1(uint32_t ip, uint16_t port, unknown_type password);
bool get_inPluginModal();
bool isPluginWidgetFlagActive(unknown_type flag);
unknown_type get_pluginWidgetFlags();
void set_pluginWidgetFlags(unknown_type value);
void clientsideSetPluginWidgetFlags(unknown_type steamID, uint32_t newFlags);
void ReceiveSetPluginWidgetFlags(uint32_t newFlags);
void setAllPluginWidgetFlags(unknown_type newFlags);
void enablePluginWidgetFlag(unknown_type flag);
void disablePluginWidgetFlag(unknown_type flag);
void setPluginWidgetFlag(unknown_type flag, bool active);
void serversideSetPluginModal(bool enableModal);
bool get_wantsBattlEyeLogs();
void set_wantsBattlEyeLogs(bool value);
void askRequestBattlEyeLogs(unknown_type steamID);
void ReceiveBattlEyeLogsRequest();
void tellTerminalRelay(unknown_type steamID, unknown_type internalMessage);
void ReceiveTerminalRelay(unknown_type internalMessage);
void sendTerminalRelay(unknown_type internalMessage, unknown_type internalCategory, unknown_type displayCategory);
void sendTerminalRelay1(unknown_type internalMessage);
void PostTeleport();
void askTeleport(unknown_type steamID, UnityEngine_Vector3 position, uint8_t angle);
void ReceiveTeleport(UnityEngine_Vector3 position, uint8_t angle);
void sendTeleport(UnityEngine_Vector3 position, uint8_t angle);
bool teleportToPlayer(SDG_Unturned_Player* otherPlayer);
bool teleportToLocation(UnityEngine_Vector3 position, float yaw);
bool teleportToRandomSpawnPoint();
bool teleportToBed();
bool adjustStanceOrTeleportIfStuck();
void teleportToLocationUnsafe(UnityEngine_Vector3 position, float yaw);
void tellStat(unknown_type steamID, uint8_t newStat);
void ReceiveStat(unknown_type stat);
void tellAchievementUnlocked(unknown_type steamID, unknown_type id);
void ReceiveAchievementUnlocked(unknown_type id);
void trackStat(unknown_type stat);
void sendStat(unknown_type kill);
void sendStat1(unknown_type stat);
void sendAchievementUnlocked(unknown_type id);
void askMessage(unknown_type steamID, uint8_t message);
void ReceiveUIMessage(unknown_type message);
void sendMessage(unknown_type message);
void enableItemSpotLight(unknown_type config);
void disableItemSpotLight();
void updateGlassesLights(bool on);
void enableHeadlamp(unknown_type config);
void disableHeadlamp();
void updateLights();
void onPerspectiveUpdated(unknown_type newPerspective);
float get_rateLimitedActionsCredits();
void set_rateLimitedActionsCredits(float value);
bool tryToPerformRateLimitedAction();
void updateRateLimiting();
void Update();
void InitializePlayerStart();
void AssignNetIdBlock(unknown_type baseId);
void InitializePlayer();
void SendInitialPlayerState(SDG_Unturned_SteamPlayer* client);
void SendInitialPlayerState1(unknown_type transportConnections);
void ReleaseNetIdBlock();
void Awake();
void OnDestroy();
void save();
void savePositionAndRotation();
unknown_type GetNetId();
};
class SDG_Unturned_PlayerInput
{
static uintptr_t StaticInstance();
public:
static uint32_t SAMPLES_G();                                                    // System.UInt32
static void SAMPLES_S(uint32_t value);
static float RATE_G();                                                          // System.Single
static void RATE_S(float value);
static uint32_t TOCK_PER_SECOND_G();                                            // System.UInt32
static void TOCK_PER_SECOND_S(uint32_t value);
static int32_t VANILLA_DIGITAL_KEYS_G();                                        // System.Int32
static void VANILLA_DIGITAL_KEYS_S(int32_t value);
static unknown_type onPluginKeyTick_G();                                        // SDG.Unturned.PluginKeyTickHandler
static void onPluginKeyTick_S(unknown_type value);
float _tick_G();                                                                // System.Single
void _tick_S(float value);
uint32_t buffer_G();                                                            // System.UInt32
void buffer_S(uint32_t value);
uint32_t consumed_G();                                                          // System.UInt32
void consumed_S(uint32_t value);
uint32_t count_G();                                                             // System.UInt32
void count_S(uint32_t value);
uint32_t _simulation_G();                                                       // System.UInt32
void _simulation_S(uint32_t value);
uint32_t _clock_G();                                                            // System.UInt32
void _clock_S(uint32_t value);
unknown_type keys_G();                                                          // System.Boolean[]
void keys_S(unknown_type value);
unknown_type pendingPrimaryAttackInput_G();                                     // SDG.Unturned.EAttackInputFlags
void pendingPrimaryAttackInput_S(unknown_type value);
unknown_type pendingSecondaryAttackInput_G();                                   // SDG.Unturned.EAttackInputFlags
void pendingSecondaryAttackInput_S(unknown_type value);
unknown_type flags_G();                                                         // System.UInt16[]
void flags_S(unknown_type value);
bool hasDoneOcclusionCheck_G();                                                 // System.Boolean
void hasDoneOcclusionCheck_S(bool value);
unknown_type inputs_G();                                                        // System.Collections.Generic.Queue`1<SDG.Unturned.InputInfo>
void inputs_S(unknown_type value);
unknown_type clientPendingInput_G();                                            // SDG.Unturned.PlayerInputPacket
void clientPendingInput_S(unknown_type value);
unknown_type clientInputHistory_G();                                            // System.Collections.Generic.List`1<SDG.Unturned.ClientMovementInput>
void clientInputHistory_S(unknown_type value);
unknown_type serversidePackets_G();                                             // System.Collections.Generic.Queue`1<SDG.Unturned.PlayerInputPacket>
void serversidePackets_S(unknown_type value);
uint32_t serverLastReceivedSimulationFrameNumber_G();                           // System.UInt32
void serverLastReceivedSimulationFrameNumber_S(uint32_t value);
int32_t recov_G();                                                              // System.Int32
void recov_S(int32_t value);
unknown_type obstruction_G();                                                   // UnityEngine.RaycastHit
void obstruction_S(unknown_type value);
float lastInputed_G();                                                          // System.Single
void lastInputed_S(float value);
bool hasInputed_G();                                                            // System.Boolean
void hasInputed_S(bool value);
bool isDismissed_G();                                                           // System.Boolean
void isDismissed_S(bool value);
static float EXPECTED_ASKINPUT_PER_SECOND_G();                                  // System.Single
static void EXPECTED_ASKINPUT_PER_SECOND_S(float value);
static int32_t MAX_ASKINPUT_PER_SECOND_G();                                     // System.Int32
static void MAX_ASKINPUT_PER_SECOND_S(int32_t value);
static int32_t KICK_ASKINPUT_PER_SECOND_G();                                    // System.Int32
static void KICK_ASKINPUT_PER_SECOND_S(int32_t value);
int32_t serversideAskInputCount_G();                                            // System.Int32
void serversideAskInputCount_S(int32_t value);
float initialServersideAskInputTime_G();                                        // System.Single
void initialServersideAskInputTime_S(float value);
float latestAskInputDismissTestTime_G();                                        // System.Single
void latestAskInputDismissTestTime_S(float value);
static int32_t ASKINPUT_WINDOW_LENGTH_G();                                      // System.Int32
static void ASKINPUT_WINDOW_LENGTH_S(int32_t value);
unknown_type rollingWindow_G();                                                 // System.Int32[]
void rollingWindow_S(unknown_type value);
int32_t rollingWindowIndex_G();                                                 // System.Int32
void rollingWindowIndex_S(int32_t value);
bool clientHasPendingResimulation_G();                                          // System.Boolean
void clientHasPendingResimulation_S(bool value);
uint32_t clientResimulationFrameNumber_G();                                     // System.UInt32
void clientResimulationFrameNumber_S(uint32_t value);
unknown_type clientResimulationStance_G();                                      // SDG.Unturned.EPlayerStance
void clientResimulationStance_S(unknown_type value);
UnityEngine_Vector3 clientResimulationPosition_G();                             // UnityEngine.Vector3
void clientResimulationPosition_S(UnityEngine_Vector3 value);
UnityEngine_Vector3 clientResimulationVelocity_G();                             // UnityEngine.Vector3
void clientResimulationVelocity_S(UnityEngine_Vector3 value);
uint8_t clientResimulationStamina_G();                                          // System.Byte
void clientResimulationStamina_S(uint8_t value);
int32_t clientResimulationLastTireOffset_G();                                   // System.Int32
void clientResimulationLastTireOffset_S(int32_t value);
int32_t clientResimulationLastRestOffset_G();                                   // System.Int32
void clientResimulationLastRestOffset_S(int32_t value);
bool isResimulating_G();                                                        // System.Boolean
void isResimulating_S(bool value);
static unknown_type SendSimulateMispredictedInputs_G();                         // SDG.Unturned.ClientInstanceMethod`7<System.UInt32,SDG.Unturned.EPlayerStance,UnityEngine.Vector3,UnityEngine.Vector3,System.Byte,System.Int32,System.Int32>
static void SendSimulateMispredictedInputs_S(unknown_type value);
static unknown_type SendAckGoodInputs_G();                                      // SDG.Unturned.ClientInstanceMethod`1<System.UInt32>
static void SendAckGoodInputs_S(unknown_type value);
static unknown_type SendInputs_G();                                             // SDG.Unturned.ServerInstanceMethod
static void SendInputs_S(unknown_type value);
static float MIN_FAKE_LAG_THRESHOLD_SECONDS_G();                                // System.Single
static void MIN_FAKE_LAG_THRESHOLD_SECONDS_S(float value);
int32_t fakeLagPenaltyFrames_G();                                               // System.Int32
void fakeLagPenaltyFrames_S(int32_t value);
static float FAKE_LAG_PENALTY_DAMAGE_G();                                       // System.Single
static void FAKE_LAG_PENALTY_DAMAGE_S(float value);
float get_tick();
uint32_t get_simulation();
bool get_IsUnderFakeLagPenalty();
uint32_t get_clock();
bool IsPluginKeyHeld(int32_t index);
unknown_type get_keys();
void set_keys(unknown_type value);
bool hasInputs();
int32_t getInputCount();
unknown_type getInput(bool doOcclusionCheck, unknown_type usage);
unknown_type getInput1(bool doOcclusionCheck);
bool isRaycastInvalid(unknown_type info);
void sendRaycast(unknown_type info, unknown_type usage);
void advanceRollingWindowIndex(int32_t newIndex);
void internalDismiss();
void ClientRemoveInputHistory(uint32_t frameNumber);
void ClientResimulate();
void ReceiveSimulateMispredictedInputs(uint32_t frameNumber, unknown_type stance, UnityEngine_Vector3 position, UnityEngine_Vector3 velocity, uint8_t stamina, int32_t lastTireOffset, int32_t lastRestOffset);
void ReceiveAckGoodInputs(uint32_t frameNumber);
void askInput(unknown_type steamID);
void ReceiveInputs(unknown_type context);
void onLifeUpdated(bool isDead);
void FixedUpdate();
void InitializePlayer();
bool getInputg__IsObstructionHitValid31_0(unknown_type );
void FixedUpdateb__74_0(unknown_type writer);
};
class SDG_Unturned_PlayerInteract
{
static uintptr_t StaticInstance();
public:
static UnityEngine_Transform* focus_G();                                        // UnityEngine.Transform
static void focus_S(UnityEngine_Transform* value);
static UnityEngine_Transform* target_G();                                       // UnityEngine.Transform
static void target_S(UnityEngine_Transform* value);
static unknown_type purchaseAsset_G();                                          // SDG.Unturned.ItemAsset
static void purchaseAsset_S(unknown_type value);
static unknown_type _interactable_G();                                          // SDG.Unturned.Interactable
static void _interactable_S(unknown_type value);
static unknown_type _interactable2_G();                                         // SDG.Unturned.Interactable2
static void _interactable2_S(unknown_type value);
static unknown_type hit_G();                                                    // UnityEngine.RaycastHit
static void hit_S(unknown_type value);
static float lastInteract_G();                                                  // System.Single
static void lastInteract_S(float value);
static float salvageHeldTime_G();                                               // System.Single
static void salvageHeldTime_S(float value);
static bool isHoldingKey_G();                                                   // System.Boolean
static void isHoldingKey_S(bool value);
bool shouldOverrideSalvageTime_G();                                             // System.Boolean
void shouldOverrideSalvageTime_S(bool value);
float overrideSalvageTimeValue_G();                                             // System.Single
void overrideSalvageTimeValue_S(float value);
static unknown_type SendSalvageTimeOverride_G();                                // SDG.Unturned.ClientInstanceMethod`1<System.Single>
static void SendSalvageTimeOverride_S(unknown_type value);
static unknown_type SendInspectRequest_G();                                     // SDG.Unturned.ServerInstanceMethod
static void SendInspectRequest_S(unknown_type value);
static unknown_type SendPlayInspect_G();                                        // SDG.Unturned.ClientInstanceMethod
static void SendPlayInspect_S(unknown_type value);
UnityEngine_Transform* highlightedTransform_G();                                // UnityEngine.Transform
void highlightedTransform_S(UnityEngine_Transform* value);
bool didHaveFocus_G();                                                          // System.Boolean
void didHaveFocus_S(bool value);
static unknown_type get_interactable();
static unknown_type get_interactable2();
float get_salvageTime();
float get_interactableSalvageTime();
void tellSalvageTimeOverride(unknown_type senderId, float overrideValue);
void ReceiveSalvageTimeOverride(float overrideValue);
void sendSalvageTimeOverride(float overrideValue);
void hotkey(uint8_t button);
void askInspect(unknown_type steamID);
void ReceiveInspectRequest();
void tellInspect(unknown_type steamID);
void ReceivePlayInspect();
void localInspect();
void onPurchaseUpdated(unknown_type node);
void OnLifeUpdated(bool isDead);
void Update();
void InitializePlayer();
void clearHighlight();
void setHighlight(UnityEngine_Transform* newHighlightedTransform, unknown_type color);
};
class SDG_Unturned_PlayerInventory
{
static uintptr_t StaticInstance();
public:
static unknown_type LOADOUT_G();                                                // System.UInt16[]
static void LOADOUT_S(unknown_type value);
static unknown_type HORDE_G();                                                  // System.UInt16[]
static void HORDE_S(unknown_type value);
static unknown_type SKILLSETS_SERVER_G();                                       // System.UInt16[][]
static void SKILLSETS_SERVER_S(unknown_type value);
static unknown_type SKILLSETS_CLIENT_G();                                       // System.UInt16[][]
static void SKILLSETS_CLIENT_S(unknown_type value);
static unknown_type SKILLSETS_HERO_G();                                         // System.UInt16[][]
static void SKILLSETS_HERO_S(unknown_type value);
static uint8_t SAVEDATA_VERSION_G();                                            // System.Byte
static void SAVEDATA_VERSION_S(uint8_t value);
static uint8_t SLOTS_G();                                                       // System.Byte
static void SLOTS_S(uint8_t value);
static uint8_t PAGES_G();                                                       // System.Byte
static void PAGES_S(uint8_t value);
static uint8_t BACKPACK_G();                                                    // System.Byte
static void BACKPACK_S(uint8_t value);
static uint8_t VEST_G();                                                        // System.Byte
static void VEST_S(uint8_t value);
static uint8_t SHIRT_G();                                                       // System.Byte
static void SHIRT_S(uint8_t value);
static uint8_t PANTS_G();                                                       // System.Byte
static void PANTS_S(uint8_t value);
static uint8_t STORAGE_G();                                                     // System.Byte
static void STORAGE_S(uint8_t value);
static uint8_t AREA_G();                                                        // System.Byte
static void AREA_S(uint8_t value);
static unknown_type loadout_G();                                                // System.UInt16[]
static void loadout_S(unknown_type value);
static unknown_type skillsets_G();                                              // System.UInt16[][]
static void skillsets_S(unknown_type value);
unknown_type items_G();                                                         // SDG.Unturned.Items[]
void items_S(unknown_type value);
int32_t receivedUpdateIndex_G();                                                // System.Int32
void receivedUpdateIndex_S(int32_t value);
bool isStoring_G();                                                             // System.Boolean
void isStoring_S(bool value);
bool isStorageTrunk_G();                                                        // System.Boolean
void isStorageTrunk_S(bool value);
unknown_type storage_G();                                                       // SDG.Unturned.InteractableStorage
void storage_S(unknown_type value);
bool ownerHasInventory_G();                                                     // System.Boolean
void ownerHasInventory_S(bool value);
unknown_type onInventoryResized_G();                                            // SDG.Unturned.InventoryResized
void onInventoryResized_S(unknown_type value);
unknown_type onInventoryUpdated_G();                                            // SDG.Unturned.InventoryUpdated
void onInventoryUpdated_S(unknown_type value);
unknown_type onInventoryAdded_G();                                              // SDG.Unturned.InventoryAdded
void onInventoryAdded_S(unknown_type value);
unknown_type onInventoryRemoved_G();                                            // SDG.Unturned.InventoryRemoved
void onInventoryRemoved_S(unknown_type value);
unknown_type onInventoryStored_G();                                             // SDG.Unturned.InventoryStored
void onInventoryStored_S(unknown_type value);
unknown_type onInventoryStateUpdated_G();                                       // SDG.Unturned.InventoryStateUpdated
void onInventoryStateUpdated_S(unknown_type value);
unknown_type onDropItemRequested_G();                                           // SDG.Unturned.DropItemRequestHandler
void onDropItemRequested_S(unknown_type value);
static unknown_type SendDragItem_G();                                           // SDG.Unturned.ServerInstanceMethod`7<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte>
static void SendDragItem_S(unknown_type value);
static unknown_type SendSwapItem_G();                                           // SDG.Unturned.ServerInstanceMethod`8<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte>
static void SendSwapItem_S(unknown_type value);
static unknown_type SendDropItem_G();                                           // SDG.Unturned.ServerInstanceMethod`3<System.Byte,System.Byte,System.Byte>
static void SendDropItem_S(unknown_type value);
static unknown_type SendUpdateAmount_G();                                       // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
static void SendUpdateAmount_S(unknown_type value);
static unknown_type SendUpdateQuality_G();                                      // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
static void SendUpdateQuality_S(unknown_type value);
static unknown_type SendUpdateInvState_G();                                     // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte[]>
static void SendUpdateInvState_S(unknown_type value);
static unknown_type SendItemAdd_G();                                            // SDG.Unturned.ClientInstanceMethod`8<System.Byte,System.Byte,System.Byte,System.Byte,System.UInt16,System.Byte,System.Byte,System.Byte[]>
static void SendItemAdd_S(unknown_type value);
static unknown_type SendItemRemove_G();                                         // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
static void SendItemRemove_S(unknown_type value);
static unknown_type SendSize_G();                                               // SDG.Unturned.ClientInstanceMethod`3<System.Byte,System.Byte,System.Byte>
static void SendSize_S(unknown_type value);
static unknown_type SendStoraging_G();                                          // SDG.Unturned.ClientInstanceMethod
static void SendStoraging_S(unknown_type value);
static unknown_type SendInventory_G();                                          // SDG.Unturned.ClientInstanceMethod
static void SendInventory_S(unknown_type value);
bool wasLoadCalled_G();                                                         // System.Boolean
void wasLoadCalled_S(bool value);
unknown_type get_items();
void set_items(unknown_type value);
void incrementUpdateIndex();
bool doesSearchNeedRefresh(unknown_type index);
bool get_shouldInventoryStopGestureCloseStorage();
bool get_shouldInteractCloseStorage();
bool get_shouldStorageOpenDashboard();
uint8_t getWidth(uint8_t page);
uint8_t getHeight(uint8_t page);
uint8_t getItemCount(uint8_t page);
unknown_type getItem(uint8_t page, uint8_t index);
uint8_t getIndex(uint8_t page, uint8_t x, uint8_t y);
uint8_t findIndex(uint8_t page, uint8_t x, uint8_t y, unknown_type find_x, unknown_type find_y);
void updateAmount(uint8_t page, uint8_t index, uint8_t newAmount);
void updateQuality(uint8_t page, uint8_t index, uint8_t newQuality);
void updateState(uint8_t page, uint8_t index, unknown_type newState);
unknown_type search(unknown_type type);
void search1(unknown_type search, unknown_type type);
unknown_type search2(unknown_type type, unknown_type calibers);
unknown_type search3(unknown_type type, unknown_type calibers, bool allowZeroCaliber);
void search4(unknown_type search, unknown_type type, uint16_t caliber);
void search5(unknown_type search, unknown_type type, uint16_t caliber, bool allowZeroCaliber);
unknown_type search6(uint16_t id, bool findEmpty, bool findHealthy);
void search7(unknown_type search, uint16_t id, bool findEmpty, bool findHealthy);
unknown_type search8(unknown_type search);
unknown_type has(uint16_t id);
bool tryAddItem(unknown_type item, uint8_t x, uint8_t y, uint8_t page, uint8_t rot);
bool tryAddItem1(unknown_type item, bool auto_);
bool tryAddItem2(unknown_type item, bool auto_, bool playEffect);
bool tryAddItemEquip(unknown_type item, uint8_t page);
bool tryAddItemAuto(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing, bool playEffect);
void forceAddItem(unknown_type item, bool auto_);
void forceAddItemAuto(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing);
void forceAddItem1(unknown_type item, bool auto_, bool playEffect);
void forceAddItemAuto1(unknown_type item, bool autoEquipWeapon, bool autoEquipUseable, bool autoEquipClothing, bool playEffect);
void replaceItems(uint8_t page, unknown_type replacement);
void removeItem(uint8_t page, uint8_t index);
bool checkSpaceEmpty(uint8_t page, uint8_t x, uint8_t y, uint8_t size_x, uint8_t size_y, uint8_t rot);
bool checkSpaceDrag(uint8_t page, uint8_t old_x, uint8_t old_y, uint8_t oldRot, uint8_t new_x, uint8_t new_y, uint8_t newRot, uint8_t size_x, uint8_t size_y, bool checkSame);
bool checkSpaceSwap(uint8_t page, uint8_t x, uint8_t y, uint8_t oldSize_X, uint8_t oldSize_Y, uint8_t oldRot, uint8_t newSize_X, uint8_t newSize_Y, uint8_t newRot);
bool tryFindSpace(uint8_t page, uint8_t size_x, uint8_t size_y, unknown_type x, unknown_type y, unknown_type rot);
bool tryFindSpace1(uint8_t size_x, uint8_t size_y, unknown_type page, unknown_type x, unknown_type y, unknown_type rot);
void askDragItem(unknown_type steamID, uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void ReceiveDragItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void askSwapItem(unknown_type steamID, uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void ReceiveSwapItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void sendDragItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void sendSwapItem(uint8_t page_0, uint8_t x_0, uint8_t y_0, uint8_t rot_0, uint8_t page_1, uint8_t x_1, uint8_t y_1, uint8_t rot_1);
void askDropItem(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y);
void ReceiveDropItem(uint8_t page, uint8_t x, uint8_t y);
void sendDropItem(uint8_t page, uint8_t x, uint8_t y);
void tellUpdateAmount(unknown_type steamID, uint8_t page, uint8_t index, uint8_t amount);
void ReceiveUpdateAmount(uint8_t page, uint8_t index, uint8_t amount);
void tellUpdateQuality(unknown_type steamID, uint8_t page, uint8_t index, uint8_t quality);
void ReceiveUpdateQuality(uint8_t page, uint8_t index, uint8_t quality);
void tellUpdateInvState(unknown_type steamID, uint8_t page, uint8_t index, unknown_type state);
void ReceiveUpdateInvState(uint8_t page, uint8_t index, unknown_type state);
void tellItemAdd(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y, uint8_t rot, uint16_t id, uint8_t amount, uint8_t quality, unknown_type state);
void ReceiveItemAdd(uint8_t page, uint8_t x, uint8_t y, uint8_t rot, uint16_t id, uint8_t amount, uint8_t quality, unknown_type state);
void tellItemRemove(unknown_type steamID, uint8_t page, uint8_t x, uint8_t y);
void ReceiveItemRemove(uint8_t page, uint8_t x, uint8_t y);
void tellSize(unknown_type steamID, uint8_t page, uint8_t newWidth, uint8_t newHeight);
void ReceiveSize(uint8_t page, uint8_t newWidth, uint8_t newHeight);
void tellStoraging(unknown_type steamID);
void ReceiveStoraging(unknown_type context);
void tellInventory(unknown_type steamID);
void ReceiveInventory(unknown_type context);
void askInventory(unknown_type steamID);
void SendInitialPlayerState(SDG_Unturned_SteamPlayer* client);
void sendStorage();
void updateItems(uint8_t page, unknown_type newItems);
void sendUpdateAmount(uint8_t page, uint8_t x, uint8_t y, uint8_t amount);
void sendUpdateQuality(uint8_t page, uint8_t x, uint8_t y, uint8_t quality);
void sendUpdateInvState(uint8_t page, uint8_t x, uint8_t y, unknown_type state);
void sendItemAdd(uint8_t page, unknown_type jar);
void sendItemRemove(uint8_t page, unknown_type jar);
void bestowLoadout();
void onShirtUpdated(uint16_t id, uint8_t quality, unknown_type state);
void onPantsUpdated(uint16_t id, uint8_t quality, unknown_type state);
void onBackpackUpdated(uint16_t id, uint8_t quality, unknown_type state);
void onVestUpdated(uint16_t id, uint8_t quality, unknown_type state);
void closeDistantStorage();
void openStorage(unknown_type newStorage);
void openTrunk(unknown_type trunkItems);
void closeTrunk();
void closeStorage();
void closeStorageAndNotifyClient();
void onLifeUpdated(bool isDead);
void onItemsResized(uint8_t page, uint8_t newWidth, uint8_t newHeight);
void onItemUpdated(uint8_t page, uint8_t index, unknown_type jar);
void onItemAdded(uint8_t page, uint8_t index, unknown_type jar);
void onItemRemoved(uint8_t page, uint8_t index, unknown_type jar);
void onItemDiscarded(uint8_t page, uint8_t index, unknown_type jar);
void onItemStateUpdated();
void OnDestroy();
void InitializePlayer();
void load();
void save();
void LogRPCFailure(unknown_type format, unknown_type args);
void SendInitialPlayerStateb__112_0(unknown_type writer);
void sendStorageb__113_0(unknown_type writer);
};
class SDG_Unturned_PlayerLife
{
static uintptr_t StaticInstance();
public:
static uint8_t SAVEDATA_VERSION_LATEST_G();                                     // System.Byte
static void SAVEDATA_VERSION_LATEST_S(uint8_t value);
static uint8_t SAVEDATA_VERSION_WITH_OXYGEN_G();                                // System.Byte
static void SAVEDATA_VERSION_WITH_OXYGEN_S(uint8_t value);
static uint8_t SAVEDATA_VERSION_G();                                            // System.Byte
static void SAVEDATA_VERSION_S(uint8_t value);
static float COMBAT_COOLDOWN_G();                                               // System.Single
static void COMBAT_COOLDOWN_S(float value);
static unknown_type onPlayerLifeUpdated_G();                                    // SDG.Unturned.PlayerLifeUpdated
static void onPlayerLifeUpdated_S(unknown_type value);
static unknown_type OnPreDeath_G();                                             // System.Action`1<SDG.Unturned.PlayerLife>
static void OnPreDeath_S(unknown_type value);
static unknown_type onPlayerDied_G();                                           // SDG.Unturned.PlayerLife/PlayerDiedCallback
static void onPlayerDied_S(unknown_type value);
static unknown_type OnTellHealth_Global_G();                                    // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellHealth_Global_S(unknown_type value);
static unknown_type OnTellFood_Global_G();                                      // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellFood_Global_S(unknown_type value);
static unknown_type OnTellWater_Global_G();                                     // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellWater_Global_S(unknown_type value);
static unknown_type OnTellVirus_Global_G();                                     // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellVirus_Global_S(unknown_type value);
static unknown_type OnTellBleeding_Global_G();                                  // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellBleeding_Global_S(unknown_type value);
static unknown_type OnTellBroken_Global_G();                                    // System.Action`1<SDG.Unturned.PlayerLife>
static void OnTellBroken_Global_S(unknown_type value);
static unknown_type RocketLegacyOnDeath_G();                                    // System.Action`4<SDG.Unturned.PlayerLife,SDG.Unturned.EDeathCause,SDG.Unturned.ELimb,Steamworks.CSteamID>
static void RocketLegacyOnDeath_S(unknown_type value);
static unknown_type OnRevived_Global_G();                                       // System.Action`1<SDG.Unturned.PlayerLife>
static void OnRevived_Global_S(unknown_type value);
static unknown_type OnSelectingRespawnPoint_G();                                // SDG.Unturned.PlayerLife/RespawnPointSelector
static void OnSelectingRespawnPoint_S(unknown_type value);
unknown_type onLifeUpdated_G();                                                 // SDG.Unturned.LifeUpdated
void onLifeUpdated_S(unknown_type value);
unknown_type onHealthUpdated_G();                                               // SDG.Unturned.HealthUpdated
void onHealthUpdated_S(unknown_type value);
unknown_type onFoodUpdated_G();                                                 // SDG.Unturned.FoodUpdated
void onFoodUpdated_S(unknown_type value);
unknown_type onWaterUpdated_G();                                                // SDG.Unturned.WaterUpdated
void onWaterUpdated_S(unknown_type value);
unknown_type onVirusUpdated_G();                                                // SDG.Unturned.VirusUpdated
void onVirusUpdated_S(unknown_type value);
unknown_type onStaminaUpdated_G();                                              // SDG.Unturned.StaminaUpdated
void onStaminaUpdated_S(unknown_type value);
unknown_type onVisionUpdated_G();                                               // SDG.Unturned.VisionUpdated
void onVisionUpdated_S(unknown_type value);
unknown_type onOxygenUpdated_G();                                               // SDG.Unturned.OxygenUpdated
void onOxygenUpdated_S(unknown_type value);
unknown_type onBleedingUpdated_G();                                             // SDG.Unturned.BleedingUpdated
void onBleedingUpdated_S(unknown_type value);
unknown_type onBrokenUpdated_G();                                               // SDG.Unturned.BrokenUpdated
void onBrokenUpdated_S(unknown_type value);
unknown_type onTemperatureUpdated_G();                                          // SDG.Unturned.TemperatureUpdated
void onTemperatureUpdated_S(unknown_type value);
unknown_type onDamaged_G();                                                     // SDG.Unturned.Damaged
void onDamaged_S(unknown_type value);
unknown_type onHurt_G();                                                        // SDG.Unturned.Hurt
void onHurt_S(unknown_type value);
bool wasPvPDeath_G();                                                           // System.Boolean
void wasPvPDeath_S(bool value);
static unknown_type _deathCause_G();                                            // SDG.Unturned.EDeathCause
static void _deathCause_S(unknown_type value);
static unknown_type _deathLimb_G();                                             // SDG.Unturned.ELimb
static void _deathLimb_S(unknown_type value);
static unknown_type _deathKiller_G();                                           // Steamworks.CSteamID
static void _deathKiller_S(unknown_type value);
unknown_type recentKiller_G();                                                  // Steamworks.CSteamID
void recentKiller_S(unknown_type value);
float lastTimeAggressive_G();                                                   // System.Single
void lastTimeAggressive_S(float value);
float lastTimeTookDamage_G();                                                   // System.Single
void lastTimeTookDamage_S(float value);
float lastTimeCausedDamage_G();                                                 // System.Single
void lastTimeCausedDamage_S(float value);
bool _isDead_G();                                                               // System.Boolean
void _isDead_S(bool value);
uint8_t lastHealth_G();                                                         // System.Byte
void lastHealth_S(uint8_t value);
uint8_t _health_G();                                                            // System.Byte
void _health_S(uint8_t value);
uint8_t _food_G();                                                              // System.Byte
void _food_S(uint8_t value);
uint8_t _water_G();                                                             // System.Byte
void _water_S(uint8_t value);
uint8_t _virus_G();                                                             // System.Byte
void _virus_S(uint8_t value);
uint8_t _vision_G();                                                            // System.Byte
void _vision_S(uint8_t value);
uint32_t _warmth_G();                                                           // System.UInt32
void _warmth_S(uint32_t value);
uint8_t _stamina_G();                                                           // System.Byte
void _stamina_S(uint8_t value);
uint8_t _oxygen_G();                                                            // System.Byte
void _oxygen_S(uint8_t value);
bool _isBleeding_G();                                                           // System.Boolean
void _isBleeding_S(bool value);
bool _isBroken_G();                                                             // System.Boolean
void _isBroken_S(bool value);
unknown_type _temperature_G();                                                  // SDG.Unturned.EPlayerTemperature
void _temperature_S(unknown_type value);
uint32_t lastStarve_G();                                                        // System.UInt32
void lastStarve_S(uint32_t value);
uint32_t lastDehydrate_G();                                                     // System.UInt32
void lastDehydrate_S(uint32_t value);
uint32_t lastUncleaned_G();                                                     // System.UInt32
void lastUncleaned_S(uint32_t value);
uint32_t lastView_G();                                                          // System.UInt32
void lastView_S(uint32_t value);
uint32_t lastTire_G();                                                          // System.UInt32
void lastTire_S(uint32_t value);
uint32_t lastSuffocate_G();                                                     // System.UInt32
void lastSuffocate_S(uint32_t value);
uint32_t lastRest_G();                                                          // System.UInt32
void lastRest_S(uint32_t value);
uint32_t lastBreath_G();                                                        // System.UInt32
void lastBreath_S(uint32_t value);
uint32_t lastInfect_G();                                                        // System.UInt32
void lastInfect_S(uint32_t value);
uint32_t lastBleed_G();                                                         // System.UInt32
void lastBleed_S(uint32_t value);
uint32_t lastBleeding_G();                                                      // System.UInt32
void lastBleeding_S(uint32_t value);
uint32_t lastBroken_G();                                                        // System.UInt32
void lastBroken_S(uint32_t value);
uint32_t lastFreeze_G();                                                        // System.UInt32
void lastFreeze_S(uint32_t value);
uint32_t lastWarm_G();                                                          // System.UInt32
void lastWarm_S(uint32_t value);
uint32_t lastBurn_G();                                                          // System.UInt32
void lastBurn_S(uint32_t value);
uint32_t lastCovered_G();                                                       // System.UInt32
void lastCovered_S(uint32_t value);
uint32_t lastRegenerate_G();                                                    // System.UInt32
void lastRegenerate_S(uint32_t value);
uint32_t lastRadiate_G();                                                       // System.UInt32
void lastRadiate_S(uint32_t value);
bool wasWarm_G();                                                               // System.Boolean
void wasWarm_S(bool value);
bool wasCovered_G();                                                            // System.Boolean
void wasCovered_S(bool value);
float _lastRespawn_G();                                                         // System.Single
void _lastRespawn_S(float value);
float _lastDeath_G();                                                           // System.Single
void _lastDeath_S(float value);
float lastSuicide_G();                                                          // System.Single
void lastSuicide_S(float value);
float lastAlive_G();                                                            // System.Single
void lastAlive_S(float value);
UnityEngine_Vector3 ragdoll_G();                                                // UnityEngine.Vector3
void ragdoll_S(UnityEngine_Vector3 value);
unknown_type ragdollEffect_G();                                                 // SDG.Unturned.ERagdollEffect
void ragdollEffect_S(unknown_type value);
unknown_type spawnpoint_G();                                                    // SDG.Unturned.PlayerSpawnpoint
void spawnpoint_S(unknown_type value);
static unknown_type SendDeath_G();                                              // SDG.Unturned.ClientInstanceMethod`3<SDG.Unturned.EDeathCause,SDG.Unturned.ELimb,Steamworks.CSteamID>
static void SendDeath_S(unknown_type value);
static unknown_type SendDead_G();                                               // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,SDG.Unturned.ERagdollEffect>
static void SendDead_S(unknown_type value);
static unknown_type SendRevive_G();                                             // SDG.Unturned.ClientInstanceMethod`2<UnityEngine.Vector3,System.Byte>
static void SendRevive_S(unknown_type value);
static unknown_type SendLifeStats_G();                                          // SDG.Unturned.ClientInstanceMethod`7<System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Boolean>
static void SendLifeStats_S(unknown_type value);
static unknown_type SendHealth_G();                                             // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
static void SendHealth_S(unknown_type value);
static unknown_type SendDamagedEvent_G();                                       // SDG.Unturned.ClientInstanceMethod`2<System.Byte,UnityEngine.Vector3>
static void SendDamagedEvent_S(unknown_type value);
static unknown_type SendFood_G();                                               // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
static void SendFood_S(unknown_type value);
static unknown_type SendWater_G();                                              // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
static void SendWater_S(unknown_type value);
static unknown_type SendVirus_G();                                              // SDG.Unturned.ClientInstanceMethod`1<System.Byte>
static void SendVirus_S(unknown_type value);
static unknown_type SendBleeding_G();                                           // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
static void SendBleeding_S(unknown_type value);
static unknown_type SendBroken_G();                                             // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
static void SendBroken_S(unknown_type value);
static unknown_type SendModifyStamina_G();                                      // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
static void SendModifyStamina_S(unknown_type value);
static unknown_type SendModifyHallucination_G();                                // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
static void SendModifyHallucination_S(unknown_type value);
static unknown_type SendModifyWarmth_G();                                       // SDG.Unturned.ClientInstanceMethod`1<System.Int16>
static void SendModifyWarmth_S(unknown_type value);
static unknown_type SendRespawnRequest_G();                                     // SDG.Unturned.ServerInstanceMethod`1<System.Boolean>
static void SendRespawnRequest_S(unknown_type value);
static unknown_type SendSuicideRequest_G();                                     // SDG.Unturned.ServerInstanceMethod
static void SendSuicideRequest_S(unknown_type value);
bool isAsphyxiating_G();                                                        // System.Boolean
void isAsphyxiating_S(bool value);
unknown_type OnIsAsphyxiatingChanged_G();                                       // System.Action
void OnIsAsphyxiatingChanged_S(unknown_type value);
static unknown_type BonesRef_G();                                               // SDG.Unturned.AssetReference`1<SDG.Unturned.EffectAsset>
static void BonesRef_S(unknown_type value);
unknown_type OnFallDamageRequested_G();                                         // SDG.Unturned.PlayerLife/FallDamageRequestHandler
void OnFallDamageRequested_S(unknown_type value);
bool wasLoadCalled_G();                                                         // System.Boolean
void wasLoadCalled_S(bool value);
static void add_OnPreDeath(unknown_type value);
static void remove_OnPreDeath(unknown_type value);
static void add_onPlayerDied(unknown_type value);
static void remove_onPlayerDied(unknown_type value);
static void broadcastPlayerDied(SDG_Unturned_PlayerLife* sender, unknown_type cause, unknown_type limb, unknown_type instigator);
static void add_OnSelectingRespawnPoint(unknown_type value);
static void remove_OnSelectingRespawnPoint(unknown_type value);
void add_onHurt(unknown_type value);
void remove_onHurt(unknown_type value);
bool get_wasPvPDeath();
void set_wasPvPDeath(bool value);
static unknown_type get_deathCause();
static unknown_type get_deathLimb();
static unknown_type get_deathKiller();
bool get_isAggressor();
void markAggressive(bool force, bool spreadToGroup);
bool get_isDead();
bool get_IsAlive();
uint8_t get_health();
uint8_t get_food();
uint8_t get_water();
uint8_t get_virus();
uint8_t get_vision();
uint32_t get_warmth();
uint8_t get_stamina();
uint8_t get_oxygen();
bool get_isBleeding();
bool get_isBroken();
unknown_type get_temperature();
float get_lastRespawn();
float get_lastDeath();
void tellDeath(unknown_type steamID, uint8_t newCause, uint8_t newLimb, unknown_type newKiller);
void ReceiveDeath(unknown_type newCause, unknown_type newLimb, unknown_type newKiller);
void tellDead(unknown_type steamID, UnityEngine_Vector3 newRagdoll, uint8_t newRagdollEffect);
void ReceiveDead(UnityEngine_Vector3 newRagdoll, unknown_type newRagdollEffect);
void tellRevive(unknown_type steamID, UnityEngine_Vector3 position, uint8_t angle);
void ReceiveRevive(UnityEngine_Vector3 position, uint8_t angle);
void tellLife(unknown_type steamID, uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, bool newBleeding, bool newBroken);
void tellLifeWithOxygen(unknown_type steamID, uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, uint8_t newOxygen, bool newBleeding, bool newBroken);
void ReceiveLifeStats(uint8_t newHealth, uint8_t newFood, uint8_t newWater, uint8_t newVirus, uint8_t newOxygen, bool newBleeding, bool newBroken);
void askLife(unknown_type steamID);
void SendInitialPlayerState(SDG_Unturned_SteamPlayer* client);
void SendInitialPlayerState1(unknown_type transportConnections);
void tellHealth(unknown_type steamID, uint8_t newHealth);
void ReceiveHealth(uint8_t newHealth);
void ReceiveDamagedEvent(uint8_t damageAmount, UnityEngine_Vector3 damageDirection);
void tellFood(unknown_type steamID, uint8_t newFood);
void ReceiveFood(uint8_t newFood);
void tellWater(unknown_type steamID, uint8_t newWater);
void ReceiveWater(uint8_t newWater);
void tellVirus(unknown_type steamID, uint8_t newVirus);
void ReceiveVirus(uint8_t newVirus);
void tellBleeding(unknown_type steamID, bool newBleeding);
void ReceiveBleeding(bool newBleeding);
void tellBroken(unknown_type steamID, bool newBroken);
void ReceiveBroken(bool newBroken);
void askDamage(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill);
void askDamage1(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect);
void askDamage2(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding);
void askDamage3(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding, bool bypassSafezone);
bool InternalCanDamage();
void doDamage(uint8_t amount, UnityEngine_Vector3 newRagdoll, unknown_type newCause, unknown_type newLimb, unknown_type newKiller, unknown_type kill, bool trackKill, unknown_type newRagdollEffect, bool canCauseBleeding);
void askHeal(uint8_t amount, bool healBleeding, bool healBroken);
void serverSetBleeding(bool newBleeding);
void serverSetLegsBroken(bool newLegsBroken);
void askStarve(uint8_t amount);
void askEat(uint8_t amount);
void askDehydrate(uint8_t amount);
void askDrink(uint8_t amount);
void askInfect(uint8_t amount);
void askRadiate(uint8_t amount);
void askDisinfect(uint8_t amount);
void internalSetStamina(uint8_t value);
void askTire(uint8_t amount);
void askRest(uint8_t amount);
void simulatedModifyStamina(int16_t delta);
void simulatedModifyStamina1(float delta);
void clientModifyStamina(unknown_type senderId, int16_t delta);
void ReceiveModifyStamina(int16_t delta);
void serverModifyStamina(float delta);
void askView(uint8_t amount);
void clientModifyHallucination(unknown_type senderId, int16_t delta);
void ReceiveModifyHallucination(int16_t delta);
void serverModifyHallucination(float delta);
void tellHallucinate(unknown_type senderId, uint8_t amount);
void sendHallucination(uint8_t amount);
void simulatedModifyWarmth(int16_t delta);
void clientModifyWarmth(unknown_type senderId, int16_t delta);
void ReceiveModifyWarmth(int16_t delta);
void serverModifyWarmth(float delta);
void askBlind(uint8_t amount);
void askSuffocate(uint8_t amount);
void askBreath(uint8_t amount);
void simulatedModifyOxygen(int8_t delta);
void simulatedModifyOxygen1(float delta);
void serverModifyHealth(float delta);
void serverModifyFood(float delta);
void serverModifyWater(float delta);
void serverModifyVirus(float delta);
void askRespawn(unknown_type steamID, bool atHome);
void ServerRespawn(bool atHome);
void ReceiveRespawnRequest(bool atHome);
void askSuicide(unknown_type steamID);
void ReceiveSuicideRequest();
void sendRevive();
void sendRespawn(bool atHome);
void sendSuicide();
void SimulateStaminaFrame(uint32_t simulation);
void SetIsAsphyxiating(bool newIsAsphyxiating);
void add_OnIsAsphyxiatingChanged(unknown_type value);
void remove_OnIsAsphyxiatingChanged(unknown_type value);
void SimulateOxygenFrame(uint32_t simulation);
void simulate(uint32_t simulation);
void breakLegs();
void add_OnFallDamageRequested(unknown_type value);
void remove_OnFallDamageRequested(unknown_type value);
void onLanded(float velocity);
void InitializePlayer();
void load();
void save();
};
class SDG_Unturned_PlayerLook
{
static uintptr_t StaticInstance();
public:
static float HEIGHT_LOOK_SIT_G();                                               // System.Single
static void HEIGHT_LOOK_SIT_S(float value);
static float HEIGHT_LOOK_STAND_G();                                             // System.Single
static void HEIGHT_LOOK_STAND_S(float value);
static float HEIGHT_LOOK_CROUCH_G();                                            // System.Single
static void HEIGHT_LOOK_CROUCH_S(float value);
static float HEIGHT_LOOK_PRONE_G();                                             // System.Single
static void HEIGHT_LOOK_PRONE_S(float value);
static float HEIGHT_CAMERA_SIT_G();                                             // System.Single
static void HEIGHT_CAMERA_SIT_S(float value);
static float HEIGHT_CAMERA_STAND_G();                                           // System.Single
static void HEIGHT_CAMERA_STAND_S(float value);
static float HEIGHT_CAMERA_CROUCH_G();                                          // System.Single
static void HEIGHT_CAMERA_CROUCH_S(float value);
static float HEIGHT_CAMERA_PRONE_G();                                           // System.Single
static void HEIGHT_CAMERA_PRONE_S(float value);
static float MIN_ANGLE_SIT_G();                                                 // System.Single
static void MIN_ANGLE_SIT_S(float value);
static float MAX_ANGLE_SIT_G();                                                 // System.Single
static void MAX_ANGLE_SIT_S(float value);
static float MIN_ANGLE_CLIMB_G();                                               // System.Single
static void MIN_ANGLE_CLIMB_S(float value);
static float MAX_ANGLE_CLIMB_G();                                               // System.Single
static void MAX_ANGLE_CLIMB_S(float value);
static float MIN_ANGLE_SWIM_G();                                                // System.Single
static void MIN_ANGLE_SWIM_S(float value);
static float MAX_ANGLE_SWIM_G();                                                // System.Single
static void MAX_ANGLE_SWIM_S(float value);
static float MIN_ANGLE_STAND_G();                                               // System.Single
static void MIN_ANGLE_STAND_S(float value);
static float MAX_ANGLE_STAND_G();                                               // System.Single
static void MAX_ANGLE_STAND_S(float value);
static float MIN_ANGLE_CROUCH_G();                                              // System.Single
static void MIN_ANGLE_CROUCH_S(float value);
static float MAX_ANGLE_CROUCH_G();                                              // System.Single
static void MAX_ANGLE_CROUCH_S(float value);
static float MIN_ANGLE_PRONE_G();                                               // System.Single
static void MIN_ANGLE_PRONE_S(float value);
static float MAX_ANGLE_PRONE_G();                                               // System.Single
static void MAX_ANGLE_PRONE_S(float value);
unknown_type onPerspectiveUpdated_G();                                          // SDG.Unturned.PerspectiveUpdated
void onPerspectiveUpdated_S(unknown_type value);
unknown_type _characterCamera_G();                                              // UnityEngine.Camera
void _characterCamera_S(unknown_type value);
unknown_type _scopeCamera_G();                                                  // UnityEngine.Camera
void _scopeCamera_S(unknown_type value);
unknown_type scopeMaterial_G();                                                 // UnityEngine.Material
void scopeMaterial_S(unknown_type value);
bool _isScopeActive_G();                                                        // System.Boolean
void _isScopeActive_S(bool value);
bool isOverlayActive_G();                                                       // System.Boolean
void isOverlayActive_S(bool value);
unknown_type scopeVision_G();                                                   // SDG.Unturned.ELightingVision
void scopeVision_S(unknown_type value);
unknown_type scopeNightvisionColor_G();                                         // UnityEngine.Color
void scopeNightvisionColor_S(unknown_type value);
float scopeNightvisionFogIntensity_G();                                         // System.Single
void scopeNightvisionFogIntensity_S(float value);
unknown_type tempVision_G();                                                    // SDG.Unturned.ELightingVision
void tempVision_S(unknown_type value);
unknown_type tempNightvisionColor_G();                                          // UnityEngine.Color
void tempNightvisionColor_S(unknown_type value);
float tempNightvisionFogIntensity_G();                                          // System.Single
void tempNightvisionFogIntensity_S(float value);
UnityEngine_Transform* _aim_G();                                                // UnityEngine.Transform
void _aim_S(UnityEngine_Transform* value);
static float characterHeight_G();                                               // System.Single
static void characterHeight_S(float value);
static float _characterYaw_G();                                                 // System.Single
static void _characterYaw_S(float value);
static float characterYaw_G();                                                  // System.Single
static void characterYaw_S(float value);
static float killcam_G();                                                       // System.Single
static void killcam_S(float value);
float yawInputMultiplier_G();                                                   // System.Single
void yawInputMultiplier_S(float value);
float pitchInputMultiplier_G();                                                 // System.Single
void pitchInputMultiplier_S(float value);
float _pitch_G();                                                               // System.Single
void _pitch_S(float value);
float _yaw_G();                                                                 // System.Single
void _yaw_S(float value);
float _look_x_G();                                                              // System.Single
void _look_x_S(float value);
float _look_y_G();                                                              // System.Single
void _look_y_S(float value);
float _orbitPitch_G();                                                          // System.Single
void _orbitPitch_S(float value);
float _orbitYaw_G();                                                            // System.Single
void _orbitYaw_S(float value);
float orbitSpeed_G();                                                           // System.Single
void orbitSpeed_S(float value);
UnityEngine_Vector3 lockPosition_G();                                           // UnityEngine.Vector3
void lockPosition_S(UnityEngine_Vector3 value);
UnityEngine_Vector3 orbitPosition_G();                                          // UnityEngine.Vector3
void orbitPosition_S(UnityEngine_Vector3 value);
bool isOrbiting_G();                                                            // System.Boolean
void isOrbiting_S(bool value);
bool isTracking_G();                                                            // System.Boolean
void isTracking_S(bool value);
bool isLocking_G();                                                             // System.Boolean
void isLocking_S(bool value);
bool isFocusing_G();                                                            // System.Boolean
void isFocusing_S(bool value);
bool isSmoothing_G();                                                           // System.Boolean
void isSmoothing_S(bool value);
bool areSpecStatsVisible_G();                                                   // System.Boolean
void areSpecStatsVisible_S(bool value);
bool isIgnoringInput_G();                                                       // System.Boolean
void isIgnoringInput_S(bool value);
UnityEngine_Vector3 smoothPosition_G();                                         // UnityEngine.Vector3
void smoothPosition_S(UnityEngine_Vector3 value);
unknown_type smoothRotation_G();                                                // UnityEngine.Quaternion
void smoothRotation_S(unknown_type value);
uint8_t angle_G();                                                              // System.Byte
void angle_S(uint8_t value);
uint8_t rot_G();                                                                // System.Byte
void rot_S(uint8_t value);
float recoil_x_G();                                                             // System.Single
void recoil_x_S(float value);
float recoil_y_G();                                                             // System.Single
void recoil_y_S(float value);
uint8_t lastAngle_G();                                                          // System.Byte
void lastAngle_S(uint8_t value);
uint8_t lastRot_G();                                                            // System.Byte
void lastRot_S(uint8_t value);
unknown_type flinchLocalRotation_G();                                           // UnityEngine.Quaternion
void flinchLocalRotation_S(unknown_type value);
unknown_type targetExplosionLocalRotation_G();                                  // SDG.Unturned.Rk4SpringQ
void targetExplosionLocalRotation_S(unknown_type value);
unknown_type smoothedExplosionLocalRotation_G();                                // UnityEngine.Quaternion
void smoothedExplosionLocalRotation_S(unknown_type value);
float explosionSmoothingSpeed_G();                                              // System.Single
void explosionSmoothingSpeed_S(float value);
float mainCameraZoomFactor_G();                                                 // System.Single
void mainCameraZoomFactor_S(float value);
float scopeCameraZoomFactor_G();                                                // System.Single
void scopeCameraZoomFactor_S(float value);
float eyes_G();                                                                 // System.Single
void eyes_S(float value);
float thirdPersonEyeHeight_G();                                                 // System.Single
void thirdPersonEyeHeight_S(float value);
bool shouldUseZoomFactorForSensitivity_G();                                     // System.Boolean
void shouldUseZoomFactorForSensitivity_S(bool value);
unknown_type _perspective_G();                                                  // SDG.Unturned.EPlayerPerspective
void _perspective_S(unknown_type value);
bool isZoomed_G();                                                              // System.Boolean
void isZoomed_S(bool value);
bool allowFreecamWithoutAdmin_G();                                              // System.Boolean
void allowFreecamWithoutAdmin_S(bool value);
bool allowWorkzoneWithoutAdmin_G();                                             // System.Boolean
void allowWorkzoneWithoutAdmin_S(bool value);
bool allowSpecStatsWithoutAdmin_G();                                            // System.Boolean
void allowSpecStatsWithoutAdmin_S(bool value);
static unknown_type SendFreecamAllowed_G();                                     // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
static void SendFreecamAllowed_S(unknown_type value);
static unknown_type SendWorkzoneAllowed_G();                                    // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
static void SendWorkzoneAllowed_S(unknown_type value);
static unknown_type SendSpecStatsAllowed_G();                                   // SDG.Unturned.ClientInstanceMethod`1<System.Boolean>
static void SendSpecStatsAllowed_S(unknown_type value);
static unknown_type sweepHits_G();                                              // UnityEngine.RaycastHit[]
static void sweepHits_S(unknown_type value);
static float NEAR_CLIP_SWEEP_RADIUS_G();                                        // System.Single
static void NEAR_CLIP_SWEEP_RADIUS_S(float value);
float get_heightLook();
float get_heightCamera();
unknown_type get_characterCamera();
unknown_type get_scopeCamera();
unknown_type get_scopeMaterial();
void set_scopeMaterial(unknown_type value);
bool get_isScopeActive();
UnityEngine_Transform* get_aim();
float get_pitch();
float get_yaw();
void TeleportYaw(float newYaw);
float get_look_x();
float get_look_y();
float get_orbitPitch();
float get_orbitYaw();
bool get_areSpecStatsVisible();
void set_areSpecStatsVisible(bool value);
bool get_isCam();
unknown_type get_perspective();
UnityEngine_Vector3 getEyesPosition();
UnityEngine_Vector3 GetEyesPositionWithoutLeaning();
void updateScope(unknown_type quality);
void enableScope(float zoom, unknown_type sightAsset);
void disableScope();
void enableOverlay();
void setPerspective(unknown_type newPerspective);
void setActivePerspective(unknown_type newPerspective);
void enableVision();
void disableOverlay();
void disableVision();
void enableZoom(float zoom);
void disableZoom();
void updateRot();
void updateLook();
void recoil(float x, float y, float h, float v);
void simulate(float look_x, float look_y, float delta);
void clampPitch();
void clampYaw();
void updateAim(float delta);
void FlinchFromDamage(uint8_t damageAmount, UnityEngine_Vector3 worldDirection);
void FlinchFromExplosion(UnityEngine_Vector3 position, float radius, float magnitudeDegrees);
void onVisionUpdated(bool isViewing);
void onLifeUpdated(bool isDead);
void onSeated(bool isDriver, bool inVehicle, bool wasVehicle, unknown_type oldVehicle, unknown_type newVehicle);
bool get_canUseFreecam();
bool get_canUseWorkzone();
bool get_canUseSpecStats();
void tellFreecamAllowed(unknown_type senderId, bool isAllowed);
void ReceiveFreecamAllowed(bool isAllowed);
void sendFreecamAllowed(bool isAllowed);
void tellWorkzoneAllowed(unknown_type senderId, bool isAllowed);
void ReceiveWorkzoneAllowed(bool isAllowed);
void sendWorkzoneAllowed(bool isAllowed);
void tellSpecStatsAllowed(unknown_type senderId, bool isAllowed);
void ReceiveSpecStatsAllowed(bool isAllowed);
void sendSpecStatsAllowed(bool isAllowed);
UnityEngine_Vector3 sphereCastCamera(UnityEngine_Vector3 origin, UnityEngine_Vector3 direction, float length, int32_t layerMask);
void Update();
void InitializePlayer();
void OnDestroy();
};
class SDG_Unturned_PlayerMovement
{
static uintptr_t StaticInstance();
public:
static float HEIGHT_STAND_G();                                                  // System.Single
static void HEIGHT_STAND_S(float value);
static float HEIGHT_CROUCH_G();                                                 // System.Single
static void HEIGHT_CROUCH_S(float value);
static float HEIGHT_PRONE_G();                                                  // System.Single
static void HEIGHT_PRONE_S(float value);
unknown_type onLanded_G();                                                      // SDG.Unturned.Landed
void onLanded_S(unknown_type value);
unknown_type onSeated_G();                                                      // SDG.Unturned.Seated
void onSeated_S(unknown_type value);
unknown_type onVehicleUpdated_G();                                              // SDG.Unturned.VehicleUpdated
void onVehicleUpdated_S(unknown_type value);
unknown_type onSafetyUpdated_G();                                               // SDG.Unturned.SafetyUpdated
void onSafetyUpdated_S(unknown_type value);
unknown_type onRadiationUpdated_G();                                            // SDG.Unturned.RadiationUpdated
void onRadiationUpdated_S(unknown_type value);
unknown_type onPurchaseUpdated_G();                                             // SDG.Unturned.PurchaseUpdated
void onPurchaseUpdated_S(unknown_type value);
unknown_type onRegionUpdated_G();                                               // SDG.Unturned.PlayerRegionUpdated
void onRegionUpdated_S(unknown_type value);
unknown_type onBoundUpdated_G();                                                // SDG.Unturned.PlayerBoundUpdated
void onBoundUpdated_S(unknown_type value);
unknown_type PlayerNavChanged_G();                                              // SDG.Unturned.PlayerNavChanged
void PlayerNavChanged_S(unknown_type value);
static float SPEED_CLIMB_G();                                                   // System.Single
static void SPEED_CLIMB_S(float value);
static float SPEED_SWIM_G();                                                    // System.Single
static void SPEED_SWIM_S(float value);
static float SPEED_SPRINT_G();                                                  // System.Single
static void SPEED_SPRINT_S(float value);
static float SPEED_STAND_G();                                                   // System.Single
static void SPEED_STAND_S(float value);
static float SPEED_CROUCH_G();                                                  // System.Single
static void SPEED_CROUCH_S(float value);
static float SPEED_PRONE_G();                                                   // System.Single
static void SPEED_PRONE_S(float value);
static float JUMP_G();                                                          // System.Single
static void JUMP_S(float value);
static float SWIM_G();                                                          // System.Single
static void SWIM_S(float value);
unknown_type controller_G();                                                    // UnityEngine.CharacterController
void controller_S(unknown_type value);
float _multiplier_G();                                                          // System.Single
void _multiplier_S(float value);
float multiplier_G();                                                           // System.Single
void multiplier_S(float value);
float itemGravityMultiplier_G();                                                // System.Single
void itemGravityMultiplier_S(float value);
float pluginGravityMultiplier_G();                                              // System.Single
void pluginGravityMultiplier_S(float value);
float pluginSpeedMultiplier_G();                                                // System.Single
void pluginSpeedMultiplier_S(float value);
float pluginJumpMultiplier_G();                                                 // System.Single
void pluginJumpMultiplier_S(float value);
float lastFootstep_G();                                                         // System.Single
void lastFootstep_S(float value);
bool _isGrounded_G();                                                           // System.Boolean
void _isGrounded_S(bool value);
bool _isSafe_G();                                                               // System.Boolean
void _isSafe_S(bool value);
unknown_type isSafeInfo_G();                                                    // SDG.Unturned.SafezoneNode
void isSafeInfo_S(unknown_type value);
bool _isRadiated_G();                                                           // System.Boolean
void _isRadiated_S(bool value);
unknown_type ActiveDeadzone_G();                                                // SDG.Unturned.IDeadzoneNode
void ActiveDeadzone_S(unknown_type value);
unknown_type _purchaseNode_G();                                                 // SDG.Unturned.HordePurchaseVolume
void _purchaseNode_S(unknown_type value);
unknown_type effectNode_G();                                                    // SDG.Unturned.IAmbianceNode
void effectNode_S(unknown_type value);
bool inRain_G();                                                                // System.Boolean
void inRain_S(bool value);
bool inSnow_G();                                                                // System.Boolean
void inSnow_S(bool value);
uint32_t WeatherMask_G();                                                       // System.UInt32
void WeatherMask_S(uint32_t value);
unknown_type materialName_G();                                                  // System.String
void materialName_S(unknown_type value);
bool materialIsWater_G();                                                       // System.Boolean
void materialIsWater_S(bool value);
unknown_type ground_G();                                                        // UnityEngine.RaycastHit
void ground_S(unknown_type value);
unknown_type height_G();                                                        // SDG.Unturned.EPlayerHeight
void height_S(unknown_type value);
bool wasSizeAppliedYet_G();                                                     // System.Boolean
void wasSizeAppliedYet_S(bool value);
bool _isMoving_G();                                                             // System.Boolean
void _isMoving_S(bool value);
UnityEngine_Vector3 _move_G();                                                  // UnityEngine.Vector3
void _move_S(UnityEngine_Vector3 value);
uint8_t _region_x_G();                                                          // System.Byte
void _region_x_S(uint8_t value);
uint8_t _region_y_G();                                                          // System.Byte
void _region_y_S(uint8_t value);
uint8_t _bound_G();                                                             // System.Byte
void _bound_S(uint8_t value);
uint8_t _nav_G();                                                               // System.Byte
void _nav_S(uint8_t value);
uint8_t updateRegionOld_X_G();                                                  // System.Byte
void updateRegionOld_X_S(uint8_t value);
uint8_t updateRegionOld_Y_G();                                                  // System.Byte
void updateRegionOld_Y_S(uint8_t value);
uint8_t updateRegionNew_X_G();                                                  // System.Byte
void updateRegionNew_X_S(uint8_t value);
uint8_t updateRegionNew_Y_G();                                                  // System.Byte
void updateRegionNew_Y_S(uint8_t value);
uint8_t updateRegionIndex_G();                                                  // System.Byte
void updateRegionIndex_S(uint8_t value);
unknown_type _loadedRegions_G();                                                // SDG.Unturned.LoadedRegion[0...,0...]
void _loadedRegions_S(unknown_type value);
unknown_type _loadedBounds_G();                                                 // SDG.Unturned.LoadedBound[]
void _loadedBounds_S(unknown_type value);
UnityEngine_Vector3 velocity_G();                                               // UnityEngine.Vector3
void velocity_S(UnityEngine_Vector3 value);
UnityEngine_Vector3 pendingLaunchVelocity_G();                                  // UnityEngine.Vector3
void pendingLaunchVelocity_S(UnityEngine_Vector3 value);
UnityEngine_Vector3 lastUpdatePos_G();                                          // UnityEngine.Vector3
void lastUpdatePos_S(UnityEngine_Vector3 value);
unknown_type snapshot_G();                                                      // SDG.Unturned.PitchYawSnapshotInfo
void snapshot_S(unknown_type value);
unknown_type nsb_G();                                                           // SDG.Unturned.NetworkSnapshotBuffer`1<SDG.Unturned.PitchYawSnapshotInfo>
void nsb_S(unknown_type value);
uint8_t _horizontal_G();                                                        // System.Byte
void _horizontal_S(uint8_t value);
uint8_t _vertical_G();                                                          // System.Byte
void _vertical_S(uint8_t value);
int32_t warp_x_G();                                                             // System.Int32
void warp_x_S(int32_t value);
int32_t warp_y_G();                                                             // System.Int32
void warp_y_S(int32_t value);
int32_t input_x_G();                                                            // System.Int32
void input_x_S(int32_t value);
int32_t input_y_G();                                                            // System.Int32
void input_y_S(int32_t value);
bool _jump_G();                                                                 // System.Boolean
void _jump_S(bool value);
bool isAllowed_G();                                                             // System.Boolean
void isAllowed_S(bool value);
bool isUpdated_G();                                                             // System.Boolean
void isUpdated_S(bool value);
unknown_type updates_G();                                                       // System.Collections.Generic.List`1<SDG.Unturned.PlayerStateUpdate>
void updates_S(unknown_type value);
bool canAddSimulationResultsToUpdates_G();                                      // System.Boolean
void canAddSimulationResultsToUpdates_S(bool value);
bool bypassUndergroundWhitelist_G();                                            // System.Boolean
void bypassUndergroundWhitelist_S(bool value);
bool hasPendingVehicleChange_G();                                               // System.Boolean
void hasPendingVehicleChange_S(bool value);
unknown_type pendingVehicle_G();                                                // SDG.Unturned.InteractableVehicle
void pendingVehicle_S(unknown_type value);
uint8_t pendingSeatIndex_G();                                                   // System.Byte
void pendingSeatIndex_S(uint8_t value);
UnityEngine_Transform* pendingSeatTransform_G();                                // UnityEngine.Transform
void pendingSeatTransform_S(UnityEngine_Transform* value);
UnityEngine_Vector3 pendingSeatPosition_G();                                    // UnityEngine.Vector3
void pendingSeatPosition_S(UnityEngine_Vector3 value);
uint8_t pendingSeatAngle_G();                                                   // System.Byte
void pendingSeatAngle_S(uint8_t value);
UnityEngine_Vector3 lastStatPos_G();                                            // UnityEngine.Vector3
void lastStatPos_S(UnityEngine_Vector3 value);
float lastStatTime_G();                                                         // System.Single
void lastStatTime_S(float value);
unknown_type vehicle_G();                                                       // SDG.Unturned.InteractableVehicle
void vehicle_S(unknown_type value);
uint8_t seat_G();                                                               // System.Byte
void seat_S(uint8_t value);
static unknown_type SendPluginGravityMultiplier_G();                            // SDG.Unturned.ClientInstanceMethod`1<System.Single>
static void SendPluginGravityMultiplier_S(unknown_type value);
static unknown_type SendPluginJumpMultiplier_G();                               // SDG.Unturned.ClientInstanceMethod`1<System.Single>
static void SendPluginJumpMultiplier_S(unknown_type value);
static unknown_type SendPluginSpeedMultiplier_G();                              // SDG.Unturned.ClientInstanceMethod`1<System.Single>
static void SendPluginSpeedMultiplier_S(unknown_type value);
unknown_type mostRecentControllerColliderHit_G();                               // UnityEngine.ControllerColliderHit
void mostRecentControllerColliderHit_S(unknown_type value);
static bool get_forceTrustClient();
static void set_forceTrustClient(bool value);
void add_PlayerNavChanged(unknown_type value);
void remove_PlayerNavChanged(unknown_type value);
void TriggerPlayerNavChanged(uint8_t oldNav, uint8_t newNav);
unknown_type get_controller();
void set_controller(unknown_type value);
float get_totalGravityMultiplier();
float get_totalSpeedMultiplier();
unknown_type get_landscapeHoleVolume();
bool get_CanEnterTeleporter();
void DoTeleport(UnityEngine_Transform* inputTransform, UnityEngine_Transform* outputTransform);
void EnterCollisionTeleporter(unknown_type teleporter);
void EnterTeleporterVolume(unknown_type entrance, unknown_type exit);
bool get_isGrounded();
bool get_isSafe();
void set_isSafe(bool value);
bool get_isRadiated();
void set_isRadiated(bool value);
unknown_type get_ActiveDeadzone();
void set_ActiveDeadzone(unknown_type value);
unknown_type get_purchaseNode();
void set_purchaseNode(unknown_type value);
unknown_type get_effectNode();
void set_effectNode(unknown_type value);
uint32_t get_WeatherMask();
void set_WeatherMask(uint32_t value);
void setSize(unknown_type newHeight);
void applySize();
bool get_isMoving();
float get_speed();
UnityEngine_Vector3 get_move();
uint8_t get_region_x();
uint8_t get_region_y();
uint8_t get_bound();
uint8_t get_nav();
unknown_type get_loadedRegions();
unknown_type get_loadedBounds();
float get_fall();
UnityEngine_Vector3 get_real();
uint8_t get_horizontal();
uint8_t get_vertical();
bool get_jump();
unknown_type getVehicle();
unknown_type getVehicleSeat();
uint8_t getSeat();
void updateVehicle();
void setVehicle(unknown_type newVehicle, uint8_t newSeat, UnityEngine_Transform* newSeatingTransform, UnityEngine_Vector3 newSeatingPosition, uint8_t newSeatingAngle, bool forceUpdate);
void tellPluginGravityMultiplier(unknown_type steamID, float newPluginGravityMultiplier);
void ReceivePluginGravityMultiplier(float newPluginGravityMultiplier);
void sendPluginGravityMultiplier(float newPluginGravityMultiplier);
void tellPluginJumpMultiplier(unknown_type steamID, float newPluginJumpMultiplier);
void ReceivePluginJumpMultiplier(float newPluginJumpMultiplier);
void sendPluginJumpMultiplier(float newPluginJumpMultiplier);
void tellPluginSpeedMultiplier(unknown_type steamID, float newPluginSpeedMultiplier);
void ReceivePluginSpeedMultiplier(float newPluginSpeedMultiplier);
void sendPluginSpeedMultiplier(float newPluginSpeedMultiplier);
void tellState(UnityEngine_Vector3 newPosition, uint8_t newPitch, uint8_t newYaw);
void updateMovement();
void checkGround(UnityEngine_Vector3 position);
bool PlayLandAudioClip();
void PlayFootstepAudioClip();
void PlaySwimAudioClip();
void onVisionUpdated(bool isViewing);
bool forceRemoveFromVehicle();
void simulate();
void simulate1(uint32_t simulation, int32_t recov, bool inputBrake, bool inputStamina, UnityEngine_Vector3 point, unknown_type rotation, float speed, float physicsSpeed, int32_t turn, float delta);
void simulate2(uint32_t simulation, int32_t recov, int32_t input_x, int32_t input_y, float look_x, float look_y, bool inputJump, bool inputSprint, float deltaTime);
void Update();
void updateRegionAndBound();
void InitializePlayer();
void OnControllerColliderHit(unknown_type hit);
void OnDrawGizmos();
void OnDestroy();
};
class SDG_Unturned_Provider
{
static uintptr_t StaticInstance();
public:
static unknown_type STEAM_IC_G();                                               // System.String
static void STEAM_IC_S(unknown_type value);
static unknown_type STEAM_DC_G();                                               // System.String
static void STEAM_DC_S(unknown_type value);
static unknown_type APP_ID_G();                                                 // Steamworks.AppId_t
static void APP_ID_S(unknown_type value);
static unknown_type PRO_ID_G();                                                 // Steamworks.AppId_t
static void PRO_ID_S(unknown_type value);
static unknown_type APP_VERSION_G();                                            // System.String
static void APP_VERSION_S(unknown_type value);
static uint32_t APP_VERSION_PACKED_G();                                         // System.UInt32
static void APP_VERSION_PACKED_S(uint32_t value);
static unknown_type APP_NAME_G();                                               // System.String
static void APP_NAME_S(unknown_type value);
static unknown_type APP_AUTHOR_G();                                             // System.String
static void APP_AUTHOR_S(unknown_type value);
static int32_t CLIENT_TIMEOUT_G();                                              // System.Int32
static void CLIENT_TIMEOUT_S(int32_t value);
static float PING_REQUEST_INTERVAL_G();                                         // System.Single
static void PING_REQUEST_INTERVAL_S(float value);
static bool isCapturingScreenshot_G();                                          // System.Boolean
static void isCapturingScreenshot_S(bool value);
static unknown_type screenshotBlitMaterial_G();                                 // SDG.Unturned.StaticResourceRef`1<UnityEngine.Material>
static void screenshotBlitMaterial_S(unknown_type value);
static unknown_type screenshotRequestedCallback_G();                            // Steamworks.Callback`1<Steamworks.ScreenshotRequested_t>
static void screenshotRequestedCallback_S(unknown_type value);
static unknown_type privateLanguage_G();                                        // System.String
static void privateLanguage_S(unknown_type value);
static bool languageIsEnglish_G();                                              // System.Boolean
static void languageIsEnglish_S(bool value);
static unknown_type _path_G();                                                  // System.String
static void _path_S(unknown_type value);
static unknown_type localizationRoot_G();                                       // System.String
static void localizationRoot_S(unknown_type value);
static unknown_type localization_G();                                           // SDG.Unturned.Local
static void localization_S(unknown_type value);
static unknown_type streamerNames_G();                                          // System.Collections.Generic.List`1<System.String>
static void streamerNames_S(unknown_type value);
static intptr_t battlEyeClientHandle_G();                                       // System.IntPtr
static void battlEyeClientHandle_S(intptr_t value);
static unknown_type battlEyeClientInitData_G();                                 // BattlEye.BEClient/BECL_GAME_DATA
static void battlEyeClientInitData_S(unknown_type value);
static unknown_type battlEyeClientRunData_G();                                  // BattlEye.BEClient/BECL_BE_DATA
static void battlEyeClientRunData_S(unknown_type value);
static bool battlEyeHasRequiredRestart_G();                                     // System.Boolean
static void battlEyeHasRequiredRestart_S(bool value);
static unknown_type battlEyeBufferSize_G();                                     // SDG.NetPak.NetLength
static void battlEyeBufferSize_S(unknown_type value);
static intptr_t battlEyeServerHandle_G();                                       // System.IntPtr
static void battlEyeServerHandle_S(intptr_t value);
static unknown_type battlEyeServerInitData_G();                                 // BattlEye.BEServer/BESV_GAME_DATA
static void battlEyeServerInitData_S(unknown_type value);
static unknown_type battlEyeServerRunData_G();                                  // BattlEye.BEServer/BESV_BE_DATA
static void battlEyeServerRunData_S(unknown_type value);
static unknown_type onBattlEyeKick_G();                                         // SDG.Unturned.Provider/BattlEyeKickCallback
static void onBattlEyeKick_S(unknown_type value);
static uint32_t _bytesSent_G();                                                 // System.UInt32
static void _bytesSent_S(uint32_t value);
static uint32_t _bytesReceived_G();                                             // System.UInt32
static void _bytesReceived_S(uint32_t value);
static uint32_t _packetsSent_G();                                               // System.UInt32
static void _packetsSent_S(uint32_t value);
static uint32_t _packetsReceived_G();                                           // System.UInt32
static void _packetsReceived_S(uint32_t value);
static unknown_type _currentServerInfo_G();                                     // SDG.Unturned.SteamServerInfo
static void _currentServerInfo_S(unknown_type value);
static unknown_type _server_G();                                                // Steamworks.CSteamID
static void _server_S(unknown_type value);
static unknown_type _client_G();                                                // Steamworks.CSteamID
static void _client_S(unknown_type value);
static unknown_type _user_G();                                                  // Steamworks.CSteamID
static void _user_S(unknown_type value);
static unknown_type _clientHash_G();                                            // System.Byte[]
static void _clientHash_S(unknown_type value);
static unknown_type _clientName_G();                                            // System.String
static void _clientName_S(unknown_type value);
static unknown_type _clients_G();                                               // System.Collections.Generic.List`1<SDG.Unturned.SteamPlayer>
static void _clients_S(unknown_type value);
static unknown_type pending_G();                                                // System.Collections.Generic.List`1<SDG.Unturned.SteamPending>
static void pending_S(unknown_type value);
static bool _isServer_G();                                                      // System.Boolean
static void _isServer_S(bool value);
static bool _isClient_G();                                                      // System.Boolean
static void _isClient_S(bool value);
static bool _isPro_G();                                                         // System.Boolean
static void _isPro_S(bool value);
static bool _isConnected_G();                                                   // System.Boolean
static void _isConnected_S(bool value);
static bool isWaitingForWorkshopResponse_G();                                   // System.Boolean
static void isWaitingForWorkshopResponse_S(bool value);
static bool isWaitingForAuthenticationResponse_G();                             // System.Boolean
static void isWaitingForAuthenticationResponse_S(bool value);
static double sentAuthenticationRequestTime_G();                                // System.Double
static void sentAuthenticationRequestTime_S(double value);
static unknown_type waitingForExpectedWorkshopItems_G();                        // System.Collections.Generic.List`1<Steamworks.PublishedFileId_t>
static void waitingForExpectedWorkshopItems_S(unknown_type value);
static unknown_type authorityHoliday_G();                                       // SDG.Unturned.ENPCHoliday
static void authorityHoliday_S(unknown_type value);
static unknown_type currentServerWorkshopResponse_G();                          // SDG.Unturned.Provider/CachedWorkshopResponse
static void currentServerWorkshopResponse_S(unknown_type value);
static unknown_type _serverWorkshopFileIDs_G();                                 // System.Collections.Generic.List`1<System.UInt64>
static void _serverWorkshopFileIDs_S(unknown_type value);
static unknown_type serverRequiredWorkshopFiles_G();                            // System.Collections.Generic.List`1<SDG.Unturned.Provider/ServerRequiredWorkshopFile>
static void serverRequiredWorkshopFiles_S(unknown_type value);
static bool isLoadingUGC_G();                                                   // System.Boolean
static void isLoadingUGC_S(bool value);
static bool isLoadingInventory_G();                                             // System.Boolean
static void isLoadingInventory_S(bool value);
static int32_t nextPlayerChannelId_G();                                         // System.Int32
static void nextPlayerChannelId_S(int32_t value);
static unknown_type _connectionFailureInfo_G();                                 // SDG.Unturned.ESteamConnectionFailureInfo
static void _connectionFailureInfo_S(unknown_type value);
static unknown_type _connectionFailureReason_G();                               // System.String
static void _connectionFailureReason_S(unknown_type value);
static uint32_t _connectionFailureDuration_G();                                 // System.UInt32
static void _connectionFailureDuration_S(uint32_t value);
static unknown_type _receivers_G();                                             // System.Collections.Generic.List`1<SDG.Unturned.SteamChannel>
static void _receivers_S(unknown_type value);
static unknown_type buffer_G();                                                 // System.Byte[]
static void buffer_S(unknown_type value);
static unknown_type critMods_G();                                               // System.Collections.Generic.List`1<SDG.Framework.Modules.Module>
static void critMods_S(unknown_type value);
static unknown_type modBuilder_G();                                             // System.Text.StringBuilder
static void modBuilder_S(unknown_type value);
static int32_t nextBattlEyePlayerId_G();                                        // System.Int32
static void nextBattlEyePlayerId_S(int32_t value);
static unknown_type onLoginSpawning_G();                                        // SDG.Unturned.Provider/LoginSpawningHandler
static void onLoginSpawning_S(unknown_type value);
static bool isWaitingForConnectResponse_G();                                    // System.Boolean
static void isWaitingForConnectResponse_S(bool value);
static float sentConnectRequestTime_G();                                        // System.Single
static void sentConnectRequestTime_S(float value);
static unknown_type MAX_SKINS_LENGTH_G();                                       // SDG.NetPak.NetLength
static void MAX_SKINS_LENGTH_S(unknown_type value);
static unknown_type clientTransport_G();                                        // SDG.NetTransport.IClientTransport
static void clientTransport_S(unknown_type value);
static unknown_type serverTransport_G();                                        // SDG.NetTransport.IServerTransport
static void serverTransport_S(unknown_type value);
static unknown_type onCommenceShutdown_G();                                     // SDG.Unturned.Provider/CommenceShutdownHandler
static void onCommenceShutdown_S(unknown_type value);
static int32_t countShutdownTimer_G();                                          // System.Int32
static void countShutdownTimer_S(int32_t value);
static unknown_type shutdownMessage_G();                                        // System.String
static void shutdownMessage_S(unknown_type value);
static float lastTimerMessage_G();                                              // System.Single
static void lastTimerMessage_S(float value);
static bool didServerShutdownTimerReachZero_G();                                // System.Boolean
static void didServerShutdownTimerReachZero_S(bool value);
static bool isServerConnectedToSteam_G();                                       // System.Boolean
static void isServerConnectedToSteam_S(bool value);
static unknown_type autoShutdownManager_G();                                    // SDG.Unturned.BuiltinAutoShutdown
static void autoShutdownManager_S(unknown_type value);
static unknown_type dswUpdateMonitor_G();                                       // SDG.Unturned.IDedicatedWorkshopUpdateMonitor
static void dswUpdateMonitor_S(unknown_type value);
static bool isDedicatedUGCInstalled_G();                                        // System.Boolean
static void isDedicatedUGCInstalled_S(bool value);
static int32_t STEAM_KEYVALUE_MAX_VALUE_LENGTH_G();                             // System.Int32
static void STEAM_KEYVALUE_MAX_VALUE_LENGTH_S(int32_t value);
static unknown_type onServerWritingPacket_G();                                  // SDG.Unturned.Provider/ServerWritingPacketHandler
static void onServerWritingPacket_S(unknown_type value);
static unknown_type workshopRequests_G();                                       // System.Collections.Generic.List`1<SDG.Unturned.Provider/WorkshopRequestLog>
static void workshopRequests_S(unknown_type value);
static unknown_type cachedWorkshopResponses_G();                                // System.Collections.Generic.List`1<SDG.Unturned.Provider/CachedWorkshopResponse>
static void cachedWorkshopResponses_S(unknown_type value);
static unknown_type netIgnoredSteamIDs_G();                                     // System.Collections.Generic.List`1<Steamworks.CSteamID>
static void netIgnoredSteamIDs_S(unknown_type value);
static unknown_type _constNetEvents_G();                                        // SDG.Unturned.CommandLineFlag
static void _constNetEvents_S(unknown_type value);
static unknown_type onServerReadingPacket_G();                                  // SDG.Unturned.Provider/ServerReadingPacketHandler
static void onServerReadingPacket_S(unknown_type value);
unknown_type clientsWithBadConnecion_G();                                       // System.Collections.Generic.List`1<SDG.Unturned.SteamPlayer>
void clientsWithBadConnecion_S(unknown_type value);
static unknown_type onServerConnected_G();                                      // SDG.Unturned.Provider/ServerConnected
static void onServerConnected_S(unknown_type value);
static unknown_type onServerDisconnected_G();                                   // SDG.Unturned.Provider/ServerDisconnected
static void onServerDisconnected_S(unknown_type value);
static unknown_type onServerHosted_G();                                         // SDG.Unturned.Provider/ServerHosted
static void onServerHosted_S(unknown_type value);
static unknown_type onServerShutdown_G();                                       // SDG.Unturned.Provider/ServerShutdown
static void onServerShutdown_S(unknown_type value);
static unknown_type p2pSessionConnectFail_G();                                  // Steamworks.Callback`1<Steamworks.P2PSessionConnectFail_t>
static void p2pSessionConnectFail_S(unknown_type value);
static unknown_type onCheckValid_G();                                           // SDG.Unturned.Provider/CheckValid
static void onCheckValid_S(unknown_type value);
static unknown_type onCheckValidWithExplanation_G();                            // SDG.Unturned.Provider/CheckValidWithExplanation
static void onCheckValidWithExplanation_S(unknown_type value);
static unknown_type onCheckBanStatus_G();                                       // SDG.Unturned.Provider/CheckBanStatusHandler
static void onCheckBanStatus_S(unknown_type value);
static unknown_type onCheckBanStatusWithHWID_G();                               // SDG.Unturned.Provider/CheckBanStatusWithHWIDHandler
static void onCheckBanStatusWithHWID_S(unknown_type value);
static unknown_type onBanPlayerRequested_G();                                   // SDG.Unturned.Provider/RequestBanPlayerHandler
static void onBanPlayerRequested_S(unknown_type value);
static unknown_type onBanPlayerRequestedV2_G();                                 // SDG.Unturned.Provider/RequestBanPlayerHandlerV2
static void onBanPlayerRequestedV2_S(unknown_type value);
static unknown_type onUnbanPlayerRequested_G();                                 // SDG.Unturned.Provider/RequestUnbanPlayerHandler
static void onUnbanPlayerRequested_S(unknown_type value);
static unknown_type validateAuthTicketResponse_G();                             // Steamworks.Callback`1<Steamworks.ValidateAuthTicketResponse_t>
static void validateAuthTicketResponse_S(unknown_type value);
static unknown_type clientGroupStatus_G();                                      // Steamworks.Callback`1<Steamworks.GSClientGroupStatus_t>
static void clientGroupStatus_S(unknown_type value);
static unknown_type clMaxPlayersLimit_G();                                      // SDG.Unturned.CommandLineInt
static void clMaxPlayersLimit_S(unknown_type value);
static uint8_t _maxPlayers_G();                                                 // System.Byte
static void _maxPlayers_S(uint8_t value);
static uint8_t queueSize_G();                                                   // System.Byte
static void queueSize_S(uint8_t value);
static uint8_t _queuePosition_G();                                              // System.Byte
static void _queuePosition_S(uint8_t value);
static unknown_type onQueuePositionUpdated_G();                                 // SDG.Unturned.Provider/QueuePositionUpdated
static void onQueuePositionUpdated_S(unknown_type value);
static unknown_type _serverName_G();                                            // System.String
static void _serverName_S(unknown_type value);
static uint32_t ip_G();                                                         // System.UInt32
static void ip_S(uint32_t value);
static unknown_type bindAddress_G();                                            // System.String
static void bindAddress_S(unknown_type value);
static uint16_t port_G();                                                       // System.UInt16
static void port_S(uint16_t value);
static unknown_type _serverPasswordHash_G();                                    // System.Byte[]
static void _serverPasswordHash_S(unknown_type value);
static unknown_type _serverPassword_G();                                        // System.String
static void _serverPassword_S(unknown_type value);
static unknown_type map_G();                                                    // System.String
static void map_S(unknown_type value);
static bool isPvP_G();                                                          // System.Boolean
static void isPvP_S(bool value);
static bool isWhitelisted_G();                                                  // System.Boolean
static void isWhitelisted_S(bool value);
static bool hideAdmins_G();                                                     // System.Boolean
static void hideAdmins_S(bool value);
static bool hasCheats_G();                                                      // System.Boolean
static void hasCheats_S(bool value);
static bool filterName_G();                                                     // System.Boolean
static void filterName_S(bool value);
static unknown_type mode_G();                                                   // SDG.Unturned.EGameMode
static void mode_S(unknown_type value);
static bool isGold_G();                                                         // System.Boolean
static void isGold_S(bool value);
static unknown_type gameMode_G();                                               // SDG.Unturned.GameMode
static void gameMode_S(unknown_type value);
static unknown_type cameraMode_G();                                             // SDG.Unturned.ECameraMode
static void cameraMode_S(unknown_type value);
static unknown_type _statusData_G();                                            // SDG.Unturned.StatusData
static void _statusData_S(unknown_type value);
static unknown_type _preferenceData_G();                                        // SDG.Unturned.PreferenceData
static void _preferenceData_S(unknown_type value);
static unknown_type _configData_G();                                            // SDG.Unturned.ConfigData
static void _configData_S(unknown_type value);
static unknown_type _modeConfigData_G();                                        // SDG.Unturned.ModeConfigData
static void _modeConfigData_S(unknown_type value);
static unknown_type onRejectingPlayer_G();                                      // SDG.Unturned.Provider/RejectingPlayerCallback
static void onRejectingPlayer_S(unknown_type value);
int32_t clientsKickedForTransportConnectionFailureCount_G();                    // System.Int32
void clientsKickedForTransportConnectionFailureCount_S(int32_t value);
static uint32_t STEAM_FAVORITE_FLAG_FAVORITE_G();                               // System.UInt32
static void STEAM_FAVORITE_FLAG_FAVORITE_S(uint32_t value);
static uint32_t STEAM_FAVORITE_FLAG_HISTORY_G();                                // System.UInt32
static void STEAM_FAVORITE_FLAG_HISTORY_S(uint32_t value);
static unknown_type cachedFavorites_G();                                        // System.Collections.Generic.List`1<SDG.Unturned.Provider/CachedFavorite>
static void cachedFavorites_S(unknown_type value);
static unknown_type onClientConnected_G();                                      // SDG.Unturned.Provider/ClientConnected
static void onClientConnected_S(unknown_type value);
static unknown_type onClientDisconnected_G();                                   // SDG.Unturned.Provider/ClientDisconnected
static void onClientDisconnected_S(unknown_type value);
static unknown_type onEnemyConnected_G();                                       // SDG.Unturned.Provider/EnemyConnected
static void onEnemyConnected_S(unknown_type value);
static unknown_type onEnemyDisconnected_G();                                    // SDG.Unturned.Provider/EnemyDisconnected
static void onEnemyDisconnected_S(unknown_type value);
static unknown_type personaStateChange_G();                                     // Steamworks.Callback`1<Steamworks.PersonaStateChange_t>
static void personaStateChange_S(unknown_type value);
static unknown_type gameServerChangeRequested_G();                              // Steamworks.Callback`1<Steamworks.GameServerChangeRequested_t>
static void gameServerChangeRequested_S(unknown_type value);
static unknown_type gameRichPresenceJoinRequested_G();                          // Steamworks.Callback`1<Steamworks.GameRichPresenceJoinRequested_t>
static void gameRichPresenceJoinRequested_S(unknown_type value);
static unknown_type ticketHandle_G();                                           // Steamworks.HAuthTicket
static void ticketHandle_S(unknown_type value);
static float lastPingRequestTime_G();                                           // System.Single
static void lastPingRequestTime_S(float value);
static float lastQueueNotificationTime_G();                                     // System.Single
static void lastQueueNotificationTime_S(float value);
static float timeLastPacketWasReceivedFromServer_G();                           // System.Single
static void timeLastPacketWasReceivedFromServer_S(float value);
static float timeLastPingRequestWasSentToServer_G();                            // System.Single
static void timeLastPingRequestWasSentToServer_S(float value);
static float EPSILON_G();                                                       // System.Single
static void EPSILON_S(float value);
static float UPDATE_TIME_G();                                                   // System.Single
static void UPDATE_TIME_S(float value);
static float UPDATE_DELAY_G();                                                  // System.Single
static void UPDATE_DELAY_S(float value);
static float UPDATE_DISTANCE_G();                                               // System.Single
static void UPDATE_DISTANCE_S(float value);
static uint32_t UPDATES_G();                                                    // System.UInt32
static void UPDATES_S(uint32_t value);
static float LERP_G();                                                          // System.Single
static void LERP_S(float value);
static float INTERP_SPEED_G();                                                  // System.Single
static void INTERP_SPEED_S(float value);
static unknown_type pings_G();                                                  // System.Single[]
static void pings_S(unknown_type value);
static float _ping_G();                                                         // System.Single
static void _ping_S(float value);
static SDG_Unturned_Provider* steam_G();                                        // SDG.Unturned.Provider
static void steam_S(SDG_Unturned_Provider* value);
static unknown_type provider_G();                                               // SDG.Provider.IProvider
static void provider_S(unknown_type value);
static bool _isInitialized_G();                                                 // System.Boolean
static void _isInitialized_S(bool value);
static uint32_t timeOffset_G();                                                 // System.UInt32
static void timeOffset_S(uint32_t value);
static uint32_t _time_G();                                                      // System.UInt32
static void _time_S(uint32_t value);
static uint32_t initialBackendRealtimeSeconds_G();                              // System.UInt32
static void initialBackendRealtimeSeconds_S(uint32_t value);
static float initialLocalRealtime_G();                                          // System.Single
static void initialLocalRealtime_S(float value);
static unknown_type unixEpochDateTime_G();                                      // System.DateTime
static void unixEpochDateTime_S(unknown_type value);
static unknown_type onBackendRealtimeAvailable_G();                             // SDG.Unturned.Provider/BackendRealtimeAvailableHandler
static void onBackendRealtimeAvailable_S(unknown_type value);
static unknown_type apiWarningMessageHook_G();                                  // Steamworks.SteamAPIWarningMessageHook_t
static void apiWarningMessageHook_S(unknown_type value);
static int32_t debugUpdates_G();                                                // System.Int32
static void debugUpdates_S(int32_t value);
static int32_t debugUPS_G();                                                    // System.Int32
static void debugUPS_S(int32_t value);
static float debugLastUpdate_G();                                               // System.Single
static void debugLastUpdate_S(float value);
static int32_t debugTicks_G();                                                  // System.Int32
static void debugTicks_S(int32_t value);
static int32_t debugTPS_G();                                                    // System.Int32
static void debugTPS_S(int32_t value);
static float debugLastTick_G();                                                 // System.Single
static void debugLastTick_S(float value);
static unknown_type downloadedIconCache_G();                                    // System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
static void downloadedIconCache_S(unknown_type value);
static unknown_type pendingCachableIconRequests_G();                            // System.Collections.Generic.Dictionary`2<System.String,SDG.Unturned.Provider/PendingIconRequest>
static void pendingCachableIconRequests_S(unknown_type value);
static unknown_type allowWebRequests_G();                                       // SDG.Unturned.CommandLineFlag
static void allowWebRequests_S(unknown_type value);
static bool isApplicationQuitting_G();                                          // System.Boolean
static void isApplicationQuitting_S(bool value);
static bool wasQuitGameCalled_G();                                              // System.Boolean
static void wasQuitGameCalled_S(bool value);
static unknown_type shouldCheckForGoldUpgrade_G();                              // SDG.Unturned.CommandLineFlag
static void shouldCheckForGoldUpgrade_S(unknown_type value);
static unknown_type get_APP_VERSION();
static void set_APP_VERSION(unknown_type value);
static uint32_t get_APP_VERSION_PACKED();
static void set_APP_VERSION_PACKED(uint32_t value);
unknown_type CaptureScreenshot();
static void RequestScreenshot();
static void OnSteamScreenshotRequested(unknown_type callback);
static unknown_type get_language();
static void set_language(unknown_type value);
static unknown_type get_path();
static unknown_type get_localizationRoot();
static void set_localizationRoot(unknown_type value);
static unknown_type get_streamerNames();
static void set_streamerNames(unknown_type value);
static void battlEyeClientPrintMessage(unknown_type message);
static void battlEyeClientRequestRestart(int32_t reason);
static void battlEyeClientSendPacket(intptr_t packetHandle, int32_t length);
static void battlEyeServerPrintMessage(unknown_type message);
static void add_onBattlEyeKick(unknown_type value);
static void remove_onBattlEyeKick(unknown_type value);
static void broadcastBattlEyeKick(SDG_Unturned_SteamPlayer* client, unknown_type reason);
static void battlEyeServerKickPlayer(int32_t playerID, unknown_type reason);
static void battlEyeServerSendPacket(int32_t playerID, intptr_t packetHandle, int32_t length);
static void updateRichPresence();
static void updateSteamRichPresence();
static uint32_t get_bytesSent();
static uint32_t get_bytesReceived();
static uint32_t get_packetsSent();
static uint32_t get_packetsReceived();
static unknown_type get_currentServerInfo();
static unknown_type get_server();
static unknown_type get_client();
static unknown_type get_user();
static unknown_type get_clientHash();
static unknown_type get_clientName();
static unknown_type get_clients();
static unknown_type GatherClientConnections();
static unknown_type EnumerateClients();
static unknown_type GatherClientConnectionsMatchingPredicate(unknown_type predicate);
static unknown_type EnumerateClients_Predicate(unknown_type predicate);
static unknown_type GatherClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius);
static unknown_type EnumerateClients_WithinSphere(UnityEngine_Vector3 position, float radius);
static unknown_type GatherRemoteClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius);
static unknown_type EnumerateClients_RemoteWithinSphere(UnityEngine_Vector3 position, float radius);
static unknown_type GatherRemoteClientConnections();
static unknown_type EnumerateClients_Remote();
static unknown_type GatherRemoteClientConnectionsMatchingPredicate(unknown_type predicate);
static unknown_type EnumerateClients_RemotePredicate(unknown_type predicate);
static unknown_type get_players();
static bool get_isServer();
static bool get_isClient();
static bool get_isPro();
static bool get_isConnected();
static bool doServerItemsMatchAdvertisement(unknown_type pendingWorkshopItems);
static void receiveWorkshopResponse(unknown_type response);
static unknown_type getServerWorkshopFileIDs();
static void registerServerUsingWorkshopFileId(uint64_t id);
static void registerServerUsingWorkshopFileId1(uint64_t id, uint32_t timestamp);
static bool get_isLoading();
static int32_t get_channels();
static int32_t allocPlayerChannelId();
static unknown_type get_connectionFailureInfo();
static void set_connectionFailureInfo(unknown_type value);
static unknown_type get_connectionFailureReason();
static void set_connectionFailureReason(unknown_type value);
static uint32_t get_connectionFailureDuration();
static unknown_type get_receivers();
static int32_t allocBattlEyePlayerId();
static void resetConnectionFailure();
static void LogNetChannel(unknown_type format, unknown_type args);
static void openChannel(SDG_Unturned_SteamChannel* receiver);
static void closeChannel(SDG_Unturned_SteamChannel* receiver);
static SDG_Unturned_SteamChannel* findChannelComponent(int32_t id);
static bool get_hasRoomForNewConnection();
static unknown_type findPendingPlayer(unknown_type transportConnection);
static unknown_type findPendingPlayerBySteamId(unknown_type steamId);
static SDG_Unturned_SteamPlayer* findPlayer(unknown_type transportConnection);
static unknown_type findTransportConnection(unknown_type steamId);
static unknown_type findTransportConnectionSteamId(unknown_type transportConnection);
static unknown_type ClaimNetIdBlockForNewPlayer();
static SDG_Unturned_SteamPlayer* addPlayer(unknown_type transportConnection, unknown_type netId, SDG_Unturned_SteamPlayerID* playerID, UnityEngine_Vector3 point, uint8_t angle, bool isPro, bool isAdmin, int32_t channel, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID, unknown_type clientPlatform);
static void removePlayer(uint8_t index);
static void replicateRemovePlayer(unknown_type skipSteamID, uint8_t removalIndex);
static void verifyNextPlayerInQueue();
static bool isUnreliable(unknown_type type);
static bool isChunk(unknown_type packet);
static bool isUpdate(unknown_type packet);
static void resetChannels();
static void loadPlayerSpawn(SDG_Unturned_SteamPlayerID* playerID, UnityEngine_Vector3& point, unknown_type angle, unknown_type initialStance);
static void onLevelLoaded(int32_t level);
static void connect(unknown_type info, unknown_type password, unknown_type expectedWorkshopItems);
static void onClientTransportReady();
static void onClientTransportFailure(unknown_type message);
static bool CompareClientAndServerWorkshopFileTimestamps();
static void launch();
static void loadGameMode();
static void unloadGameMode();
static void singleplayer(unknown_type singleplayerMode, bool singleplayerCheats);
static void host();
static void add_onCommenceShutdown(unknown_type value);
static void remove_onCommenceShutdown(unknown_type value);
static void broadcastCommenceShutdown();
static void shutdown();
static void shutdown1(int32_t timer);
static void shutdown2(int32_t timer, unknown_type explanation);
static bool get_IsBattlEyeEnabled();
static void RequestDisconnect(unknown_type reason);
static void disconnect();
static void sendGUIDTable(unknown_type player);
static bool initializeBattlEyeServer();
static void handleServerReady();
static void initializeDedicatedUGC();
static unknown_type getModeTagAbbreviation(unknown_type gm);
static unknown_type getCameraModeTagAbbreviation(unknown_type cm);
static unknown_type GetMonetizationTagAbbreviation(unknown_type monetization);
static void maybeLogCuratedMapFallback(unknown_type attemptedMap);
static void onDedicatedUGCInstalled();
static void AdvertiseFullDescription(unknown_type message);
static void AdvertiseConfig();
static void send(unknown_type steamID, unknown_type type, unknown_type packet, int32_t size, int32_t channel);
static bool remapSteamPacketType(unknown_type type);
static void sendToClient(unknown_type transportConnection, unknown_type type, unknown_type packet, int32_t size);
static bool shouldNetIgnoreSteamId(unknown_type id);
static void refuseGarbageConnection(unknown_type remoteId, unknown_type reason);
static void refuseGarbageConnection1(unknown_type transportConnection, unknown_type reason);
static bool get_useConstNetEvents();
static bool hasNetBufferChanged(unknown_type original, unknown_type copy, int32_t offset, int32_t size);
static bool getChannelHeader(unknown_type packet, int32_t size, int32_t offset, unknown_type channel);
static bool canClientVersionJoinServer(uint32_t version);
static void legacyReceiveClient(unknown_type packet, int32_t offset, int32_t size);
static void listenServer();
static void listenClient();
void SendPingRequestToAllClients();
void NotifyClientsInQueueOfPosition();
void KickClientsWithBadConnection();
void KickClientsBlockingUpQueue();
static void listen();
static void broadcastServerDisconnected(unknown_type steamID);
static void broadcastServerHosted();
static void broadcastServerShutdown();
static void onP2PSessionConnectFail(unknown_type callback);
static void checkBanStatus(SDG_Unturned_SteamPlayerID* playerID, uint32_t remoteIP, unknown_type isBanned, unknown_type banReason, unknown_type banRemainingDuration);
static bool requestBanPlayer(unknown_type instigator, unknown_type playerToBan, uint32_t ipToBan, unknown_type reason, uint32_t duration);
static bool requestBanPlayer1(unknown_type instigator, unknown_type playerToBan, uint32_t ipToBan, unknown_type hwidsToBan, unknown_type reason, uint32_t duration);
static bool requestUnbanPlayer(unknown_type instigator, unknown_type playerToUnban);
static void handleValidateAuthTicketResponse(unknown_type callback);
static void onValidateAuthTicketResponse(unknown_type callback);
static void handleClientGroupStatus(unknown_type callback);
static void onClientGroupStatus(unknown_type callback);
static uint8_t get_maxPlayers();
static void set_maxPlayers(uint8_t value);
static uint8_t get_queuePosition();
static unknown_type get_serverName();
static void set_serverName(unknown_type value);
static unknown_type get_serverID();
static void set_serverID(unknown_type value);
static uint16_t GetServerConnectionPort();
static unknown_type get_serverPasswordHash();
static unknown_type get_serverPassword();
static void set_serverPassword(unknown_type value);
static unknown_type get_statusData();
static unknown_type get_preferenceData();
static unknown_type get_configData();
static unknown_type get_modeConfigData();
static void resetConfig();
static void applyLevelConfigOverride(unknown_type field, unknown_type targetObject, unknown_type defaultTargetObject, unknown_type levelOverride);
static void applyLevelModeConfigOverrides();
static void accept(unknown_type player);
static void WriteConnectedMessage(unknown_type writer, SDG_Unturned_SteamPlayer* aboutPlayer, SDG_Unturned_SteamPlayer* forPlayer);
static void SendInitialGlobalState(SDG_Unturned_SteamPlayer* client);
static void accept1(SDG_Unturned_SteamPlayerID* playerID, bool isPro, bool isAdmin, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID);
static void accept2(SDG_Unturned_SteamPlayerID* playerID, bool isPro, bool isAdmin, uint8_t face, uint8_t hair, uint8_t beard, unknown_type skin, unknown_type color, unknown_type markerColor, bool hand, int32_t shirtItem, int32_t pantsItem, int32_t hatItem, int32_t backpackItem, int32_t vestItem, int32_t maskItem, int32_t glassesItem, unknown_type skinItems, unknown_type skinTags, unknown_type skinDynamicProps, unknown_type skillset, unknown_type language, unknown_type lobbyID, unknown_type clientPlatform);
static void add_onRejectingPlayer(unknown_type value);
static void remove_onRejectingPlayer(unknown_type value);
static void broadcastRejectingPlayer(unknown_type steamID, unknown_type rejection, unknown_type explanation);
static void reject(unknown_type steamID, unknown_type rejection);
static void reject1(unknown_type steamID, unknown_type rejection, unknown_type explanation);
static void reject2(unknown_type transportConnection, unknown_type rejection);
static void reject3(unknown_type transportConnection, unknown_type rejection, unknown_type explanation);
static void notifyClientPending(unknown_type transportConnection);
static bool findClientForKickBanDismiss(unknown_type steamID, SDG_Unturned_SteamPlayer*& foundClient, unknown_type foundIndex);
static void validateDisconnectedMaintainedIndex(unknown_type steamID, uint8_t index);
static void notifyKickedInternal(unknown_type transportConnection, unknown_type reason);
static void kick(unknown_type steamID, unknown_type reason);
static void notifyBannedInternal(unknown_type transportConnection, unknown_type reason, uint32_t duration);
static void ban(unknown_type steamID, unknown_type reason, uint32_t duration);
static void dismiss(unknown_type steamID);
static void OnServerTransportConnectionFailure(unknown_type transportConnection, unknown_type debugString, bool isError);
static bool verifyTicket(unknown_type steamID, unknown_type ticket);
static void openGameServer();
static void closeGameServer();
static bool GetServerIsFavorited(uint32_t ip, uint16_t queryPort);
static void SetServerIsFavorited(uint32_t ip, uint16_t connectionPort, uint16_t queryPort, bool newFavorited);
static void openURL(unknown_type url);
static bool get_isCurrentServerFavorited();
static void toggleCurrentServerFavorited();
static void broadcastEnemyConnected(SDG_Unturned_SteamPlayer* player);
static void broadcastEnemyDisconnected(SDG_Unturned_SteamPlayer* player);
static void onPersonaStateChange(unknown_type callback);
static void onGameServerChangeRequested(unknown_type callback);
static void onGameRichPresenceJoinRequested(unknown_type callback);
static float get_timeLastPacketWasReceivedFromServer();
static void set_timeLastPacketWasReceivedFromServer(float value);
static float get_ping();
static void lag(float value);
static unknown_type openTicket(unknown_type serverIdentity);
static void closeTicket();
static unknown_type get_provider();
static void set_provider(unknown_type value);
static bool get_isInitialized();
static uint32_t get_time();
static void set_time(uint32_t value);
static uint32_t get_backendRealtimeSeconds();
static void set_backendRealtimeSeconds(uint32_t value);
static unknown_type get_backendRealtimeDate();
static bool get_isBackendRealtimeAvailable();
unknown_type QuitAfterDelay(float seconds);
static void onAPIWarningMessage(int32_t severity, unknown_type warning);
void updateDebug();
void tickDebug();
unknown_type downloadIcon(unknown_type iconQueryParams);
static void destroyCachedIcon(unknown_type url);
static void refreshIcon(unknown_type iconQueryParams);
void Update();
void FixedUpdate();
static void initAutoSubscribeMaps();
void WriteSteamAppIdFileAndEnvironmentVariables();
static unknown_type LoadStatusData();
void LoadPreferences();
void awake();
void start();
void LogSystemInfo();
static bool get_isApplicationQuitting();
static void set_isApplicationQuitting(bool value);
void onApplicationQuitting();
static void QuitGame(unknown_type reason);
bool onApplicationWantsToQuit();
};
class SDG_Unturned_SteamChannel
{
static uintptr_t StaticInstance();
public:
static int32_t CHANNEL_ID_HEADER_SIZE_G();                                      // System.Int32
static void CHANNEL_ID_HEADER_SIZE_S(int32_t value);
static int32_t RPC_HEADER_SIZE_G();                                             // System.Int32
static void RPC_HEADER_SIZE_S(int32_t value);
static int32_t VOICE_HEADER_SIZE_G();                                           // System.Int32
static void VOICE_HEADER_SIZE_S(int32_t value);
static int32_t VOICE_DATA_OFFSET_G();                                           // System.Int32
static void VOICE_DATA_OFFSET_S(int32_t value);
unknown_type calls_G();                                                         // SDG.Unturned.SteamChannelMethod[]
void calls_S(unknown_type value);
int32_t id_G();                                                                 // System.Int32
void id_S(int32_t value);
SDG_Unturned_SteamPlayer* owner_G();                                            // SDG.Unturned.SteamPlayer
void owner_S(SDG_Unturned_SteamPlayer* value);
bool isOwner_G();                                                               // System.Boolean
void isOwner_S(bool value);
static unknown_type onTriggerReceive_G();                                       // SDG.Unturned.TriggerReceive
static void onTriggerReceive_S(unknown_type value);
static bool warnedAboutTriggerReceive_G();                                      // System.Boolean
static void warnedAboutTriggerReceive_S(bool value);
static unknown_type onTriggerSend_G();                                          // SDG.Unturned.TriggerSend
static void onTriggerSend_S(unknown_type value);
static bool warnedAboutTriggerSend_G();                                         // System.Boolean
static void warnedAboutTriggerSend_S(bool value);
bool callArrayDirty_G();                                                        // System.Boolean
void callArrayDirty_S(bool value);
static unknown_type workingCalls_G();                                           // System.Collections.Generic.List`1<SDG.Unturned.SteamChannelMethod>
static void workingCalls_S(unknown_type value);
static unknown_type workingComponents_G();                                      // System.Collections.Generic.List`1<UnityEngine.Component>
static void workingComponents_S(unknown_type value);
unknown_type get_calls();
void set_calls(unknown_type value);
unknown_type GetOwnerTransportConnection();
bool checkServer(unknown_type steamID);
bool checkOwner(unknown_type steamID);
unknown_type GatherRemoteClientConnectionsExcludingOwner();
unknown_type EnumerateClients_RemoteNotOwner();
unknown_type GatherRemoteClientConnectionsWithinSphereExcludingOwner(UnityEngine_Vector3 position, float radius);
unknown_type EnumerateClients_RemoteNotOwnerWithinSphere(UnityEngine_Vector3 position, float radius);
unknown_type GatherOwnerAndClientConnectionsWithinSphere(UnityEngine_Vector3 position, float radius);
unknown_type EnumerateClients_WithinSphereOrOwner(UnityEngine_Vector3 position, float radius);
bool receive(unknown_type steamID, unknown_type packet, int32_t offset, int32_t size);
unknown_type read(unknown_type type);
unknown_type read1(unknown_type type_0, unknown_type type_1, unknown_type type_2);
unknown_type read2(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3);
unknown_type read3(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5);
unknown_type read4(unknown_type type_0, unknown_type type_1, unknown_type type_2, unknown_type type_3, unknown_type type_4, unknown_type type_5, unknown_type type_6);
unknown_type read5(unknown_type types);
void write(unknown_type objects);
void write1(unknown_type object_0, unknown_type object_1, unknown_type object_2);
void write2(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3);
void write3(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5);
void write4(unknown_type object_0, unknown_type object_1, unknown_type object_2, unknown_type object_3, unknown_type object_4, unknown_type object_5, unknown_type object_6);
void write5(unknown_type objects);
bool get_longBinaryData();
void set_longBinaryData(bool value);
void openWrite();
void closeWrite(unknown_type name, unknown_type steamID, unknown_type type);
void closeWrite1(unknown_type name, unknown_type mode, uint8_t bound, unknown_type type);
void closeWrite2(unknown_type name, unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type);
void closeWrite3(unknown_type name, unknown_type mode, unknown_type type);
void send(unknown_type name, unknown_type steamID, unknown_type type, unknown_type arguments);
void sendAside(unknown_type name, unknown_type steamID, unknown_type type, unknown_type arguments);
void send1(unknown_type mode, uint8_t bound, unknown_type type, int32_t size, unknown_type packet);
void send2(unknown_type name, unknown_type mode, uint8_t bound, unknown_type type, unknown_type arguments);
void send3(unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type, int32_t size, unknown_type packet);
void send4(unknown_type name, unknown_type mode, uint8_t x, uint8_t y, uint8_t area, unknown_type type, unknown_type arguments);
void send5(unknown_type mode, unknown_type type, int32_t size, unknown_type packet);
void send6(unknown_type name, unknown_type mode, unknown_type type, unknown_type arguments);
void send7(unknown_type mode, UnityEngine_Vector3 point, float radius, unknown_type type, int32_t size, unknown_type packet);
void send8(unknown_type name, unknown_type mode, UnityEngine_Vector3 point, float radius, unknown_type type, unknown_type arguments);
void markDirty();
void buildCallArray();
void buildCallArrayIfDirty();
void setup();
void encodeChannelId(unknown_type packet);
void getPacket(unknown_type type, int32_t index, unknown_type size, unknown_type packet);
void encodeVoicePacket(uint8_t callIndex, unknown_type size, unknown_type packet, unknown_type bytes, uint16_t length, bool usingWalkieTalkie);
void decodeVoicePacket(unknown_type packet, unknown_type compressedSize, unknown_type usingWalkieTalkie);
void sendVoicePacket(SDG_Unturned_SteamPlayer* player, unknown_type packet, int32_t packetSize);
void getPacket1(unknown_type type, int32_t index, unknown_type size, unknown_type packet, unknown_type arguments);
int32_t getCall(unknown_type name);
void OnDestroy();
};
class SDG_Unturned_SteamPlayer
{
static uintptr_t StaticInstance();
public:
unknown_type _netId_G();                                                        // SDG.Unturned.NetId
void _netId_S(unknown_type value);
SDG_Unturned_SteamPlayerID* _playerID_G();                                      // SDG.Unturned.SteamPlayerID
void _playerID_S(SDG_Unturned_SteamPlayerID* value);
UnityEngine_Transform* _model_G();                                              // UnityEngine.Transform
void _model_S(UnityEngine_Transform* value);
SDG_Unturned_Player* _player_G();                                               // SDG.Unturned.Player
void _player_S(SDG_Unturned_Player* value);
bool _isPro_G();                                                                // System.Boolean
void _isPro_S(bool value);
int32_t _channel_G();                                                           // System.Int32
void _channel_S(int32_t value);
int32_t battlEyeId_G();                                                         // System.Int32
void battlEyeId_S(int32_t value);
bool _isAdmin_G();                                                              // System.Boolean
void _isAdmin_S(bool value);
unknown_type pings_G();                                                         // System.Single[]
void pings_S(unknown_type value);
float _ping_G();                                                                // System.Single
void _ping_S(float value);
float _joined_G();                                                              // System.Single
void _joined_S(float value);
uint8_t face_G();                                                               // System.Byte
void face_S(uint8_t value);
uint8_t _hair_G();                                                              // System.Byte
void _hair_S(uint8_t value);
uint8_t _beard_G();                                                             // System.Byte
void _beard_S(uint8_t value);
unknown_type _skin_G();                                                         // UnityEngine.Color
void _skin_S(unknown_type value);
unknown_type _color_G();                                                        // UnityEngine.Color
void _color_S(unknown_type value);
unknown_type _markerColor_G();                                                  // UnityEngine.Color
void _markerColor_S(unknown_type value);
bool _hand_G();                                                                 // System.Boolean
void _hand_S(bool value);
int32_t shirtItem_G();                                                          // System.Int32
void shirtItem_S(int32_t value);
int32_t pantsItem_G();                                                          // System.Int32
void pantsItem_S(int32_t value);
int32_t hatItem_G();                                                            // System.Int32
void hatItem_S(int32_t value);
int32_t backpackItem_G();                                                       // System.Int32
void backpackItem_S(int32_t value);
int32_t vestItem_G();                                                           // System.Int32
void vestItem_S(int32_t value);
int32_t maskItem_G();                                                           // System.Int32
void maskItem_S(int32_t value);
int32_t glassesItem_G();                                                        // System.Int32
void glassesItem_S(int32_t value);
unknown_type skinItems_G();                                                     // System.Int32[]
void skinItems_S(unknown_type value);
unknown_type skinTags_G();                                                      // System.String[]
void skinTags_S(unknown_type value);
unknown_type skinDynamicProps_G();                                              // System.String[]
void skinDynamicProps_S(unknown_type value);
unknown_type itemSkins_G();                                                     // System.Collections.Generic.Dictionary`2<System.UInt16,System.Int32>
void itemSkins_S(unknown_type value);
unknown_type vehicleSkins_G();                                                  // System.Collections.Generic.Dictionary`2<System.UInt16,System.Int32>
void vehicleSkins_S(unknown_type value);
unknown_type modifiedItems_G();                                                 // System.Collections.Generic.HashSet`1<System.UInt16>
void modifiedItems_S(unknown_type value);
bool submittedModifiedItems_G();                                                // System.Boolean
void submittedModifiedItems_S(bool value);
unknown_type _skillset_G();                                                     // SDG.Unturned.EPlayerSkillset
void _skillset_S(unknown_type value);
unknown_type _language_G();                                                     // System.String
void _language_S(unknown_type value);
unknown_type lobbyID_G();                                                       // Steamworks.CSteamID
void lobbyID_S(unknown_type value);
float timeLastPacketWasReceivedFromClient_G();                                  // System.Single
void timeLastPacketWasReceivedFromClient_S(float value);
float timeLastPingRequestWasSentToClient_G();                                   // System.Single
void timeLastPingRequestWasSentToClient_S(float value);
float lastChat_G();                                                             // System.Single
void lastChat_S(float value);
float nextVote_G();                                                             // System.Single
void nextVote_S(float value);
bool isMuted_G();                                                               // System.Boolean
void isMuted_S(bool value);
bool IsLocalPlayer_G();                                                         // System.Boolean
void IsLocalPlayer_S(bool value);
float rpcCredits_G();                                                           // System.Single
void rpcCredits_S(float value);
float lastReceivedPingRequestRealtime_G();                                      // System.Single
void lastReceivedPingRequestRealtime_S(float value);
unknown_type rpcAllowedTimes_G();                                               // System.Single[]
void rpcAllowedTimes_S(unknown_type value);
unknown_type rpcHitCount_G();                                                   // System.Int32[]
void rpcHitCount_S(unknown_type value);
unknown_type clientPlatform_G();                                                // SDG.Unturned.EClientPlatform
void clientPlatform_S(unknown_type value);
unknown_type validatedGuids_G();                                                // System.Collections.Generic.HashSet`1<System.Guid>
void validatedGuids_S(unknown_type value);
unknown_type GetNetId();
SDG_Unturned_SteamPlayerID* get_playerID();
UnityEngine_Transform* get_model();
SDG_Unturned_Player* get_player();
bool get_isPro();
int32_t get_channel();
bool get_isAdmin();
void set_isAdmin(bool value);
float get_ping();
float get_joined();
uint8_t get_hair();
uint8_t get_beard();
unknown_type get_skin();
unknown_type get_color();
unknown_type get_markerColor();
bool get_IsLeftHanded();
bool get_hand();
unknown_type get_skillset();
unknown_type get_language();
unknown_type get_lobbyID();
void set_lobbyID(unknown_type value);
bool get_IsLocalPlayer();
void set_IsLocalPlayer(bool value);
bool getItemSkinItemDefID(uint16_t itemID, unknown_type itemdefid);
bool getVehicleSkinItemDefID(uint16_t vehicleID, unknown_type itemdefid);
bool getTagsAndDynamicPropsForItem(int32_t item, unknown_type tags, unknown_type dynamic_props);
bool getDynamicEconDetails(uint16_t itemID, unknown_type details);
bool getDynamicEconDetailsForItemDef(int32_t itemdefid, unknown_type details);
bool getStatTrackerValue(uint16_t itemID, unknown_type type, unknown_type kills);
bool getRagdollEffect(uint16_t itemID, unknown_type effect);
uint16_t getParticleEffectForItemDef(int32_t itemdefid);
void incrementStatTrackerValue(uint16_t itemID, unknown_type stat);
void commitModifiedDynamicProps();
void lag(float value);
bool isMemberOfSameGroupAs(SDG_Unturned_Player* other);
bool isMemberOfSameGroupAs1(SDG_Unturned_SteamPlayer* other);
bool getIPv4Address(unknown_type address);
uint32_t getIPv4AddressOrZero();
unknown_type getAddress();
unknown_type getAddressString(bool withPort);
bool Equals(SDG_Unturned_SteamPlayer* otherClient);
bool Equals1(unknown_type obj);
int32_t GetHashCode();
unknown_type GetLocalDisplayName();
};
class SDG_Unturned_SteamPlayerID
{
static uintptr_t StaticInstance();
public:
unknown_type _steamID_G();                                                      // Steamworks.CSteamID
void _steamID_S(unknown_type value);
uint8_t characterID_G();                                                        // System.Byte
void characterID_S(uint8_t value);
unknown_type _playerName_G();                                                   // System.String
void _playerName_S(unknown_type value);
unknown_type _characterName_G();                                                // System.String
void _characterName_S(unknown_type value);
unknown_type _nickName_G();                                                     // System.String
void _nickName_S(unknown_type value);
unknown_type group_G();                                                         // Steamworks.CSteamID
void group_S(unknown_type value);
unknown_type hwids_G();                                                         // System.Byte[][]
void hwids_S(unknown_type value);
unknown_type get_steamID();
unknown_type get_streamerName();
unknown_type get_playerName();
unknown_type get_characterName();
void set_characterName(unknown_type value);
unknown_type get_nickName();
void set_nickName(unknown_type value);
unknown_type get_hwid();
unknown_type GetHwids();
bool get_BypassIntegrityChecks();
unknown_type ToString();
static bool op_Equality(SDG_Unturned_SteamPlayerID* playerID_0, SDG_Unturned_SteamPlayerID* playerID_1);
static bool op_Inequality(SDG_Unturned_SteamPlayerID* playerID_0, SDG_Unturned_SteamPlayerID* playerID_1);
static unknown_type op_Addition(SDG_Unturned_SteamPlayerID* playerID, unknown_type text);
bool Equals(SDG_Unturned_SteamPlayerID* otherPlayerID);
int32_t GetHashCode();
bool Equals1(unknown_type obj);
};
class UnityEngine_Component
{
static uintptr_t StaticInstance();
public:
UnityEngine_Transform* get_transform();
UnityEngine_GameObject* get_gameObject();
UnityEngine_Component* GetComponent(unknown_type type);
void GetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue);
bool TryGetComponent(unknown_type type, UnityEngine_Component*& component);
UnityEngine_Component* GetComponent1(unknown_type type);
UnityEngine_Component* GetComponentInChildren(unknown_type t, bool includeInactive);
UnityEngine_Component* GetComponentInChildren1(unknown_type t);
unknown_type GetComponentsInChildren(unknown_type t, bool includeInactive);
unknown_type GetComponentsInChildren1(unknown_type t);
UnityEngine_Component* GetComponentInParent(unknown_type t);
unknown_type GetComponentsInParent(unknown_type t, bool includeInactive);
unknown_type GetComponentsInParent1(unknown_type t);
unknown_type GetComponents(unknown_type type);
void GetComponentsForListInternal(unknown_type searchType, unknown_type resultList);
void GetComponents1(unknown_type type, unknown_type results);
unknown_type get_tag();
void set_tag(unknown_type value);
bool CompareTag(unknown_type tag);
void SendMessageUpwards(unknown_type methodName, unknown_type value, unknown_type options);
void SendMessageUpwards1(unknown_type methodName, unknown_type value);
void SendMessageUpwards2(unknown_type methodName);
void SendMessageUpwards3(unknown_type methodName, unknown_type options);
void SendMessage(unknown_type methodName, unknown_type value);
void SendMessage1(unknown_type methodName);
void SendMessage2(unknown_type methodName, unknown_type value, unknown_type options);
void SendMessage3(unknown_type methodName, unknown_type options);
void BroadcastMessage(unknown_type methodName, unknown_type parameter, unknown_type options);
void BroadcastMessage1(unknown_type methodName, unknown_type parameter);
void BroadcastMessage2(unknown_type methodName);
void BroadcastMessage3(unknown_type methodName, unknown_type options);
};
class UnityEngine_GameObject
{
static uintptr_t StaticInstance();
public:
static UnityEngine_GameObject* CreatePrimitive(unknown_type type);
UnityEngine_Component* GetComponent(unknown_type type);
void GetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue);
UnityEngine_Component* GetComponentByName(unknown_type type);
UnityEngine_Component* GetComponent1(unknown_type type);
UnityEngine_Component* GetComponentInChildren(unknown_type type, bool includeInactive);
UnityEngine_Component* GetComponentInChildren1(unknown_type type);
UnityEngine_Component* GetComponentInParent(unknown_type type, bool includeInactive);
UnityEngine_Component* GetComponentInParent1(unknown_type type);
unknown_type GetComponentsInternal(unknown_type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, unknown_type resultList);
unknown_type GetComponents(unknown_type type);
void GetComponents1(unknown_type type, unknown_type results);
unknown_type GetComponentsInChildren(unknown_type type);
unknown_type GetComponentsInChildren1(unknown_type type, bool includeInactive);
unknown_type GetComponentsInParent(unknown_type type);
unknown_type GetComponentsInParent1(unknown_type type, bool includeInactive);
bool TryGetComponent(unknown_type type, UnityEngine_Component*& component);
UnityEngine_Component* TryGetComponentInternal(unknown_type type);
void TryGetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue);
static UnityEngine_GameObject* FindWithTag(unknown_type tag);
void SendMessageUpwards(unknown_type methodName, unknown_type options);
void SendMessage(unknown_type methodName, unknown_type options);
void BroadcastMessage(unknown_type methodName, unknown_type options);
UnityEngine_Component* AddComponentInternal(unknown_type className);
UnityEngine_Component* Internal_AddComponentWithType(unknown_type componentType);
UnityEngine_Component* AddComponent(unknown_type componentType);
UnityEngine_Transform* get_transform();
int32_t get_layer();
void set_layer(int32_t value);
bool get_active();
void set_active(bool value);
void SetActive(bool value);
bool get_activeSelf();
bool get_activeInHierarchy();
void SetActiveRecursively(bool state);
bool get_isStatic();
void set_isStatic(bool value);
bool get_isStaticBatchable();
unknown_type get_tag();
void set_tag(unknown_type value);
bool CompareTag(unknown_type tag);
static UnityEngine_GameObject* FindGameObjectWithTag(unknown_type tag);
static unknown_type FindGameObjectsWithTag(unknown_type tag);
void SendMessageUpwards1(unknown_type methodName, unknown_type value, unknown_type options);
void SendMessageUpwards2(unknown_type methodName, unknown_type value);
void SendMessageUpwards3(unknown_type methodName);
void SendMessage1(unknown_type methodName, unknown_type value, unknown_type options);
void SendMessage2(unknown_type methodName, unknown_type value);
void SendMessage3(unknown_type methodName);
void BroadcastMessage1(unknown_type methodName, unknown_type parameter, unknown_type options);
void BroadcastMessage2(unknown_type methodName, unknown_type parameter);
void BroadcastMessage3(unknown_type methodName);
static void Internal_CreateGameObject(UnityEngine_GameObject* self, unknown_type name);
static UnityEngine_GameObject* Find(unknown_type name);
unknown_type get_scene();
uint64_t get_sceneCullingMask();
UnityEngine_GameObject* get_gameObject();
void get_scene_Injected(unknown_type ret);
};
class UnityEngine_Transform
{
static uintptr_t StaticInstance();
public:
UnityEngine_Vector3 get_position();
void set_position(UnityEngine_Vector3 value);
UnityEngine_Vector3 get_localPosition();
void set_localPosition(UnityEngine_Vector3 value);
UnityEngine_Vector3 GetLocalEulerAngles(unknown_type order);
void SetLocalEulerAngles(UnityEngine_Vector3 euler, unknown_type order);
void SetLocalEulerHint(UnityEngine_Vector3 euler);
UnityEngine_Vector3 get_eulerAngles();
void set_eulerAngles(UnityEngine_Vector3 value);
UnityEngine_Vector3 get_localEulerAngles();
void set_localEulerAngles(UnityEngine_Vector3 value);
UnityEngine_Vector3 get_right();
void set_right(UnityEngine_Vector3 value);
UnityEngine_Vector3 get_up();
void set_up(UnityEngine_Vector3 value);
UnityEngine_Vector3 get_forward();
void set_forward(UnityEngine_Vector3 value);
unknown_type get_rotation();
void set_rotation(unknown_type value);
unknown_type get_localRotation();
void set_localRotation(unknown_type value);
unknown_type get_rotationOrder();
void set_rotationOrder(unknown_type value);
int32_t GetRotationOrderInternal();
void SetRotationOrderInternal(unknown_type rotationOrder);
UnityEngine_Vector3 get_localScale();
void set_localScale(UnityEngine_Vector3 value);
UnityEngine_Transform* get_parent();
void set_parent(UnityEngine_Transform* value);
UnityEngine_Transform* get_parentInternal();
void set_parentInternal(UnityEngine_Transform* value);
UnityEngine_Transform* GetParent();
void SetParent(UnityEngine_Transform* p);
void SetParent1(UnityEngine_Transform* parent, bool worldPositionStays);
unknown_type get_worldToLocalMatrix();
unknown_type get_localToWorldMatrix();
void SetPositionAndRotation(UnityEngine_Vector3 position, unknown_type rotation);
void Translate(UnityEngine_Vector3 translation, unknown_type relativeTo);
void Translate1(UnityEngine_Vector3 translation);
void Translate2(float x, float y, float z, unknown_type relativeTo);
void Translate3(float x, float y, float z);
void Translate4(UnityEngine_Vector3 translation, UnityEngine_Transform* relativeTo);
void Translate5(float x, float y, float z, UnityEngine_Transform* relativeTo);
void Rotate(UnityEngine_Vector3 eulers, unknown_type relativeTo);
void Rotate1(UnityEngine_Vector3 eulers);
void Rotate2(float xAngle, float yAngle, float zAngle, unknown_type relativeTo);
void Rotate3(float xAngle, float yAngle, float zAngle);
void RotateAroundInternal(UnityEngine_Vector3 axis, float angle);
void Rotate4(UnityEngine_Vector3 axis, float angle, unknown_type relativeTo);
void Rotate5(UnityEngine_Vector3 axis, float angle);
void RotateAround(UnityEngine_Vector3 point, UnityEngine_Vector3 axis, float angle);
void LookAt(UnityEngine_Transform* target, UnityEngine_Vector3 worldUp);
void LookAt1(UnityEngine_Transform* target);
void LookAt2(UnityEngine_Vector3 worldPosition, UnityEngine_Vector3 worldUp);
void LookAt3(UnityEngine_Vector3 worldPosition);
void Internal_LookAt(UnityEngine_Vector3 worldPosition, UnityEngine_Vector3 worldUp);
UnityEngine_Vector3 TransformDirection(UnityEngine_Vector3 direction);
UnityEngine_Vector3 TransformDirection1(float x, float y, float z);
UnityEngine_Vector3 InverseTransformDirection(UnityEngine_Vector3 direction);
UnityEngine_Vector3 InverseTransformDirection1(float x, float y, float z);
UnityEngine_Vector3 TransformVector(UnityEngine_Vector3 vector);
UnityEngine_Vector3 TransformVector1(float x, float y, float z);
UnityEngine_Vector3 InverseTransformVector(UnityEngine_Vector3 vector);
UnityEngine_Vector3 InverseTransformVector1(float x, float y, float z);
UnityEngine_Vector3 TransformPoint(UnityEngine_Vector3 position);
UnityEngine_Vector3 TransformPoint1(float x, float y, float z);
UnityEngine_Vector3 InverseTransformPoint(UnityEngine_Vector3 position);
UnityEngine_Vector3 InverseTransformPoint1(float x, float y, float z);
UnityEngine_Transform* get_root();
UnityEngine_Transform* GetRoot();
int32_t get_childCount();
void DetachChildren();
void SetAsFirstSibling();
void SetAsLastSibling();
void SetSiblingIndex(int32_t index);
void MoveAfterSibling(UnityEngine_Transform* transform, bool notifyEditorAndMarkDirty);
int32_t GetSiblingIndex();
static UnityEngine_Transform* FindRelativeTransformWithPath(UnityEngine_Transform* transform, unknown_type path, bool isActiveOnly);
UnityEngine_Transform* Find(unknown_type n);
void SendTransformChangedScale();
UnityEngine_Vector3 get_lossyScale();
bool IsChildOf(UnityEngine_Transform* parent);
bool get_hasChanged();
void set_hasChanged(bool value);
UnityEngine_Transform* FindChild(unknown_type n);
unknown_type GetEnumerator();
void RotateAround1(UnityEngine_Vector3 axis, float angle);
void RotateAroundLocal(UnityEngine_Vector3 axis, float angle);
UnityEngine_Transform* GetChild(int32_t index);
int32_t GetChildCount();
int32_t get_hierarchyCapacity();
void set_hierarchyCapacity(int32_t value);
int32_t internal_getHierarchyCapacity();
void internal_setHierarchyCapacity(int32_t value);
int32_t get_hierarchyCount();
int32_t internal_getHierarchyCount();
bool IsNonUniformScaleTransform();
void get_position_Injected(UnityEngine_Vector3& ret);
void set_position_Injected(UnityEngine_Vector3& value);
void get_localPosition_Injected(UnityEngine_Vector3& ret);
void set_localPosition_Injected(UnityEngine_Vector3& value);
void GetLocalEulerAngles_Injected(unknown_type order, UnityEngine_Vector3& ret);
void SetLocalEulerAngles_Injected(UnityEngine_Vector3& euler, unknown_type order);
void SetLocalEulerHint_Injected(UnityEngine_Vector3& euler);
void get_rotation_Injected(unknown_type ret);
void set_rotation_Injected(unknown_type value);
void get_localRotation_Injected(unknown_type ret);
void set_localRotation_Injected(unknown_type value);
void get_localScale_Injected(UnityEngine_Vector3& ret);
void set_localScale_Injected(UnityEngine_Vector3& value);
void get_worldToLocalMatrix_Injected(unknown_type ret);
void get_localToWorldMatrix_Injected(unknown_type ret);
void SetPositionAndRotation_Injected(UnityEngine_Vector3& position, unknown_type rotation);
void RotateAroundInternal_Injected(UnityEngine_Vector3& axis, float angle);
void Internal_LookAt_Injected(UnityEngine_Vector3& worldPosition, UnityEngine_Vector3& worldUp);
void TransformDirection_Injected(UnityEngine_Vector3& direction, UnityEngine_Vector3& ret);
void InverseTransformDirection_Injected(UnityEngine_Vector3& direction, UnityEngine_Vector3& ret);
void TransformVector_Injected(UnityEngine_Vector3& vector, UnityEngine_Vector3& ret);
void InverseTransformVector_Injected(UnityEngine_Vector3& vector, UnityEngine_Vector3& ret);
void TransformPoint_Injected(UnityEngine_Vector3& position, UnityEngine_Vector3& ret);
void InverseTransformPoint_Injected(UnityEngine_Vector3& position, UnityEngine_Vector3& ret);
void get_lossyScale_Injected(UnityEngine_Vector3& ret);
void RotateAround_Injected(UnityEngine_Vector3& axis, float angle);
void RotateAroundLocal_Injected(UnityEngine_Vector3& axis, float angle);
};
class UnityEngine_Vector3
{
static uintptr_t StaticInstance();
public:
static float kEpsilon_G();                                                      // System.Single
static void kEpsilon_S(float value);
static float kEpsilonNormalSqrt_G();                                            // System.Single
static void kEpsilonNormalSqrt_S(float value);
float x;
float y;
float z;
static UnityEngine_Vector3 zeroVector_G();                                      // UnityEngine.Vector3
static void zeroVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 oneVector_G();                                       // UnityEngine.Vector3
static void oneVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 upVector_G();                                        // UnityEngine.Vector3
static void upVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 downVector_G();                                      // UnityEngine.Vector3
static void downVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 leftVector_G();                                      // UnityEngine.Vector3
static void leftVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 rightVector_G();                                     // UnityEngine.Vector3
static void rightVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 forwardVector_G();                                   // UnityEngine.Vector3
static void forwardVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 backVector_G();                                      // UnityEngine.Vector3
static void backVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 positiveInfinityVector_G();                          // UnityEngine.Vector3
static void positiveInfinityVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 negativeInfinityVector_G();                          // UnityEngine.Vector3
static void negativeInfinityVector_S(UnityEngine_Vector3 value);
static UnityEngine_Vector3 Slerp(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t);
static UnityEngine_Vector3 SlerpUnclamped(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t);
static void OrthoNormalize2(UnityEngine_Vector3& a, UnityEngine_Vector3& b);
static void OrthoNormalize(UnityEngine_Vector3& normal, UnityEngine_Vector3& tangent);
static void OrthoNormalize3(UnityEngine_Vector3& a, UnityEngine_Vector3& b, UnityEngine_Vector3& c);
static void OrthoNormalize1(UnityEngine_Vector3& normal, UnityEngine_Vector3& tangent, UnityEngine_Vector3& binormal);
static UnityEngine_Vector3 RotateTowards(UnityEngine_Vector3 current, UnityEngine_Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta);
static UnityEngine_Vector3 Lerp(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t);
static UnityEngine_Vector3 LerpUnclamped(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t);
static UnityEngine_Vector3 MoveTowards(UnityEngine_Vector3 current, UnityEngine_Vector3 target, float maxDistanceDelta);
static UnityEngine_Vector3 SmoothDamp(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime, float maxSpeed);
static UnityEngine_Vector3 SmoothDamp1(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime);
static UnityEngine_Vector3 SmoothDamp2(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
float get_Item(int32_t index);
void set_Item(int32_t index, float value);
void Set(float newX, float newY, float newZ);
static UnityEngine_Vector3 Scale(UnityEngine_Vector3 a, UnityEngine_Vector3 b);
void Scale1(UnityEngine_Vector3 scale);
static UnityEngine_Vector3 Cross(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
int32_t GetHashCode();
bool Equals(unknown_type other);
bool Equals1(UnityEngine_Vector3 other);
static UnityEngine_Vector3 Reflect(UnityEngine_Vector3 inDirection, UnityEngine_Vector3 inNormal);
static UnityEngine_Vector3 Normalize(UnityEngine_Vector3 value);
void Normalize1();
UnityEngine_Vector3 get_normalized();
static float Dot(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
static UnityEngine_Vector3 Project(UnityEngine_Vector3 vector, UnityEngine_Vector3 onNormal);
static UnityEngine_Vector3 ProjectOnPlane(UnityEngine_Vector3 vector, UnityEngine_Vector3 planeNormal);
static float Angle(UnityEngine_Vector3 from, UnityEngine_Vector3 to);
static float SignedAngle(UnityEngine_Vector3 from, UnityEngine_Vector3 to, UnityEngine_Vector3 axis);
static float Distance(UnityEngine_Vector3 a, UnityEngine_Vector3 b);
static UnityEngine_Vector3 ClampMagnitude(UnityEngine_Vector3 vector, float maxLength);
static float Magnitude(UnityEngine_Vector3 vector);
float get_magnitude();
static float SqrMagnitude(UnityEngine_Vector3 vector);
float get_sqrMagnitude();
static UnityEngine_Vector3 Min(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
static UnityEngine_Vector3 Max(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
static UnityEngine_Vector3 get_zero();
static UnityEngine_Vector3 get_one();
static UnityEngine_Vector3 get_forward();
static UnityEngine_Vector3 get_back();
static UnityEngine_Vector3 get_up();
static UnityEngine_Vector3 get_down();
static UnityEngine_Vector3 get_left();
static UnityEngine_Vector3 get_right();
static UnityEngine_Vector3 get_positiveInfinity();
static UnityEngine_Vector3 get_negativeInfinity();
static UnityEngine_Vector3 op_Addition(UnityEngine_Vector3 a, UnityEngine_Vector3 b);
static UnityEngine_Vector3 op_Subtraction(UnityEngine_Vector3 a, UnityEngine_Vector3 b);
static UnityEngine_Vector3 op_UnaryNegation(UnityEngine_Vector3 a);
static UnityEngine_Vector3 op_Multiply(UnityEngine_Vector3 a, float d);
static UnityEngine_Vector3 op_Multiply1(float d, UnityEngine_Vector3 a);
static UnityEngine_Vector3 op_Division(UnityEngine_Vector3 a, float d);
static bool op_Equality(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
static bool op_Inequality(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs);
unknown_type ToString();
unknown_type ToString1(unknown_type format);
unknown_type ToString2(unknown_type format, unknown_type formatProvider);
static UnityEngine_Vector3 get_fwd();
static float AngleBetween(UnityEngine_Vector3 from, UnityEngine_Vector3 to);
static UnityEngine_Vector3 Exclude(UnityEngine_Vector3 excludeThis, UnityEngine_Vector3 fromThat);
static void Slerp_Injected(UnityEngine_Vector3& a, UnityEngine_Vector3& b, float t, UnityEngine_Vector3& ret);
static void SlerpUnclamped_Injected(UnityEngine_Vector3& a, UnityEngine_Vector3& b, float t, UnityEngine_Vector3& ret);
static void RotateTowards_Injected(UnityEngine_Vector3& current, UnityEngine_Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine_Vector3& ret);
};
}
