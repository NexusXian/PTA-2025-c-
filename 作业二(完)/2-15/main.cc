#include <stdio.h>

int main (int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  int a = x / 10000;
  int b = x / 1000 % 10;
  int c = x / 100 % 10;
  int d = x / 10 % 10;
  int e = x % 10;
  if (a == e && b ==d) {
    printf("yes\n");
  }else {
    printf("no\n");
  }
  return 0;
}
