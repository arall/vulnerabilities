<?php

$user = $_GET["user"];
$pass = $_GET["pass"];

$filter = "(&(uid=" . $user . ")(userPassword=" . $pass . "))"; // Unsafe

$ds = ...
$basedn = "o=My Company, c=US";

$sr = ldap_list($ds, $basedn, $filter); // Noncompliant