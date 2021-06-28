File tempDir;
tempDir = File.createTempFile("", ".");
tempDir.delete();
tempDir.mkdir();  // Noncompliant