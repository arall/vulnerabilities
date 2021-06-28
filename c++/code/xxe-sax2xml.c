#include "xercesc/sax2/SAX2XMLReader.hpp"
SAX2XMLReader* reader = XMLReaderFactory::createXMLReader(); // Noncompliant: by default entities resolution is enabled so SAX2XMLReader is not safe
reader->setFeature(XMLUni::fgXercesDisableDefaultEntityResolution, false); // Noncompliant: enable resolution of entities explicitly

reader->parse(xmlFile);