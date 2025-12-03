#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int cnt = 0;
  int ans = 0;
  while (n != 0) {
    int x = n % 10;
    cnt++;
    n = n / 10;
    ans += x;
  }
  printf("%d %d\n", cnt, ans);

  return 0;
}
