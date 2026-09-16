#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 3 member(s).
namespace web::http::client {
class http_client {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0http_client@client@http@web@@QEAA@AEBVuri@3@AEBVhttp_client_config@123@@Z
    http_client(::web::uri const &, ::web::http::client::http_client_config const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?request@http_client@client@http@web@@QEAA?AV?$task@Vhttp_response@http@web@@@pplx@@Vhttp_request@34@AEBVcancellation_token@6@@Z
    WindissectOpaque request(::web::http::http_request, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1http_client@client@http@web@@QEAA@XZ
    ~http_client();
};
} // namespace web::http::client
