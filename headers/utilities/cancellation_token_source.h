#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace pplx {
class cancellation_token_source {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0cancellation_token_source@pplx@@QEAA@XZ
    cancellation_token_source();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_token@cancellation_token_source@pplx@@QEBA?AVcancellation_token@2@XZ
    WindissectOpaque get_token() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1cancellation_token_source@pplx@@QEAA@XZ
    ~cancellation_token_source();
};
} // namespace pplx
