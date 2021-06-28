<?php

function encrypt($data, $key) {
  $crypted='';
  openssl_public_encrypt($data, $crypted, $key, OPENSSL_NO_PADDING); // Noncompliant
  return $crypted;
}