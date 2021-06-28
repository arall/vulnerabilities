#include <openssl/ssl.h>

const SSL_METHOD *method = TLS_method(); // Noncompliant;  legacy version TLSv1 and TLSv1.1 are enabled
SSL_CTX *ctx = SSL_CTX_new(method);

SSL *ssl = SSL_new(ctx);

// ...

SSL_connect(ssl);