<?php

$user = $_GET["user"];
$pass = $_GET["pass"];

$doc = new DOMDocument();
$doc->load("test.xml");
$xpath = new DOMXPath($doc);

$expression = "/users/user[@name='" . $user . "' and @pass='" . $pass . "']";
$xpath->evaluate($expression); // Noncompliant