#include <stdio.h>

int main(int argc, char *argv[]) {
  int salary;
  scanf("%d", &salary);
  double tax;
  if (salary <= 1600) {
    tax = 0;
  } else if (salary <= 2500 && salary > 1600) {
    tax = (salary - 1600) * 0.05;
  } else if (salary <= 3500 && salary > 2500) {
    tax = (salary - 1600) * 0.1;
  } else if (salary <= 4500 && salary > 3500) {
    tax = (salary - 1600) * 0.15;
  } else if (salary > 4500) {
    tax = (salary - 1600) * 0.2;
  }
  printf("%.2f\n", tax);

  return 0;
}
