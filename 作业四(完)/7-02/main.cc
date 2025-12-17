#include <stdio.h>

int main (int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int MAX = -99999;
  int index = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > MAX) {
      MAX = arr[i];
      index = i;
    }
    if (arr[i] == MAX) {
      continue;
    }
  }
  
  printf("%d %d\n", MAX, index);
  return 0;
}
