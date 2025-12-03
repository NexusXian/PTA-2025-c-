#include <stdio.h>

int main(int argc, char *argv[]) {
  double distance;
  int m;
  scanf("%lf %d", &distance, &m);

  double total;

  if (distance <= 3) {
    total = 10;
  } else if (distance > 3 && distance <= 10) {
    total = (distance - 3) * 2 + 10;
  } else if (distance > 10) {
    total = (distance - 10) * 3 + 24;
  }

  int w = m / 5;

  total += w * 2;

  int ans = 0;
  double x = total - (int)total;
  if (x >= 0.5) {
    ans = ((int)total) + 1;
  } else {
    ans = ((int)total);
  }
  printf("%d\n", ans);

  return 0;
}
