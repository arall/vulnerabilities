char array[10];
initialize(array);
void *pos = memchr(array, '@', 42); // Noncompliant, buffer overflow that could expose sensitive data