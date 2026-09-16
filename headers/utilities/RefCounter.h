#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace pplx::details {
class _RefCounter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Release@_RefCounter@details@pplx@@QEAAJXZ
    long _Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_RefCounter@details@pplx@@UEAA@XZ
    virtual ~_RefCounter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@_RefCounter@details@pplx@@MEAAXXZ
    virtual void _Destroy();
};
} // namespace pplx::details
