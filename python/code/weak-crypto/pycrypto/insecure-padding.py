# https://pycrypto.readthedocs.io/en/latest/
from Crypto.Cipher import *
from Crypto.Random import get_random_bytes
from Crypto.Util import Counter
from Crypto.PublicKey import RSA

# Example for a symmetric cipher: AES
AES.new(key, AES.MODE_ECB)  # Noncompliant
AES.new(key, AES.MODE_CBC, IV=iv)  # Noncompliant

# Example for a asymmetric cipher: RSA
cipher = PKCS1_v1_5.new(key) # Noncompliant