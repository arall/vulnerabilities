<?php

$reader = new XMLReader();
$reader->open("xxe.xml");
$reader->setParserProperty(XMLReader::SUBST_ENTITIES, true); // Noncompliant (SUBST_ENTITIES enable external entities substitution)