import ssl

ctx1 = ssl._create_unverified_context() # Noncompliant: by default certificate validation is not done
ctx2 = ssl._create_stdlib_context() # Noncompliant: by default certificate validation is not done

ctx3 = ssl.create_default_context()
ctx3.verify_mode = ssl.CERT_NONE # Noncompliant