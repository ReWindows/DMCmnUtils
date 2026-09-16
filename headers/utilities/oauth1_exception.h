#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 5 member(s).
namespace web::http::oauth1::experimental {
class oauth1_exception {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0oauth1_exception@experimental@oauth1@http@web@@QEAA@AEBV01234@@Z
    oauth1_exception(::web::http::oauth1::experimental::oauth1_exception const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@oauth1_exception@experimental@oauth1@http@web@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1oauth1_exception@experimental@oauth1@http@web@@UEAA@XZ
    virtual ~oauth1_exception();
};
} // namespace web::http::oauth1::experimental
