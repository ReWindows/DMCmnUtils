#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace pplx::details::_CancellationTokenState {
class TokenRegistrationContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_back@TokenRegistrationContainer@_CancellationTokenState@details@pplx@@QEAAXPEAV_CancellationTokenRegistration@34@@Z
    void push_back(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@TokenRegistrationContainer@_CancellationTokenState@details@pplx@@QEAAXPEAV_CancellationTokenRegistration@34@@Z
    void remove(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenRegistrationContainer@_CancellationTokenState@details@pplx@@QEAA@XZ
    ~TokenRegistrationContainer();
};
} // namespace pplx::details::_CancellationTokenState
