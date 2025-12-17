char *match(char *s, char ch1, char ch2) {

  char *ch;
  int flag = 0;
  while (*s != '\0') {
    if (*s == ch1) {
      flag = 1;
      ch = s;
      break;
    } else {
      s++;
    }
  }

  if (flag == 1) {
    while (*s != '\0' && *s != ch2) {
      printf("%c", *s);
      s++;
    }
    if (*s == ch2) {
      printf("%c\n", *s);
    }
    if (*s == '\0') {
      printf("\n");
    }
    return ch;
  }
  printf("\n");
  return ch;
}
