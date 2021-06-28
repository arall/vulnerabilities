// Signing:
com.auth0.jwt.JWT.create()
  .withSubject(SUBJECT)
  .sign(Algorithm.none()); // Noncompliant, use only strong cipher algorithms when signing this JWT.
// Verifying:
JWTVerifier nonCompliantVerifier = com.auth0.jwt.JWT.require(Algorithm.none()) // Noncompliant
  .withSubject(LOGIN)
  .build();