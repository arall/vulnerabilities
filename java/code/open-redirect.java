protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
  String location = req.getParameter("url");
  resp.sendRedirect(location); // Noncompliant
}