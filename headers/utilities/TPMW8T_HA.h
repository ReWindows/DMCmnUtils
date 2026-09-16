#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPMW8T_HA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPMW8T_HA@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPMW8T_HA@tpm12class@@QEAA@XZ
    TPMW8T_HA();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPMW8T_HA@tpm12class@@UEAA@XZ
    virtual ~TPMW8T_HA();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8T_HA@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8T_HA@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8T_HA@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8T_HA@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
