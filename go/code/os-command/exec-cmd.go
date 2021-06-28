package main

import (
  "os/exec"
  "os"
)

func main() {
  cmd := &exec.Cmd {
    // Path is the path of the command to run.
    Path: "echo",
    // Args holds command line arguments, including the command as Args[0].
    Args: []string{ "echo", "hello" },
    Stdout: os.Stdout,
    Stderr: os.Stdout,
  }
  cmd.Start();
}