@Override
protected void configure(HttpSecurity http) throws Exception {
   http.sessionManagement()
     .sessionFixation().none(); // Noncompliant: the existing session will continue
}