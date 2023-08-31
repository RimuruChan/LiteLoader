#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

class RecipeUnlockingRequirement {
public:
    // RecipeUnlockingRequirement inner types define
    enum class UnlockingContext : int32_t {
        None               = 0x0,
        AlwaysUnlocked     = 0x1,
        PlayerInWater      = 0x2,
        PlayerHasManyItems = 0x3,
    };

    enum class UnlockingRule : int32_t {
        Invalid       = 0x0,
        ByIngredients = 0x1,
        ByContext     = 0x2,
    };

public:
    RecipeUnlockingRequirement::UnlockingRule    mRule;
    RecipeUnlockingRequirement::UnlockingContext mContext;
    std::vector<class RecipeIngredient>          mValidIngredients;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RecipeUnlockingRequirement\@\@QEAA\@W4UnlockingContext\@0\@\@Z
     */
    MCAPI RecipeUnlockingRequirement(enum class RecipeUnlockingRequirement::UnlockingContext);
    /**
     * @symbol
     * ??0RecipeUnlockingRequirement\@\@QEAA\@V?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI RecipeUnlockingRequirement(std::vector<class RecipeIngredient>);
    /**
     * @symbol ??0RecipeUnlockingRequirement\@\@QEAA\@XZ
     */
    MCAPI RecipeUnlockingRequirement();
    /**
     * @symbol ?canBeUnlockedByContext\@RecipeUnlockingRequirement\@\@QEBA_NW4UnlockingContext\@1\@\@Z
     */
    MCAPI bool canBeUnlockedByContext(enum class RecipeUnlockingRequirement::UnlockingContext) const;
    /**
     * @symbol ?canBeUnlockedByIngredient\@RecipeUnlockingRequirement\@\@QEBA_NAEBVRecipeIngredient\@\@\@Z
     */
    MCAPI bool canBeUnlockedByIngredient(class RecipeIngredient const&) const;
    /**
     * @symbol ?isUnlockable\@RecipeUnlockingRequirement\@\@QEBA_NXZ
     */
    MCAPI bool isUnlockable() const;
    /**
     * @symbol ??1RecipeUnlockingRequirement\@\@QEAA\@XZ
     */
    MCAPI ~RecipeUnlockingRequirement();
    /**
     * @symbol
     * ?unlockingContextFromString\@RecipeUnlockingRequirement\@\@SA?AW4UnlockingContext\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class RecipeUnlockingRequirement::UnlockingContext unlockingContextFromString(std::string const&);
    // NOLINTEND
};
