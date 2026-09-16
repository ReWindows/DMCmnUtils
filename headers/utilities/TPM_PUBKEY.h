#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_PUBKEY {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_PUBKEY@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_PUBKEY@tpm12class@@QEAA@XZ
    TPM_PUBKEY();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_PUBKEY@tpm12class@@UEAA@XZ
    virtual ~TPM_PUBKEY();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_PUBKEY@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_PUBKEY@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_PUBKEY@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_PUBKEY@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
