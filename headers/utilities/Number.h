#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace web::json::details {
class _Number {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_double@_Number@details@json@web@@UEBANXZ
    virtual double as_double() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_integer@_Number@details@json@web@@UEBAHXZ
    virtual int as_integer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_number@_Number@details@json@web@@UEAAAEBVnumber@34@XZ
    virtual ::web::json::number const & as_number();
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_double@_Number@details@json@web@@UEBA_NXZ
    virtual bool is_double() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_integer@_Number@details@json@web@@UEBA_NXZ
    virtual bool is_integer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?type@_Number@details@json@web@@UEBA?AW4value_type@value@34@XZ
    virtual int type() const;
};
} // namespace web::json::details
