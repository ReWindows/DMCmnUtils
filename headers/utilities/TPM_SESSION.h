#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 12 member(s).
namespace tpm12class {
class TPM_SESSION {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Authenticate@TPM_SESSION@tpm12class@@QEAAJPEAVTpmDataObject@2@@Z
    long Authenticate(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TPM_SESSION@tpm12class@@QEAAJXZ
    long Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPM_SESSION@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPM_SESSION@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@TPM_SESSION@tpm12class@@QEAAJXZ
    long Refresh();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TPM_SESSION@tpm12class@@QEAAJXZ
    long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPM_SESSION@tpm12class@@QEAA@PEAVTPM_AUTH_PROVIDER@1@@Z
    TPM_SESSION(::tpm12class::TPM_AUTH_PROVIDER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPM_SESSION@tpm12class@@QEAAJPEAVTpmDataObject@2@@Z
    long Validate(::tpm12class::TpmDataObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPM_SESSION@tpm12class@@UEAA@XZ
    virtual ~TPM_SESSION();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPM_SESSION@tpm12class@@IEAAJE@Z
    long Clear(unsigned char);
};
} // namespace tpm12class
