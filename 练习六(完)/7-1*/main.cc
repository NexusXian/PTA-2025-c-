#include <stdio.h>


void mov(int *x,int n , int m) {
  int temp;
  for (int i = 0; i < m; i++) {
    
    temp = x[n - 1];
    for (int j = n - 1; j > 0; j--) {
      x[j] = x[j - 1];
    }
    x[0] = temp;
  }
}


int main(int argc, char *argv[]) {

  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  mov(arr, n, m);


  printf("After move:");
  for (int i = 0; i < n; i++) {
    printf("% d",arr[i]);
  }
  return 0;
}
