<?php

$password = $_REQUEST['password'];

if (md5($password) === '1f3870be274f6c49b3e31a0c6728957f') { // Noncompliant; md5() hashing algorithm is not secure for password management
   
}

if (sha1($password) === 'd0be2dc421be4fcd0172e5afceea3970e2f3d940') { // Noncompliant; sha1() hashing algorithm is not secure for password management

}