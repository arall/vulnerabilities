<?php

$ldapconn = ldap_connect("ldap.example.com");

if ($ldapconn) {
    $ldapbind = ldap_bind($ldapconn); // Noncompliant; anonymous authentication, no user/password provided
}