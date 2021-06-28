<?php

if (is_bad_ip($requester)) {
  sleep(5);  // Noncompliant
}