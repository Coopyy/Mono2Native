#include "../../sdk.h"
namespace SDK
{
uintptr_t UnityEngine_GameObject::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("UnityEngine.CoreModule", "UnityEngine", "GameObject");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
UnityEngine_GameObject* UnityEngine_GameObject::CreatePrimitive(unknown_type type)
{
using method_t = UnityEngine_GameObject*(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001515));
return _method(type);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponent(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001517));
return _method(this, type);
}
void UnityEngine_GameObject::GetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, intptr_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001518));
return _method(this, type, oneFurtherThanResultValue);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponentByName(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001519));
return _method(this, type);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponent1(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600151A));
return _method(this, type);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponentInChildren(unknown_type type, bool includeInactive)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600151B));
return _method(this, type, includeInactive);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponentInChildren1(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600151C));
return _method(this, type);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponentInParent(unknown_type type, bool includeInactive)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600151F));
return _method(this, type, includeInactive);
}
UnityEngine_Component* UnityEngine_GameObject::GetComponentInParent1(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001520));
return _method(this, type);
}
unknown_type UnityEngine_GameObject::GetComponentsInternal(unknown_type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, unknown_type resultList)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type, bool, bool, bool, bool, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001523));
return _method(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
}
unknown_type UnityEngine_GameObject::GetComponents(unknown_type type)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001524));
return _method(this, type);
}
void UnityEngine_GameObject::GetComponents1(unknown_type type, unknown_type results)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001526));
return _method(this, type, results);
}
unknown_type UnityEngine_GameObject::GetComponentsInChildren(unknown_type type)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001528));
return _method(this, type);
}
unknown_type UnityEngine_GameObject::GetComponentsInChildren1(unknown_type type, bool includeInactive)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001529));
return _method(this, type, includeInactive);
}
unknown_type UnityEngine_GameObject::GetComponentsInParent(unknown_type type)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600152E));
return _method(this, type);
}
unknown_type UnityEngine_GameObject::GetComponentsInParent1(unknown_type type, bool includeInactive)
{
using method_t = unknown_type(*)(UnityEngine_GameObject*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600152F));
return _method(this, type, includeInactive);
}
bool UnityEngine_GameObject::TryGetComponent(unknown_type type, UnityEngine_Component*& component)
{
using method_t = bool(*)(UnityEngine_GameObject*, unknown_type, UnityEngine_Component*&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001534));
return _method(this, type, component);
}
UnityEngine_Component* UnityEngine_GameObject::TryGetComponentInternal(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001535));
return _method(this, type);
}
void UnityEngine_GameObject::TryGetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, intptr_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001536));
return _method(this, type, oneFurtherThanResultValue);
}
UnityEngine_GameObject* UnityEngine_GameObject::FindWithTag(unknown_type tag)
{
using method_t = UnityEngine_GameObject*(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001537));
return _method(tag);
}
void UnityEngine_GameObject::SendMessageUpwards(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001538));
return _method(this, methodName, options);
}
void UnityEngine_GameObject::SendMessage(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001539));
return _method(this, methodName, options);
}
void UnityEngine_GameObject::BroadcastMessage(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600153A));
return _method(this, methodName, options);
}
UnityEngine_Component* UnityEngine_GameObject::AddComponentInternal(unknown_type className)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600153B));
return _method(this, className);
}
UnityEngine_Component* UnityEngine_GameObject::Internal_AddComponentWithType(unknown_type componentType)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600153C));
return _method(this, componentType);
}
UnityEngine_Component* UnityEngine_GameObject::AddComponent(unknown_type componentType)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600153D));
return _method(this, componentType);
}
UnityEngine_Transform* UnityEngine_GameObject::get_transform()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600153F));
return _method(this);
}
int32_t UnityEngine_GameObject::get_layer()
{
using method_t = int32_t(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001540));
return _method(this);
}
void UnityEngine_GameObject::set_layer(int32_t value)
{
using method_t = void(*)(UnityEngine_GameObject*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001541));
return _method(this, value);
}
bool UnityEngine_GameObject::get_active()
{
using method_t = bool(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001542));
return _method(this);
}
void UnityEngine_GameObject::set_active(bool value)
{
using method_t = void(*)(UnityEngine_GameObject*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001543));
return _method(this, value);
}
void UnityEngine_GameObject::SetActive(bool value)
{
using method_t = void(*)(UnityEngine_GameObject*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001544));
return _method(this, value);
}
bool UnityEngine_GameObject::get_activeSelf()
{
using method_t = bool(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001545));
return _method(this);
}
bool UnityEngine_GameObject::get_activeInHierarchy()
{
using method_t = bool(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001546));
return _method(this);
}
void UnityEngine_GameObject::SetActiveRecursively(bool state)
{
using method_t = void(*)(UnityEngine_GameObject*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001547));
return _method(this, state);
}
bool UnityEngine_GameObject::get_isStatic()
{
using method_t = bool(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001548));
return _method(this);
}
void UnityEngine_GameObject::set_isStatic(bool value)
{
using method_t = void(*)(UnityEngine_GameObject*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001549));
return _method(this, value);
}
bool UnityEngine_GameObject::get_isStaticBatchable()
{
using method_t = bool(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154A));
return _method(this);
}
unknown_type UnityEngine_GameObject::get_tag()
{
using method_t = unknown_type(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154B));
return _method(this);
}
void UnityEngine_GameObject::set_tag(unknown_type value)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154C));
return _method(this, value);
}
bool UnityEngine_GameObject::CompareTag(unknown_type tag)
{
using method_t = bool(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154D));
return _method(this, tag);
}
UnityEngine_GameObject* UnityEngine_GameObject::FindGameObjectWithTag(unknown_type tag)
{
using method_t = UnityEngine_GameObject*(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154E));
return _method(tag);
}
unknown_type UnityEngine_GameObject::FindGameObjectsWithTag(unknown_type tag)
{
using method_t = unknown_type(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600154F));
return _method(tag);
}
void UnityEngine_GameObject::SendMessageUpwards1(unknown_type methodName, unknown_type value, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001550));
return _method(this, methodName, value, options);
}
void UnityEngine_GameObject::SendMessageUpwards2(unknown_type methodName, unknown_type value)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001551));
return _method(this, methodName, value);
}
void UnityEngine_GameObject::SendMessageUpwards3(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001552));
return _method(this, methodName);
}
void UnityEngine_GameObject::SendMessage1(unknown_type methodName, unknown_type value, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001553));
return _method(this, methodName, value, options);
}
void UnityEngine_GameObject::SendMessage2(unknown_type methodName, unknown_type value)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001554));
return _method(this, methodName, value);
}
void UnityEngine_GameObject::SendMessage3(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001555));
return _method(this, methodName);
}
void UnityEngine_GameObject::BroadcastMessage1(unknown_type methodName, unknown_type parameter, unknown_type options)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001556));
return _method(this, methodName, parameter, options);
}
void UnityEngine_GameObject::BroadcastMessage2(unknown_type methodName, unknown_type parameter)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001557));
return _method(this, methodName, parameter);
}
void UnityEngine_GameObject::BroadcastMessage3(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001558));
return _method(this, methodName);
}
void UnityEngine_GameObject::Internal_CreateGameObject(UnityEngine_GameObject* self, unknown_type name)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600155C));
return _method(self, name);
}
UnityEngine_GameObject* UnityEngine_GameObject::Find(unknown_type name)
{
using method_t = UnityEngine_GameObject*(*)(unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600155D));
return _method(name);
}
unknown_type UnityEngine_GameObject::get_scene()
{
using method_t = unknown_type(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600155E));
return _method(this);
}
uint64_t UnityEngine_GameObject::get_sceneCullingMask()
{
using method_t = uint64_t(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x0600155F));
return _method(this);
}
UnityEngine_GameObject* UnityEngine_GameObject::get_gameObject()
{
using method_t = UnityEngine_GameObject*(*)(UnityEngine_GameObject*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001560));
return _method(this);
}
void UnityEngine_GameObject::get_scene_Injected(unknown_type ret)
{
using method_t = void(*)(UnityEngine_GameObject*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "GameObject", 0x06001561));
return _method(this, ret);
}
};
