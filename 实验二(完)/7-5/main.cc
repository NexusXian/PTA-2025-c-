#include <stdio.h>

int main(int argc, char *argv[]) {
  int x, y;
  char c;
  scanf("%d %c %d", &x, &c, &y);
  if (c == '+') {
    printf("%d\n", x + y);
  } else if (c == '-') {
    printf("%d\n", x - y);
  } else if (c == '*') {
    printf("%d\n", x * y);
  } else if (c == '/') {
    printf("%d\n", x / y);
  } else if (c == '%') {
    printf("%d\n", x % y);
  } else {
    printf("ERROR\n");
  }

  return 0;
}
