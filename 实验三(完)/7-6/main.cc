#include <stdio.h>

int func(int n) {
  if (n % 3 == 0 || n % 7 == 0) {
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  int ans = 0;
  while (1) {
    int x;
    scanf("%d", &x);
    if (x == -1) {
      break;
    }
    int res = func(x);
    if (res == 1) {
      ans += x;
    }
  }
  printf("%d\n", ans);

  return 0;
}
