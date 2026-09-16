#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 6 member(s).
namespace web::http {
class http_exception {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0http_exception@http@web@@QEAA@AEBV012@@Z
    http_exception(::web::http::http_exception const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0http_exception@http@web@@QEAA@H@Z
    http_exception(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@http_exception@http@web@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_exception@http@web@@UEAA@XZ
    virtual ~http_exception();
};
} // namespace web::http
