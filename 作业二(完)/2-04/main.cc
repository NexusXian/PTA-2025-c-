#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  if (y == 0) {
    printf("%d/%d=Error\n", x, y);
    return 0;
  }

  double ans = (double)x / y;
  if (y > 0) {
    printf("%d/%d=%.2f\n", x, y, ans);
  } else if (y < 0) {
    printf("%d/(%d)=%.2f\n", x, y, ans);
  }
  return 0;
}
