#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int arr1[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }
  int arr2[n];
  for (int i = n - 1; i >= 0; i--) {
    arr2[n - i - 1] = arr1[i];
  }

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d", arr2[i]);
    } else {
      printf("%d ", arr2[i]);
    }
  }
  return 0;
}
