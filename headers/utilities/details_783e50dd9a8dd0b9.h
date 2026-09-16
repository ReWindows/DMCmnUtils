#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 1 member(s).
namespace web::http {
class details {
public:
    class _http_request;
    class _http_response;
    class chunked_encoding;
    class http_msg_base;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse_headers_string@details@http@web@@YAXPEAGAEAVhttp_headers@23@@Z
    void parse_headers_string(unsigned short *, ::web::http::http_headers &);
};
} // namespace web::http
