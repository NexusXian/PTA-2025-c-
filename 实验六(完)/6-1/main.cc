void fun(char *s,char *t) {
  int len = 0;
  while(s[len] != '\0') {
    t[len] = s[len];
    len++;
  }
  for (int i = len - 1; i >= 0 ;i--) {
    t[len++] = s[i];
  }
  t[len] = '\0';
}
