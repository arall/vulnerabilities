protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
    String file = request.getParameter("file");

    File fileUnsafe = new File(file);
    try {
      FileUtils.forceDelete(fileUnsafe); // Noncompliant
    }
    catch(IOException ex){
      System.out.println (ex.toString());
    }
}