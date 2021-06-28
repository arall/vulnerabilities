let options = {
  secureProtocol: 'TLSv1_method' // Noncompliant: TLS1.0 is insecure
};

let options = {
  minVersion: 'TLSv1.1',  // Noncompliant: TLS1.1 is insecure
  maxVersion: 'TLSv1.2'
};

let options = {
  secureOptions: constants.SSL_OP_NO_SSLv2 | constants.SSL_OP_NO_SSLv3 | constants.SSL_OP_NO_TLSv1
}; // Noncompliant TLS 1.1 (constants.SSL_OP_NO_TLSv1_1) is not disabled