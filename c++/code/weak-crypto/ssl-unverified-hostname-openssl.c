#include <openssl/ssl.h>

SSL_CTX *ctx = get_ctx();
SSL *ssl = SSL_new(ctx);

// ...

// By default hostname validation is disabled
// `SSL_set1_host` is not called
SSL_set_verify(ssl, SSL_VERIFY_PEER, NULL);

// ...

SSL_connect(ssl); // Noncompliant