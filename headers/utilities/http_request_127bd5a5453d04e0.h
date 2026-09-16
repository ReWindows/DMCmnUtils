#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 6 member(s).
namespace web::http::details {
class _http_request {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?absolute_uri@_http_request@details@http@web@@QEBA?AVuri@4@XZ
    ::web::uri absolute_uri() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?relative_uri@_http_request@details@http@web@@QEBA?AVuri@4@XZ
    ::web::uri relative_uri() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_request_uri@_http_request@details@http@web@@QEAAXAEBVuri@4@@Z
    void set_request_uri(::web::uri const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_http_request@details@http@web@@UEAA@XZ
    virtual ~_http_request();
};
} // namespace web::http::details
