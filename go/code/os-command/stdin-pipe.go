package main

import (
  "fmt"
  "os/exec"
)

func main() {
  cmd := exec.Command("bash")
  // StdinPipe initialization
  cmdWriter, _ := cmd.StdinPipe()
  cmd.Start()
  // Vulnerability when `password` controlled by user input
  cmdInput := fmt.Sprintf("sshpass -p %s", password)
  // Writing to StdinPipe
  cmdWriter.Write([]byte(cmdInput + "\n"))
  cmd.Wait()
}