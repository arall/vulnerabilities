JavaScriptSerializer serializer1 = new JavaScriptSerializer(new SimpleTypeResolver()); // Noncompliant: SimpleTypeResolver is unsecure (every types is resolved)
serializer1.Deserialize<ExpectedType>(json);
