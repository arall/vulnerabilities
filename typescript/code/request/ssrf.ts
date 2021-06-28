const request = require('request');

function ssrf(req, res) {
  const url = req.query.url;

  request(url, callback); // Noncompliant
}