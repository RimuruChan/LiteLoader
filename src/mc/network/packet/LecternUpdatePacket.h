#pragma once

#include "../NetworkBlockPosition.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LecternUpdatePacket : public ::Packet {

public:
    int32_t                  mPage;           // this+0x30
    int32_t                  mTotalPages;     // this+0x34
    bool                 mShouldDropBook; // this+0x38
    NetworkBlockPosition mPos;            // this+0x3C

    // prevent constructor by default
    LecternUpdatePacket& operator=(LecternUpdatePacket const&) = delete;
    LecternUpdatePacket(LecternUpdatePacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LecternUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LecternUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LecternUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LecternUpdatePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LECTERNUPDATEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LecternUpdatePacket();
#endif
    /**
     * @symbol ??0LecternUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI LecternUpdatePacket();
    // NOLINTEND
};
