<?php

$url = $this->request->getQuery("url");
return $this->redirect($url); // Noncompliant