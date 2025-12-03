#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int arr[25][25];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int sum = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i][i];
    if (arr[i][i] != 0){
      count++;
    }
    if (i != n - 1 - i) {
      sum += arr[i][n - 1 - i];
      if (arr[i][n - 1 - i] != 0) {
        count++;
      }
    }
  }

  printf("sum = %d, count = %d.\n", sum, count);
  return 0;
}


