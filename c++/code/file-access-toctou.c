#include <stdio.h>

void fopen_with_toctou(const char *file) {
  if (access(file, F_OK) == -1 && errno == ENOENT) {
    // the file doesn't exist
    // it is now created in order to write some data inside
    FILE *f = fopen(file, "w"); // Noncompliant: a race condition window exist from access() call to fopen() call calls
    if (NULL == f) {
      /* Handle error */
    }

    if (fclose(f) == EOF) {
      /* Handle error */
    }
  }
}