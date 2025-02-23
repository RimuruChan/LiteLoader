#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StopCommand : public ::Command {
public:
    // prevent constructor by default
    StopCommand& operator=(StopCommand const&);
    StopCommand(StopCommand const&);
    StopCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@StopCommand@@SAXAEAVCommandRegistry@@AEAVDedicatedServer@@@Z
    MCAPI static void setup(class CommandRegistry&, class DedicatedServer&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mServer@StopCommand@@0PEAVDedicatedServer@@EA
    MCAPI static class DedicatedServer* mServer;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mServer() { return mServer; }

    // NOLINTEND
};
