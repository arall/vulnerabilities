AesManaged aes4 = new AesManaged
{
  KeySize = 128,
  BlockSize = 128,
  Mode = CipherMode.ECB, // Noncompliant
  Padding = PaddingMode.PKCS7
};