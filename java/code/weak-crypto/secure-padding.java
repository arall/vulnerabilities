Cipher c1 = Cipher.getInstance("AES"); // Noncompliant: by default ECB mode is chosen
Cipher c2 = Cipher.getInstance("AES/ECB/NoPadding"); // Noncompliant: ECB doesn't provide serious message confidentiality

Cipher c3 = Cipher.getInstance("RSA/NONE/NoPadding"); // Noncompliant: RSA without OAEP padding scheme is not recommanded