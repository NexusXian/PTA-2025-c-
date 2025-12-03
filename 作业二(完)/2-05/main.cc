#include <stdio.h>

int main (int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  double ans;
  if (x <= 15) {
    ans = (double)4 * x / 3;
  } else {
    ans = (double)2.5 * x - 17.5;
  }
  printf("%.2f\n", ans);
  return 0;
}

