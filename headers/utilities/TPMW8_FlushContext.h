#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace tpm12class {
class TPMW8_FlushContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPMW8_FlushContext@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPMW8_FlushContext@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8_FlushContext@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8_FlushContext@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8_FlushContext@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8_FlushContext@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
