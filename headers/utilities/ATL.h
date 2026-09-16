#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DMCmnUtils.dll by Windissect. 4 member(s).
class ATL {
public:
    class CComBSTR;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base64Decode@ATL@@YAHPEBDHPEAEPEAH@Z
    int Base64Decode(char const *, int, unsigned char *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base64Encode@ATL@@YAHPEBEHPEADPEAHK@Z
    int Base64Encode(unsigned char const *, int, char *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base64EncodeGetRequiredLength@ATL@@YAHHK@Z
    int Base64EncodeGetRequiredLength(int, unsigned long);
};
