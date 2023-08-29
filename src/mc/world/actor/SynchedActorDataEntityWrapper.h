#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorDataEntityWrapper {

public:
    int (**_vptr_SynchedActorDataEntityWrapper)(void);
    gsl::not_null<class SynchedActorDataComponent*> mData;

    template <typename T>
    MCAPI void define(unsigned short, T const&);
    template <typename T>
    MCAPI void set(unsigned short, T const&);

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SynchedActorDataEntityWrapper\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI SynchedActorDataEntityWrapper(class EntityContext&);
    /**
     * @symbol ?getCompoundTag\@SynchedActorDataEntityWrapper\@\@QEBAAEBVCompoundTag\@\@G\@Z
     */
    MCAPI class CompoundTag const& getCompoundTag(unsigned short) const;
    /**
     * @symbol ?getFloat\@SynchedActorDataEntityWrapper\@\@QEBAMG\@Z
     */
    MCAPI float getFloat(unsigned short) const;
    /**
     * @symbol ?getInt\@SynchedActorDataEntityWrapper\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const;
    /**
     * @symbol ?getInt64\@SynchedActorDataEntityWrapper\@\@QEBA_JG\@Z
     */
    MCAPI int64_t getInt64(unsigned short) const;
    /**
     * @symbol ?getInt8\@SynchedActorDataEntityWrapper\@\@QEBACG\@Z
     */
    MCAPI signed char getInt8(unsigned short) const;
    /**
     * @symbol ?getPosition\@SynchedActorDataEntityWrapper\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(unsigned short) const;
    /**
     * @symbol ?getShort\@SynchedActorDataEntityWrapper\@\@QEBAFG\@Z
     */
    MCAPI short getShort(unsigned short) const;
    /**
     * @symbol ?getStatusFlag\@SynchedActorDataEntityWrapper\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @symbol
     * ?getString\@SynchedActorDataEntityWrapper\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCAPI std::string const& getString(unsigned short) const;
    /**
     * @symbol ?getVec3\@SynchedActorDataEntityWrapper\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const;
    /**
     * @symbol ?hasData\@SynchedActorDataEntityWrapper\@\@QEBA_NG\@Z
     */
    MCAPI bool hasData(unsigned short) const;
    /**
     * @symbol ?isDirty\@SynchedActorDataEntityWrapper\@\@QEBA_NXZ
     */
    MCAPI bool isDirty() const;
    /**
     * @symbol ?markDirty\@SynchedActorDataEntityWrapper\@\@QEAAXG\@Z
     */
    MCAPI void markDirty(unsigned short);
    /**
     * @symbol
     * ?packAll\@SynchedActorDataEntityWrapper\@\@QEBA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const;
    /**
     * @symbol
     * ?packDirty\@SynchedActorDataEntityWrapper\@\@QEAA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty();
    /**
     * @symbol ?reader\@SynchedActorDataEntityWrapper\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const;
    /**
     * @symbol ?setStatusFlag\@SynchedActorDataEntityWrapper\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);
    /**
     * @symbol ?writer\@SynchedActorDataEntityWrapper\@\@QEAA?AVSynchedActorDataWriter\@\@XZ
     */
    MCAPI class SynchedActorDataWriter writer();
    /**
     * @symbol ??1SynchedActorDataEntityWrapper\@\@QEAA\@XZ
     */
    MCAPI ~SynchedActorDataEntityWrapper();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_get\@SynchedActorDataEntityWrapper\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData*> _get();
    /**
     * @symbol ?_get\@SynchedActorDataEntityWrapper\@\@AEBA?AV?$not_null\@PEBVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData const*> _get() const;
    // NOLINTEND
};
