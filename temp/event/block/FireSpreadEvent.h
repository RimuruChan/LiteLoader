#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockPos.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Fire spread event.
 */
class FireSpreadEvent : public Event<FireSpreadEvent>, public Cancellable {
    LL_RO_MEMBER(BlockPos, target, getTarget);
    LL_RO_MEMBER(int32_t, dimensionId, getDimensionId);

    explicit FireSpreadEvent(BlockPos const& target, int32_t dimensionId = -1);

    LL_DELETE_COPY(FireSpreadEvent);
    LL_DELETE_MOVE(FireSpreadEvent);
};
} // namespace ll::event::block
