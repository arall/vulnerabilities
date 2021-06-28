#include <openssl/ssl.h>

static int verify_callback(int preverify_ok, X509_STORE_CTX *ctx) { return 1; } // This callback always validate the certificate

const SSL_METHOD *method = TLS_method();
SSL_CTX *ctx = SSL_CTX_new(method);

SSL_CTX_set_verify(ctx, CURLOPT_SSL_VERIFYPEER, verify_callback); // Noncompliant; the verify callback result overrides OpenSSL built-in verification enabled by CURLOPT_SSL_VERIFYPEER option.

SSL *ssl = SSL_new(ctx);

// ...

SSL_connect(ssl);