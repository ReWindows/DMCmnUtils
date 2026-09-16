#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 7 member(s).
namespace web::json::details {
class _Object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_object@_Object@details@json@web@@UEAAAEAVobject@34@XZ
    virtual ::web::json::object & as_object();
    // Category: Method | Source: PDB Internal
    // Symbol: ?size@_Object@details@json@web@@UEBA_KXZ
    virtual uint64_t size() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?type@_Object@details@json@web@@UEBA?AW4value_type@value@34@XZ
    virtual int type() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_reserve_size@_Object@details@json@web@@AEBA_KXZ
    uint64_t get_reserve_size() const;
};
} // namespace web::json::details
