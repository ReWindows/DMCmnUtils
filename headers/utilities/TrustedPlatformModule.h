#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 13 member(s).
class TrustedPlatformModule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUpdateEkCertPresent@TrustedPlatformModule@@QEAAJW4TpmAlgID@@AEA_N@Z
    long CheckUpdateEkCertPresent(int, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapability@TrustedPlatformModule@@QEAAIW4TpmCapabilityPT@@@Z
    unsigned int GetCapability(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManufacturerID@TrustedPlatformModule@@QEAAIXZ
    unsigned int GetManufacturerID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@TrustedPlatformModule@@QEAAJPEAW4TpmVersion@@PEAI1@Z
    long GetVersion(int *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActivateCredentialVulnerability@TrustedPlatformModule@@QEAA_NXZ
    bool HasActivateCredentialVulnerability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAttestationVulnerability@TrustedPlatformModule@@QEAA_NXZ
    bool HasAttestationVulnerability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIntelManagementVulnerability@TrustedPlatformModule@@QEAA_NXZ
    bool HasIntelManagementVulnerability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIntelManagementVulnerabilityOld@TrustedPlatformModule@@QEAA_NXZ
    bool HasIntelManagementVulnerabilityOld();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRsaKeygenVulnerability@TrustedPlatformModule@@QEAA_NXZ
    bool HasRsaKeygenVulnerability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEkCertificatePresent@TrustedPlatformModule@@QEAAJAEA_N@Z
    long IsEkCertificatePresent(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresent@TrustedPlatformModule@@QEAA_NXZ
    bool IsPresent();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVersion@TrustedPlatformModule@@AEAA_NW4TpmVersion@@@Z
    bool IsVersion(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LostAuths@TrustedPlatformModule@@AEAAJAEA_N@Z
    long LostAuths(bool &);
};
