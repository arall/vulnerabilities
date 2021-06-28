<?php

$url = $_GET["url"];
$resp = file_get_contents($url); // Noncompliant
// ...