#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 7 member(s).
namespace web::http::client::details {
class winhttp_request_context {
public:
    class compression_state;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?allocate_request_space@winhttp_request_context@details@client@http@web@@QEAAXPEAE_K@Z
    void allocate_request_space(unsigned char *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?cleanup@winhttp_request_context@details@client@http@web@@QEAAXXZ
    void cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?on_send_request_validate_cn@winhttp_request_context@details@client@http@web@@QEAAXXZ
    void on_send_request_validate_cn();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1winhttp_request_context@details@client@http@web@@UEAA@XZ
    virtual ~winhttp_request_context();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish@winhttp_request_context@details@client@http@web@@MEAAXXZ
    virtual void finish();
};
} // namespace web::http::client::details
