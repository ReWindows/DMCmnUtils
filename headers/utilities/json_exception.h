#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 6 member(s).
namespace web::json {
class json_exception {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0json_exception@json@web@@QEAA@AEBV012@@Z
    json_exception(::web::json::json_exception const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0json_exception@json@web@@QEAA@QEBD@Z
    json_exception(char const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@json_exception@json@web@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1json_exception@json@web@@UEAA@XZ
    virtual ~json_exception();
};
} // namespace web::json
