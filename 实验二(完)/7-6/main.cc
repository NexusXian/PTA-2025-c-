#include <stdio.h>
int main() {
  int x, y;
  float price;
  scanf("%d %d", &x, &y);
  switch (x) {
  case 1:
    printf("%.2f", price = 5.50 * y);
    break;
  case 2:
    printf("%.2f", price = 4.30 * y);
    break;
  case 3:
    printf("%.2f", price = 3.00 * y);
    break;
  case 4:
    printf("%.2f", price = 2.50 * y);
    break;
  default:
    printf("Data Error!");
    break;
  }
  return 0;
}
