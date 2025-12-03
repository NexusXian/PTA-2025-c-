#include <math.h>
#include <stdio.h>

int func(int n) {
  int ans = 3;

  if (n == 0) {
    return 1;
  }

  for (int i = 1; i < n; i++) {
    ans *= 3;
  }
  return ans;
}

int main(int argc, char *argv[]) {

  int n;
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    printf("pow(3,%d) = %d\n", i, func(i));
  }
  return 0;
}
