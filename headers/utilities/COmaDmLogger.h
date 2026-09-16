#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 7 member(s).
class COmaDmLogger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogger@COmaDmLogger@@SAPEAV1@XZ
    static COmaDmLogger * GetLogger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetAadDeviceMdmResourceUrlFailure@COmaDmLogger@@QEAAXPEBGJKK@Z
    void LogDmGetAadDeviceMdmResourceUrlFailure(unsigned short const *, long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetAadTokenExpired@COmaDmLogger@@QEAAXEEAEAU_FILETIME@@0K@Z
    void LogDmGetAadTokenExpired(unsigned char, unsigned char, _FILETIME &, _FILETIME &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetAadUserTokenFailure@COmaDmLogger@@QEAAXEEJKK@Z
    void LogDmGetAadUserTokenFailure(unsigned char, unsigned char, long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetAadUserTokenRetryOnExpiration@COmaDmLogger@@QEAAXEEJAEAU_FILETIME@@0@Z
    void LogDmGetAadUserTokenRetryOnExpiration(unsigned char, unsigned char, long, _FILETIME &, _FILETIME &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetAadUserTokenReturnExpiredToken@COmaDmLogger@@QEAAXEEAEAU_FILETIME@@0K@Z
    void LogDmGetAadUserTokenReturnExpiredToken(unsigned char, unsigned char, _FILETIME &, _FILETIME &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmInvalidateAadUserTokenFailure@COmaDmLogger@@QEAAXEEJ@Z
    void LogDmInvalidateAadUserTokenFailure(unsigned char, unsigned char, long);
};
