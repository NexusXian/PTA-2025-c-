#include <stdio.h>

int main(int argc, char *argv[]) {
  int m, e, p, major;
  scanf("%d %d %d %d", &m, &e, &p, &major);
  if (major < 85 || m < 85) {
    printf("C\n");
    return 0;
  }
  if (e < 55 || p < 55) {
    printf("C\n");
    return 0;
  }

  int total = m + e + p + major;
  if (total < 305) {
    printf("C\n");
  } else if (total >= 305 && total < 370) {
    printf("B\n");
  } else if (total >= 370) {
    printf("A\n");
  }

  return 0;
}

