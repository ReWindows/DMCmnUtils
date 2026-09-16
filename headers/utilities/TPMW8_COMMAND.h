#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 22 member(s).
namespace tpm12class {
class TPMW8_COMMAND {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandle@TPMW8_COMMAND@tpm12class@@QEAAJIPEAVTPMW82B_BUFFER@2@@Z
    long AddHandle(unsigned int, ::tpm12class::TPMW82B_BUFFER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSessions@TPMW8_COMMAND@tpm12class@@QEAAJXZ
    long AddSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeAuthorizationsRqu@TPMW8_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeAuthorizationsRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeAuthorizationsRsp@TPMW8_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeAuthorizationsRsp(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeParameterSizeRsp@TPMW8_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeParameterSizeRsp(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRqu@TPMW8_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRqu(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeRsp@TPMW8_COMMAND@tpm12class@@UEAAJPEAG@Z
    virtual long DecodeRsp(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@TPMW8_COMMAND@tpm12class@@QEAAJPEAX@Z
    long Execute(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TPMW8_COMMAND@tpm12class@@QEAAJPEAEIPEAI@Z
    long Get(unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameterSize@TPMW8_COMMAND@tpm12class@@QEAAJXZ
    long GetParameterSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TPMW8_COMMAND@tpm12class@@QEAAJPEBEI@Z
    long Set(unsigned char const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TPMW8_COMMAND@tpm12class@@QEAA@XZ
    TPMW8_COMMAND();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TPMW8_COMMAND@tpm12class@@UEAA@XZ
    virtual ~TPMW8_COMMAND();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TPMW8_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptFirstRspParameter@TPMW8_COMMAND@tpm12class@@IEAAJPEAVTPMW8_SESSION@2@@Z
    long DecryptFirstRspParameter(::tpm12class::TPMW8_SESSION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TPMW8_COMMAND@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptFirstParameter@TPMW8_COMMAND@tpm12class@@IEAAJPEAVTPMW8_SESSION@2@@Z
    long EncryptFirstParameter(::tpm12class::TPMW8_SESSION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@TPMW8_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Finalize(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TPMW8_COMMAND@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@TPMW8_COMMAND@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
};
} // namespace tpm12class
