function (req, res) {
  const url = req.query.url; // user controlled input

  res.redirect(url); // Noncompliant
}