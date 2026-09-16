#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace pplx {
class details {
public:
    class _CancellationTokenRegistration;
    class _CancellationTokenState;
    class _ExceptionHolder;
    class _RefCounter;
    class _Scheduler_Param;
    class _TaskCollectionImpl;
    class _TaskCreationCallstack;
    class _TaskProcHandle;
    class _TaskProcThunk;
    class _Task_impl_base;
    class critical_section_impl;
    class event_impl;
    class platform;
    class windows_scheduler;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_JoinAllTokens_Add@details@pplx@@YAXAEBVcancellation_token_source@2@PEAV_CancellationTokenState@12@@Z
    void _JoinAllTokens_Add(WindissectOpaque const &, WindissectOpaque *);
};
} // namespace pplx
