<?php

$doc = new DOMDocument();
$doc->load("xxe.xml", LIBXML_NOENT); // Noncompliant (LIBXML_NOENT enable external entities substitution)