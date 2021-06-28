var tripleDES1 = new TripleDESCryptoServiceProvider(); // Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack

var simpleDES = new DESCryptoServiceProvider(); // Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search

var RC2 = new RC2CryptoServiceProvider(); // Noncompliant: RC2 is vulnerable to a related-key attack