RSACryptoServiceProvider RSA1 = new RSACryptoServiceProvider();
encryptedData = RSA1.Encrypt(dataToEncrypt, false); // Noncompliant: OAEP Padding is not used (second parameter set to false)