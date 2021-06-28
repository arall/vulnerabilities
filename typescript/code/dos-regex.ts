function (req, res) {
  const pattern = RegExp(req.query.pattern); // Noncompliant
  pattern.test(req.query.input);
};