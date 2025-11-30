#include <stdio.h>

int gcd(int a, int b) {
  if (b != 0) {
    return gcd(b, a % b);
  }
  return a;
}

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d %d", &a, &b);

  int g = gcd(a, b);
  //防止溢出
  int l = a / g * b;
  printf("%d %d", g, l);
  return 0;
}
