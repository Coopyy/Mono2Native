#include "../../sdk.h"
namespace SDK
{
uintptr_t UnityEngine_Transform::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("UnityEngine.CoreModule", "UnityEngine", "Transform");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
UnityEngine_Vector3 UnityEngine_Transform::get_position()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001848));
return _method(this);
}
void UnityEngine_Transform::set_position(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001849));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::get_localPosition()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184A));
return _method(this);
}
void UnityEngine_Transform::set_localPosition(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184B));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::GetLocalEulerAngles(unknown_type order)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184C));
return _method(this, order);
}
void UnityEngine_Transform::SetLocalEulerAngles(UnityEngine_Vector3 euler, unknown_type order)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184D));
return _method(this, euler, order);
}
void UnityEngine_Transform::SetLocalEulerHint(UnityEngine_Vector3 euler)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184E));
return _method(this, euler);
}
UnityEngine_Vector3 UnityEngine_Transform::get_eulerAngles()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600184F));
return _method(this);
}
void UnityEngine_Transform::set_eulerAngles(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001850));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::get_localEulerAngles()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001851));
return _method(this);
}
void UnityEngine_Transform::set_localEulerAngles(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001852));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::get_right()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001853));
return _method(this);
}
void UnityEngine_Transform::set_right(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001854));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::get_up()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001855));
return _method(this);
}
void UnityEngine_Transform::set_up(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001856));
return _method(this, value);
}
UnityEngine_Vector3 UnityEngine_Transform::get_forward()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001857));
return _method(this);
}
void UnityEngine_Transform::set_forward(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001858));
return _method(this, value);
}
unknown_type UnityEngine_Transform::get_rotation()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001859));
return _method(this);
}
void UnityEngine_Transform::set_rotation(unknown_type value)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185A));
return _method(this, value);
}
unknown_type UnityEngine_Transform::get_localRotation()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185B));
return _method(this);
}
void UnityEngine_Transform::set_localRotation(unknown_type value)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185C));
return _method(this, value);
}
unknown_type UnityEngine_Transform::get_rotationOrder()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185D));
return _method(this);
}
void UnityEngine_Transform::set_rotationOrder(unknown_type value)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185E));
return _method(this, value);
}
int32_t UnityEngine_Transform::GetRotationOrderInternal()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600185F));
return _method(this);
}
void UnityEngine_Transform::SetRotationOrderInternal(unknown_type rotationOrder)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001860));
return _method(this, rotationOrder);
}
UnityEngine_Vector3 UnityEngine_Transform::get_localScale()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001861));
return _method(this);
}
void UnityEngine_Transform::set_localScale(UnityEngine_Vector3 value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001862));
return _method(this, value);
}
UnityEngine_Transform* UnityEngine_Transform::get_parent()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001863));
return _method(this);
}
void UnityEngine_Transform::set_parent(UnityEngine_Transform* value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001864));
return _method(this, value);
}
UnityEngine_Transform* UnityEngine_Transform::get_parentInternal()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001865));
return _method(this);
}
void UnityEngine_Transform::set_parentInternal(UnityEngine_Transform* value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001866));
return _method(this, value);
}
UnityEngine_Transform* UnityEngine_Transform::GetParent()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001867));
return _method(this);
}
void UnityEngine_Transform::SetParent(UnityEngine_Transform* p)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001868));
return _method(this, p);
}
void UnityEngine_Transform::SetParent1(UnityEngine_Transform* parent, bool worldPositionStays)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001869));
return _method(this, parent, worldPositionStays);
}
unknown_type UnityEngine_Transform::get_worldToLocalMatrix()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186A));
return _method(this);
}
unknown_type UnityEngine_Transform::get_localToWorldMatrix()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186B));
return _method(this);
}
void UnityEngine_Transform::SetPositionAndRotation(UnityEngine_Vector3 position, unknown_type rotation)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186C));
return _method(this, position, rotation);
}
void UnityEngine_Transform::Translate(UnityEngine_Vector3 translation, unknown_type relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186D));
return _method(this, translation, relativeTo);
}
void UnityEngine_Transform::Translate1(UnityEngine_Vector3 translation)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186E));
return _method(this, translation);
}
void UnityEngine_Transform::Translate2(float x, float y, float z, unknown_type relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, float, float, float, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600186F));
return _method(this, x, y, z, relativeTo);
}
void UnityEngine_Transform::Translate3(float x, float y, float z)
{
using method_t = void(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001870));
return _method(this, x, y, z);
}
void UnityEngine_Transform::Translate4(UnityEngine_Vector3 translation, UnityEngine_Transform* relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001871));
return _method(this, translation, relativeTo);
}
void UnityEngine_Transform::Translate5(float x, float y, float z, UnityEngine_Transform* relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, float, float, float, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001872));
return _method(this, x, y, z, relativeTo);
}
void UnityEngine_Transform::Rotate(UnityEngine_Vector3 eulers, unknown_type relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001873));
return _method(this, eulers, relativeTo);
}
void UnityEngine_Transform::Rotate1(UnityEngine_Vector3 eulers)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001874));
return _method(this, eulers);
}
void UnityEngine_Transform::Rotate2(float xAngle, float yAngle, float zAngle, unknown_type relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, float, float, float, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001875));
return _method(this, xAngle, yAngle, zAngle, relativeTo);
}
void UnityEngine_Transform::Rotate3(float xAngle, float yAngle, float zAngle)
{
using method_t = void(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001876));
return _method(this, xAngle, yAngle, zAngle);
}
void UnityEngine_Transform::RotateAroundInternal(UnityEngine_Vector3 axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001877));
return _method(this, axis, angle);
}
void UnityEngine_Transform::Rotate4(UnityEngine_Vector3 axis, float angle, unknown_type relativeTo)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, float, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001878));
return _method(this, axis, angle, relativeTo);
}
void UnityEngine_Transform::Rotate5(UnityEngine_Vector3 axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001879));
return _method(this, axis, angle);
}
void UnityEngine_Transform::RotateAround(UnityEngine_Vector3 point, UnityEngine_Vector3 axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187A));
return _method(this, point, axis, angle);
}
void UnityEngine_Transform::LookAt(UnityEngine_Transform* target, UnityEngine_Vector3 worldUp)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187B));
return _method(this, target, worldUp);
}
void UnityEngine_Transform::LookAt1(UnityEngine_Transform* target)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187C));
return _method(this, target);
}
void UnityEngine_Transform::LookAt2(UnityEngine_Vector3 worldPosition, UnityEngine_Vector3 worldUp)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187D));
return _method(this, worldPosition, worldUp);
}
void UnityEngine_Transform::LookAt3(UnityEngine_Vector3 worldPosition)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187E));
return _method(this, worldPosition);
}
void UnityEngine_Transform::Internal_LookAt(UnityEngine_Vector3 worldPosition, UnityEngine_Vector3 worldUp)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600187F));
return _method(this, worldPosition, worldUp);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformDirection(UnityEngine_Vector3 direction)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001880));
return _method(this, direction);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformDirection1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001881));
return _method(this, x, y, z);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformDirection(UnityEngine_Vector3 direction)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001882));
return _method(this, direction);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformDirection1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001883));
return _method(this, x, y, z);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformVector(UnityEngine_Vector3 vector)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001884));
return _method(this, vector);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformVector1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001885));
return _method(this, x, y, z);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformVector(UnityEngine_Vector3 vector)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001886));
return _method(this, vector);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformVector1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001887));
return _method(this, x, y, z);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformPoint(UnityEngine_Vector3 position)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001888));
return _method(this, position);
}
UnityEngine_Vector3 UnityEngine_Transform::TransformPoint1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001889));
return _method(this, x, y, z);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformPoint(UnityEngine_Vector3 position)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188A));
return _method(this, position);
}
UnityEngine_Vector3 UnityEngine_Transform::InverseTransformPoint1(float x, float y, float z)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188B));
return _method(this, x, y, z);
}
UnityEngine_Transform* UnityEngine_Transform::get_root()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188C));
return _method(this);
}
UnityEngine_Transform* UnityEngine_Transform::GetRoot()
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188D));
return _method(this);
}
int32_t UnityEngine_Transform::get_childCount()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188E));
return _method(this);
}
void UnityEngine_Transform::DetachChildren()
{
using method_t = void(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600188F));
return _method(this);
}
void UnityEngine_Transform::SetAsFirstSibling()
{
using method_t = void(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001890));
return _method(this);
}
void UnityEngine_Transform::SetAsLastSibling()
{
using method_t = void(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001891));
return _method(this);
}
void UnityEngine_Transform::SetSiblingIndex(int32_t index)
{
using method_t = void(*)(UnityEngine_Transform*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001892));
return _method(this, index);
}
void UnityEngine_Transform::MoveAfterSibling(UnityEngine_Transform* transform, bool notifyEditorAndMarkDirty)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Transform*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001893));
return _method(this, transform, notifyEditorAndMarkDirty);
}
int32_t UnityEngine_Transform::GetSiblingIndex()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001894));
return _method(this);
}
UnityEngine_Transform* UnityEngine_Transform::FindRelativeTransformWithPath(UnityEngine_Transform* transform, unknown_type path, bool isActiveOnly)
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*, unknown_type, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001895));
return _method(transform, path, isActiveOnly);
}
UnityEngine_Transform* UnityEngine_Transform::Find(unknown_type n)
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001896));
return _method(this, n);
}
void UnityEngine_Transform::SendTransformChangedScale()
{
using method_t = void(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001897));
return _method(this);
}
UnityEngine_Vector3 UnityEngine_Transform::get_lossyScale()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001898));
return _method(this);
}
bool UnityEngine_Transform::IsChildOf(UnityEngine_Transform* parent)
{
using method_t = bool(*)(UnityEngine_Transform*, UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x06001899));
return _method(this, parent);
}
bool UnityEngine_Transform::get_hasChanged()
{
using method_t = bool(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189A));
return _method(this);
}
void UnityEngine_Transform::set_hasChanged(bool value)
{
using method_t = void(*)(UnityEngine_Transform*, bool);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189B));
return _method(this, value);
}
UnityEngine_Transform* UnityEngine_Transform::FindChild(unknown_type n)
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189C));
return _method(this, n);
}
unknown_type UnityEngine_Transform::GetEnumerator()
{
using method_t = unknown_type(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189D));
return _method(this);
}
void UnityEngine_Transform::RotateAround1(UnityEngine_Vector3 axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189E));
return _method(this, axis, angle);
}
void UnityEngine_Transform::RotateAroundLocal(UnityEngine_Vector3 axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x0600189F));
return _method(this, axis, angle);
}
UnityEngine_Transform* UnityEngine_Transform::GetChild(int32_t index)
{
using method_t = UnityEngine_Transform*(*)(UnityEngine_Transform*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A0));
return _method(this, index);
}
int32_t UnityEngine_Transform::GetChildCount()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A1));
return _method(this);
}
int32_t UnityEngine_Transform::get_hierarchyCapacity()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A2));
return _method(this);
}
void UnityEngine_Transform::set_hierarchyCapacity(int32_t value)
{
using method_t = void(*)(UnityEngine_Transform*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A3));
return _method(this, value);
}
int32_t UnityEngine_Transform::internal_getHierarchyCapacity()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A4));
return _method(this);
}
void UnityEngine_Transform::internal_setHierarchyCapacity(int32_t value)
{
using method_t = void(*)(UnityEngine_Transform*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A5));
return _method(this, value);
}
int32_t UnityEngine_Transform::get_hierarchyCount()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A6));
return _method(this);
}
int32_t UnityEngine_Transform::internal_getHierarchyCount()
{
using method_t = int32_t(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A7));
return _method(this);
}
bool UnityEngine_Transform::IsNonUniformScaleTransform()
{
using method_t = bool(*)(UnityEngine_Transform*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A8));
return _method(this);
}
void UnityEngine_Transform::get_position_Injected(UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018A9));
return _method(this, ret);
}
void UnityEngine_Transform::set_position_Injected(UnityEngine_Vector3& value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AA));
return _method(this, value);
}
void UnityEngine_Transform::get_localPosition_Injected(UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AB));
return _method(this, ret);
}
void UnityEngine_Transform::set_localPosition_Injected(UnityEngine_Vector3& value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AC));
return _method(this, value);
}
void UnityEngine_Transform::GetLocalEulerAngles_Injected(unknown_type order, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AD));
return _method(this, order, ret);
}
void UnityEngine_Transform::SetLocalEulerAngles_Injected(UnityEngine_Vector3& euler, unknown_type order)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AE));
return _method(this, euler, order);
}
void UnityEngine_Transform::SetLocalEulerHint_Injected(UnityEngine_Vector3& euler)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018AF));
return _method(this, euler);
}
void UnityEngine_Transform::get_rotation_Injected(unknown_type ret)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B0));
return _method(this, ret);
}
void UnityEngine_Transform::set_rotation_Injected(unknown_type value)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B1));
return _method(this, value);
}
void UnityEngine_Transform::get_localRotation_Injected(unknown_type ret)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B2));
return _method(this, ret);
}
void UnityEngine_Transform::set_localRotation_Injected(unknown_type value)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B3));
return _method(this, value);
}
void UnityEngine_Transform::get_localScale_Injected(UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B4));
return _method(this, ret);
}
void UnityEngine_Transform::set_localScale_Injected(UnityEngine_Vector3& value)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B5));
return _method(this, value);
}
void UnityEngine_Transform::get_worldToLocalMatrix_Injected(unknown_type ret)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B6));
return _method(this, ret);
}
void UnityEngine_Transform::get_localToWorldMatrix_Injected(unknown_type ret)
{
using method_t = void(*)(UnityEngine_Transform*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B7));
return _method(this, ret);
}
void UnityEngine_Transform::SetPositionAndRotation_Injected(UnityEngine_Vector3& position, unknown_type rotation)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B8));
return _method(this, position, rotation);
}
void UnityEngine_Transform::RotateAroundInternal_Injected(UnityEngine_Vector3& axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018B9));
return _method(this, axis, angle);
}
void UnityEngine_Transform::Internal_LookAt_Injected(UnityEngine_Vector3& worldPosition, UnityEngine_Vector3& worldUp)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BA));
return _method(this, worldPosition, worldUp);
}
void UnityEngine_Transform::TransformDirection_Injected(UnityEngine_Vector3& direction, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BB));
return _method(this, direction, ret);
}
void UnityEngine_Transform::InverseTransformDirection_Injected(UnityEngine_Vector3& direction, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BC));
return _method(this, direction, ret);
}
void UnityEngine_Transform::TransformVector_Injected(UnityEngine_Vector3& vector, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BD));
return _method(this, vector, ret);
}
void UnityEngine_Transform::InverseTransformVector_Injected(UnityEngine_Vector3& vector, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BE));
return _method(this, vector, ret);
}
void UnityEngine_Transform::TransformPoint_Injected(UnityEngine_Vector3& position, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018BF));
return _method(this, position, ret);
}
void UnityEngine_Transform::InverseTransformPoint_Injected(UnityEngine_Vector3& position, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018C0));
return _method(this, position, ret);
}
void UnityEngine_Transform::get_lossyScale_Injected(UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018C1));
return _method(this, ret);
}
void UnityEngine_Transform::RotateAround_Injected(UnityEngine_Vector3& axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018C2));
return _method(this, axis, angle);
}
void UnityEngine_Transform::RotateAroundLocal_Injected(UnityEngine_Vector3& axis, float angle)
{
using method_t = void(*)(UnityEngine_Transform*, UnityEngine_Vector3&, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Transform", 0x060018C3));
return _method(this, axis, angle);
}
};
