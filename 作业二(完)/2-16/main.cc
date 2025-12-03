#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {

  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a == 0 && b == 0 && c == 0) {
    printf("Zero Equation\n");
    return 0;
  }
  if (a == 0 && b == 0 && c != 0) {
    printf("Not An Equation\n");
    return 0;
  }

  if (a == 0 && b != 0) {
    printf("%.2lf\n", -c / b);
    return 0;
  }

  double delta = b * b - 4 * a * c;
  if (delta > 0) {
    double x1;
    double x2;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (x1 == -0.0)
      x1 = 0.0;
    if (x2 == -0.0)
      x2 = 0.0;
    if (x1 > x2) {
      printf("%.2lf\n", x1);
      printf("%.2lf\n", x2);
    } else {
      printf("%.2lf\n", x2);
      printf("%.2lf\n", x1);
    }
    return 0;
  }
  if (delta == 0) {
    double x = -b / (2 * a);
    if (x == -0.0)
      x = 0.0;
    printf("%.2lf\n", x);
    return 0;
  }
  if (delta < 0) {
    double real = -b / (2 * a);
    double imag = sqrt(-delta) / (2 * a);
    if (real == -0.0)
      real = 0.0;
    if (imag == -0.0)
      imag = 0.0;
    printf("%.2lf+%.2lfi\n", real, imag);
    printf("%.2lf-%.2lfi\n", real, imag);
  }
  return 0;
}
