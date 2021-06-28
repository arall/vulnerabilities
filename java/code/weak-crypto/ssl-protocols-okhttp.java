ConnectionSpec spec = new ConnectionSpec.Builder(ConnectionSpec.MODERN_TLS)
      .tlsVersions(TlsVersion.TLS_1_1) // Noncompliant
      .build();