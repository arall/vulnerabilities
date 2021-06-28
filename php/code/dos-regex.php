<?php

$regex = $_GET["regex"];
$input = $_GET["input"];

preg_grep($regex, $input); // Noncompliant