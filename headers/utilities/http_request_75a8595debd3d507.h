#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 2 member(s).
namespace web::http {
class http_request {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_body@http_request@http@web@@QEAAXAEBVvalue@json@3@@Z
    void set_body(::web::json::value const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_request@http@web@@QEAA@XZ
    ~http_request();
};
} // namespace web::http
