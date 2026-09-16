#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
namespace tpm12class {
class TPMW8_AUTH_PROVIDER {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcParamEncryptionKey@TPMW8_AUTH_PROVIDER@tpm12class@@AEAAJPEAVTPMW82B_BUFFER@2@000@Z
    long CalcParamEncryptionKey(::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSessionKey@TPMW8_AUTH_PROVIDER@tpm12class@@AEAAJPEAVTPMW82B_BUFFER@2@0@Z
    long CalcSessionKey(::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KDFa@TPMW8_AUTH_PROVIDER@tpm12class@@AEAAJGPEAVTPMW82B_BUFFER@2@PEAD00I0@Z
    long KDFa(unsigned short, ::tpm12class::TPMW82B_BUFFER *, char *, ::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *, unsigned int, ::tpm12class::TPMW82B_BUFFER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SymSign@TPMW8_AUTH_PROVIDER@tpm12class@@AEAAJEPEAVTPMW82B_BUFFER@2@00E0@Z
    long SymSign(unsigned char, ::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *, ::tpm12class::TPMW82B_BUFFER *, unsigned char, ::tpm12class::TPMW82B_BUFFER *);
};
} // namespace tpm12class
