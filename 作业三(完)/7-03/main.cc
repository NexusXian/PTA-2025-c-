#include <stdio.h>

int main(int argc, char *argv[]) {

  int n;
  scanf("%d", &n);
  double ans = 0;
  double k = 1;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      ans += 1.0 / k;
      k += 3;
    }else if (i % 2 == 0) {
      ans -= 1.0 / k;
      k += 3;
    }
  }
  printf("sum = %.3lf", ans);

  return 0;
}
