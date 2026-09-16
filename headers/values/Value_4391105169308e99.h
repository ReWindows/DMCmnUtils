#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 18 member(s).
namespace web::json::details {
class _Value {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_array@_Value@details@json@web@@UEAAAEAVarray@34@XZ
    virtual ::web::json::array & as_array();
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_bool@_Value@details@json@web@@UEBA_NXZ
    virtual bool as_bool() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_double@_Value@details@json@web@@UEBANXZ
    virtual double as_double() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_integer@_Value@details@json@web@@UEBAHXZ
    virtual int as_integer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_number@_Value@details@json@web@@UEAAAEBVnumber@34@XZ
    virtual ::web::json::number const & as_number();
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_object@_Value@details@json@web@@UEAAAEAVobject@34@XZ
    virtual ::web::json::object & as_object();
    // Category: Method | Source: PDB Internal
    // Symbol: ?cnst_index@_Value@details@json@web@@UEBAAEBVvalue@34@_K@Z
    virtual ::web::json::value const & cnst_index(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_element@_Value@details@json@web@@UEBA?AVvalue@34@_K@Z
    virtual ::web::json::value get_element(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?index@_Value@details@json@web@@UEAAAEAVvalue@34@_K@Z
    virtual ::web::json::value & index(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_double@_Value@details@json@web@@UEBA_NXZ
    virtual bool is_double() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?is_integer@_Value@details@json@web@@UEBA_NXZ
    virtual bool is_integer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?size@_Value@details@json@web@@UEBA_KXZ
    virtual uint64_t size() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?type@_Value@details@json@web@@UEBA?AW4value_type@value@34@XZ
    virtual int type() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_Value@details@json@web@@UEAA@XZ
    virtual ~_Value();
};
} // namespace web::json::details
