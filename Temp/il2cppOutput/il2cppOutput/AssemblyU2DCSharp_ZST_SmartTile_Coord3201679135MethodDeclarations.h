#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ZST_SmartTile/Coord
struct Coord_t3201679135;
struct Coord_t3201679135_marshaled_pinvoke;
struct Coord_t3201679135_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Coord3201679135.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void ZST_SmartTile/Coord::.ctor(System.Int32,System.Int32)
extern "C"  void Coord__ctor_m2492538772 (Coord_t3201679135 * __this, int32_t ____row0, int32_t ____col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ZST_SmartTile/Coord::ToVector2()
extern "C"  Vector2_t2243707579  Coord_ToVector2_m1231567473 (Coord_t3201679135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Coord_t3201679135;
struct Coord_t3201679135_marshaled_pinvoke;

extern "C" void Coord_t3201679135_marshal_pinvoke(const Coord_t3201679135& unmarshaled, Coord_t3201679135_marshaled_pinvoke& marshaled);
extern "C" void Coord_t3201679135_marshal_pinvoke_back(const Coord_t3201679135_marshaled_pinvoke& marshaled, Coord_t3201679135& unmarshaled);
extern "C" void Coord_t3201679135_marshal_pinvoke_cleanup(Coord_t3201679135_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Coord_t3201679135;
struct Coord_t3201679135_marshaled_com;

extern "C" void Coord_t3201679135_marshal_com(const Coord_t3201679135& unmarshaled, Coord_t3201679135_marshaled_com& marshaled);
extern "C" void Coord_t3201679135_marshal_com_back(const Coord_t3201679135_marshaled_com& marshaled, Coord_t3201679135& unmarshaled);
extern "C" void Coord_t3201679135_marshal_com_cleanup(Coord_t3201679135_marshaled_com& marshaled);
