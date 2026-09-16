#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace tpm12class {
class TPMW8S_PCR_SELECTION {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TPMW8S_PCR_SELECTION@tpm12class@@SAPEAV12@_K@Z
    static ::tpm12class::TPMW8S_PCR_SELECTION * Create(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPMW8S_PCR_SELECTION@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPMW8S_PCR_SELECTION@tpm12class@@UEAA@XZ
    virtual ~TPMW8S_PCR_SELECTION();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8S_PCR_SELECTION@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8S_PCR_SELECTION@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8S_PCR_SELECTION@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8S_PCR_SELECTION@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPMW8S_PCR_SELECTION@tpm12class@@AEAA@XZ
    TPMW8S_PCR_SELECTION();
};
} // namespace tpm12class
