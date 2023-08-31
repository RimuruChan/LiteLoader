#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorData {

public:
    int32_t (**_vptr_SynchedActorData)(void);

    std::vector<std::unique_ptr<class DataItem>> mItemsArray; // this+0x8
    uint16_t                               minIdxDirty; // this+0x20
    uint16_t                               maxIdxDirty; // this+0x22

    template <typename T>
    MCAPI void define(uint16_t, T const&);
    template <typename T>
    MCAPI void set(uint16_t, T const&);

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SynchedActorData\@\@QEAA\@XZ
     */
    MCAPI SynchedActorData();
    /**
     * @symbol ??0SynchedActorData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SynchedActorData(class SynchedActorData&&);
    /**
     * @symbol ?_clone\@SynchedActorData\@\@QEBA?AV1\@XZ
     */
    MCAPI class SynchedActorData _clone() const;
    /**
     * @symbol
     * ?assignValues\@SynchedActorData\@\@QEAA_NAEBV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool assignValues(std::vector<std::unique_ptr<class DataItem>> const&, class Actor*);
    /**
     * @symbol
     * ?forEachDataItem\@SynchedActorData\@\@QEBAXAEBV?$function\@$$A6AXAEBV?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachDataItem(std::function<void(std::unique_ptr<class DataItem> const&)> const&) const;
    /**
     * @symbol ?getFloat\@SynchedActorData\@\@QEBAMG\@Z
     */
    MCAPI float getFloat(uint16_t) const;
    /**
     * @symbol ?getInt\@SynchedActorData\@\@QEBAHG\@Z
     */
    MCAPI int32_t getInt(uint16_t) const;
    /**
     * @symbol ?getInt64\@SynchedActorData\@\@QEBA_JG\@Z
     */
    MCAPI int64_t getInt64(uint16_t) const;
    /**
     * @symbol ?getInt8\@SynchedActorData\@\@QEBACG\@Z
     */
    MCAPI int8_t getInt8(uint16_t) const;
    /**
     * @symbol ?getStatusFlag\@SynchedActorData\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @symbol ?getValidDataItemCount\@SynchedActorData\@\@QEBA_KXZ
     */
    MCAPI uint64_t getValidDataItemCount() const;
    /**
     * @symbol ?getVec3\@SynchedActorData\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(uint16_t) const;
    /**
     * @symbol ?markDirty\@SynchedActorData\@\@QEAAXG\@Z
     */
    MCAPI void markDirty(uint16_t);
    /**
     * @symbol ??4SynchedActorData\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SynchedActorData& operator=(class SynchedActorData&&);
    /**
     * @symbol ?setStatusFlag\@SynchedActorData\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);
    /**
     * @symbol ??1SynchedActorData\@\@QEAA\@XZ
     */
    MCAPI ~SynchedActorData();
    /**
     * @symbol
     * ?DIFF_ITEM\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEM;
    /**
     * @symbol
     * ?DIFF_ITEMS_SIZE\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEMS_SIZE;
    /**
     * @symbol
     * ?DIFF_ITEM_NULL\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEM_NULL;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_find\@SynchedActorData\@\@AEBAPEAVDataItem\@\@G\@Z
     */
    MCAPI class DataItem* _find(uint16_t) const;
    /**
     * @symbol ?_get\@SynchedActorData\@\@AEAAAEAVDataItem\@\@G\@Z
     */
    MCAPI class DataItem& _get(uint16_t);
    /**
     * @symbol ?_resizeToContain\@SynchedActorData\@\@AEAAXG\@Z
     */
    MCAPI void _resizeToContain(uint16_t);
    // NOLINTEND
};
