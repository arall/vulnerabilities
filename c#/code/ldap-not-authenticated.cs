DirectoryEntry myDirectoryEntry = new DirectoryEntry(adPath);
myDirectoryEntry.AuthenticationType = AuthenticationTypes.None; // Noncompliant

DirectoryEntry myDirectoryEntry = new DirectoryEntry(adPath, "u", "p", AuthenticationTypes.None); // Noncompliant