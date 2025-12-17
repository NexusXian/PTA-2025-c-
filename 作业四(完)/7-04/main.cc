#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    int max_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[max_index]) {
        max_index = j;
      }
    }
    int temp = arr[max_index];
    arr[max_index] = arr[i];
    arr[i] = temp;
  }

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d", arr[i]);
    } else {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}
