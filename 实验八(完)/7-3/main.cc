#include <stdio.h>

int main(int argc, char *argv[]) {
  int h, m, s;
  scanf("%d:%d:%d", &h, &m, &s);
  int total = h * 60 * 60 + m * 60 + s;

  int x;
  scanf("%d", &x);
  total += x;

  int full = 24 * 60 * 60;
  if (total >= full) {
    total %= full;
  }
  int hour = total / 3600;
  int minute = (total - hour * 3600) / 60;
  int second = total - hour * 3600 - minute * 60;
  printf("%02d:%02d:%02d\n", hour, minute, second);

  return 0;
}
