#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ZST_SmartTile
struct ZST_SmartTile_t3295116049;
// ZST_SmartTile/Quadrant
struct Quadrant_t4284846640;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_NativeAdType1094124130.h"
#include "AssemblyU2DCSharp_ZST_SmartTile3295116049.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Coord3201679135.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_CardinalDirection2226844457.h"
#include "AssemblyU2DCSharp_ZST_SmartTile_Quadrant4284846640.h"

#pragma once
// GoogleMobileAds.Api.NativeAdType[]
struct NativeAdTypeU5BU5D_t2772766167  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ZST_SmartTile[]
struct ZST_SmartTileU5BU5D_t2332101004  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ZST_SmartTile_t3295116049 * m_Items[1];

public:
	inline ZST_SmartTile_t3295116049 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ZST_SmartTile_t3295116049 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ZST_SmartTile_t3295116049 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ZST_SmartTile/Coord[]
struct CoordU5BU5D_t2349997446  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Coord_t3201679135  m_Items[1];

public:
	inline Coord_t3201679135  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Coord_t3201679135 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Coord_t3201679135  value)
	{
		m_Items[index] = value;
	}
};
// ZST_SmartTile/CardinalDirection[]
struct CardinalDirectionU5BU5D_t3419928084  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ZST_SmartTile/Quadrant[]
struct QuadrantU5BU5D_t3309727505  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Quadrant_t4284846640 * m_Items[1];

public:
	inline Quadrant_t4284846640 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Quadrant_t4284846640 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Quadrant_t4284846640 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
