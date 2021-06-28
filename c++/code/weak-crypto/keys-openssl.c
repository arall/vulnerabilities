#include <openssl/dh.h>
#include <openssl/dsa.h>
#include <openssl/ec.h>
#include <openssl/obj_mac.h>
#include <openssl/rsa.h>

// RSA
RSA_generate_key_ex(key, 1024, e, NULL);  // Noncompliant; 2nd argument "bits" must be ≥ 2048

// DSA
DSA_generate_parameters_ex(dsa, 1024, NULL, 0, NULL, NULL, NULL); // Noncompliant; 2nd argument "bits" must be ≥ 2048

// DH
DH_generate_parameters_ex(dh, 1024, DH_GENERATOR_2, NULL); // Noncompliant; 2nd argument "prime_len" must be ≥ 2048

// EC
EC_KEY_new_by_curve_name(NID_secp112r1); // Noncompliant; EC key length is 112. Should be ≥ 224