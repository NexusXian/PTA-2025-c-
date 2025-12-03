#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
  double a, x;
  scanf("%lf %lf", &a, &x);
  double ans = sqrt(a * x) + log(x + a) + exp(x);
  printf("y = %.2lf\n", ans);
  return 0;
}
