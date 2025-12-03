#include <math.h>
#include <stdio.h>

double fact(int n) {
  if (n == 1)
    return 1;
  return fact(n - 1) * n;
}

int main() {
  double eps, sum = 1, t = 1, fm = 1;
  scanf("%le", &eps);
  int i = 1;

  while (t >= eps) {
    fm *= 2 * i + 1;
    t = fact(i) * 1.0 / fm;
    sum += t;
    i++;
  }

  sum *= 2;

  printf("PI = %.5f", sum);
}
