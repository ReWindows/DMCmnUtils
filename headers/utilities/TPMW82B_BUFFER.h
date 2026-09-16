#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 13 member(s).
namespace tpm12class {
class TPMW82B_BUFFER {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@TPMW82B_BUFFER@tpm12class@@QEAAJ_K@Z
    long Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@TPMW82B_BUFFER@tpm12class@@QEAAJPEBV12@@Z
    long Append(::tpm12class::TPMW82B_BUFFER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@TPMW82B_BUFFER@tpm12class@@QEAAJPEBE_K@Z
    long CopyFrom(unsigned char const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@TPMW82B_BUFFER@tpm12class@@QEAAJPEBV12@@Z
    long CopyFrom(::tpm12class::TPMW82B_BUFFER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPMW82B_BUFFER@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@TPMW82B_BUFFER@tpm12class@@QEAAJXZ
    long Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@TPMW82B_BUFFER@tpm12class@@QEAAJ_K@Z
    long Resize(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPMW82B_BUFFER@tpm12class@@UEAA@XZ
    virtual ~TPMW82B_BUFFER();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW82B_BUFFER@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW82B_BUFFER@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW82B_BUFFER@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW82B_BUFFER@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
