#include "xercesc/parsers/XercesDOMParser.hpp"

XercesDOMParser *DOMparser = new XercesDOMParser();
// no entity reference node will be created so the entities will be expanded
DOMparser->setCreateEntityReferenceNodes(false); // Noncompliant
DOMparser->setDisableDefaultEntityResolution(false); // Noncompliant

DOMparser->parse(xmlFile);