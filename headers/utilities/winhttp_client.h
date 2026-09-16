#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 8 member(s).
namespace web::http::client::details {
class winhttp_client {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?propagate@winhttp_client@details@client@http@web@@UEAA?AV?$task@Vhttp_response@http@web@@@pplx@@Vhttp_request@45@@Z
    virtual WindissectOpaque propagate(::web::http::http_request);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?open@winhttp_client@details@client@http@web@@IEAAKXZ
    unsigned long open();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_multiple_segment_write_data@winhttp_client@details@client@http@web@@CAXPEAVwinhttp_request_context@2345@@Z
    static void _multiple_segment_write_data(::web::http::client::details::winhttp_request_context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_transfer_encoding_chunked_write_data@winhttp_client@details@client@http@web@@CAXPEAVwinhttp_request_context@2345@@Z
    static void _transfer_encoding_chunked_write_data(::web::http::client::details::winhttp_request_context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?completion_callback@winhttp_client@details@client@http@web@@CAXPEAX_KK0K@Z
    static void completion_callback(void *, uint64_t, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read_next_response_chunk@winhttp_client@details@client@http@web@@CAXPEAVwinhttp_request_context@2345@K_N@Z
    static void read_next_response_chunk(::web::http::client::details::winhttp_request_context *, unsigned long, bool);
};
} // namespace web::http::client::details
