var myBinaryFormatter = new BinaryFormatter();
myBinaryFormatter.Deserialize(stream); // Noncompliant: a binder is not used to limit types during deserialization