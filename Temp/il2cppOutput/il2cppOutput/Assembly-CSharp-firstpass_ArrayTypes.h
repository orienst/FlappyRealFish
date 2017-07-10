#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// iTween
struct iTween_t488923914;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween488923914.h"

#pragma once
// iTween[]
struct iTweenU5BU5D_t3297840527  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) iTween_t488923914 * m_Items[1];

public:
	inline iTween_t488923914 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline iTween_t488923914 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, iTween_t488923914 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
