byte[] salt = "notrandom".getBytes();

PBEParameterSpec cipherSpec = new PBEParameterSpec(salt, 10000); // Noncompliant, predictable salt
PBEKeySpec spec = new PBEKeySpec(chars, salt, 10000, 256); // Noncompliant, predictable salt