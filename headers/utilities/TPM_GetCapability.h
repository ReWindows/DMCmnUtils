#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 10 member(s).
namespace tpm12class {
class TPM_GetCapability {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPM_GetCapability@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPM_GetCapability@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_GetCapability@tpm12class@@QEAA@XZ
    TPM_GetCapability();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_GetCapability@tpm12class@@UEAA@XZ
    virtual ~TPM_GetCapability();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_GetCapability@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_GetCapability@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_GetCapability@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_GetCapability@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
