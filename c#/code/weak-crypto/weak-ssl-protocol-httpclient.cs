new HttpClientHandler
{
    SslProtocols = SslProtocols.Tls // Noncompliant; legacy version TLSv1 is enabled
};