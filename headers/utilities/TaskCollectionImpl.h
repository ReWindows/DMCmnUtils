#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace pplx::details {
class _TaskCollectionImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScheduler@_TaskCollectionImpl@details@pplx@@QEBA?AUscheduler_ptr@3@XZ
    WindissectOpaque _GetScheduler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunTask@_TaskCollectionImpl@details@pplx@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z
    static void _RunTask(void ( *)(void *), void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleTask@_TaskCollectionImpl@details@pplx@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z
    void _ScheduleTask(WindissectOpaque *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_TaskCollectionImpl@details@pplx@@QEAA@Uscheduler_ptr@2@@Z
    _TaskCollectionImpl(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_TaskCollectionImpl@details@pplx@@QEAA@XZ
    ~_TaskCollectionImpl();
};
} // namespace pplx::details
