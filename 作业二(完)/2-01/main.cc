#include <stdio.h>
#include <math.h>

double func1(double x) {
  return sqrt(x);
}

double func2(double x) {
  
  return pow(x + 1, 2) + 2 * x + 1 / x; 
}

int main() {
  double x;
  scanf("%lf", &x);
  double ans;
  if (x >= 0) {
    ans = func1(x);
  } else {
    ans = func2(x);
  }

  printf("f(%.2lf) = %.2lf\n", x, ans);
  return 0;
}
