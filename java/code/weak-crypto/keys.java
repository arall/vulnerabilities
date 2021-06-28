KeyPairGenerator keyPairGen1 = KeyPairGenerator.getInstance("RSA");
keyPairGen1.initialize(1024); // Noncompliant

KeyPairGenerator keyPairGen5 = KeyPairGenerator.getInstance("EC");
ECGenParameterSpec ecSpec1 = new ECGenParameterSpec("secp112r1"); // Noncompliant
keyPairGen5.initialize(ecSpec1);

KeyGenerator keyGen1 = KeyGenerator.getInstance("AES");
keyGen1.init(64); // Noncompliant