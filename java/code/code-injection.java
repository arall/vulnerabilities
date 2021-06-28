protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
  String input = req.getParameter("input");

  ScriptEngineManager manager = new ScriptEngineManager();
  ScriptEngine engine = manager.getEngineByName("JavaScript");
  engine.eval(input); // Noncompliant
}