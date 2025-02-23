#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
// clang-format on

class SemVersionConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    SemVersionConstraint& operator=(SemVersionConstraint const&);
    SemVersionConstraint(SemVersionConstraint const&);
    SemVersionConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?doValidate@SemVersionConstraint@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // symbol: ??1SemVersionConstraint@@UEAA@XZ
    MCVAPI ~SemVersionConstraint();

    // symbol: ?min@SemVersionConstraint@@QEAAAEAV1@AEBVSemVersion@@@Z
    MCAPI class SemVersionConstraint& min(class SemVersion const&);

    // NOLINTEND
};
