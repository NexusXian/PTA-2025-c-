#include <stdio.h>
#include <math.h>

int func(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i < (int)sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  if (func(n) == 1) {
    printf("%d is a prime.\n", n);
  } else {
    printf("%d is not a prime.\n", n);
  }
  return 0;
}
