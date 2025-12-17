int fib(int n) {
  int r = 0;
  if (n == 1 || n == 2) {
    r = 1;
  } else {
    r = fib(n - 1) + fib(n - 2);
  }
  return r;
}

void PrintFN(int m, int n) {
  int cnt = 0;
  int i = 1;
  while (fib(i) <= n) {
    if (fib(i) >= m) {
      cnt++;
      if (cnt == 1) {
        printf("%d", fib(i));
      } else {
        printf(" %d", fib(i));
      }
    }
    i++;
  }
  if (cnt == 0) {
    printf("No Fibonacci number");
  }
}
