import ssl

ctx = ssl._create_unverified_context() # Noncompliant: by default hostname verification is not done
ctx = ssl._create_stdlib_context() # Noncompliant: by default hostname verification is not done

ctx = ssl.create_default_context()
ctx.check_hostname = False # Noncompliant

ctx = ssl._create_default_https_context()
ctx.check_hostname = False # Noncompliant