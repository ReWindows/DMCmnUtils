#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_DELEGATE_PUBLIC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_DELEGATE_PUBLIC@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_DELEGATE_PUBLIC@tpm12class@@QEAA@XZ
    TPM_DELEGATE_PUBLIC();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_DELEGATE_PUBLIC@tpm12class@@UEAA@XZ
    virtual ~TPM_DELEGATE_PUBLIC();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_DELEGATE_PUBLIC@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_DELEGATE_PUBLIC@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_DELEGATE_PUBLIC@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_DELEGATE_PUBLIC@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
