#include <stdio.h>

int main (int argc, char *argv[]) {
  char s[114514];
  fgets(s, sizeof(s), stdin);
  int blank = 0;
  int digit = 0;
  int other = 0;
  for (int i = 0 ; s[i] != '\0';i++) {
    if (s[i] == ' ') {
      blank++;
    }else if (s[i] >= '0' && s[i] <= '9') {
      digit++;
    }else if (s[i] == '\n') {
      continue;
    }else {
      other++;
    }
  }
  printf("blank = %d, digit = %d, other = %d\n", blank, digit, other);
  return 0;
}
