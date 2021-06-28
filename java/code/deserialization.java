public class RequestProcessor {
  protected void processRequest(HttpServletRequest request) {
    ServletInputStream sis = request.getInputStream();
    ObjectInputStream ois = new ObjectInputStream(sis);
    Object obj = ois.readObject(); // Noncompliant
  }
}