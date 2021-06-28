#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/rsa.h>

// Example for a symmetric cipher: AES
CryptoPP::ECB_Mode<CryptoPP::AES>::Encryption(); // Noncompliant
CryptoPP::CBC_Mode<CryptoPP::AES>::Encryption(); // Noncompliant

// Example for a asymmetric cipher: RSA
CryptoPP::RSAES<CryptoPP::PKCS1v15>::Encryptor(); // Noncompliant