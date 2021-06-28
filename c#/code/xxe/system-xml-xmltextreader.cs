// .NET Framework < 4.5.2
XmlTextReader reader = new XmlTextReader("xxe.xml"); // Noncompliant: XmlTextReady is not safe by default
while (reader.Read())

// .NET Framework 4.5.2+
XmlTextReader reader = new XmlTextReader("xxe.xml");
reader.XmlResolver = new XmlUrlResolver(); // Noncompliant: XmlTextRead.XmlResolver configured with XmlUrlResolver that makes it unsafe
while (reader.Read())
