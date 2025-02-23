#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LodestoneCompassComponentCalculator {
public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator();

private:
    // NOLINTBEGIN
    // symbol: ?COOLDOWN_TIME_SECONDS@LodestoneCompassComponentCalculator@@0MA
    MCAPI static float COOLDOWN_TIME_SECONDS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $COOLDOWN_TIME_SECONDS() { return COOLDOWN_TIME_SECONDS; }

    // NOLINTEND
};
