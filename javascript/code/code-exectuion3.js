const cp = require('child_process');

function (req, res) {
  const cmd = 'ls '+req.query.arg;

  const out = cp.execSync(cmd); // Noncompliant: example of a command injection, req.query.arg = -la . ;cat /etc/passwd
}