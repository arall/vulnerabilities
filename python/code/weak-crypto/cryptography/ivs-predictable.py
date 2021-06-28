from os import urandom
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

static_vector = b'x' * 16
cipher = Cipher(algorithms.AES(key), modes.CBC(static_vector))
cipher.encryptor()  # Noncompliant