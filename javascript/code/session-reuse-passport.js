app.post('/login',
  passport.authenticate('local', { failureRedirect: '/login' }),
  function(req, res) {
    // Sensitive - no session.regenerate after login
    res.redirect('/');
  });