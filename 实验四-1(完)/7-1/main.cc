#include <math.h>
#include <stdio.h>

int func(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i <= (int)sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int arr[10];

  int cnt = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
    if (func(arr[i]) == 1) {
      cnt++;
    }
  }
  int prime[cnt];

  for (int i = 0, j = 0; i < 10; i++) {
    if (func(arr[i]) == 1) {
      prime[j++] = arr[i];
    }
  }

  for (int i = 0; i < cnt; i++) {
    for (int j = 0; j < cnt - i - 1; j++) {
      int temp;
      if (prime[j] > prime[j + 1]) {
        temp = prime[j];
        prime[j] = prime[j + 1];
        prime[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < cnt; i++) {
    printf("%4d", prime[i]);
  }

  return 0;
}
