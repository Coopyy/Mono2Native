#include "../../sdk.h"
namespace SDK
{
uintptr_t UnityEngine_Vector3::StaticInstance()
{
static mono_class_t* _class = Mono::find_class("UnityEngine.CoreModule", "UnityEngine", "Vector3");
static uintptr_t _instance = _class->get_vtable(Mono::root_domain())->get_static_field_data();
return _instance;
}
float UnityEngine_Vector3::kEpsilon_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "kEpsilon");
return Memory::read<float>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::kEpsilon_S(float value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "kEpsilon");
Memory::write<float>(value, StaticInstance() + _offset);
}
float UnityEngine_Vector3::kEpsilonNormalSqrt_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "kEpsilonNormalSqrt");
return Memory::read<float>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::kEpsilonNormalSqrt_S(float value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "kEpsilonNormalSqrt");
Memory::write<float>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::zeroVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "zeroVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::zeroVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "zeroVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::oneVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "oneVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::oneVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "oneVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::upVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "upVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::upVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "upVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::downVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "downVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::downVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "downVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::leftVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "leftVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::leftVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "leftVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::rightVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "rightVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::rightVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "rightVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::forwardVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "forwardVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::forwardVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "forwardVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::backVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "backVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::backVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "backVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::positiveInfinityVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "positiveInfinityVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::positiveInfinityVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "positiveInfinityVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::negativeInfinityVector_G()
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "negativeInfinityVector");
return Memory::read<UnityEngine_Vector3>(StaticInstance() + _offset);
}
void UnityEngine_Vector3::negativeInfinityVector_S(UnityEngine_Vector3 value)
{
static uintptr_t _offset = Mono::field_offset("UnityEngine.CoreModule", "UnityEngine", "Vector3", "negativeInfinityVector");
Memory::write<UnityEngine_Vector3>(value, StaticInstance() + _offset);
}
UnityEngine_Vector3 UnityEngine_Vector3::Slerp(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600126F));
return _method(a, b, t);
}
UnityEngine_Vector3 UnityEngine_Vector3::SlerpUnclamped(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001270));
return _method(a, b, t);
}
void UnityEngine_Vector3::OrthoNormalize2(UnityEngine_Vector3& a, UnityEngine_Vector3& b)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001271));
return _method(a, b);
}
void UnityEngine_Vector3::OrthoNormalize(UnityEngine_Vector3& normal, UnityEngine_Vector3& tangent)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001272));
return _method(normal, tangent);
}
void UnityEngine_Vector3::OrthoNormalize3(UnityEngine_Vector3& a, UnityEngine_Vector3& b, UnityEngine_Vector3& c)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001273));
return _method(a, b, c);
}
void UnityEngine_Vector3::OrthoNormalize1(UnityEngine_Vector3& normal, UnityEngine_Vector3& tangent, UnityEngine_Vector3& binormal)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001274));
return _method(normal, tangent, binormal);
}
UnityEngine_Vector3 UnityEngine_Vector3::RotateTowards(UnityEngine_Vector3 current, UnityEngine_Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001275));
return _method(current, target, maxRadiansDelta, maxMagnitudeDelta);
}
UnityEngine_Vector3 UnityEngine_Vector3::Lerp(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001276));
return _method(a, b, t);
}
UnityEngine_Vector3 UnityEngine_Vector3::LerpUnclamped(UnityEngine_Vector3 a, UnityEngine_Vector3 b, float t)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001277));
return _method(a, b, t);
}
UnityEngine_Vector3 UnityEngine_Vector3::MoveTowards(UnityEngine_Vector3 current, UnityEngine_Vector3 target, float maxDistanceDelta)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001278));
return _method(current, target, maxDistanceDelta);
}
UnityEngine_Vector3 UnityEngine_Vector3::SmoothDamp(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime, float maxSpeed)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, UnityEngine_Vector3&, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001279));
return _method(current, target, currentVelocity, smoothTime, maxSpeed);
}
UnityEngine_Vector3 UnityEngine_Vector3::SmoothDamp1(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, UnityEngine_Vector3&, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600127A));
return _method(current, target, currentVelocity, smoothTime);
}
UnityEngine_Vector3 UnityEngine_Vector3::SmoothDamp2(UnityEngine_Vector3 current, UnityEngine_Vector3 target, UnityEngine_Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3, UnityEngine_Vector3&, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600127B));
return _method(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
}
float UnityEngine_Vector3::get_Item(int32_t index)
{
using method_t = float(*)(UnityEngine_Vector3*, int32_t);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600127C));
return _method(this, index);
}
void UnityEngine_Vector3::set_Item(int32_t index, float value)
{
using method_t = void(*)(UnityEngine_Vector3*, int32_t, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600127D));
return _method(this, index, value);
}
void UnityEngine_Vector3::Set(float newX, float newY, float newZ)
{
using method_t = void(*)(UnityEngine_Vector3*, float, float, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001280));
return _method(this, newX, newY, newZ);
}
UnityEngine_Vector3 UnityEngine_Vector3::Scale(UnityEngine_Vector3 a, UnityEngine_Vector3 b)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001281));
return _method(a, b);
}
void UnityEngine_Vector3::Scale1(UnityEngine_Vector3 scale)
{
using method_t = void(*)(UnityEngine_Vector3*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001282));
return _method(this, scale);
}
UnityEngine_Vector3 UnityEngine_Vector3::Cross(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001283));
return _method(lhs, rhs);
}
int32_t UnityEngine_Vector3::GetHashCode()
{
using method_t = int32_t(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001284));
return _method(this);
}
bool UnityEngine_Vector3::Equals(unknown_type other)
{
using method_t = bool(*)(UnityEngine_Vector3*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001285));
return _method(this, other);
}
bool UnityEngine_Vector3::Equals1(UnityEngine_Vector3 other)
{
using method_t = bool(*)(UnityEngine_Vector3*, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001286));
return _method(this, other);
}
UnityEngine_Vector3 UnityEngine_Vector3::Reflect(UnityEngine_Vector3 inDirection, UnityEngine_Vector3 inNormal)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001287));
return _method(inDirection, inNormal);
}
UnityEngine_Vector3 UnityEngine_Vector3::Normalize(UnityEngine_Vector3 value)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001288));
return _method(value);
}
void UnityEngine_Vector3::Normalize1()
{
using method_t = void(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001289));
return _method(this);
}
UnityEngine_Vector3 UnityEngine_Vector3::get_normalized()
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128A));
return _method(this);
}
float UnityEngine_Vector3::Dot(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = float(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128B));
return _method(lhs, rhs);
}
UnityEngine_Vector3 UnityEngine_Vector3::Project(UnityEngine_Vector3 vector, UnityEngine_Vector3 onNormal)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128C));
return _method(vector, onNormal);
}
UnityEngine_Vector3 UnityEngine_Vector3::ProjectOnPlane(UnityEngine_Vector3 vector, UnityEngine_Vector3 planeNormal)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128D));
return _method(vector, planeNormal);
}
float UnityEngine_Vector3::Angle(UnityEngine_Vector3 from, UnityEngine_Vector3 to)
{
using method_t = float(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128E));
return _method(from, to);
}
float UnityEngine_Vector3::SignedAngle(UnityEngine_Vector3 from, UnityEngine_Vector3 to, UnityEngine_Vector3 axis)
{
using method_t = float(*)(UnityEngine_Vector3, UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600128F));
return _method(from, to, axis);
}
float UnityEngine_Vector3::Distance(UnityEngine_Vector3 a, UnityEngine_Vector3 b)
{
using method_t = float(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001290));
return _method(a, b);
}
UnityEngine_Vector3 UnityEngine_Vector3::ClampMagnitude(UnityEngine_Vector3 vector, float maxLength)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001291));
return _method(vector, maxLength);
}
float UnityEngine_Vector3::Magnitude(UnityEngine_Vector3 vector)
{
using method_t = float(*)(UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001292));
return _method(vector);
}
float UnityEngine_Vector3::get_magnitude()
{
using method_t = float(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001293));
return _method(this);
}
float UnityEngine_Vector3::SqrMagnitude(UnityEngine_Vector3 vector)
{
using method_t = float(*)(UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001294));
return _method(vector);
}
float UnityEngine_Vector3::get_sqrMagnitude()
{
using method_t = float(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001295));
return _method(this);
}
UnityEngine_Vector3 UnityEngine_Vector3::Min(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001296));
return _method(lhs, rhs);
}
UnityEngine_Vector3 UnityEngine_Vector3::Max(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001297));
return _method(lhs, rhs);
}
UnityEngine_Vector3 UnityEngine_Vector3::get_zero()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001298));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_one()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x06001299));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_forward()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129A));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_back()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129B));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_up()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129C));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_down()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129D));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_left()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129E));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_right()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x0600129F));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_positiveInfinity()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A0));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::get_negativeInfinity()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A1));
return _method();
}
UnityEngine_Vector3 UnityEngine_Vector3::op_Addition(UnityEngine_Vector3 a, UnityEngine_Vector3 b)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A2));
return _method(a, b);
}
UnityEngine_Vector3 UnityEngine_Vector3::op_Subtraction(UnityEngine_Vector3 a, UnityEngine_Vector3 b)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A3));
return _method(a, b);
}
UnityEngine_Vector3 UnityEngine_Vector3::op_UnaryNegation(UnityEngine_Vector3 a)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A4));
return _method(a);
}
UnityEngine_Vector3 UnityEngine_Vector3::op_Multiply(UnityEngine_Vector3 a, float d)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A5));
return _method(a, d);
}
UnityEngine_Vector3 UnityEngine_Vector3::op_Multiply1(float d, UnityEngine_Vector3 a)
{
using method_t = UnityEngine_Vector3(*)(float, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A6));
return _method(d, a);
}
UnityEngine_Vector3 UnityEngine_Vector3::op_Division(UnityEngine_Vector3 a, float d)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, float);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A7));
return _method(a, d);
}
bool UnityEngine_Vector3::op_Equality(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = bool(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A8));
return _method(lhs, rhs);
}
bool UnityEngine_Vector3::op_Inequality(UnityEngine_Vector3 lhs, UnityEngine_Vector3 rhs)
{
using method_t = bool(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012A9));
return _method(lhs, rhs);
}
unknown_type UnityEngine_Vector3::ToString()
{
using method_t = unknown_type(*)(UnityEngine_Vector3*);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AA));
return _method(this);
}
unknown_type UnityEngine_Vector3::ToString1(unknown_type format)
{
using method_t = unknown_type(*)(UnityEngine_Vector3*, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AB));
return _method(this, format);
}
unknown_type UnityEngine_Vector3::ToString2(unknown_type format, unknown_type formatProvider)
{
using method_t = unknown_type(*)(UnityEngine_Vector3*, unknown_type, unknown_type);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AC));
return _method(this, format, formatProvider);
}
UnityEngine_Vector3 UnityEngine_Vector3::get_fwd()
{
using method_t = UnityEngine_Vector3(*)();
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AD));
return _method();
}
float UnityEngine_Vector3::AngleBetween(UnityEngine_Vector3 from, UnityEngine_Vector3 to)
{
using method_t = float(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AE));
return _method(from, to);
}
UnityEngine_Vector3 UnityEngine_Vector3::Exclude(UnityEngine_Vector3 excludeThis, UnityEngine_Vector3 fromThat)
{
using method_t = UnityEngine_Vector3(*)(UnityEngine_Vector3, UnityEngine_Vector3);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012AF));
return _method(excludeThis, fromThat);
}
void UnityEngine_Vector3::Slerp_Injected(UnityEngine_Vector3& a, UnityEngine_Vector3& b, float t, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&, float, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012B1));
return _method(a, b, t, ret);
}
void UnityEngine_Vector3::SlerpUnclamped_Injected(UnityEngine_Vector3& a, UnityEngine_Vector3& b, float t, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&, float, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012B2));
return _method(a, b, t, ret);
}
void UnityEngine_Vector3::RotateTowards_Injected(UnityEngine_Vector3& current, UnityEngine_Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine_Vector3& ret)
{
using method_t = void(*)(UnityEngine_Vector3&, UnityEngine_Vector3&, float, float, UnityEngine_Vector3&);
static method_t _method = reinterpret_cast<method_t>(Mono::find_method_by_token("UnityEngine.CoreModule", "UnityEngine", "Vector3", 0x060012B3));
return _method(current, target, maxRadiansDelta, maxMagnitudeDelta, ret);
}
};
