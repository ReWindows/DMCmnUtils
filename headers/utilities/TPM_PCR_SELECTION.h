#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_PCR_SELECTION {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_PCR_SELECTION@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_PCR_SELECTION@tpm12class@@QEAA@XZ
    TPM_PCR_SELECTION();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_PCR_SELECTION@tpm12class@@UEAA@XZ
    virtual ~TPM_PCR_SELECTION();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_PCR_SELECTION@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_PCR_SELECTION@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_PCR_SELECTION@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_PCR_SELECTION@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
