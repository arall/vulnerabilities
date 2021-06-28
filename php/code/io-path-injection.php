<?php

$userId = $_GET["userId"];
$fileUUID = $_GET["fileUUID"];

if ( $_SESSION["userId"] == $userId ) {
  unlink("/storage/" . $userId . "/" . $fileUUID); // Noncompliant
}