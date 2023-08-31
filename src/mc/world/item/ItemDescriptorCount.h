#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemDescriptorCount : public ::ItemDescriptor {

public:
    uint16_t mStackSize; // this+0x10

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serialize\@ItemDescriptorCount\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTORCOUNT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemDescriptorCount();
#endif
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI ItemDescriptorCount(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class BlockLegacy const&, uint16_t);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptorCount const&);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class Block const&, uint16_t);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(std::string_view, int32_t, uint16_t);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(struct ItemTag const&, uint16_t);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@XZ
     */
    MCAPI ItemDescriptorCount();
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI ItemDescriptorCount(class Item const&, int32_t, uint16_t);
    /**
     * @symbol ??0ItemDescriptorCount\@\@QEAA\@AEBVItemDescriptor\@\@G\@Z
     */
    MCAPI ItemDescriptorCount(class ItemDescriptor const&, uint16_t);
    /**
     * @symbol ?getStackSize\@ItemDescriptorCount\@\@QEBAFXZ
     */
    MCAPI int16_t getStackSize() const;
    /**
     * @symbol ?setStackSize\@ItemDescriptorCount\@\@QEAAXF\@Z
     */
    MCAPI void setStackSize(int16_t);
    // NOLINTEND
};
