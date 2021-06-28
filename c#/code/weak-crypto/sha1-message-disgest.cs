var hashProvider1 = new MD5CryptoServiceProvider(); //Noncompliant
var hashProvider2 = (HashAlgorithm)CryptoConfig.CreateFromName("MD5"); //Noncompliant
var hashProvider3 = new SHA1Managed(); //Noncompliant
var hashProvider4 = HashAlgorithm.Create("SHA1"); //Noncompliant