#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace pplx {
class cancellation_token {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1cancellation_token@pplx@@QEAA@XZ
    ~cancellation_token();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Clear@cancellation_token@pplx@@AEAAXXZ
    void _Clear();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0cancellation_token@pplx@@AEAA@PEAV_CancellationTokenState@details@1@@Z
    cancellation_token(WindissectOpaque *);
};
} // namespace pplx
