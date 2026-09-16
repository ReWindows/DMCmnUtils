#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
namespace web::http {
class http_response {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?content_ready@http_response@http@web@@QEBA?AV?$task@Vhttp_response@http@web@@@pplx@@XZ
    WindissectOpaque content_ready() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?extract_json@http_response@http@web@@QEBA?AV?$task@Vvalue@json@web@@@pplx@@_N@Z
    WindissectOpaque extract_json(bool) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0http_response@http@web@@QEAA@XZ
    http_response();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_response@http@web@@QEAA@XZ
    ~http_response();
};
} // namespace web::http
