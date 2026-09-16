#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 6 member(s).
namespace pplx {
class task_canceled {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0task_canceled@pplx@@QEAA@AEBV01@@Z
    task_canceled(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0task_canceled@pplx@@QEAA@XZ
    task_canceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@task_canceled@pplx@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1task_canceled@pplx@@UEAA@XZ
    virtual ~task_canceled();
};
} // namespace pplx
