#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
class CEnrollmentLogger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogger@CEnrollmentLogger@@SAPEAV1@XZ
    static CEnrollmentLogger * GetLogger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAikAlgorithmResult@CEnrollmentLogger@@QEAAXPEBGJ0@Z
    void LogAikAlgorithmResult(unsigned short const *, long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCryptoTpmTaskNotInGoodState@CEnrollmentLogger@@QEAAXXZ
    void LogCryptoTpmTaskNotInGoodState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFireTpmWnf@CEnrollmentLogger@@QEAAXXZ
    void LogFireTpmWnf();
};
