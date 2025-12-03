#include <stdio.h>

int main (int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  if (x < 0) {
    printf("Invalid Value!");
    return 0;
  }
  double ans;
  if (x <= 50) {
    ans = (double)(x * 0.53);
  }else if (x > 50) {
    ans = (double)(50 * 0.53) + (double)((x-50)* 0.58);
  }
  printf("cost = %.2f\n", ans);
  return 0;
}
