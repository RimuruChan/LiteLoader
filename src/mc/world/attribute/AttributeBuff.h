#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/AttributeBuffType.h"

class AttributeBuff {

public:
    // prevent constructor by default
    AttributeBuff& operator=(AttributeBuff const&) = delete;
    AttributeBuff(AttributeBuff const&)            = delete;
    AttributeBuff()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @vftbl 2
     * @symbol ?isSerializable\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0;
    /**
     * @vftbl 3
     * @symbol ?setDurationAmplifier\@AttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(std::shared_ptr<class Amplifier>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEBUFF
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AttributeBuff();
#endif
    /**
     * @symbol ?getAmount\@AttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol ?getId\@AttributeBuff\@\@QEBA_KXZ
     */
    MCAPI uint64_t getId() const;
    /**
     * @symbol ?getOperand\@AttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol ?getType\@AttributeBuff\@\@QEBA?AW4AttributeBuffType\@\@XZ
     */
    MCAPI enum class AttributeBuffType getType() const;
    /**
     * @symbol ??8AttributeBuff\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeBuff const&) const;
    /**
     * @symbol ?setAmplificationAmount\@AttributeBuff\@\@QEAAXHM\@Z
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @symbol ?setId\@AttributeBuff\@\@QEAAX_K\@Z
     */
    MCAPI void setId(uint64_t);
    /**
     * @symbol ?setOperand\@AttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void setOperand(int);
    /**
     * @symbol ?setSource\@AttributeBuff\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setSource(class Actor*);
    /**
     * @symbol ?setValueAmplifier\@AttributeBuff\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier>);
    /**
     * @symbol ?buffTypeToDamageCause\@AttributeBuff\@\@SA?AW4ActorDamageCause\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause buffTypeToDamageCause(enum class AttributeBuffType);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0AttributeBuff\@\@IEAA\@MHW4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, enum class AttributeBuffType);
    /**
     * @symbol ??0AttributeBuff\@\@IEAA\@MHAEBVActorDamageSource\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, class ActorDamageSource const&, enum class AttributeBuffType);
    // NOLINTEND
};
