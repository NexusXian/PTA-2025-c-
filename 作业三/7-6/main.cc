#include <stdio.h>

int main (int argc, char *argv[]) {
  int MIN = 0;

  int n;
  scanf("%d", &n);
  if (n == 1) {
    int x;
    scanf("%d", &x);
    printf("min = %d\n", x);
    return 0;
  }
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x < MIN) {
      MIN = x;
    }
  }

  printf("min = %d\n", MIN);

  return 0;
}
