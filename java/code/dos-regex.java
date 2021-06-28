public boolean validate(javax.servlet.http.HttpServletRequest request) {
  String regex = request.getParameter("regex");
  String input = request.getParameter("input");

  input.matches(regex);  // Noncompliant
}