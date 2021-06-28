const safe = require('safe-regex');

function (req, res) {
  // Not a good validator, eg of FN: http://test/noncompliant?pattern=^(a|aa)%2B$&input=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa!
  if(safe(req.query.pattern)) {
    const regex = RegExp(req.query.pattern); // Noncompliant
    regex.test(req.query.input);
  }
};