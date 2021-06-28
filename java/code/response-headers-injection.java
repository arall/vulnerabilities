protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
  String value = req.getParameter("value");
  resp.addHeader("X-Header", value); // Noncompliant
}