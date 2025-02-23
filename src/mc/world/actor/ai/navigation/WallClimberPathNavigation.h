#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class WallClimberPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    WallClimberPathNavigation& operator=(WallClimberPathNavigation const&);
    WallClimberPathNavigation(WallClimberPathNavigation const&);
    WallClimberPathNavigation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?tick@WallClimberPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent&, class Mob&);

    // vIndex: 4, symbol:
    // ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);

    // vIndex: 5, symbol:
    // ?createPath@WallClimberPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);

    // vIndex: 7, symbol: ?moveTo@WallClimberPathNavigation@@MEAA_NAEAVNavigationComponent@@AEAVMob@@AEAVActor@@M@Z
    virtual bool moveTo(class NavigationComponent&, class Mob&, class Actor&, float);

    // vIndex: 11, symbol: ?canUpdatePath@WallClimberPathNavigation@@MEBA_NAEBVMob@@@Z
    virtual bool canUpdatePath(class Mob const&) const;

    // NOLINTEND
};
