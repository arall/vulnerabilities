public void Encrypt(byte[] key, byte[] data, MemoryStream target)
{
    byte[] initializationVector = new byte[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

    using var aes = new AesCryptoServiceProvider();
    var encryptor = aes.CreateEncryptor(key, initializationVector); // Noncompliant, hardcoded value is used

    using var cryptoStream = new CryptoStream(target, encryptor, CryptoStreamMode.Write);
    cryptoStream.Write(data);
}