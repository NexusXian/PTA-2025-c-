char toUpper(char c) {
  if (c >= 'a' && c <= 'z') {
    c -= 32;
  }
  return c;
}

int getWordNum(char ar1[], char ch) {
  int i = 0;
  int count = 0;

  ch = toUpper(ch);

  while (ar1[i] != '\0') {

    while (ar1[i] == ' ')
      i++;

    if (ar1[i] == '\0')
      break;

    char firstChar = toUpper(ar1[i]);

    if (firstChar == ch)
      count++;

    while (ar1[i] != '\0' && ar1[i] != ' ')
      i++;
  }

  return count;
}
