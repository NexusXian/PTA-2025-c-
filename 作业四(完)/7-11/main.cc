#include <stdio.h>

int main(int argc, char *argv[]) {

  int m, n;
  scanf("%d %d", &m, &n);
  int arr[100][100];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < m; i++) {
    int ans = 0;
    for (int j = 0; j < n; j++) {
      ans += arr[i][j];
    }
    printf("%d\n", ans);
  }
  return 0;
}
