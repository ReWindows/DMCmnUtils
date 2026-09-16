#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace tpm12class {
class TPMW8T_RSA_SCHEME {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPMW8T_RSA_SCHEME@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPMW8T_RSA_SCHEME@tpm12class@@QEAA@XZ
    TPMW8T_RSA_SCHEME();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8T_RSA_SCHEME@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8T_RSA_SCHEME@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8T_RSA_SCHEME@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8T_RSA_SCHEME@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
