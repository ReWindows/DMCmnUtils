#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 2 member(s).
namespace web::http {
class http_headers {
public:
    class _case_insensitive_cmp;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_content_length@http_headers@http@web@@QEAAX_K@Z
    void set_content_length(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_headers@http@web@@QEAA@XZ
    ~http_headers();
};
} // namespace web::http
