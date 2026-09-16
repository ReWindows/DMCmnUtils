#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 9 member(s).
namespace web::http::details {
class http_msg_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_extract_json@http_msg_base@details@http@web@@QEAA?AVvalue@json@4@_N@Z
    ::web::json::value _extract_json(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_content_length_and_set_compression@http_msg_base@details@http@web@@QEAA_KXZ
    uint64_t _get_content_length_and_set_compression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_stream_length@http_msg_base@details@http@web@@QEAA_KXZ
    uint64_t _get_stream_length();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_prepare_to_receive_data@http_msg_base@details@http@web@@QEAAXXZ
    void _prepare_to_receive_data();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0http_msg_base@details@http@web@@QEAA@XZ
    http_msg_base();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_msg_base@details@http@web@@UEAA@XZ
    virtual ~http_msg_base();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_content_length@http_msg_base@details@http@web@@IEAA_K_N@Z
    uint64_t _get_content_length(bool);
};
} // namespace web::http::details
