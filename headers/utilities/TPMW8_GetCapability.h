#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 10 member(s).
namespace tpm12class {
class TPMW8_GetCapability {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPMW8_GetCapability@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPMW8_GetCapability@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPMW8_GetCapability@tpm12class@@QEAA@XZ
    TPMW8_GetCapability();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPMW8_GetCapability@tpm12class@@UEAA@XZ
    virtual ~TPMW8_GetCapability();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8_GetCapability@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8_GetCapability@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8_GetCapability@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8_GetCapability@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
