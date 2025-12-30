#include <stdio.h>
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  int arr[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = i + j;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", arr[i][j]);
      if (j == n - 1) {
        printf("\n");
      }
    }
  }
  return 0;
}
