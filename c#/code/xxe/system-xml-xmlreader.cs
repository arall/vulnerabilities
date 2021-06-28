// .NET Framework 4.5.2+
XmlReaderSettings settings = new XmlReaderSettings();
settings.DtdProcessing = DtdProcessing.Parse;
settings.XmlResolver = new XmlUrlResolver();
XmlReader reader = XmlReader.Create("xxe.xml", settings); // Noncompliant: XmlReader is safe by default and becomes unsafe if DtdProcessing = Parse and XmlResolver is not null
while (reader.Read())