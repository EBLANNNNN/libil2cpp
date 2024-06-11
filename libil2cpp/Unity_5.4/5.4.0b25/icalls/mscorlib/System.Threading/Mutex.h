#pragma once

#include <stdint.h>
#include "object-internals.h"
#include "il2cpp-config.h"

struct Il2CppString;

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Threading
{

struct MonoIOError;

typedef int32_t MutexRights;

class LIBIL2CPP_CODEGEN_API Mutex
{
public:
	static Il2CppIntPtr CreateMutex_internal (bool initiallyOwned, Il2CppString* name, bool* created);
	static Il2CppIntPtr OpenMutex_internal (Il2CppString* name, MutexRights rights, MonoIOError* error);
	static bool ReleaseMutex_internal (Il2CppIntPtr handle);
};

} /* namespace Threading */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
