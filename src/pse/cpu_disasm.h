#pragma once
#include "YBaseLib/String.h"
#include "cpu_types.h"

namespace CPU {
class Core;

void DisassembleInstruction(String* dest, u32 pc, u32 bits, Core* state = nullptr);
} // namespace CPU
