#include <stdio.h>

#include <string.h>

int main (int argc, char *argv[]) {

  char str[81];
  int len = 0;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char c[81];
    scanf("%s", c);
    int l = strlen(c);
    if (l > len) {
      len = l;
      strcpy(str, c);
    }
    if (l == len) {
      continue;
    }
  }

  printf("The longest is %s\n", str);
  return 0;
}
