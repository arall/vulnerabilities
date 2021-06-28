SecureRandom sr = new SecureRandom();
sr.setSeed(123456L); // Noncompliant
int v = sr.next(32);

sr = new SecureRandom("abcdefghijklmnop".getBytes("us-ascii")); // Noncompliant
v = sr.next(32);