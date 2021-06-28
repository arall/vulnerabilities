import os
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import rsa, padding
from cryptography.hazmat.primitives import hashes

# Example for a symmetric cipher: AES
aes = Cipher(algorithms.AES(key), modes.CBC(iv), backend=default_backend())  # Noncompliant
aes = Cipher(algorithms.AES(key), modes.ECB(), backend=default_backend())  # Noncompliant

# Example for a asymmetric cipher: RSA
ciphertext = public_key.encrypt(
  message,
  padding.PKCS1v15() # Noncompliant
)

plaintext = private_key.decrypt(
  ciphertext,
  padding.PKCS1v15() # Noncompliant
)