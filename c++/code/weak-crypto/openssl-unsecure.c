#include <openssl/evp.h>
#include <openssl/rsa.h>

// Example for a symmetric cipher: AES
EVP_aes_128_ecb(); // Noncompliant
EVP_aes_128_cbc(); // Noncompliant

// Example for a asymmetric cipher: RSA
RSA_public_decrypt(flen, from, to, key, RSA_PKCS1_PADDING); // Noncompliant
RSA_public_decrypt(flen, from, to, key, RSA_SSLV23_PADDING); // Noncompliant
RSA_public_decrypt(flen, from, to, key, RSA_NO_PADDING); // Noncompliant