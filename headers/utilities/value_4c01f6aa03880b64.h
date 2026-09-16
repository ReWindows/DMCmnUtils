#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 10 member(s).
namespace web::json {
class value {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_object@value@json@web@@QEAAAEAVobject@23@XZ
    ::web::json::object & as_object();
    // Category: Method | Source: PDB Internal
    // Symbol: ?null@value@json@web@@SA?AV123@XZ
    static ::web::json::value null();
    // Category: Method | Source: PDB Internal
    // Symbol: ?object@value@json@web@@SA?AV123@_N@Z
    static ::web::json::value object(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0value@json@web@@QEAA@$$QEAV012@@Z
    value(::web::json::value &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0value@json@web@@QEAA@AEBV012@@Z
    value(::web::json::value const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0value@json@web@@QEAA@XZ
    value();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1value@json@web@@QEAA@XZ
    ~value();
};
} // namespace web::json
