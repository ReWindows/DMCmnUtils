#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 7 member(s).
namespace web {
class uri {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_port_default@uri@web@@QEBA_NXZ
    bool is_port_default() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?resource@uri@web@@QEBA?AV12@XZ
    ::web::uri resource() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0uri@web@@QEAA@PEBG@Z
    uri(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0uri@web@@QEAA@$$QEAV01@@Z
    uri(::web::uri &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0uri@web@@QEAA@XZ
    uri();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1uri@web@@QEAA@XZ
    ~uri();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0uri@web@@AEAA@AEBUuri_components@details@1@@Z
    uri(::web::details::uri_components const &);
};
} // namespace web
