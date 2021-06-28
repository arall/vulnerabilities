function (req, res) {
  let query = { user: req.query.user, city: req.query.city };

  db.collection("users")
    .find(query) // Noncompliant: http://website/?user=admin&city[%24ne]=
    .toArray((err, docs) => { });
}