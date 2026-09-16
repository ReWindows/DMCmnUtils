#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace pplx::details {
class platform {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThreadId@platform@details@pplx@@YAJXZ
    long GetCurrentThreadId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCriticalSection@platform@details@pplx@@YAXPEAU_RTL_CRITICAL_SECTION@@@Z
    void InitializeCriticalSection(_RTL_CRITICAL_SECTION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldExecution@platform@details@pplx@@YAXXZ
    void YieldExecution();
};
} // namespace pplx::details
