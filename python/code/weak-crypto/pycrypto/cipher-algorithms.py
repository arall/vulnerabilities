from Crypto.Cipher import *

des3 = DES.new('ChangeIt') # Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search
tdes3 = DES3.new('ChangeItChangeIt') # Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
bf2 = Blowfish.new('ChangeItWithYourKey', Blowfish.MODE_CBC, 'ChangeIt') # Noncompliant: Blowfish use a 64-bit block size makes it
rc21 = ARC2.new('ChangeItWithYourKey', ARC2.MODE_CFB, 'ChangeIt') # Noncompliant: RC2 is vulnerable to a related-key attack
rc41 = ARC4.new('ChangeItWithYourKey') # Noncompliant: vulnerable to several attacks (see https://en.wikipedia.org/wiki/RC4#Security)