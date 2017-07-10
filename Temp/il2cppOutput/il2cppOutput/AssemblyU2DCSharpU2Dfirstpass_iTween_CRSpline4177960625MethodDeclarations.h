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

// iTween/CRSpline
struct CRSpline_t4177960625;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void CRSpline__ctor_m307003237 (CRSpline_t4177960625 * __this, Vector3U5BU5D_t1172311765* ___pts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C"  Vector3_t2243707580  CRSpline_Interp_m3977654189 (CRSpline_t4177960625 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
