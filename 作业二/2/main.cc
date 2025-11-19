#include <stdio.h>

int main() {
  int arr[3];
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
  for (int i = 0 ; i < 3 ;i++) {
    for (int j = 0 ; j < 3 - i - 1 ;j++) {
      int temp = arr[j];
      if (arr[j] > arr[j + 1]) {
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("%d->%d->%d\n", arr[0], arr[1], arr[2]);
}


