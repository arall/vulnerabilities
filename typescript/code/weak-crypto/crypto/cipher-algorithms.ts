crypto.createCipheriv("DES", key, iv); // Noncompliant: DES / 3DES is unsecure
crypto.createCipheriv("DES-EDE", key, ""); // Noncompliant: DES / 3DES is unsecure
crypto.createCipheriv("DES-EDE3", key, ""); // Noncompliant: DES / 3DES is unsecure
crypto.createCipheriv("RC2", key, iv); // Noncompliant: RC2 is vulnerable to a related-key attack
crypto.createCipheriv("RC4", key, "");// Noncompliant: RC4 is vulnerable to several attacks
crypto.createCipheriv("BF", key, iv);// Noncompliant: Blowfish use a 64-bit block size makes it vulnerable to birthday attacks