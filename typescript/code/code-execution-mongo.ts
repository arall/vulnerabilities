let username = req.query.username;
query = { $where: `this.username == '${username}'` } // Noncompliant
User.find(query, function (err, users) {
  if (err) {
    // Handle errors
  } else {
    res.render('userlookup', { title: 'User Lookup', users: users });
  }
});