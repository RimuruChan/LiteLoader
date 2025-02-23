#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMoveSystems {
public:
    // prevent constructor by default
    PlayerMoveSystems& operator=(PlayerMoveSystems const&);
    PlayerMoveSystems(PlayerMoveSystems const&);
    PlayerMoveSystems();

public:
    // NOLINTBEGIN
    // symbol: ?createLocalPlayerPreMoveJumpSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveJumpSystem();

    // symbol: ?createLocalPlayerPreMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveSystem();

    // symbol: ?createPlayerPostMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

    // NOLINTEND
};
