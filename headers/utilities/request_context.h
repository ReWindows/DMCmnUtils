#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace web::http::client::details {
class request_context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?complete_headers@request_context@details@client@http@web@@QEAAXXZ
    void complete_headers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?complete_request@request_context@details@client@http@web@@QEAAX_K@Z
    void complete_request(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?handle_compression@request_context@details@client@http@web@@QEAA_NXZ
    bool handle_compression();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1request_context@details@client@http@web@@UEAA@XZ
    virtual ~request_context();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@request_context@details@client@http@web@@MEAAXXZ
    virtual void finish();
};
} // namespace web::http::client::details
