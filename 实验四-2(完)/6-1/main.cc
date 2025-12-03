void StringCount(char s[]) {
  int letter = 0;
  int blank = 0;
  int digit = 0;
  int other = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ' || s[i] == '\n') {
      blank++;
    } else if (s[i] >= '0' && s[i] <= '9') {
      digit++;
    } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
      letter++;
    }else {
      other++;
    }
  }
  printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit,other);
}
