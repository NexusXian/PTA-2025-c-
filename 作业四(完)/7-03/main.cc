#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min = arr[0];
  int minIndex = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
       min = arr[i];
      minIndex = i;
    }
  }
  int temp;
  temp = arr[0];
  arr[0] = arr[minIndex];
  arr[minIndex] = temp;

  int MAX = arr[0];
  int maxIndex = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] > MAX) {
      MAX = arr[i];
      maxIndex = i;
    }
  }

  temp = arr[n - 1];
  arr[n - 1] = arr[maxIndex];
  arr[maxIndex] = temp;
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
