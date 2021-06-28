<?php

curl_setopt($curl, CURLOPT_SSL_VERIFYHOST, FALSE); // Noncompliant
curl_setopt($curl, CURLOPT_SSL_VERIFYHOST, 0);  // Noncompliant