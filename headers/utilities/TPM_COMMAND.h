#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 13 member(s).
namespace tpm12class {
class TPM_COMMAND {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPM_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPM_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TPM_COMMAND@tpm12class@@QEAAJXZ
    long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TPM_COMMAND@tpm12class@@QEAAJPEAEIPEAI@Z
    long Get(unsigned char *, unsigned int, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_COMMAND@tpm12class@@QEAA@XZ
    TPM_COMMAND();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_COMMAND@tpm12class@@UEAA@XZ
    virtual ~TPM_COMMAND();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPM_COMMAND@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@TPM_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Finalize(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPM_COMMAND@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
