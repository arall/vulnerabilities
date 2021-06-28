<?php

$ctx = stream_context_create([
  'ssl' => [
    'crypto_method' =>
      STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT // Noncompliant
  ],
]);