import os
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend

key = os.urandom(16)
iv = os.urandom(16)

tdes4 = Cipher(algorithms.TripleDES(key), mode=None, backend=default_backend()) # Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
bf3 = Cipher(algorithms.Blowfish(key), mode=None, backend=default_backend()) # Noncompliant: Blowfish use a 64-bit block size makes it vulnerable to birthday attacks
rc42 = Cipher(algorithms.ARC4(key), mode=None, backend=default_backend()) # Noncompliant: vulnerable to several attacks (see https://en.wikipedia.org/wiki/RC4#Security)