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

int main (int argc, char *argv[]) {
  
  int n;
  scanf("%d", &n);
  int cnt = 0;
  for (int i = n - 1 ; i > 2;i--) {
    if (func(i) == 1) {
      cnt++;
      printf("%6d", i);
    }
    if (cnt == 10) {
      break;
    }
  }
  return 0;
}
