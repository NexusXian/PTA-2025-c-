void Shift(char s[]) {
  char b[100];
  int len = strlen(s);
  for (int i = 0; i < 3; i++) {
    b[i] = s[i];
  }
  for (int i = 3; i < len; i++) {
    s[i - 3] = s[i];
  }

  for (int i = 0; i < 3; i++) {
    s[len + i - 3] = b[i];
  }
}
