#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
class HMAC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@HMAC@@QEAAJPEAEPEAK@Z
    long Complete(unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HMAC@@QEAAJ_KIPEAEK@Z
    long Init(uint64_t, unsigned int, unsigned char *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HMAC@@QEAA@XZ
    ~HMAC();
};
