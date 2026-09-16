#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 33 member(s).
namespace tpm12class {
class TpmDataObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@TpmDataObject@tpm12class@@QEAAJE@Z
    long AddData(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@TpmDataObject@tpm12class@@QEAAJG@Z
    long AddData(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@TpmDataObject@tpm12class@@QEAAJI@Z
    long AddData(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@TpmDataObject@tpm12class@@QEAAJPEAEI@Z
    long AddData(unsigned char *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Decode@TpmDataObject@tpm12class@@UEAAJPEAG@Z
    virtual long Decode(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TpmDataObject@tpm12class@@QEAAJPEAEIPEAI@Z
    long Get(unsigned char *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TpmDataObject@tpm12class@@QEAAJPEAV12@@Z
    long Get(::tpm12class::TpmDataObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TpmDataObject@tpm12class@@QEAAJPEAE@Z
    long GetData(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TpmDataObject@tpm12class@@QEAAJPEAEI@Z
    long GetData(unsigned char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TpmDataObject@tpm12class@@QEAAJPEAG@Z
    long GetData(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@TpmDataObject@tpm12class@@QEAAJPEAI@Z
    long GetData(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBuffer@TpmDataObject@tpm12class@@QEAAJPEAEIPEAI@Z
    long GetDataBuffer(unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDigest@TpmDataObject@tpm12class@@QEAAJPEAEIPEAI@Z
    long GetDigest(unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDigest@TpmDataObject@tpm12class@@QEAAJPEAGPEAEIPEAI@Z
    long GetDigest(unsigned short *, unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashBuffer@TpmDataObject@tpm12class@@QEAAJPEAEIPEAI@Z
    long GetHashBuffer(unsigned char *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekDataAtOffset@TpmDataObject@tpm12class@@QEAAJIPEAEI@Z
    long PeekDataAtOffset(unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekDataAtOffset@TpmDataObject@tpm12class@@QEAAJIPEAG@Z
    long PeekDataAtOffset(unsigned int, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TpmDataObject@tpm12class@@QEAAJPEAV12@@Z
    long Set(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TpmDataObject@tpm12class@@QEAAJPEAV12@G@Z
    long Set(::tpm12class::TpmDataObject *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TpmDataObject@tpm12class@@QEAAJPEBEIPEAPEBEPEAI@Z
    long Set(unsigned char const *, unsigned int, unsigned char const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@TpmDataObject@tpm12class@@QEAAJII@Z
    long SetData(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@TpmDataObject@tpm12class@@QEAAJPEAEII@Z
    long SetData(unsigned char *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataBuffer@TpmDataObject@tpm12class@@QEAAJPEBEI@Z
    long SetDataBuffer(unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHashData@TpmDataObject@tpm12class@@QEAAJPEAEII@Z
    long SetHashData(unsigned char *, unsigned int, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TpmDataObject@tpm12class@@MEAAJE@Z
    virtual long Clear(unsigned char);
    // Category: Method | Source: PE Export
    // Symbol: ?Deserialize@TpmDataObject@tpm12class@@MEAAJXZ
    virtual long Deserialize();
    // Category: Method | Source: PE Export
    // Symbol: ?Serialize@TpmDataObject@tpm12class@@MEAAJXZ
    virtual long Serialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStore@TpmDataObject@tpm12class@@IEAAXPEAV12@@Z
    void SetStore(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStore@TpmDataObject@tpm12class@@IEAAXPEAV12@@Z
    void UpdateStore(::tpm12class::TpmDataObject *);
    // Category: Method | Source: PE Export
    // Symbol: ?Validate@TpmDataObject@tpm12class@@MEAAJE@Z
    virtual long Validate(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataToBuffer@TpmDataObject@tpm12class@@AEAAJPEAEIPEAPEAEPEAI2@Z
    long AddDataToBuffer(unsigned char *, unsigned int, unsigned char * *, unsigned int *, unsigned int *);
};
} // namespace tpm12class
