#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace pplx {
class task_options {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_scheduler@task_options@pplx@@QEBA?AUscheduler_ptr@2@XZ
    WindissectOpaque get_scheduler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_cancellation_token@task_options@pplx@@QEAAXVcancellation_token@2@@Z
    void set_cancellation_token(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0task_options@pplx@@QEAA@AEBV01@@Z
    task_options(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0task_options@pplx@@QEAA@XZ
    task_options();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1task_options@pplx@@QEAA@XZ
    ~task_options();
};
} // namespace pplx
