#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace web::json::details {
class _Array {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_array@_Array@details@json@web@@UEAAAEAVarray@34@XZ
    virtual ::web::json::array & as_array();
    // Category: Method | Source: PDB Internal
    // Symbol: ?index@_Array@details@json@web@@UEAAAEAVvalue@34@_K@Z
    virtual ::web::json::value & index(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?size@_Array@details@json@web@@UEBA_KXZ
    virtual uint64_t size() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?type@_Array@details@json@web@@UEBA?AW4value_type@value@34@XZ
    virtual int type() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_reserve_size@_Array@details@json@web@@AEBA_KXZ
    uint64_t get_reserve_size() const;
};
} // namespace web::json::details
