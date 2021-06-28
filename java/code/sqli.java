public boolean authenticate(javax.servlet.http.HttpServletRequest request, java.sql.Connection connection) throws SQLException {
  String user = request.getParameter("user");
  String pass = request.getParameter("pass");

  String query = "SELECT * FROM users WHERE user = '" + user + "' AND pass = '" + pass + "'"; // Unsafe

  // If the special value "foo' OR 1=1 --" is passed as either the user or pass, authentication is bypassed
  // Indeed, if it is passed as a user, the query becomes:
  // SELECT * FROM users WHERE user = 'foo' OR 1=1 --' AND pass = '...'
  // As '--' is the comment till end of line syntax in SQL, this is equivalent to:
  // SELECT * FROM users WHERE user = 'foo' OR 1=1
  // which is equivalent to:
  // SELECT * FROM users WHERE 1=1
  // which is equivalent to:
  // SELECT * FROM users

  java.sql.Statement statement = connection.createStatement();
  java.sql.ResultSet resultSet = statement.executeQuery(query); // Noncompliant
  return resultSet.next();
}