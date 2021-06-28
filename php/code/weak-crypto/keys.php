<?php

$config = array(
    "digest_alg" => "sha512",
    "private_key_bits" => 1024, // Noncompliant
    "private_key_type" => OPENSSL_KEYTYPE_RSA,
);
$res = openssl_pkey_new($config);