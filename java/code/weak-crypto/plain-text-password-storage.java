@Autowired
public void configureGlobal(AuthenticationManagerBuilder auth, DataSource dataSource) throws Exception {
  auth.jdbcAuthentication()
    .dataSource(dataSource)
    .usersByUsernameQuery("SELECT * FROM users WHERE username = ?")
    .passwordEncoder(new StandardPasswordEncoder()); // Noncompliant

  // OR
  auth.jdbcAuthentication()
    .dataSource(dataSource)
    .usersByUsernameQuery("SELECT * FROM users WHERE username = ?"); // Noncompliant; default uses plain-text

  // OR
  auth.userDetailsService(...); // Noncompliant; default uses plain-text
  // OR
  auth.userDetailsService(...).passwordEncoder(new StandardPasswordEncoder()); // Noncompliant
}