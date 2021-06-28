<?php

curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, FALSE); // Noncompliant
curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, 0);  // Noncompliant