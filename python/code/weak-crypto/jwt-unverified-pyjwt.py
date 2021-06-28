jwt.decode(token, verify = False)  # Noncompliant
jwt.decode(token, key, options={"verify_signature": False})  # Noncompliant