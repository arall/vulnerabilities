package main

import "syscall"
import "os"
import "os/exec"

// Exec invokes the execve(2) system call.
syscall.Exec(binary, args, env)
// ForkExec - combination of fork and exec, careful to be thread safe.
syscall.ForkExec(binary, args, env)

func vulnerableCode(userInput string) {
  // Do not let `path` be defined by user input
  path, _ := exec.LookPath(userInput)
  args := []string{"ls", "-a", "-l", "-h"}
  env := os.Environ()
  execErr := syscall.Exec(path, args, env)
}