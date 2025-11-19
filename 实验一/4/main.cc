#include <stdio.h>

int main(int argc, char *argv[]) {
  int x, y;
  scanf("%d %d", &x, &y);

  int x1 = y;
  int width = x - x1;
  int area = (width * 100) / 2;
  printf("%d\n", area);

  return 0;
}

