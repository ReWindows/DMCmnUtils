#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 15 member(s).
namespace pplx::details {
class _Task_impl_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cancel@_Task_impl_base@details@pplx@@QEAA_N_N@Z
    bool _Cancel(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeregisterCancellation@_Task_impl_base@details@pplx@@QEAAXXZ
    void _DeregisterCancellation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScheduler@_Task_impl_base@details@pplx@@QEBA?AUscheduler_ptr@3@XZ
    WindissectOpaque _GetScheduler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskCreationCallstack@_Task_impl_base@details@pplx@@QEAA?AV_TaskCreationCallstack@23@XZ
    WindissectOpaque _GetTaskCreationCallstack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCanceled@_Task_impl_base@details@pplx@@QEAA_NXZ
    bool _IsCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCompleted@_Task_impl_base@details@pplx@@QEAA_NXZ
    bool _IsCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunContinuation@_Task_impl_base@details@pplx@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z
    void _RunContinuation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RunTaskContinuations@_Task_impl_base@details@pplx@@QEAAXXZ
    void _RunTaskContinuations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleContinuation@_Task_impl_base@details@pplx@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z
    void _ScheduleContinuation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleTask@_Task_impl_base@details@pplx@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z
    void _ScheduleTask(WindissectOpaque *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_Task_impl_base@details@pplx@@QEAA@PEAV_CancellationTokenState@12@Uscheduler_ptr@2@@Z
    _Task_impl_base(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Wait@_Task_impl_base@details@pplx@@QEAA?AW4task_group_status@3@XZ
    int _Wait();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_Task_impl_base@details@pplx@@UEAA@XZ
    virtual ~_Task_impl_base();
};
} // namespace pplx::details
