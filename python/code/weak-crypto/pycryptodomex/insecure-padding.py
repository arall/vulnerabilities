from Cryptodome.Cipher import AES, PKCS1_OAEP,  PKCS1_v1_5
from Cryptodome.Random import get_random_bytes
from Cryptodome.PublicKey import RSA

# Example for a symmetric cipher: AES
AES.new(key, AES.MODE_ECB)  # Noncompliant
AES.new(key, AES.MODE_CBC)  # Noncompliant

# Example for a asymmetric cipher: RSA
cipher = PKCS1_v1_5.new(key) # Noncompliant