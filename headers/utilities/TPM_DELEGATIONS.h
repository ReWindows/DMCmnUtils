#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace tpm12class {
class TPM_DELEGATIONS {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_DELEGATIONS@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_DELEGATIONS@tpm12class@@UEAA@XZ
    virtual ~TPM_DELEGATIONS();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_DELEGATIONS@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_DELEGATIONS@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_DELEGATIONS@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_DELEGATIONS@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
