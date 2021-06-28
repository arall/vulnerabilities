from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
from Crypto.Util.Padding import pad, unpad

static_vector = b'x' * AES.block_size
cipher = AES.new(key, AES.MODE_CBC, static_vector)
cipher.encrypt(pad(data, AES.block_size))  # Noncompliant