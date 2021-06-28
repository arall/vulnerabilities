protected void configure(HttpSecurity http) throws Exception {
    http.authorizeRequests()
      .antMatchers("/resources/**", "/signup", "/about").permitAll() // Compliant
      .antMatchers("/admin/**").hasRole("ADMIN")
      .antMatchers("/admin/login").permitAll() // Noncompliant; the pattern "/admin/login" should occurs before "/admin/**"
      .antMatchers("/**", "/home").permitAll()
      .antMatchers("/db/**").access("hasRole('ADMIN') and hasRole('DBA')") // Noncompliant; the pattern "/db/**" should occurs before "/**"
      .and().formLogin().loginPage("/login").permitAll().and().logout().permitAll();
  }