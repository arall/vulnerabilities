from Cryptodome.Cipher import DES, DES3, ARC2, ARC4, Blowfish, AES
from Cryptodome.Random import get_random_bytes

key = b'-8B key-'
DES.new(key, DES.MODE_OFB) # Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search

key = DES3.adjust_key_parity(get_random_bytes(24))
cipher = DES3.new(key, DES3.MODE_CFB) # Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack

key = b'Sixteen byte key'
cipher = ARC2.new(key, ARC2.MODE_CFB) # Noncompliant: RC2 is vulnerable to a related-key attack

key = b'Very long and confidential key'
cipher = ARC4.new(key) # Noncompliant: vulnerable to several attacks (see https://en.wikipedia.org/wiki/RC4#Security)

key = b'An arbitrarily long key'
cipher = Blowfish.new(key, Blowfish.MODE_CBC) # Noncompliant: Blowfish use a 64-bit block size makes it vulnerable to birthday attacks