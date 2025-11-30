#include <stdio.h>

int main (int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  for (int k = 6 ; k <= n ; k++) {
    int sum = 1;
    for (int i = 2 ; i * i <= k;i++) {
      if (k % i == 0) {
        int j = k / i;
        if (j == i) {
          sum += j;
        } else {
          sum += j + i;
        }
      }
    }
    if (sum == k) {
      printf("%d\n", k);
    }
  }

  return 0;
}
