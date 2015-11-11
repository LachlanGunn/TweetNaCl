#include "tweetnacl.h"

#include <stdlib.h>

extern size_t nacl_get_sign_pk_length();
extern size_t nacl_get_sign_sk_length();
extern size_t nacl_get_sign_sig_extra_length();

size_t nacl_get_sign_pk_length()
{
  return crypto_sign_PUBLICKEYBYTES;
}

size_t nacl_get_sign_sk_length()
{
  return crypto_sign_SECRETKEYBYTES;
}

size_t nacl_get_sign_sig_extra_length()
{
  return crypto_sign_BYTES;
}
