#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/ItemStack.hpp"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player inventory change event.
 * @details This event is called when a player's inventory changes.
 */
class PlayerInventoryChangeEvent : public Event<PlayerInventoryChangeEvent> {
public:
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RW_MEMBER(int32_t, slot, getSlot, setSlot);
    LL_RO_MEMBER(ItemStack*, previousItemStack, getPreviousItemStack);
    LL_RO_MEMBER(ItemStack*, newItemStack, getNewItemStack);

    PlayerInventoryChangeEvent(Player* player, int32_t slot, ItemStack* oldItem, ItemStack* newItem);

    LL_DELETE_COPY(PlayerInventoryChangeEvent);
    LL_DELETE_MOVE(PlayerInventoryChangeEvent);
};

} // namespace ll::event::player
