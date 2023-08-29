#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelChunkPacket : public ::Packet {
public:
    struct SubChunkMetadata {
        unsigned long long blobId; // this+0x0
    };

public:
    ChunkPos           mPos;                           // this+0x30
    bool               mCacheEnabled;                  // this+0x38
    bool               mIsChunkInTickRange;            // this+0x39
    std::string        mSerializedChunk;               // this+0x40
    unsigned long long mSubChunksCount;                // this+0x60
    bool               isClientPacket;                 // this+0x68
    bool               mClientNeedsToRequestSubchunks; // this+0x69
    int                mClientRequestSubChunkLimit;    // this+0x6c

    std::vector<SubChunkMetadata> mCacheMetadata; // this+0x70

    // prevent constructor by default
    LevelChunkPacket& operator=(LevelChunkPacket const&) = delete;
    LevelChunkPacket(LevelChunkPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelChunkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LevelChunkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelChunkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LevelChunkPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0LevelChunkPacket\@\@QEAA\@XZ
     */
    MCAPI LevelChunkPacket();
    /**
     * @symbol ?pushSubChunkMetadata\@LevelChunkPacket\@\@QEAAX_K\@Z
     */
    MCAPI void pushSubChunkMetadata(uint64_t);
    /**
     * @symbol
     * ?readCacheMetadata\@LevelChunkPacket\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> readCacheMetadata(class ReadOnlyBinaryStream&);
    // NOLINTEND
};
