#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PathCompletionType : int8_t {
    Empty   = 0x0,
    Partial = 0x1,
    Full    = 0x2,
};
