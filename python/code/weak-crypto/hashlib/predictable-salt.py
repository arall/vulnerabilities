import crypt
from hashlib import pbkdf2_hmac

hash = pbkdf2_hmac('sha256', password, b'D8VxSmTZt2E2YV454mkqAY5e', 100000)    # Noncompliant: salt is hardcoded