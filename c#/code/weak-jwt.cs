var decodedtoken1 = decoder.Decode(token, secret, verify: false); // Noncompliant: signature should be verified

var decodedtoken2 = new JwtBuilder()
   .WithSecret(secret)
   .Decode(forgedtoken1); // Noncompliant: signature should be verified