#include "../../sdk.h"
namespace SDK
{
uintptr_t UnityEngine_Component::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("UnityEngine.CoreModule", "UnityEngine", "Component");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
UnityEngine_Transform* UnityEngine_Component::get_transform()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Component*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014D6));
return _method(this);
}
UnityEngine_GameObject* UnityEngine_Component::get_gameObject()
{
using method_t = UnityEngine_GameObject*(*)(UnityEngine_Component*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014D7));
return _method(this);
}
UnityEngine_Component* UnityEngine_Component::GetComponent(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014D8));
return _method(this, type);
}
void UnityEngine_Component::GetComponentFastPath(unknown_type type, intptr_t oneFurtherThanResultValue)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, intptr_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014D9));
return _method(this, type, oneFurtherThanResultValue);
}
bool UnityEngine_Component::TryGetComponent(unknown_type type, UnityEngine_Component*& component)
{
using method_t = bool(*)(UnityEngine_Component*, unknown_type, UnityEngine_Component*&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014DB));
return _method(this, type, component);
}
UnityEngine_Component* UnityEngine_Component::GetComponent1(unknown_type type)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014DD));
return _method(this, type);
}
UnityEngine_Component* UnityEngine_Component::GetComponentInChildren(unknown_type t, bool includeInactive)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_Component*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014DE));
return _method(this, t, includeInactive);
}
UnityEngine_Component* UnityEngine_Component::GetComponentInChildren1(unknown_type t)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014DF));
return _method(this, t);
}
unknown_type UnityEngine_Component::GetComponentsInChildren(unknown_type t, bool includeInactive)
{
using method_t = unknown_type(*)(UnityEngine_Component*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014E2));
return _method(this, t, includeInactive);
}
unknown_type UnityEngine_Component::GetComponentsInChildren1(unknown_type t)
{
using method_t = unknown_type(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014E3));
return _method(this, t);
}
UnityEngine_Component* UnityEngine_Component::GetComponentInParent(unknown_type t)
{
using method_t = UnityEngine_Component*(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014E8));
return _method(this, t);
}
unknown_type UnityEngine_Component::GetComponentsInParent(unknown_type t, bool includeInactive)
{
using method_t = unknown_type(*)(UnityEngine_Component*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014EA));
return _method(this, t, includeInactive);
}
unknown_type UnityEngine_Component::GetComponentsInParent1(unknown_type t)
{
using method_t = unknown_type(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014EB));
return _method(this, t);
}
unknown_type UnityEngine_Component::GetComponents(unknown_type type)
{
using method_t = unknown_type(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014EF));
return _method(this, type);
}
void UnityEngine_Component::GetComponentsForListInternal(unknown_type searchType, unknown_type resultList)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F0));
return _method(this, searchType, resultList);
}
void UnityEngine_Component::GetComponents1(unknown_type type, unknown_type results)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F1));
return _method(this, type, results);
}
unknown_type UnityEngine_Component::get_tag()
{
using method_t = unknown_type(*)(UnityEngine_Component*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F3));
return _method(this);
}
void UnityEngine_Component::set_tag(unknown_type value)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F4));
return _method(this, value);
}
bool UnityEngine_Component::CompareTag(unknown_type tag)
{
using method_t = bool(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F6));
return _method(this, tag);
}
void UnityEngine_Component::SendMessageUpwards(unknown_type methodName, unknown_type value, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F7));
return _method(this, methodName, value, options);
}
void UnityEngine_Component::SendMessageUpwards1(unknown_type methodName, unknown_type value)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F8));
return _method(this, methodName, value);
}
void UnityEngine_Component::SendMessageUpwards2(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014F9));
return _method(this, methodName);
}
void UnityEngine_Component::SendMessageUpwards3(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FA));
return _method(this, methodName, options);
}
void UnityEngine_Component::SendMessage(unknown_type methodName, unknown_type value)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FB));
return _method(this, methodName, value);
}
void UnityEngine_Component::SendMessage1(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FC));
return _method(this, methodName);
}
void UnityEngine_Component::SendMessage2(unknown_type methodName, unknown_type value, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FD));
return _method(this, methodName, value, options);
}
void UnityEngine_Component::SendMessage3(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FE));
return _method(this, methodName, options);
}
void UnityEngine_Component::BroadcastMessage(unknown_type methodName, unknown_type parameter, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x060014FF));
return _method(this, methodName, parameter, options);
}
void UnityEngine_Component::BroadcastMessage1(unknown_type methodName, unknown_type parameter)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x06001500));
return _method(this, methodName, parameter);
}
void UnityEngine_Component::BroadcastMessage2(unknown_type methodName)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x06001501));
return _method(this, methodName);
}
void UnityEngine_Component::BroadcastMessage3(unknown_type methodName, unknown_type options)
{
using method_t = void(*)(UnityEngine_Component*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Component", 0x06001502));
return _method(this, methodName, options);
}
};
