#include <stdio.h>
int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[200];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    arr[i + m] = arr[i];
  }
  for (int i = 0; i < m; i++) {
    arr[m - i - 1] = arr[n + m - i - 1];
  }
  for (int i = 0; i < n; i++) {
    if (i != 0)
      printf(" ");
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}
