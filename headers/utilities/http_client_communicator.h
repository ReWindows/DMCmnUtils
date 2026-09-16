#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 6 member(s).
namespace web::http::client::details {
class _http_client_communicator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?client_config@_http_client_communicator@details@client@http@web@@QEBAAEBVhttp_client_config@345@XZ
    ::web::http::client::http_client_config const & client_config() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?finish_request@_http_client_communicator@details@client@http@web@@QEAAXXZ
    void finish_request();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_http_client_communicator@details@client@http@web@@UEAA@XZ
    virtual ~_http_client_communicator();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_http_client_communicator@details@client@http@web@@IEAA@$$QEAVuri@4@$$QEAVhttp_client_config@234@@Z
    _http_client_communicator(::web::uri &&, ::web::http::client::http_client_config &&);
};
} // namespace web::http::client::details
