#include <botan/dl_group.h>
#include <botan/ec_group.h>
#include <botan/pubkey.h>
#include <botan/rng.h>
#include <botan/rsa.h>

// RSA
std::unique_ptr<Botan::RandomNumberGenerator> rng(new Botan::System_RNG);
Botan::RSA_PrivateKey rsaKey(*rng, 1024); // Noncompliant; 2nd argument "bits" should be ≥ 2048

// DSA / DH
Botan::DL_Group("modp/ietf/1024"); // Noncompliant; 1st argument "name" last component should be ≥ 2048
Botan::DL_Group("dsa/botan/1024"); // Noncompliant; 1st argument "name" last component should be ≥ 2048

// EC
Botan::EC_Group("secp160k1");      // Noncompliant; EC key length is 160. Should be ≥ 224