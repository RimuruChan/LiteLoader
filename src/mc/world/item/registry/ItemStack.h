#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ItemStack : public ::ItemStackBase {
public:
    ItemStackNetIdVariant mNetIdVariant;

    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reinit@ItemStack@@UEAAXAEBVItem@@HH@Z
    virtual void reinit(class Item const&, int, int);

    // vIndex: 2, symbol: ?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z
    virtual void reinit(class BlockLegacy const&, int);

    // vIndex: 3, symbol: ?reinit@ItemStack@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@HH@Z
    virtual void reinit(std::string_view, int, int);

    // vIndex: 4, symbol:
    // ?setNull@ItemStack@@UEAAXV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    virtual void setNull(std::optional<std::string>);

    // vIndex: 5, symbol: ?toString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 6, symbol:
    // ?toDebugString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toDebugString() const;

    // symbol: ??1ItemStack@@UEAA@XZ
    MCVAPI ~ItemStack();

    // symbol: ??0ItemStack@@QEAA@AEBVItemInstance@@@Z
    MCAPI explicit ItemStack(class ItemInstance const&);

    // symbol: ??0ItemStack@@QEAA@AEBVRecipeIngredient@@@Z
    MCAPI explicit ItemStack(class RecipeIngredient const&);

    // symbol: ??0ItemStack@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
    MCAPI
    ItemStack(class Item const& item, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    // symbol: ??0ItemStack@@QEAA@XZ
    MCAPI ItemStack();

    // symbol: ??0ItemStack@@QEAA@AEBV0@@Z
    MCAPI ItemStack(class ItemStack const&);

    // symbol: ??0ItemStack@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HHPEBVCompoundTag@@@Z
    MCAPI
    ItemStack(std::string_view name, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    // symbol: ??0ItemStack@@QEAA@AEBVBlockLegacy@@H@Z
    MCAPI ItemStack(class BlockLegacy const& blockLegacy, int count = 1);

    // symbol: ??0ItemStack@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
    MCAPI ItemStack(class Block const& block, int count = 1, class CompoundTag const* userData = nullptr);

    // symbol: ?_assignNetIdVariant@ItemStack@@QEBAXAEBV1@@Z
    MCAPI void _assignNetIdVariant(class ItemStack const&) const;

    // symbol: ?clientInitLegacyRequestId@ItemStack@@QEAAXAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@@Z
    MCAPI void clientInitLegacyRequestId(ItemStackLegacyRequestId const&);

    // symbol: ?clone@ItemStack@@QEBA?AV1@XZ
    MCAPI class ItemStack clone() const;

    // symbol: ?getDestroySpeed@ItemStack@@QEBAMAEBVBlock@@@Z
    MCAPI float getDestroySpeed(class Block const&) const;

    // symbol: ?getItemStackNetIdVariant@ItemStack@@QEBAAEBUItemStackNetIdVariant@@XZ
    MCAPI struct ItemStackNetIdVariant const& getItemStackNetIdVariant() const;

    // symbol: ?getMaxUseDuration@ItemStack@@QEBAHXZ
    MCAPI int getMaxUseDuration() const;

    // symbol: ?getStrippedNetworkItem@ItemStack@@QEBA?AV1@XZ
    MCAPI class ItemStack getStrippedNetworkItem() const;

    // symbol: ?hasItemStackNetId@ItemStack@@QEBA_NXZ
    MCAPI bool hasItemStackNetId() const;

    // symbol: ?inventoryTick@ItemStack@@QEAA_NAEAVLevel@@AEAVActor@@H_N@Z
    MCAPI bool inventoryTick(class Level&, class Actor&, int, bool);

    // symbol: ?matchesAndNetIdVariantMatches@ItemStack@@QEBA_NAEBV1@@Z
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const&) const;

    // symbol: ?matchesNetIdVariant@ItemStack@@QEBA_NAEBV1@@Z
    MCAPI bool matchesNetIdVariant(class ItemStack const&) const;

    // symbol: ?mineBlock@ItemStack@@QEAAXAEBVBlock@@HHHPEAVMob@@@Z
    MCAPI void mineBlock(class Block const& block, int x, int y, int z, class Mob* owner);

    // symbol: ??4ItemStack@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ItemStack& operator=(class ItemStack const&);

    // symbol: ?playSoundIncrementally@ItemStack@@QEBAXAEAVMob@@@Z
    MCAPI void playSoundIncrementally(class Mob&) const;

    // symbol: ?releaseUsing@ItemStack@@QEAAXPEAVPlayer@@H@Z
    MCAPI void releaseUsing(class Player*, int);

    // symbol: ?sameItemAndAuxAndBlockData@ItemStack@@QEBA_NAEBV1@@Z
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const&) const;

    // symbol: ?serverInitNetId@ItemStack@@QEAAXXZ
    MCAPI void serverInitNetId();

    // symbol: ?tryGetItemStackNetId@ItemStack@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
    MCAPI ItemStackNetId const* tryGetItemStackNetId() const;

    // symbol: ?use@ItemStack@@QEAAAEAV1@AEAVPlayer@@@Z
    MCAPI class ItemStack& use(class Player&);

    // symbol: ?useAsFuel@ItemStack@@QEAAXXZ
    MCAPI void useAsFuel();

    // symbol: ?useOn@ItemStack@@QEAA?AVInteractionResult@@AEAVActor@@HHHEAEBVVec3@@@Z
    MCAPI class InteractionResult
    useOn(class Actor& entity, int x, int y, int z, uchar face, class Vec3 const& clickPos);

    // symbol: ?useTimeDepleted@ItemStack@@QEAA?AW4ItemUseMethod@@PEAVLevel@@PEAVPlayer@@@Z
    MCAPI ::ItemUseMethod useTimeDepleted(class Level*, class Player*);

    // symbol: ?fromDescriptor@ItemStack@@SA?AV1@AEBVNetworkItemStackDescriptor@@AEAVBlockPalette@@_N@Z
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const&, class BlockPalette&, bool);

    // symbol: ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static class ItemStack fromTag(class CompoundTag const&, class Level&);

    // symbol: ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z
    MCAPI static class ItemStack fromTag(class CompoundTag const&);

    // symbol: ?EMPTY_ITEM@ItemStack@@2V1@B
    MCAPI static class ItemStack const EMPTY_ITEM;

    // NOLINTEND
};
