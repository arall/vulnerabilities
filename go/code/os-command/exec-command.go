package main

import "os/exec"

func main() {
  // Command example
  cmd := exec.Command("echo", "hello")

  // CommandContext is like Command but includes a context.
  err := exec.CommandContext(ctx, "sleep", "5").Run()

  // Not vulnerable
  cmd := exec.Command("echo", "1; cat /etc/passwd")

  // Vunerable
  out, _ = exec.Command("sh", "-c", "echo 1 | cat /etc/passwd").Output()

  // Vulnerable
  userInput1 = "cat" // value supplied by user input
  userInput2 = "/etc/passwd" // value supplied by user input
  out, _ = exec.Command(userInput1, userInput2)
}