#include <stdio.h>

int func(int n) {
  int a, b, c;
  a = n / 100;     
  b = n / 10 % 10; 
  c = n % 10;      

  if (a * a * a + b * b * b + c * c * c == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  if (m > n || m < 100 || n > 999) {
    printf("Invalid Value.\n");
    return 0;
  }

  for (int i = m; i <= n; i++) {
    if (func(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}
