#include <cryptopp/arc4.h>
#include <cryptopp/blowfish.h>
#include <cryptopp/cast.h>
#include <cryptopp/des.h>
#include <cryptopp/gost.h>
#include <cryptopp/idea.h>
#include <cryptopp/rc2.h>
#include <cryptopp/tea.h>

CryptoPP::ARC4::Encryption(key, sizeof(key)); // Noncompliant: RC4/ARC4 has numerous design flaws which make it hard to use correctly
CryptoPP::Blowfish::Encryption(key, sizeof(key)); // Noncompliant: 64-bit size block
CryptoPP::GOST::Encryption(key, sizeof(key)); // Noncompliant: 64-bit size block
CryptoPP::IDEA::Encryption(key, sizeof(key)); // Noncompliant: 64-bit size block
CryptoPP::XTEA::Encryption(key, sizeof(key)); // Noncompliant: 64-bit size block
CryptoPP::DES::Encryption(key, sizeof(key)); // Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search
CryptoPP::DES_EDE2::Encryption(key, sizeof(key)); // Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
CryptoPP::DES_EDE3::Encryption(key, sizeof(key)); // Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
CryptoPP::DES_XEX3::Encryption(key, sizeof(key)); // Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
CryptoPP::RC2::Encryption(key, sizeof(key)); // Noncompliant: RC2 is vulnerable to a related-key attack
CryptoPP::RC2Encryption(key, sizeof(key)); // Noncompliant; alternative
CryptoPP::RC2Decryption(key, sizeof(key)); // Noncompliant; alternative