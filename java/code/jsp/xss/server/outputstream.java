String template = "<p>Hello, " + name + "!</p>";
response.getOutputStream().write(template.getBytes());
