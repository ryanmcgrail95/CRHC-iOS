﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t1762676876;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct  Entry_t1762676876  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_t1762676876 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___Next_2)); }
	inline Entry_t1762676876 * get_Next_2() const { return ___Next_2; }
	inline Entry_t1762676876 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t1762676876 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier(&___Next_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
