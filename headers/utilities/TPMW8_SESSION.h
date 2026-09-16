#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 7 member(s).
namespace tpm12class {
class TPMW8_SESSION {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSession@TPMW8_SESSION@tpm12class@@QEAAJPEAVTpmDataObject@2@@Z
    long AddSession(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Authenticate@TPMW8_SESSION@tpm12class@@QEAAJPEAVTpmDataObject@2@@Z
    long Authenticate(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TPMW8_SESSION@tpm12class@@QEAAJPEAX@Z
    long Create(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPMW8_SESSION@tpm12class@@QEAAJPEAG@Z
    long Decode(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@TPMW8_SESSION@tpm12class@@QEAAJXZ
    long Refresh();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TPMW8_SESSION@tpm12class@@QEAAJXZ
    long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNonceCaller@TPMW8_SESSION@tpm12class@@IEAAJXZ
    long InitNonceCaller();
};
} // namespace tpm12class
