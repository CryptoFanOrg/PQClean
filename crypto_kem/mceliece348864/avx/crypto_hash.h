#ifndef PQCLEAN_MCELIECE348864_AVX_CRYPTO_HASH_H
#define PQCLEAN_MCELIECE348864_AVX_CRYPTO_HASH_H
#include "fips202.h"

#define crypto_hash_32b(out,in,inlen) shake256(out, 32, in, inlen)

#endif
