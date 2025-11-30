#include <math.h>
#include <stdio.h>

double func(double n) {
  if (n == 0)
    return 1.0;
  return n * func(n - 1);
}

int main() {
  double x;
  scanf("%lf", &x);

  double ans = 0.0;
  int i = 0;

  while (1) {
    double t = pow(x, i) / func(i);
    ans += t;

    if (fabs(t) < 1e-5)
      break;

    i++;
  }

  printf("%.4f\n", ans);
  return 0;
}
