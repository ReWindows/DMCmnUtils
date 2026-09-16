#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
class AutoImpersonate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateSID@AutoImpersonate@@QEAAJPEBG@Z
    long ImpersonateSID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertToSelf@AutoImpersonate@@QEAAJXZ
    long RevertToSelf();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoImpersonate@@QEAA@XZ
    ~AutoImpersonate();
};
