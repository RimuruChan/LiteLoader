#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {

public:
    int32_t  mMinValue; // this+0x0
    int32_t  mMaxValue; // this+0x4
    bool mInvert;   // this+0x8

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@XZ
     */
    MCAPI CommandIntegerRange();
    /**
     * @symbol ??0CommandIntegerRange\@\@QEAA\@HH_N\@Z
     */
    MCAPI CommandIntegerRange(int32_t, int32_t, bool);
    /**
     * @symbol ?isWithinRange\@CommandIntegerRange\@\@QEBA_NH\@Z
     */
    MCAPI bool isWithinRange(int32_t) const;
    // NOLINTEND
};
