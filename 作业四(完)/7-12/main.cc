#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  int arr[100][100];
  int ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j == n - 1) {
        continue;
      }
      if (i == n - 1 || j == n - 1) {
        continue;
      }
      ans += arr[i][j];
    }
  }
  printf("%d\n", ans);
  return 0;
}
