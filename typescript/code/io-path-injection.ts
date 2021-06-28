const fs = require('fs');

function (req, res) {
  const reqPath = __dirname + req.query.filename; // user-controlled path

  let data = fs.readFileSync(reqPath, { encoding: 'utf8', flag: 'r' }); // Noncompliant
}