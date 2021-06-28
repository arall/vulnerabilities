var { privateKey, publicKey } = crypto.generateKeyPairSync('rsa', {
  modulusLength: 1024,  // Noncompliant
  publicKeyEncoding:  { type: 'spki', format: 'pem' },
  privateKeyEncoding: { type: 'pkcs8', format: 'pem' }
}); // Noncompliant: 1024 bits is too short for a RSA key pair

crypto.generateKeyPair('ec', {
  namedCurve: 'secp112r2',
  publicKeyEncoding:  { type: 'spki', format: 'pem' },
  privateKeyEncoding: { type: 'pkcs8', format: 'pem' }
}, callback); // Noncompliant: secp112r2 curve doesn't provide enough security