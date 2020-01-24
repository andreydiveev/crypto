//#include "primitives/block.h"
//#include "hash.h"
//#include "tinyformat.h"
//#include "utilstrencodings.h"
#include "crypto/common.h"

int main(int argc, char* argv[])
{
    uint256 targetHash;
    lyra2re2_hash(BEGIN(nVersion), BEGIN(targetHash));
    return targetHash;

    return EXIT_SUCCESS;
}

