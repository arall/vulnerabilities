void f(char *password, size_t bufferSize) {
  char localToken[256];
  init(localToken, password);
  memset(password, ' ', strlen(password)); // Noncompliant, password is about to be freed
  memset(localToken, ' ', strlen(localBuffer)); // Noncompliant, localToken is about to go out of scope
  free(password);
}