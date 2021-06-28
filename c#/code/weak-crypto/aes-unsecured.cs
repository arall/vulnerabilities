AesManaged aes = new AesManaged
{
  KeySize = 128,
  BlockSize = 128,
  Mode = CipherMode.OFB, // Noncompliant
  Padding = PaddingMode.PKCS7
};