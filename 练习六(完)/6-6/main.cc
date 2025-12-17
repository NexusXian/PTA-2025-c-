char *str_cat(char *s, char *t) {
  int len1 = strlen(s);
  int len2 = strlen(t);
  for (int i = 0; i < len2; i++) {
    s[len1 + i] = t[i];
  }
  return s;
}
