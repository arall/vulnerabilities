from OpenSSL import SSL

ctx1 = SSL.Context(SSL.TLSv1_2_METHOD) # Noncompliant: by default certificate validation is not done

ctx2 = SSL.Context(SSL.TLSv1_2_METHOD)
ctx2.set_verify(SSL.VERIFY_NONE, verify_callback) # Noncompliant