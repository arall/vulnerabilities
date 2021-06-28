// Signing:
io.jsonwebtoken.Jwts.builder() // Noncompliant, token is not signed.
  .setSubject(USER_LOGIN)
  .compact();
// Verifying:
io.jsonwebtoken.Jwts.parser().setSigningKey(SECRET_KEY).parse(token).getBody(); // Noncompliant