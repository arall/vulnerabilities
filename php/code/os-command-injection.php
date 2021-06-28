<?php

$binary = $_GET["binary"];

// If the value "/sbin/shutdown" is passed as binary and the web server is running as root,
// then the machine running the web server will be shut down and become unavailable for future requests

exec( $binary ); // Noncompliant