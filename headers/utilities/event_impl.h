#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
namespace pplx::details {
class event_impl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0event_impl@details@pplx@@QEAA@XZ
    event_impl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set@event_impl@details@pplx@@QEAAXXZ
    void set();
    // Category: Method | Source: PDB Internal
    // Symbol: ?wait@event_impl@details@pplx@@QEAAII@Z
    unsigned int wait(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1event_impl@details@pplx@@QEAA@XZ
    ~event_impl();
};
} // namespace pplx::details
