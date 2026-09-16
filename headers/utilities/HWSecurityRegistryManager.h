#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
class HWSecurityRegistryManager {
public:
    class RegistryKeyEntry;
    class RegistryValueEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKey@HWSecurityRegistryManager@@SAJW4RegKeys@1@PEAPEAUHKEY__@@PEA_N@Z
    static long CreateKey(int, HKEY__* *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWordNoThrow@HWSecurityRegistryManager@@SAJW4RegValues@1@AEAK@Z
    static long GetDWordNoThrow(int, unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDWordNoThrow@HWSecurityRegistryManager@@SAJW4RegValues@1@K@Z
    static long SetDWordNoThrow(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueExists@HWSecurityRegistryManager@@SAJW4RegValues@1@AEA_N@Z
    static long ValueExists(int, bool &);
};
