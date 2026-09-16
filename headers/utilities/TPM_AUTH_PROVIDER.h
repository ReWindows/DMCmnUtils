#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace tpm12class {
class TPM_AUTH_PROVIDER {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSharedSecret@TPM_AUTH_PROVIDER@tpm12class@@QEAAJQEAEI@Z
    long CalcSharedSecret(unsigned char * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@TPM_AUTH_PROVIDER@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SymSign@TPM_AUTH_PROVIDER@tpm12class@@QEAAJQEAEIQEAE@Z
    long SymSign(unsigned char * const, unsigned int, unsigned char * const);
};
} // namespace tpm12class
