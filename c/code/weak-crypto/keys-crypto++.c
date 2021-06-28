#include <cryptopp/dh.h>
#include <cryptopp/oids.h>
#include <cryptopp/rsa.h>
#include <cryptopp/rng.h>
#include <cryptopp/osrng.h>

CryptoPP::AutoSeededRandomPool rng;

// RSA
CryptoPP::InvertibleRSAFunction params;
params.GenerateRandomWithKeySize(rng,1024); // Noncompliant; 2nd argument "keySize" should be  ≥ 2048

// DSA
CryptoPP::DSA::PrivateKey privateKey;
privateKey.GenerateRandomWithKeySize(rng, 1024); // Noncompliant; 2nd argument "keySize" should be  ≥ 2048

// DH
CryptoPP::DH dh;
dh.AccessGroupParameters().GenerateRandomWithKeySize(rnd, 1024); // Noncompliant; 2nd argument "keySize" should be  ≥ 2048

// EC
CryptoPP::ASN1::secp112r1(); // Noncompliant; EC key length is 112. Should be ≥ 224