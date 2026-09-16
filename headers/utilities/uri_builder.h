#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace web {
class uri_builder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?append@uri_builder@web@@QEAAAEAV12@AEBVuri@2@@Z
    ::web::uri_builder & append(::web::uri const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_uri@uri_builder@web@@QEBA?AVuri@2@XZ
    ::web::uri to_uri() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1uri_builder@web@@QEAA@XZ
    ~uri_builder();
};
} // namespace web
