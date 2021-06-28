import java.io.IOException;
import javax.servlet.http.HttpServletRequest;

public void runUnsafe(HttpServletRequest request) throws IOException {
  String cmd = request.getParameter("command");
  String arg = request.getParameter("arg");

  Runtime.getRuntime().exec(cmd+" "+arg); // Noncompliant
}