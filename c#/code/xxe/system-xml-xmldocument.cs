// .NET Framework < 4.5.2
XmlDocument parser = new XmlDocument(); // Noncompliant: XmlDocument is not safe by default
parser.LoadXml("xxe.xml");

// .NET Framework 4.5.2+
XmlDocument parser = new XmlDocument();
parser.XmlResolver = new XmlUrlResolver(); // Noncompliant: XmlDocument.XmlResolver configured with XmlUrlResolver that makes it unsafe
parser.LoadXml("xxe.xml");
