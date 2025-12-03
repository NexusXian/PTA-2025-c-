#include <stdio.h>
#include <math.h>
#define pi 3.14

int main (int argc, char *argv[]) {
  int r;
  scanf("%d", &r);
  double v = pow(r, 3) * pi * 4 / 3;
  printf("v = %.2f\n", v);
  return 0;
}
