using System;
using System.Security.Cryptography;

namespace MyLibrary
{
    public class MyCryptoClass
    {
        static void Main()
        {
            var dsa1 = new DSACryptoServiceProvider(); // Noncompliant - default key size is 1024
            dsa1.KeySize = 2048; // Noncompliant - the setter does not update the underlying key size for the DSACryptoServiceProvider class

            var dsa2 = new DSACryptoServiceProvider(2048); // Noncompliant - cannot create DSACryptoServiceProvider with a key size bigger than 1024

            var rsa1 = new RSACryptoServiceProvider(); // Noncompliant - default key size is 1024
            rsa1.KeySize = 2048; // Noncompliant - the setter does not update the underlying key size for the RSACryptoServiceProvider class

            var rsa2 = new RSACng(1024); // Noncompliant

            // ...
        }
    }
}