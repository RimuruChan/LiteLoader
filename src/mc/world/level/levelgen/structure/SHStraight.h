#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHStraight : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHStraight& operator=(SHStraight const&);
    SHStraight(SHStraight const&);
    SHStraight();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?moveBoundingBox@MineshaftRoom@@UEAAXHHH@Z
    virtual void moveBoundingBox(int, int, int);

    // vIndex: 2, symbol: ?getType@SHStraight@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@SHStraight@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // vIndex: 4, symbol: ?postProcess@SHStraight@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 5, symbol: ?postProcessMobsAt@StructurePiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 6, symbol: ?isInInvalidLocation@MineshaftPiece@@UEAA_NAEAVBlockSource@@AEBVBoundingBox@@@Z
    virtual bool isInInvalidLocation(class BlockSource&, class BoundingBox const&);

    // vIndex: 7, symbol: ?getWorldX@OceanMonumentPiece@@UEAAHHH@Z
    virtual int getWorldX(int, int);

    // vIndex: 8, symbol: ?getWorldZ@OceanMonumentPiece@@UEAAHHH@Z
    virtual int getWorldZ(int, int);

    // vIndex: 9, symbol: ?placeBlock@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
    virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);

    // vIndex: 10, symbol: ?canBeReplaced@StructurePiece@@UEAA_NAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);

    // vIndex: 11, symbol: ?generateBox@StructurePiece@@UEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHHAEBVBlock@@2_N@Z
    virtual void generateBox(
        class BlockSource&,
        class BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        class Block const&,
        class Block const&,
        bool
    );

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@StructurePiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

    // symbol:
    // ?createPiece@SHStraight@@SA?AV?$unique_ptr@VStrongholdPiece@@U?$default_delete@VStrongholdPiece@@@std@@@std@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI static std::unique_ptr<class StrongholdPiece>
    createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);

    // NOLINTEND
};
