#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZST_SmartTile/Coord
struct  Coord_t3201679135 
{
public:
	// System.Int32 ZST_SmartTile/Coord::row
	int32_t ___row_0;
	// System.Int32 ZST_SmartTile/Coord::col
	int32_t ___col_1;

public:
	inline static int32_t get_offset_of_row_0() { return static_cast<int32_t>(offsetof(Coord_t3201679135, ___row_0)); }
	inline int32_t get_row_0() const { return ___row_0; }
	inline int32_t* get_address_of_row_0() { return &___row_0; }
	inline void set_row_0(int32_t value)
	{
		___row_0 = value;
	}

	inline static int32_t get_offset_of_col_1() { return static_cast<int32_t>(offsetof(Coord_t3201679135, ___col_1)); }
	inline int32_t get_col_1() const { return ___col_1; }
	inline int32_t* get_address_of_col_1() { return &___col_1; }
	inline void set_col_1(int32_t value)
	{
		___col_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ZST_SmartTile/Coord
struct Coord_t3201679135_marshaled_pinvoke
{
	int32_t ___row_0;
	int32_t ___col_1;
};
// Native definition for marshalling of: ZST_SmartTile/Coord
struct Coord_t3201679135_marshaled_com
{
	int32_t ___row_0;
	int32_t ___col_1;
};
