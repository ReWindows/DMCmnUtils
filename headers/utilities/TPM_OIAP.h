#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPM_OIAP {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPM_OIAP@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPM_OIAP@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_OIAP@tpm12class@@UEAA@XZ
    virtual ~TPM_OIAP();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_OIAP@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_OIAP@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_OIAP@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_OIAP@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
