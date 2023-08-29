#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/blob_cache/Blob.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientCacheMissResponsePacket : public ::Packet {

public:
    std::vector<std::shared_ptr<ClientBlobCache::Server::Blob>> mWriteMissingContent;    // this+0x30
    std::unordered_map<unsigned long long, std::string>         mReceivedMissingContent; // this+0x48

    // prevent constructor by default
    ClientCacheMissResponsePacket& operator=(ClientCacheMissResponsePacket const&) = delete;
    ClientCacheMissResponsePacket(ClientCacheMissResponsePacket const&)            = delete;
    ClientCacheMissResponsePacket()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ClientCacheMissResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ClientCacheMissResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ClientCacheMissResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ClientCacheMissResponsePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTCACHEMISSRESPONSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ClientCacheMissResponsePacket();
#endif
    // NOLINTEND
};
