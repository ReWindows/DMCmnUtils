#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_KEY_PARMS {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_KEY_PARMS@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_KEY_PARMS@tpm12class@@QEAA@XZ
    TPM_KEY_PARMS();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_KEY_PARMS@tpm12class@@UEAA@XZ
    virtual ~TPM_KEY_PARMS();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_KEY_PARMS@tpm12class@@EEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_KEY_PARMS@tpm12class@@EEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_KEY_PARMS@tpm12class@@EEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_KEY_PARMS@tpm12class@@EEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
