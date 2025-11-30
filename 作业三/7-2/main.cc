#include <stdio.h>

int func(int n) {
  if (n == 0) {
    return 1;
  }
  return n * func(n - 1);
}


int main (int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int ans = 0;
  for (int i = 1 ; i <= n ; i++) {
    ans += func(i);
  }

  printf("%d\n", ans);
  return 0;
}
