#include "libxml/parser.h"

xmlDocPtr doc = xmlReadFile(xmlFile, nullptr, XML_PARSE_DTDLOAD | XML_PARSE_NOENT); // Noncompliant