#include "xercesc/parsers/SAXParser.hpp"

SAXParser* SAXparser = new SAXParser(); // Noncompliant: by default entities resolution is enabled so SAXParser is not safe
SAXparser->setDisableDefaultEntityResolution(false); // Noncompliant: enable resolution of entities explicitly

SAXparser->parse(xmlFile);