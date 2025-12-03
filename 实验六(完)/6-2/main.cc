void strcopy(char *str1, char *str2, int m) {
  int i = 0;
  while (str1[m - 1 + i] != '\0') {
    str2[i] = str1[m - 1 + i];
    i++;
  }
  str2[i] = '\0';
}
