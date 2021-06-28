protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
  URL url = new URL(req.getParameter("url"));
  HttpURLConnection conn = (HttpURLConnection) url.openConnection(); // Noncompliant
}