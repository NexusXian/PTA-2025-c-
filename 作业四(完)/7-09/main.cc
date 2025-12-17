#include <stdio.h>

int main(int argc, char *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);
  int a[100][100];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  int MIN = 9999;
  int MAX = -9999;
  int minIndexX = 0;
  int minIndexY = 0;
  int maxIndexX = 0;
  int maxIndexY = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] < MIN) {
        MIN = a[i][j];
        minIndexX = i;
        minIndexY= j;
      }
      if (a[i][j] > MAX) {
        MAX = a[i][j];
        maxIndexX = i;
        maxIndexY = j;
      }
    }
  }
  printf("max=%d row=%d col=%d\n",MAX,maxIndexX,maxIndexY);
  printf("min=%d row=%d col=%d\n",MIN, minIndexX,minIndexY);
  return 0;
}
