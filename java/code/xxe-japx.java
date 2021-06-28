DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance(); // Noncompliant

SAXParserFactory factory = SAXParserFactory.newInstance(); // Noncompliant

XMLInputFactory factory = XMLInputFactory.newInstance(); // Noncompliant

TransformerFactory factory = javax.xml.transform.TransformerFactory.newInstance();  // Noncompliant

SchemaFactory factory = SchemaFactory.newInstance(XMLConstants.W3C_XML_SCHEMA_NS_URI);  // Noncompliant