<?php

$xml = file_get_contents("xxe.xml");
$doc = simplexml_load_string($xml, "SimpleXMLElement", LIBXML_NOENT); // Noncompliant (LIBXML_NOENT enable external entities substitution)