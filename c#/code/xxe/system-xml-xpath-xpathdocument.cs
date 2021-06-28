// prior to .NET 4.5.2
XPathDocument doc = new XPathDocument("example.xml"); // Noncompliant
XPathNavigator nav = doc.CreateNavigator();
string xml = nav.InnerXml.ToString();