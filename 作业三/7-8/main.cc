#include <stdio.h>

int main (int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int ans = 1;

  for (int i = 0 ; i < n - 1;i++) {
    ans = (ans + 1) * 2;
  }
  printf("%d\n", ans);
  return 0;
}
