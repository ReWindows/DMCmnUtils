#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_STORE_KEY {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_STORE_KEY@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_STORE_KEY@tpm12class@@QEAA@XZ
    TPM_STORE_KEY();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_STORE_KEY@tpm12class@@UEAA@XZ
    virtual ~TPM_STORE_KEY();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_STORE_KEY@tpm12class@@EEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_STORE_KEY@tpm12class@@EEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_STORE_KEY@tpm12class@@EEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_STORE_KEY@tpm12class@@EEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
