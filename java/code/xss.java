protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
  String name = req.getParameter("name");
  PrintWriter out = resp.getWriter();
  out.write("Hello " + name); // Noncompliant
}