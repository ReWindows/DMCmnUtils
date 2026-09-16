#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
namespace pplx::details {
class critical_section_impl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0critical_section_impl@details@pplx@@QEAA@XZ
    critical_section_impl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?lock@critical_section_impl@details@pplx@@QEAAXXZ
    void lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?unlock@critical_section_impl@details@pplx@@QEAAXXZ
    void unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1critical_section_impl@details@pplx@@QEAA@XZ
    ~critical_section_impl();
};
} // namespace pplx::details
