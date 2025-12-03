#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
  double money;
  double year;
  double rate;

  scanf("%lf %lf %lf", &money, &year, &rate);

  double interest = money * (pow(1 + rate, year)) - money;

  printf("interest = %.2f\n", interest);

  return 0;
}
