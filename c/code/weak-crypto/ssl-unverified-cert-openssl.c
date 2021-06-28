#include <openssl/ssl.h>

const SSL_METHOD *method = TLS_method();
SSL_CTX *ctx = SSL_CTX_new(method);

SSL_CTX_set_verify(ctx, SSL_VERIFY_NONE, NULL); // Noncompliant; SSL_VERIFY_NONE means no automatic certificate verification

SSL *ssl = SSL_new(ctx);

// ...

SSL_connect(ssl);